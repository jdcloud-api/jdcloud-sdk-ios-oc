//
//  JDCloudExecutor.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/3.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDCloudExecutor.h"
#import <objc/runtime.h>
#import "SDKException.h"
#import "ParameterConstant.h"
#import "RequestInfo.h"
#import "JDCloudSigner.h"
#import "HttpUtils.h"
#import "NSDate+Common.h"
#import "CryptoUtils.h"
#import "NSString+Common.h"
#import "GlobalConfig.h"

@interface JDCloudExecutor()

-(NSDictionary*) executeSign:(JDCloudRequest*)request;

-(NSDictionary*) executeDataSign:(JDCloudDataRequest*)request;

-(NSMutableDictionary<NSString*,NSString*>*)processRequestHeader:(NSDictionary<NSString*,NSString*>*)requestHeader;

-(NSString*) getContent:(JDCloudRequest*)request;

-(NSString*) getParams :(JDCloudRequest*)request;


-(NSString*)repaceUrl:(NSString*)httpUrl
              request:(JDCloudRequest*)request;

-(NSString*) checkImportParams:(NSString*)version;

-(NSString*) getRequestValueWithPropertyName:(NSString*)propertyName
                                     request:(JDCloudRequest*)request;

-(NSMutableDictionary*)createParamWithKey:(NSString* )key
                                    value:(id)value;

-(NSMutableDictionary*)getArrayParam:(NSArray*)array
                           superName:(NSString*)superName;


-(NSString*)createParamKeyWithSuperName:(NSString*) superName
                                   name:(NSString*) name;
@end

@implementation JDCloudExecutor

-(id)initWithClient:(id<JDCloudClient> )jdCloudClient
{
    self.jdCloudClient = jdCloudClient;
    return self;
}

-(id)init:(id<JDCloudClient>)jdCloudClient
   method:(NSString*) method
      url:(NSString*) url{
    self.method = method;
    self.jdCloudClient = jdCloudClient;
    self.url = url;
    return self;
}

-(NSDictionary*) executeDataSync:(JDCloudDataRequest *) request;
{
    NSDictionary* signInfo = [self executeDataSign:request];
    if(signInfo&& [signInfo count]>0)
    {
        SignedRequestInfo * signedRequestInfo = [signInfo objectForKey:@"signResult"];
        RequestInfo* requestInfo = [signInfo objectForKey:@"requestInfo"];
        if(signedRequestInfo&& requestInfo)
        {
            NSDictionary* signedRequestHeader =  [signedRequestInfo requestHead];
            NSMutableDictionary* requestHeader = [[NSMutableDictionary alloc] initWithDictionary:signedRequestHeader];
            [requestHeader setValue:[[self jdCloudClient] userAgent] forKey:HEADER_USER_AGENT];
            NSDictionary* requestResult = [HttpUtils httpRequestSyncWithUrl:[requestInfo requestUrl] requestContent:[requestInfo requestBodyContent] requestHeader:requestHeader requestMethod:[self method]];
            if(requestResult)
            {
                return requestResult;
            }
        }
    }
    return  nil;
}

-(NSDictionary*) executeSync:(JDCloudRequest *) request
{
    NSDictionary* signInfo = [self executeSign:request];
    if(signInfo&& [signInfo count]>0)
    {
        SignedRequestInfo * signedRequestInfo = [signInfo objectForKey:@"signResult"];
        RequestInfo* requestInfo = [signInfo objectForKey:@"requestInfo"];
        if(signedRequestInfo&& requestInfo)
        {
            NSDictionary* signedRequestHeader =  [signedRequestInfo requestHead];
            NSMutableDictionary* requestHeader = [[NSMutableDictionary alloc] initWithDictionary:signedRequestHeader];
            [requestHeader setValue:[[self jdCloudClient] userAgent] forKey:HEADER_USER_AGENT];
            NSDictionary* requestResult = [HttpUtils httpRequestSyncWithUrl:[requestInfo requestUrl] requestContent:[requestInfo requestBodyContent] requestHeader:requestHeader requestMethod:[self method]];
            if(requestResult)
            {
                return requestResult;
            }
        }
    }
    return  nil;
}


-(void)executeDataAsync:(JDCloudDataRequest *) request
      completionHandler:(void(^)(int statusCode,NSData* _Nullable responseData,NSError * _Nullable error))completionHandler{
    NSString* jdcloudContentSha256 = [[[self jdCloudClient]customHeader]valueForKey:X_JDCLOUD_CONTENT_SHA256];
    if(!jdcloudContentSha256)
    {
        NSDate* date = [[NSDate alloc]init];
        NSString* dateString = [date dateConvertWithDateFormat:DATETIME_FORMAT];
        NSString* contentSha256 = [dateString sha256];
        [[self jdCloudClient]addCustomerHeaderWithKey:X_JDCLOUD_CONTENT_SHA256 value:contentSha256];
    }
    NSDictionary* signInfo = nil;
    @try {
        signInfo  = [self executeDataSign:request];
    } @catch (NSException *exception) {
        if([GlobalConfig isDebug]){
            NSLog(@"sign request info error,info is %@",exception.reason);
        }
        NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-100 userInfo:@{NSLocalizedDescriptionKey:@"sign request info error"}];
        completionHandler(-100,nil,error);
    }
    if(signInfo&& [signInfo count]>0)
    {
        SignedRequestInfo * signedRequestInfo = [signInfo objectForKey:@"signResult"];
        RequestInfo* requestInfo = [signInfo objectForKey:@"requestInfo"];
        if(signedRequestInfo&& requestInfo)
        {
            NSDictionary* signedRequestHeader =  [signedRequestInfo requestHead];
            NSMutableDictionary* requestHeader = [[NSMutableDictionary alloc] initWithDictionary:signedRequestHeader];
            [requestHeader setValue:[[self jdCloudClient] userAgent] forKey:HEADER_USER_AGENT];
            [HttpUtils httpRequestAsyncWithUrl:[requestInfo requestUrl]  requestContent:[requestInfo requestBodyContent] requestHeader:requestHeader requestMethod:[self method] completionHandler:^(int statusCode, NSData* _Nullable responseData, NSError * _Nullable error) {
                @try {
                    completionHandler(statusCode,responseData,error);
                } @catch (NSException *exception) {
                    if([GlobalConfig isDebug]){
                        NSLog(@"use request result do completion Handler error,info is %@",exception.reason);
                    }
                }
            }];
        }else{
            NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-101 userInfo:@{NSLocalizedDescriptionKey:@"get requestInfo  and signedRequestInfo return nil,please check it "}];
            completionHandler(-101,nil,error);
        }
    }else{
        NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-101 userInfo:@{NSLocalizedDescriptionKey:@"get signInfo error "}];
        completionHandler(-101,nil,error);
    }
    
}

-(void)executeAsync:(JDCloudRequest *) request
  completionHandler:(void(^)(int statusCode,NSData* _Nullable responseData,NSError * _Nullable error))completionHandler{
    NSDictionary* signInfo = nil;
    @try {
        signInfo  = [self executeSign:request];
    } @catch (NSException *exception) {
        if([GlobalConfig isDebug]){
            NSLog(@"sign request info error,info is %@",exception.reason);
        }
        NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-100 userInfo:@{NSLocalizedDescriptionKey:@"sign request info error"}];
        completionHandler(-100,nil,error);
    }
   
    if(signInfo&& [signInfo count]>0)
    {
        SignedRequestInfo * signedRequestInfo = [signInfo objectForKey:@"signResult"];
        RequestInfo* requestInfo = [signInfo objectForKey:@"requestInfo"];
        if(signedRequestInfo&& requestInfo)
        {
            NSDictionary* signedRequestHeader =  [signedRequestInfo requestHead];
            NSMutableDictionary* requestHeader = [[NSMutableDictionary alloc] initWithDictionary:signedRequestHeader];
            [requestHeader setValue:[[self jdCloudClient] userAgent] forKey:HEADER_USER_AGENT];
            [HttpUtils httpRequestAsyncWithUrl:[requestInfo requestUrl]  requestContent:[requestInfo requestBodyContent] requestHeader:requestHeader requestMethod:[self method] completionHandler:^(int statusCode, NSData* _Nullable responseData, NSError * _Nullable error) {
                @try {
                    completionHandler(statusCode,responseData,error);
                } @catch (NSException *exception) {
                    if([GlobalConfig isDebug]){
                        NSLog(@"use request result do completion Handler error,info is %@",exception.reason);
                    }
                }
               
            }];
        }else{
            NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-101 userInfo:@{NSLocalizedDescriptionKey:@"get requestInfo  and signedRequestInfo return nil,please check it "}];
            completionHandler(-101,nil,error);
        }
    }else{
        NSError* error = [NSError errorWithDomain:NSURLErrorDomain code:-101 userInfo:@{NSLocalizedDescriptionKey:@"get signInfo error "}];
         completionHandler(-101,nil,error);
    }
}

-(NSDictionary*) executeDataSign:(JDCloudDataRequest*)request{
    if([[[self method]uppercaseString]isEqualToString:@"GET"] ||
       [[[self method]uppercaseString]isEqualToString:@"DELETE"] ||
       [[[self method]uppercaseString]isEqualToString:@"HEAD"] )
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"Get , DELETE , HEAD request not support data request" userInfo:nil];
        @throw e;
        return nil;
    }
    JDCloudRequest* jdCloudRequest =  [[JDCloudRequest alloc]initWithRegion:[request regionId] version:[request version]];
    NSString* version = [request version];
    version = [self checkImportParams:version];
    NSString* pathUrl = [self repaceUrl:[self url] request:jdCloudRequest];
    NSString* requestSchema = [[self jdCloudClient] httpRequestProtocol];
    NSString* endPoint = [[[self jdCloudClient]sdkEnvironment]endPoint];
    NSString* realEndPoint = [[[self jdCloudClient]sdkEnvironment]realEndPoint];
    NSString* requestHost = [[requestSchema stringByAppendingString:@"://"] stringByAppendingString:endPoint];
    NSString* signHostEndPoint = endPoint;
    if(realEndPoint&& [realEndPoint length]>0)
    {
        signHostEndPoint = realEndPoint;
    }
    NSString* signHost = [[requestSchema stringByAppendingString:@"://"] stringByAppendingString:signHostEndPoint];
    NSString* requestPath = [[@"/" stringByAppendingString:version] stringByAppendingString:pathUrl];
    NSString* paramString = @"";
    NSData* requestBodyContent = [request requestData];
    NSString* requestUrl = [[requestHost stringByAppendingString:requestPath]stringByAppendingString:paramString];
    NSMutableDictionary<NSString*,NSString*>* requestHeader =  [self processRequestHeader:[[self jdCloudClient] customHeader] ];
    RequestInfo* requestInfo = [[RequestInfo alloc]initWithRequestUrl:requestUrl requestBodyContent:requestBodyContent requestParams:paramString requestPath:requestPath requestMethod:[self method] contentType:[[self jdCloudClient] contentType] signedHost:signHost requestHost:requestHost requestHeader:requestHeader];
    JDCloudSigner* jdcloudSigner = [[JDCloudSigner alloc] initWithServiceName:[[self jdCloudClient] serviceName] regionId:[request regionId] dateTime:[NSDate new] credential:[[self jdCloudClient] credential]];
    SignedRequestInfo * signedRequestInfo =[jdcloudSigner doSign:requestInfo];
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    [resultDic setValue:signedRequestInfo forKey:@"signResult"];
    [resultDic setValue:requestInfo forKey:@"requestInfo"];
    return resultDic;
}


-(NSDictionary*) executeSign:(JDCloudRequest*)request{
    NSString* version = [request version];
    version = [self checkImportParams:version];
    NSString* pathUrl = [self repaceUrl:[self url] request:request];
    NSString* requestSchema = [[self jdCloudClient] httpRequestProtocol];
    NSString* endPoint = [[[self jdCloudClient]sdkEnvironment]endPoint];
    NSString* realEndPoint = [[[self jdCloudClient]sdkEnvironment]realEndPoint];
    NSString* requestHost = [[requestSchema stringByAppendingString:@"://"] stringByAppendingString:endPoint];
    NSString* signHostEndPoint = endPoint;
    if(realEndPoint&& [realEndPoint length]>0)
    {
        signHostEndPoint = realEndPoint;
    }
    NSString* signHost = [[requestSchema stringByAppendingString:@"://"] stringByAppendingString:signHostEndPoint];
    NSString* requestPath = [[@"/" stringByAppendingString:version] stringByAppendingString:pathUrl];
    NSString* paramString = [self getParams:request];
    NSString* requestBodyContent = [self getContent:request];
    
    NSData* requestBodyContentData = [requestBodyContent dataUsingEncoding:NSUTF8StringEncoding];
    NSString* requestUrl = [[requestHost stringByAppendingString:requestPath]stringByAppendingString:paramString];
    NSMutableDictionary<NSString*,NSString*>* requestHeader =  [self processRequestHeader:[[self jdCloudClient] customHeader] ]; 
    RequestInfo* requestInfo = [[RequestInfo alloc]initWithRequestUrl:requestUrl requestBodyContent:requestBodyContentData requestParams:paramString requestPath:requestPath requestMethod:[self method] contentType:[[self jdCloudClient] contentType] signedHost:signHost requestHost:requestHost requestHeader:requestHeader];
    JDCloudSigner* jdcloudSigner = [[JDCloudSigner alloc] initWithServiceName:[[self jdCloudClient] serviceName] regionId:[request regionId] dateTime:[NSDate new] credential:[[self jdCloudClient] credential]];
    SignedRequestInfo * signedRequestInfo =[jdcloudSigner doSign:requestInfo];
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    [resultDic setValue:signedRequestInfo forKey:@"signResult"];
    [resultDic setValue:requestInfo forKey:@"requestInfo"];
    return resultDic;
}

-(NSString*)repaceUrl:(NSString*)httpUrl
              request:(JDCloudRequest*)request{
    if(!httpUrl || [httpUrl length] == 0)
    {
        return @"";
    }
    if([httpUrl rangeOfString:@"{"].location == NSNotFound)
    {
        return httpUrl;
    }
    NSError  *error = nil;
    NSString* requestHttpUrl = httpUrl;
    NSString* resultHttpUrl = httpUrl;
    NSRange  searchedRange = NSMakeRange(0, [httpUrl length]);
    NSRegularExpression* regex = [[NSRegularExpression alloc]initWithPattern:PATTERN options:0 error:&error];
    NSArray* matches = [regex matchesInString:httpUrl options:0 range: searchedRange];
    for (NSTextCheckingResult* match in matches) {
        NSString* replaceNSString = [requestHttpUrl substringWithRange:match.range];
        
        NSString* propertyName = [replaceNSString substringWithRange:NSMakeRange(1,  [replaceNSString length] -2)];
        NSString* value = [self getRequestValueWithPropertyName:propertyName request:request];
        if(value)
        {
            resultHttpUrl = [resultHttpUrl stringByReplacingOccurrencesOfString:replaceNSString withString:value];
        }
    }
    resultHttpUrl = [resultHttpUrl stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLPathAllowedCharacterSet]];
    return resultHttpUrl;
}


-(NSString*) checkImportParams:(NSString*)version{
    NSString* v = @"";
    if(!version || [version length] == 0)
    {
        v = self.jdCloudClient.version;
    }else{
        v = version;
    }
    
    if(!v || [v length] == 0)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"Client version not set" userInfo:nil];
        @throw e;
    }
    if(![[[self jdCloudClient] sdkEnvironment]endPoint] || [[[[self jdCloudClient] sdkEnvironment]endPoint] length]==0)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"Client request endPoint not set" userInfo:nil];
        @throw e;
    }
    
    if(![[self jdCloudClient] serviceName]|| [[[self jdCloudClient] serviceName] length] == 0)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"Client serviceName property not set" userInfo:nil];
        @throw e;
    }
    return v;
}

-(NSString*) getRequestValueWithPropertyName:(NSString*)propertyName
                                     request:(JDCloudRequest*)request{
    NSMutableDictionary* objectDic = [request dictionary];
    if(objectDic)
    {
        NSObject* value = [objectDic objectForKey:propertyName];
        NSString*   resultStr = [NSString stringWithFormat:@"%@", value];
        if(resultStr){
            return resultStr;
        }
    }
    return nil;
}
/// 需要进行修改
-(NSString*) getParams :(JDCloudRequest*)request{
    if(!request)
    {
        return @"";
    }
    if([[[self method]uppercaseString]isEqualToString:@"GET"] ||
       [[[self method]uppercaseString]isEqualToString:@"DELETE"] ||
       [[[self method]uppercaseString]isEqualToString:@"HEAD"] )
    {
        NSString* param = @"";
        NSMutableDictionary* requestParamDic = [request dictionary];
        if( requestParamDic&&[requestParamDic count]>0)
        {
            
            
            NSArray *myKeys = [requestParamDic allKeys];
            NSMutableDictionary* requestAllParamDic = [[NSMutableDictionary alloc]init];
            for(id mykey in myKeys)
            {
                id objectValue = [requestParamDic valueForKey:mykey];
                NSMutableDictionary* allParamInfo = [self createParamWithKey:mykey value:objectValue];
                [requestAllParamDic addEntriesFromDictionary:allParamInfo];
            }
            
            if(requestAllParamDic&& [requestAllParamDic count] > 0)
            {
                NSArray *allParamKeys = [requestAllParamDic allKeys];
                NSArray *sortedKeys = [allParamKeys sortedArrayUsingSelector:@selector(caseInsensitiveCompare:)];
                for(id item in sortedKeys)
                {
                    if(![[self url] containsString:item] && ![item isEqualToString:@"version"]&& ![item isEqualToString:@"regionId"])
                    {
                        
                        id value = [requestAllParamDic valueForKey:item];
                        if(value && ![value isKindOfClass:[NSError class]])
                        {
                            NSString* paramValue =  nil;
                            if([value isKindOfClass:[NSString class]]){
                                paramValue = value;
                            }else if([value isKindOfClass:[NSNumber class]] ){
                               paramValue = [NSNumberFormatter localizedStringFromNumber:value numberStyle:NSNumberFormatterNoStyle];
                            }
                            if(paramValue != nil){
                                param = [param stringByAppendingString:@"&"];
                                param = [param stringByAppendingString:item];
                                param = [param stringByAppendingString:@"="];
                                paramValue = [paramValue stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLHostAllowedCharacterSet]];
                                param = [param stringByAppendingString:paramValue];
                            } 
                        }
                        
                    }
                }
                if([param length]>0)
                {
                    param = [param substringWithRange:NSMakeRange(1,  [param length] -1)];
                    param = [@"?" stringByAppendingString:param];
                }
                 return param;
            }
            
        }else{
            return @"";
        }
    }
    return @"";
}

-(NSString*) getContent:(JDCloudRequest*)request{
    if(!request)
    {
        return @"";
    }
    if([[[self method]uppercaseString] isEqualToString:@"DELETE"] ||
       [[[self method]uppercaseString] isEqualToString:@"GET"] ||
       [[[self method]uppercaseString] isEqualToString:@"HEAD"] )
    {
        return @"";
    }
    NSMutableDictionary* requestParamDic = [request dictionary];
    NSError *jsonError = nil;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:requestParamDic options:0 error:&jsonError];
    NSString* contentString = [[NSString alloc]initWithData:jsonData encoding:NSUTF8StringEncoding];
    if(contentString && [contentString length]>0)
    {
        //contentString = [[[contentString stringByReplacingOccurrencesOfString:@"\r" withString:@""]stringByReplacingOccurrencesOfString:@"\n" withString:@""]stringByReplacingOccurrencesOfString:@" " withString:@""];
        return contentString;
    }
    return @"";
}

-(NSMutableDictionary<NSString*,NSString*>*)processRequestHeader:(NSDictionary<NSString*,NSString*>*)requestHeader{
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    if(requestHeader&& [requestHeader count]>0)
    {
        NSArray *myKeys = [requestHeader allKeys];
        for (id item in myKeys){
            NSString* value = [requestHeader valueForKey:item];
            if([X_JDCLOUD_PIN isEqualToString:[item lowercaseString]]||
               [X_JDCLOUD_ERP isEqualToString:[item lowercaseString]]||
               [X_JDCLOUD_SESSION_TOKEN isEqualToString:[item lowercaseString]]||
               [X_JDCLOUD_SECURITY_TOKEN isEqualToString:[item lowercaseString]])
            {
                if(value && ![value isKindOfClass:[NSNull class]])
                {
                    NSString* base64Value = [value encodeStringTo64];
                    [resultDic setValue:base64Value forKey:[item lowercaseString]];
                }
                
            }else{
                [resultDic setValue:value forKey:[item lowercaseString]];
            }
        }
    }
    return resultDic;
}

-(NSMutableDictionary*)createParamWithKey:(NSString* )key
                                    value:(id)value{
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    if([value isKindOfClass:[NSDictionary class]])
    {
        NSArray* itemKeys = [value allKeys];
        for (id itemKey in itemKeys){
            NSString* keyName = [self createParamKeyWithSuperName:key name:itemKey];
            id valueForKey = [value objectForKey:itemKey];
            NSMutableDictionary* objectDic = [self createParamWithKey:keyName value:valueForKey];
            [resultDic addEntriesFromDictionary:objectDic];
        }
    }else if([value isKindOfClass:[NSArray class]])
    {
        NSMutableDictionary* arrayDic = [self getArrayParam:value superName:key];
        [resultDic addEntriesFromDictionary:arrayDic];
    }else
    {
        if(value)
        {
            NSString* itemString = [[NSString alloc]initWithFormat:@"%@",value ];
            [resultDic setValue:[itemString stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding] forKey:key];
        }
    }
    return resultDic;
}

-(NSMutableDictionary*)getArrayParam:(NSArray*)array
                           superName:(NSString*)superName{
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    for(int i=0; i<[array count];i++)
    {   NSString* superNameIndex = [[superName stringByAppendingString:@"."] stringByAppendingString:[[NSString alloc]initWithFormat:@"%d",i+1]];
        id item = [array objectAtIndex:i];
        if([item isKindOfClass:[NSArray class]])
        {
            NSString* key = [[superNameIndex stringByAppendingString:@"."] stringByAppendingString:[[item stringByAppendingString:@"."] stringByAppendingString:[[NSString alloc]initWithFormat:@"%d",i]]];
            NSMutableDictionary* arrayDic = [self createParamWithKey:key value:item];
            [resultDic addEntriesFromDictionary:arrayDic];
            //NSMutableDictionary* arrayDic =
        }else if([item isKindOfClass:[NSDictionary class]])
        {
            // todo 进行循环然后放置 key 调用 createParamWithKey
            NSArray* itemKeys = [item allKeys];
            for (id key in itemKeys){
                NSString* keyName = [self createParamKeyWithSuperName:superNameIndex name:key];
                id valueForKey = [item objectForKey:key];
                NSMutableDictionary* objectDic = [self createParamValueWithKey:keyName value:valueForKey];
                [resultDic addEntriesFromDictionary:objectDic];
            }
        }else
        {
            if(item)
            {
                NSString* arrayItemString = [[NSString alloc]initWithFormat:@"%@",item ];
                if(arrayItemString)
                {
                    NSString* key = [[superNameIndex stringByAppendingString:@"."] stringByAppendingString:[[item stringByAppendingString:@"."] stringByAppendingString:[[NSString alloc]initWithFormat:@"%d",i]]];
                    
                    [resultDic setValue:[arrayItemString stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding] forKey:key];
                }
            }
        }
    }
    return resultDic;
}

-(NSMutableDictionary*) createParamValueWithKey:(NSString*) keyName
                                 value:(id)value
{
    NSMutableDictionary* resultDic = [[NSMutableDictionary alloc]init];
    if([value isKindOfClass:[NSArray class]])
    {
        for (int i=0; i<[value count];i++) {
             NSString* keyNameWithSupper = [self createParamKeyWithSuperName:keyName name:[[NSString alloc]initWithFormat:@"%d",i+1]] ;
             [resultDic setValue:[[value objectAtIndex:i] stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding] forKey:keyNameWithSupper];
        }
      
     
    }else
    {
        if(value)
        {
            NSString* itemString = [[NSString alloc]initWithFormat:@"%@",value ];
            [resultDic setValue:[itemString stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding] forKey:keyName];
        }
    }
    return resultDic;
}

-(NSString*)createParamKeyWithSuperName:(NSString*) superName
                                   name:(NSString*) name
{
    if(!superName || [superName length] == 0)
    {
        return name;
    }
    return [[superName stringByAppendingString:@"."] stringByAppendingString:name];
}
@end


@implementation CommonExecutor

- (id)initWithJDCloudClient:(id<JDCloudClient>)JDCloudClient
                        url:(NSString*) url
                     method:(NSString*) method
{
    self.jdCloudClient = JDCloudClient;
    self.url = url;
    self.method = method;
    return self;
}

@end

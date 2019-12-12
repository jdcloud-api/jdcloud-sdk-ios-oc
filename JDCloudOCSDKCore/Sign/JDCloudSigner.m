//
//  JDCloudSigner.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDCloudSigner.h"git remote prune origin
#import "ParameterConstant.h"
#import "CryptoUtils.h"
#import "NSString+Common.h"
#import "SDKException.h"
#import "NSString+HMAC.h"
#import "GlobalConfig.h"
#import "NSDate+Common.h"

@interface JDCloudSigner()
-(NSMutableDictionary*)processContentType:(NSMutableDictionary*)header
                              requestInfo:(RequestInfo*) requestInfo;

-(NSString*) createStringToSign:(NSString*) canonicalRequest
       formattedSigningDateTime:(NSString*)formattedSigningDateTime
                          scope:(NSString*) scope;

-(NSString*) createCanonicalRequest:(NSString*) contentSHA256
                        requestInfo:(RequestInfo*) requestInfo
                      requestHeader:(NSMutableDictionary*)requestHeader;

-(NSString*) getCanonicalizedResourcePath:(NSString*)path
                          doubleUrlEncode:(BOOL) doubleUrlEncode;

-(NSString*) getCanonicalizedHeaderString:(NSMutableDictionary*)requestHeader;

-(NSString*) getSignedHeaderString:(NSMutableDictionary*)requestHeader;

-(NSString*) calculateContentHash:(NSString*) requestBody;

-(NSString*) processHostHeader:(NSString*) requestHost;

-(NSString*) generateScope:(NSString*) dataString
               serviceName:(NSString*) serviceName
                  regionId:(NSString*) regionId;



- (NSString *)createUUID;

@end


@implementation JDCloudSigner

-(id)initWithServiceName:(NSString*) serviceName
                regionId:(NSString*) regionId
                dateTime:(NSDate*) dateTime
              credential:(Credential*)credential{
    self.serviceName = serviceName;
    self.regionId = regionId;
    self.dateTime = dateTime;
    self.credential = credential;
    return self;
}

-(SignedRequestInfo*) doSign:(RequestInfo*)requestInfo{
    NSString* nonceId = [[self createUUID]lowercaseString];
    NSString* formattedSigningDateTime = [[self dateTime]dateConvertWithDateFormat:DATETIME_FORMAT]; 
    NSString* formattedSigningDate = [[self dateTime]dateConvertWithDateFormat:HEADER_DATE_FORMAT];
    NSString* scope = [self generateScope:formattedSigningDate serviceName:self.serviceName regionId:self.regionId];
    NSMutableDictionary* requestHeader = [requestInfo requestHeader];
    [requestHeader setValue:formattedSigningDateTime forKey:X_JDCLOUD_DATE];
    [requestHeader setValue:nonceId forKey:X_JDCLOUD_NONCE];
    requestHeader = [self processContentType:requestHeader requestInfo:requestInfo];
    //  避免 body 验证
    NSString *jdcloudContentSha256 = [requestHeader valueForKey:X_JDCLOUD_CONTENT_SHA256];
    NSString* contentSHA256 = @"";
    if(!jdcloudContentSha256)
    {
        NSString *contentEncoding = [requestHeader valueForKey:CONTENT_ENCODING];
        if(contentEncoding && [[contentEncoding lowercaseString]isEqualToString:@"gzip"])
        {
            if([requestInfo requestBodyContent] && [[requestInfo requestBodyContent]  length] >0)
            {
                NSString* requestBodyContentString = [[NSString alloc] initWithData:[requestInfo requestBodyContent] encoding:NSUTF8StringEncoding];
                jdcloudContentSha256 = [self calculateContentHash:requestBodyContentString];
                [requestHeader setValue:jdcloudContentSha256 forKey:X_JDCLOUD_CONTENT_SHA256];
            }
        }
    }
    if(jdcloudContentSha256 && [jdcloudContentSha256 length]>0)
    {
        contentSHA256 = jdcloudContentSha256;
    }else
    {
        NSString* requestBodyContentString = [[NSString alloc] initWithData:[requestInfo requestBodyContent] encoding:NSUTF8StringEncoding];
        contentSHA256 = [self calculateContentHash:requestBodyContentString];
    }
    NSString* canonicalRequest = [self createCanonicalRequest:contentSHA256 requestInfo:requestInfo requestHeader:requestHeader];
    NSString* stringToSign = [self createStringToSign:canonicalRequest formattedSigningDateTime:formattedSigningDateTime scope:scope];
    NSString* secretKey = [@"JDCLOUD2" stringByAppendingString:self.credential.secretAccessKey];
    NSString* keyDate = [formattedSigningDate hmacSHA256WithKey:secretKey];
    NSString* keyRegion = [self.regionId hmacSHA256WithHexKey:keyDate];
    NSString* keyService = [self.serviceName hmacSHA256WithHexKey:keyRegion];
    NSString* deriveSigningKey = [JDCLOUD_TERMINATOR hmacSHA256WithHexKey:keyService];
    NSString* signature = [stringToSign hmacSHA256WithHexKey:deriveSigningKey];
    NSString* signingCredentials = [[self credential] accessKeyId];
    signingCredentials = [signingCredentials stringByAppendingString:@"/"];
    signingCredentials = [signingCredentials stringByAppendingString:scope];
    NSString* credential = [@"Credential=" stringByAppendingString:signingCredentials];
    NSString* signerHeaders = [@"SignedHeaders=" stringByAppendingString:[self getSignedHeaderString:requestHeader]];
    NSString* signatureHeader = [@"Signature=" stringByAppendingString:signature];
    NSString* authorizationHeader = JDCLOUD2_SIGNING_AKGORITHM;
    authorizationHeader = [ authorizationHeader stringByAppendingString:@" "];
    authorizationHeader = [ authorizationHeader stringByAppendingString:credential];
    authorizationHeader = [ authorizationHeader stringByAppendingString:@", "];
    authorizationHeader = [ authorizationHeader stringByAppendingString:signerHeaders];
    authorizationHeader = [ authorizationHeader stringByAppendingString:@", "];
    authorizationHeader = [ authorizationHeader stringByAppendingString:signatureHeader];
    [requestHeader setValue:authorizationHeader forKey:AUTHORIZATION];
    [requestHeader setValue:[self processHostHeader:[requestInfo signedHost]] forKey:HOST];
    if([GlobalConfig isDebug])
    {
        NSLog(@"nonceId is %@",nonceId);
        NSLog(@"formattedSigningDateTime is %@",formattedSigningDateTime);
        NSLog(@"formattedSigningDate is %@",formattedSigningDate);
        NSLog(@"scope is %@",scope);
        NSLog(@"contentSHA256 is %@",contentSHA256);
        NSLog(@"canonicalRequest is %@",canonicalRequest);
        NSLog(@"stringToSign is %@",stringToSign);
        NSLog(@"secretKey is %@",secretKey);
        NSLog(@"keyDate is %@",keyDate);
        NSLog(@"keyRegion is %@",keyRegion);
        NSLog(@"keyService is %@",keyService);
        NSLog(@"signingKey is %@",deriveSigningKey);
        NSLog(@"signature is %@",signature);
        NSLog(@"authorizationHeader is \n %@",authorizationHeader);
    }
    SignedRequestInfo* signedRequestInfo = [[SignedRequestInfo alloc]initWithRequestNonceId:nonceId contentSha256:contentSHA256 canonicalRequest:canonicalRequest stringToSign:stringToSign stringSignature:signature signedHeaders:signerHeaders requestHead:requestHeader];
    return signedRequestInfo;
}

- (NSString *)createUUID
{
    // Create universally unique identifier (object)
    CFUUIDRef uuidObject = CFUUIDCreate(kCFAllocatorDefault);
    // Get the string representation of CFUUID object.
    NSString *uuidStr = (NSString *)CFBridgingRelease(CFUUIDCreateString(kCFAllocatorDefault, uuidObject));
    CFRelease(uuidObject);
    return uuidStr;
}


-(NSMutableDictionary*)processContentType:(NSMutableDictionary*)header
                              requestInfo:(RequestInfo*) requestInfo{
    NSString* method = requestInfo.requestMethod;
    if(![[method uppercaseString]  isEqual: @"GET"] &&
       ![[method uppercaseString]  isEqual: @"DELETE"] &&
       ![[method uppercaseString] isEqual: @"HEAD"] ){
        if([requestInfo contentType] == nil || [[requestInfo contentType] length] == 0)
        {
            [header setValue:DEFAULT_CONTENT_TYPE forKey:CONTENT_TYPE];
        }else{
            [header setValue:[requestInfo contentType] forKey:CONTENT_TYPE];
        }
        
    }
    return header;
}

-(NSString*) createStringToSign:(NSString*) canonicalRequest
       formattedSigningDateTime:(NSString*)formattedSigningDateTime
                          scope:(NSString*) scope{
    NSString* request = @"";
    request = [request stringByAppendingString:JDCLOUD2_SIGNING_AKGORITHM];
    request = [request stringByAppendingString:LINE_SEPARATOR];
    request = [request stringByAppendingString:formattedSigningDateTime];
    request = [request stringByAppendingString:LINE_SEPARATOR];
    request = [request stringByAppendingString:scope];
    request = [request stringByAppendingString:LINE_SEPARATOR];
    request = [request stringByAppendingString:[canonicalRequest sha256]];
    return request;
}

-(NSString*) createCanonicalRequest:(NSString*) contentSHA256
                        requestInfo:(RequestInfo*) requestInfo
                      requestHeader:(NSMutableDictionary*)requestHeader{
    NSString* parameters = [requestInfo requestParams];
    if (![[requestInfo requestParams] isEqual: nil]&&[[requestInfo requestParams] length]>0)
    {
        if( [[requestInfo requestParams] hasPrefix:@"?"])
        {
            parameters = [parameters substringFromIndex:1];
        }
    }
    NSURL* requestUrl = [NSURL URLWithString:[requestInfo requestHost]];
    NSString* path = [requestInfo requestPath];
    NSString* relativePath = [requestUrl relativePath];
    if(![[requestInfo requestPath] isEqual:nil] && [[requestInfo requestPath] length]>0){
        if(![path hasPrefix:@"/"])
        {
            path = [@"/" stringByAppendingString:path];
        }
        relativePath = [relativePath stringByAppendingString:path];
    }else{
        relativePath = [relativePath stringByAppendingString:@"/"];
    }
    NSString* canonicalRequest = @"";
   // _doubleUrlEncode = true;
    canonicalRequest = [canonicalRequest stringByAppendingString: [[requestInfo requestMethod] uppercaseString]];
    canonicalRequest = [canonicalRequest stringByAppendingString: LINE_SEPARATOR];
    canonicalRequest = [canonicalRequest stringByAppendingString: [self getCanonicalizedResourcePath:relativePath doubleUrlEncode:_doubleUrlEncode]] ;
    canonicalRequest = [canonicalRequest stringByAppendingString: LINE_SEPARATOR];
    canonicalRequest = [canonicalRequest stringByAppendingString:parameters];
    canonicalRequest = [canonicalRequest stringByAppendingString: LINE_SEPARATOR];
    canonicalRequest = [canonicalRequest stringByAppendingString: [self getCanonicalizedHeaderString:requestHeader]];
    canonicalRequest = [canonicalRequest stringByAppendingString: LINE_SEPARATOR];
    canonicalRequest = [canonicalRequest stringByAppendingString: [self getSignedHeaderString:requestHeader]];
    canonicalRequest = [canonicalRequest stringByAppendingString: LINE_SEPARATOR];
    canonicalRequest = [canonicalRequest stringByAppendingString: contentSHA256];
    return canonicalRequest;
}

-(NSString*) getCanonicalizedResourcePath:(NSString*)path
                          doubleUrlEncode:(BOOL) doubleUrlEncode{
    if(!path && [path length] == 0)
    {
        return @"/";
    }else{
      
        if([path containsString:@":"]){
            path = [path stringByReplacingOccurrencesOfString:@":" withString:@"%3A"];
        }
        NSString* value = path;
        if(doubleUrlEncode)
        {
            NSString* encodePath = [path stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLPathAllowedCharacterSet]];
            if(encodePath == nil || [encodePath length] == 0)
            {
                value = path;
            }else{
                value = encodePath;
            }
        }else{
            value = path;
        }
        if([value hasPrefix:@"/"])
        {
            return value;
        }else{
            value = [@"/" stringByAppendingString:value];
            return value;
        }
    }
    
    
}

-(NSString*) getCanonicalizedHeaderString:(NSMutableDictionary*)requestHeader{
    NSString* result = @"";
    if(![requestHeader isEqual: nil]&& [requestHeader count] > 0)
    {
        NSArray *myKeys = [requestHeader allKeys];
        NSArray *sortedKeys = [myKeys sortedArrayUsingSelector:@selector(caseInsensitiveCompare:)];
        for (id item in sortedKeys) {
            if([item isEqualToString:@"connection"] ||
               [item isEqualToString:@"x-jdcloud-trace-id"] ||
               [item isEqualToString:@"x-jdcloud-request-id"] ||
               [item isEqualToString:@"x-jcloud-request-id"])
            {
                continue;
            }
            result = [result stringByAppendingString: [[item lowercaseString] appendCompactedString]];
            result = [result stringByAppendingString:@":"];
            if(requestHeader[item] != nil )
            {
                result = [result stringByAppendingString:[requestHeader[item] appendCompactedString]];
            }
            result = [result stringByAppendingString: LINE_SEPARATOR];
        }
    }
    return result;
}

-(NSString*) getSignedHeaderString:(NSMutableDictionary*)requestHeader{
    NSString* result = @"";
    
    if([requestHeader count] >0)
    {
        NSArray *myKeys = [requestHeader allKeys];
        NSArray *sortedKeys = [myKeys sortedArrayUsingSelector:@selector(caseInsensitiveCompare:)];
        for(id item in sortedKeys)
        {
            if([item isEqualToString:@"connection"] ||
               [item isEqualToString:@"x-jdcloud-trace-id"] ||
               [item isEqualToString:@"x-jdcloud-request-id"] ||
               [item isEqualToString:@"x-jcloud-request-id"])
            {
                continue;
            }
            if([result length]>0)
            {
                result = [result stringByAppendingString:@";"];
            }
            result = [result stringByAppendingString:[item lowercaseString]];
        }
    }
    return result;
}

-(NSString*) calculateContentHash:(NSString*) requestBody{
    if(requestBody == nil)
    {
        requestBody = @"";
    }
    NSString* result = [requestBody sha256];
    return result;
}


-(NSString*) processHostHeader:(NSString*) requestHost{
    NSString* result = @"";
    if(requestHost == nil || [requestHost length] == 0 )
    {
        return result;
    }
    NSURL* requestUrl = [NSURL URLWithString:requestHost];
    NSString* host = [requestUrl host];
    NSNumber* port = [requestUrl port];
    NSString* scheme = [requestUrl scheme];
    if(host == nil)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"request host not config" userInfo:nil];
        @throw e;
    }
    if(scheme == nil || [scheme length ] == 0)
    {
        scheme = @"http";
    }
    if(port != nil&& port >0)
    {
        if([scheme isEqualToString:@"http"]&& [port intValue] != 80)
        {
            host = [host stringByAppendingString:@":"];
            host = [host stringByAppendingString:[[NSString alloc]initWithFormat:@"%@",port]];
        }else if([scheme isEqualToString:@"https"]&& [port intValue] != 443)
        {
            host = [host stringByAppendingString:@":"];
            host = [host stringByAppendingString:[[NSString alloc]initWithFormat:@"%@",port]];
        }
    }
    
    return host;
}

-(NSString*) generateScope:(NSString*) dataString
               serviceName:(NSString*) serviceName
                  regionId:(NSString*) regionId{
    NSString* result = @"";
    if(serviceName == nil || [serviceName length] == 0 )
    {
        
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"can not get serviceName from yaml" userInfo:nil];
        @throw e;
    }
    if(regionId == nil || [regionId length] == 0)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"can not get regionId from yaml" userInfo:nil];
        @throw e;
    }
    
    result = [result stringByAppendingString:dataString];
    result = [result stringByAppendingString:@"/"];
    result = [result stringByAppendingString:regionId];
    result = [result stringByAppendingString:@"/"];
    result = [result stringByAppendingString:serviceName];
    result = [result stringByAppendingString:@"/"];
    result = [result stringByAppendingString:JDCLOUD_TERMINATOR];
    return result;
}


@end

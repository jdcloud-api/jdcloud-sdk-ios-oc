 /* Copyright 2018 JDCLOUD.COM

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http:#www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

产业数据服务API
产业数据服务API

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKIndustrydata/IndustrydataExecutor.h>

@implementation IndustrydataClient

@synthesize userAgent = _userAgent;
@synthesize serviceName = _serviceName;
@synthesize version = _version;

-(void) addCustomerHeaderWithKey:(NSString*) key
                           value:(NSString*) value{
    if(![self customHeader])
    {
        self.customHeader = [[NSMutableDictionary alloc] init];
    }
    if(key && value)
    {
        [[self customHeader] setValue:value forKey:key];
    }
   
}

-(id)initWithGlobalConfig{
    if(![GlobalConfig credential])
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@"GlobalConfig credential not config" userInfo:nil];
        @throw e;
    }
    self.credential = [GlobalConfig credential];
    if(![GlobalConfig sdkEnvironment])
    {
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"industrydata.cn-south-1.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 industrydata  v1";
    _serviceName = @"industrydata";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)initWithCredential:(Credential*)credential
         sdkEnvironment:(SDKEnvironment*)sdkEnvironment
{
    if(!credential)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@" credential can not null" userInfo:nil];
        @throw e;
    }else{
        self.credential = credential;
    }
    
    if(!sdkEnvironment)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@" sdkEnvironment can not null" userInfo:nil];
        @throw e;
    }else{
        self.sdkEnvironment = sdkEnvironment;
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 industrydata  v1";
    _serviceName = @"industrydata";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)initWithCredential:(Credential*)credential
{
    if(!credential)
    {
        NSException *e = [SDKArgumentNullException exceptionWithName:@"ArgumentNullException" reason:@" credential can not null" userInfo:nil];
        @throw e;
    }else{
        self.credential = credential;
    }
    if(![GlobalConfig sdkEnvironment])
    {
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"industrydata.cn-south-1.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 industrydata  v1";
    _serviceName = @"industrydata";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 industrydata  v1";
    _serviceName = @"industrydata";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
getLargeScreenData sync request
@param getLargeScreenDataRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getLargeScreenDataResponse` the request response data model
*/
-(NSDictionary*) getLargeScreenDataSyncWithRequest:(IndustrydataGetLargeScreenDataRequest*) getLargeScreenDataRequest
{
IndustrydataGetLargeScreenDataExecutor* excutor = [[IndustrydataGetLargeScreenDataExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getLargeScreenDataRequest];
    if(responseResult)
    {
        NSData * resultData = [[responseResult objectForKey:@"dataResult"] copy];
        if(resultData)
        {
            NSMutableDictionary* result = [[NSMutableDictionary alloc]initWithDictionary:responseResult];
            
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    IndustrydataGetLargeScreenDataResponse* response = [[IndustrydataGetLargeScreenDataResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getLargeScreenDataResponse"];
                        return result;
                    }
                } @catch (NSException *exception) {
                    if([GlobalConfig isDebug]){
                        NSLog(@"json serialize response data error,info is %@",exception.reason);
                    }
                }
            }
        }
    }
    return responseResult;
}


-(void)getLargeScreenDataAsyncWithRequest:(IndustrydataGetLargeScreenDataRequest*) getLargeScreenDataRequest
                       completionHandler:(void(^)(int statusCode,IndustrydataGetLargeScreenDataResponse* _Nullable getLargeScreenDataResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
IndustrydataGetLargeScreenDataExecutor* excutor = [[IndustrydataGetLargeScreenDataExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getLargeScreenDataRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    IndustrydataGetLargeScreenDataResponse* response = [[IndustrydataGetLargeScreenDataResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        completionHandler(statusCode,response,responseData,error);
                        return;
                    }
                } @catch (NSException *exception) {
                    if([GlobalConfig isDebug]){
                        NSLog(@"json serialize response data error,info is %@",exception.reason);
                    }
                }
            }
        }
        completionHandler(statusCode,nil,responseData,error);
    }];
}


 /**
 industrydata common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) industrydataCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)industrydataCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                         url:(NSString*) url
                                      method:(NSString*) method
                           completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
     CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    
    [excutor executeDataAsync:jdcloudDataRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        completionHandler(statusCode,responseData,error);
    }];
} 

@end

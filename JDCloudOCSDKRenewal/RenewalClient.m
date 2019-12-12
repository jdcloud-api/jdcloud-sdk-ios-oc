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

续费管理
续费管理相关接口

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKRenewal/RenewalExecutor.h>

@implementation RenewalClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"renewal.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 renewal  v2";
    _serviceName = @"renewal";
    _version = @"v2";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 renewal  v2";
    _serviceName = @"renewal";
    _version = @"v2";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"renewal.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 renewal  v2";
    _serviceName = @"renewal";
    _version = @"v2";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 renewal  v2";
    _serviceName = @"renewal";
    _version = @"v2";
    self.contentType = @"application/json";
    return self;
}


/**
setRenewal sync request
@param setRenewalRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setRenewalResponse` the request response data model
*/
-(NSDictionary*) setRenewalSyncWithRequest:(RenewalSetRenewalRequest*) setRenewalRequest
{
RenewalSetRenewalExecutor* excutor = [[RenewalSetRenewalExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:setRenewalRequest];
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
                    RenewalSetRenewalResponse* response = [[RenewalSetRenewalResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"setRenewalResponse"];
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


-(void)setRenewalAsyncWithRequest:(RenewalSetRenewalRequest*) setRenewalRequest
                       completionHandler:(void(^)(int statusCode,RenewalSetRenewalResponse* _Nullable setRenewalResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
RenewalSetRenewalExecutor* excutor = [[RenewalSetRenewalExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:setRenewalRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    RenewalSetRenewalResponse* response = [[RenewalSetRenewalResponse alloc]initWithDic:allKeys];
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
renewInstance sync request
@param renewInstanceRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `renewInstanceResponse` the request response data model
*/
-(NSDictionary*) renewInstanceSyncWithRequest:(RenewalRenewInstanceRequest*) renewInstanceRequest
{
RenewalRenewInstanceExecutor* excutor = [[RenewalRenewInstanceExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:renewInstanceRequest];
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
                    RenewalRenewInstanceResponse* response = [[RenewalRenewInstanceResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"renewInstanceResponse"];
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


-(void)renewInstanceAsyncWithRequest:(RenewalRenewInstanceRequest*) renewInstanceRequest
                       completionHandler:(void(^)(int statusCode,RenewalRenewInstanceResponse* _Nullable renewInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
RenewalRenewInstanceExecutor* excutor = [[RenewalRenewInstanceExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:renewInstanceRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    RenewalRenewInstanceResponse* response = [[RenewalRenewInstanceResponse alloc]initWithDic:allKeys];
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
queryInstance sync request
@param queryInstanceRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `queryInstanceResponse` the request response data model
*/
-(NSDictionary*) queryInstanceSyncWithRequest:(RenewalQueryInstanceRequest*) queryInstanceRequest
{
RenewalQueryInstanceExecutor* excutor = [[RenewalQueryInstanceExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:queryInstanceRequest];
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
                    RenewalQueryInstanceResponse* response = [[RenewalQueryInstanceResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"queryInstanceResponse"];
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


-(void)queryInstanceAsyncWithRequest:(RenewalQueryInstanceRequest*) queryInstanceRequest
                       completionHandler:(void(^)(int statusCode,RenewalQueryInstanceResponse* _Nullable queryInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
RenewalQueryInstanceExecutor* excutor = [[RenewalQueryInstanceExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:queryInstanceRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    RenewalQueryInstanceResponse* response = [[RenewalQueryInstanceResponse alloc]initWithDic:allKeys];
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
 renewal common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) renewalCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)renewalCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

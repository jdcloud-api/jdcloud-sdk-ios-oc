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

媒体处理 API
媒体处理相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKMps/MpsExecutor.h>

@implementation MpsClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"mps.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 mps  v1";
    _serviceName = @"mps";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 mps  v1";
    _serviceName = @"mps";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"mps.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 mps  v1";
    _serviceName = @"mps";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 mps  v1";
    _serviceName = @"mps";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
createThumbnailTask sync request
@param createThumbnailTaskRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createThumbnailTaskResponse` the request response data model
*/
-(NSDictionary*) createThumbnailTaskSyncWithRequest:(MpsCreateThumbnailTaskRequest*) createThumbnailTaskRequest
{
MpsCreateThumbnailTaskExecutor* excutor = [[MpsCreateThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:createThumbnailTaskRequest];
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
                    MpsCreateThumbnailTaskResponse* response = [[MpsCreateThumbnailTaskResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"createThumbnailTaskResponse"];
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


-(void)createThumbnailTaskAsyncWithRequest:(MpsCreateThumbnailTaskRequest*) createThumbnailTaskRequest
                       completionHandler:(void(^)(int statusCode,MpsCreateThumbnailTaskResponse* _Nullable createThumbnailTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsCreateThumbnailTaskExecutor* excutor = [[MpsCreateThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:createThumbnailTaskRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsCreateThumbnailTaskResponse* response = [[MpsCreateThumbnailTaskResponse alloc]initWithDic:allKeys];
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
listThumbnailTask sync request
@param listThumbnailTaskRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listThumbnailTaskResponse` the request response data model
*/
-(NSDictionary*) listThumbnailTaskSyncWithRequest:(MpsListThumbnailTaskRequest*) listThumbnailTaskRequest
{
MpsListThumbnailTaskExecutor* excutor = [[MpsListThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:listThumbnailTaskRequest];
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
                    MpsListThumbnailTaskResponse* response = [[MpsListThumbnailTaskResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"listThumbnailTaskResponse"];
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


-(void)listThumbnailTaskAsyncWithRequest:(MpsListThumbnailTaskRequest*) listThumbnailTaskRequest
                       completionHandler:(void(^)(int statusCode,MpsListThumbnailTaskResponse* _Nullable listThumbnailTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsListThumbnailTaskExecutor* excutor = [[MpsListThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:listThumbnailTaskRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsListThumbnailTaskResponse* response = [[MpsListThumbnailTaskResponse alloc]initWithDic:allKeys];
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
deleteStyleDelimiter sync request
@param deleteStyleDelimiterRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteStyleDelimiterResponse` the request response data model
*/
-(NSDictionary*) deleteStyleDelimiterSyncWithRequest:(MpsDeleteStyleDelimiterRequest*) deleteStyleDelimiterRequest
{
MpsDeleteStyleDelimiterExecutor* excutor = [[MpsDeleteStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteStyleDelimiterRequest];
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
                    MpsDeleteStyleDelimiterResponse* response = [[MpsDeleteStyleDelimiterResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteStyleDelimiterResponse"];
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


-(void)deleteStyleDelimiterAsyncWithRequest:(MpsDeleteStyleDelimiterRequest*) deleteStyleDelimiterRequest
                       completionHandler:(void(^)(int statusCode,MpsDeleteStyleDelimiterResponse* _Nullable deleteStyleDelimiterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsDeleteStyleDelimiterExecutor* excutor = [[MpsDeleteStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteStyleDelimiterRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsDeleteStyleDelimiterResponse* response = [[MpsDeleteStyleDelimiterResponse alloc]initWithDic:allKeys];
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
getNotification sync request
@param getNotificationRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getNotificationResponse` the request response data model
*/
-(NSDictionary*) getNotificationSyncWithRequest:(MpsGetNotificationRequest*) getNotificationRequest
{
MpsGetNotificationExecutor* excutor = [[MpsGetNotificationExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getNotificationRequest];
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
                    MpsGetNotificationResponse* response = [[MpsGetNotificationResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getNotificationResponse"];
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


-(void)getNotificationAsyncWithRequest:(MpsGetNotificationRequest*) getNotificationRequest
                       completionHandler:(void(^)(int statusCode,MpsGetNotificationResponse* _Nullable getNotificationResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsGetNotificationExecutor* excutor = [[MpsGetNotificationExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getNotificationRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsGetNotificationResponse* response = [[MpsGetNotificationResponse alloc]initWithDic:allKeys];
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
getThumbnailTask sync request
@param getThumbnailTaskRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getThumbnailTaskResponse` the request response data model
*/
-(NSDictionary*) getThumbnailTaskSyncWithRequest:(MpsGetThumbnailTaskRequest*) getThumbnailTaskRequest
{
MpsGetThumbnailTaskExecutor* excutor = [[MpsGetThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getThumbnailTaskRequest];
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
                    MpsGetThumbnailTaskResponse* response = [[MpsGetThumbnailTaskResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getThumbnailTaskResponse"];
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


-(void)getThumbnailTaskAsyncWithRequest:(MpsGetThumbnailTaskRequest*) getThumbnailTaskRequest
                       completionHandler:(void(^)(int statusCode,MpsGetThumbnailTaskResponse* _Nullable getThumbnailTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsGetThumbnailTaskExecutor* excutor = [[MpsGetThumbnailTaskExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getThumbnailTaskRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsGetThumbnailTaskResponse* response = [[MpsGetThumbnailTaskResponse alloc]initWithDic:allKeys];
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
setNotification sync request
@param setNotificationRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setNotificationResponse` the request response data model
*/
-(NSDictionary*) setNotificationSyncWithRequest:(MpsSetNotificationRequest*) setNotificationRequest
{
MpsSetNotificationExecutor* excutor = [[MpsSetNotificationExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:setNotificationRequest];
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
                    MpsSetNotificationResponse* response = [[MpsSetNotificationResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"setNotificationResponse"];
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


-(void)setNotificationAsyncWithRequest:(MpsSetNotificationRequest*) setNotificationRequest
                       completionHandler:(void(^)(int statusCode,MpsSetNotificationResponse* _Nullable setNotificationResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsSetNotificationExecutor* excutor = [[MpsSetNotificationExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:setNotificationRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsSetNotificationResponse* response = [[MpsSetNotificationResponse alloc]initWithDic:allKeys];
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
setStyleDelimiter sync request
@param setStyleDelimiterRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setStyleDelimiterResponse` the request response data model
*/
-(NSDictionary*) setStyleDelimiterSyncWithRequest:(MpsSetStyleDelimiterRequest*) setStyleDelimiterRequest
{
MpsSetStyleDelimiterExecutor* excutor = [[MpsSetStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:setStyleDelimiterRequest];
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
                    MpsSetStyleDelimiterResponse* response = [[MpsSetStyleDelimiterResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"setStyleDelimiterResponse"];
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


-(void)setStyleDelimiterAsyncWithRequest:(MpsSetStyleDelimiterRequest*) setStyleDelimiterRequest
                       completionHandler:(void(^)(int statusCode,MpsSetStyleDelimiterResponse* _Nullable setStyleDelimiterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsSetStyleDelimiterExecutor* excutor = [[MpsSetStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:setStyleDelimiterRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsSetStyleDelimiterResponse* response = [[MpsSetStyleDelimiterResponse alloc]initWithDic:allKeys];
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
getStyleDelimiter sync request
@param getStyleDelimiterRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getStyleDelimiterResponse` the request response data model
*/
-(NSDictionary*) getStyleDelimiterSyncWithRequest:(MpsGetStyleDelimiterRequest*) getStyleDelimiterRequest
{
MpsGetStyleDelimiterExecutor* excutor = [[MpsGetStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getStyleDelimiterRequest];
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
                    MpsGetStyleDelimiterResponse* response = [[MpsGetStyleDelimiterResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getStyleDelimiterResponse"];
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


-(void)getStyleDelimiterAsyncWithRequest:(MpsGetStyleDelimiterRequest*) getStyleDelimiterRequest
                       completionHandler:(void(^)(int statusCode,MpsGetStyleDelimiterResponse* _Nullable getStyleDelimiterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
MpsGetStyleDelimiterExecutor* excutor = [[MpsGetStyleDelimiterExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getStyleDelimiterRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    MpsGetStyleDelimiterResponse* response = [[MpsGetStyleDelimiterResponse alloc]initWithDic:allKeys];
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
 mps common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) mpsCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)mpsCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

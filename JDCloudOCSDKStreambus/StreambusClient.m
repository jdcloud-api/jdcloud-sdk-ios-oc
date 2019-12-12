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

JDCLOUD 流数据总线 API
提供流数据总线topic操作的相关接口。

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKStreambus/StreambusExecutor.h>

@implementation StreambusClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"streambus.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 streambus  v1";
    _serviceName = @"streambus";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 streambus  v1";
    _serviceName = @"streambus";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"streambus.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 streambus  v1";
    _serviceName = @"streambus";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 streambus  v1";
    _serviceName = @"streambus";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
updateTopic sync request
@param updateTopicRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateTopicResponse` the request response data model
*/
-(NSDictionary*) updateTopicSyncWithRequest:(StreambusUpdateTopicRequest*) updateTopicRequest
{
StreambusUpdateTopicExecutor* excutor = [[StreambusUpdateTopicExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:updateTopicRequest];
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
                    StreambusUpdateTopicResponse* response = [[StreambusUpdateTopicResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"updateTopicResponse"];
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


-(void)updateTopicAsyncWithRequest:(StreambusUpdateTopicRequest*) updateTopicRequest
                       completionHandler:(void(^)(int statusCode,StreambusUpdateTopicResponse* _Nullable updateTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusUpdateTopicExecutor* excutor = [[StreambusUpdateTopicExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:updateTopicRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusUpdateTopicResponse* response = [[StreambusUpdateTopicResponse alloc]initWithDic:allKeys];
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
getConsumerGroupList sync request
@param getConsumerGroupListRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getConsumerGroupListResponse` the request response data model
*/
-(NSDictionary*) getConsumerGroupListSyncWithRequest:(StreambusGetConsumerGroupListRequest*) getConsumerGroupListRequest
{
StreambusGetConsumerGroupListExecutor* excutor = [[StreambusGetConsumerGroupListExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getConsumerGroupListRequest];
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
                    StreambusGetConsumerGroupListResponse* response = [[StreambusGetConsumerGroupListResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getConsumerGroupListResponse"];
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


-(void)getConsumerGroupListAsyncWithRequest:(StreambusGetConsumerGroupListRequest*) getConsumerGroupListRequest
                       completionHandler:(void(^)(int statusCode,StreambusGetConsumerGroupListResponse* _Nullable getConsumerGroupListResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusGetConsumerGroupListExecutor* excutor = [[StreambusGetConsumerGroupListExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getConsumerGroupListRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusGetConsumerGroupListResponse* response = [[StreambusGetConsumerGroupListResponse alloc]initWithDic:allKeys];
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
getTopicList sync request
@param getTopicListRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getTopicListResponse` the request response data model
*/
-(NSDictionary*) getTopicListSyncWithRequest:(StreambusGetTopicListRequest*) getTopicListRequest
{
StreambusGetTopicListExecutor* excutor = [[StreambusGetTopicListExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:getTopicListRequest];
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
                    StreambusGetTopicListResponse* response = [[StreambusGetTopicListResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"getTopicListResponse"];
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


-(void)getTopicListAsyncWithRequest:(StreambusGetTopicListRequest*) getTopicListRequest
                       completionHandler:(void(^)(int statusCode,StreambusGetTopicListResponse* _Nullable getTopicListResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusGetTopicListExecutor* excutor = [[StreambusGetTopicListExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:getTopicListRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusGetTopicListResponse* response = [[StreambusGetTopicListResponse alloc]initWithDic:allKeys];
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
deleteConsumerGroup sync request
@param deleteConsumerGroupRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteConsumerGroupResponse` the request response data model
*/
-(NSDictionary*) deleteConsumerGroupSyncWithRequest:(StreambusDeleteConsumerGroupRequest*) deleteConsumerGroupRequest
{
StreambusDeleteConsumerGroupExecutor* excutor = [[StreambusDeleteConsumerGroupExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteConsumerGroupRequest];
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
                    StreambusDeleteConsumerGroupResponse* response = [[StreambusDeleteConsumerGroupResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteConsumerGroupResponse"];
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


-(void)deleteConsumerGroupAsyncWithRequest:(StreambusDeleteConsumerGroupRequest*) deleteConsumerGroupRequest
                       completionHandler:(void(^)(int statusCode,StreambusDeleteConsumerGroupResponse* _Nullable deleteConsumerGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusDeleteConsumerGroupExecutor* excutor = [[StreambusDeleteConsumerGroupExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteConsumerGroupRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusDeleteConsumerGroupResponse* response = [[StreambusDeleteConsumerGroupResponse alloc]initWithDic:allKeys];
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
addTopic sync request
@param addTopicRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addTopicResponse` the request response data model
*/
-(NSDictionary*) addTopicSyncWithRequest:(StreambusAddTopicRequest*) addTopicRequest
{
StreambusAddTopicExecutor* excutor = [[StreambusAddTopicExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:addTopicRequest];
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
                    StreambusAddTopicResponse* response = [[StreambusAddTopicResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"addTopicResponse"];
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


-(void)addTopicAsyncWithRequest:(StreambusAddTopicRequest*) addTopicRequest
                       completionHandler:(void(^)(int statusCode,StreambusAddTopicResponse* _Nullable addTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusAddTopicExecutor* excutor = [[StreambusAddTopicExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:addTopicRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusAddTopicResponse* response = [[StreambusAddTopicResponse alloc]initWithDic:allKeys];
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
createConsumerGroup sync request
@param createConsumerGroupRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createConsumerGroupResponse` the request response data model
*/
-(NSDictionary*) createConsumerGroupSyncWithRequest:(StreambusCreateConsumerGroupRequest*) createConsumerGroupRequest
{
StreambusCreateConsumerGroupExecutor* excutor = [[StreambusCreateConsumerGroupExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:createConsumerGroupRequest];
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
                    StreambusCreateConsumerGroupResponse* response = [[StreambusCreateConsumerGroupResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"createConsumerGroupResponse"];
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


-(void)createConsumerGroupAsyncWithRequest:(StreambusCreateConsumerGroupRequest*) createConsumerGroupRequest
                       completionHandler:(void(^)(int statusCode,StreambusCreateConsumerGroupResponse* _Nullable createConsumerGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusCreateConsumerGroupExecutor* excutor = [[StreambusCreateConsumerGroupExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:createConsumerGroupRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusCreateConsumerGroupResponse* response = [[StreambusCreateConsumerGroupResponse alloc]initWithDic:allKeys];
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
describeTopic sync request
@param describeTopicRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeTopicResponse` the request response data model
*/
-(NSDictionary*) describeTopicSyncWithRequest:(StreambusDescribeTopicRequest*) describeTopicRequest
{
StreambusDescribeTopicExecutor* excutor = [[StreambusDescribeTopicExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeTopicRequest];
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
                    StreambusDescribeTopicResponse* response = [[StreambusDescribeTopicResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeTopicResponse"];
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


-(void)describeTopicAsyncWithRequest:(StreambusDescribeTopicRequest*) describeTopicRequest
                       completionHandler:(void(^)(int statusCode,StreambusDescribeTopicResponse* _Nullable describeTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusDescribeTopicExecutor* excutor = [[StreambusDescribeTopicExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeTopicRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusDescribeTopicResponse* response = [[StreambusDescribeTopicResponse alloc]initWithDic:allKeys];
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
deleteTopic sync request
@param deleteTopicRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteTopicResponse` the request response data model
*/
-(NSDictionary*) deleteTopicSyncWithRequest:(StreambusDeleteTopicRequest*) deleteTopicRequest
{
StreambusDeleteTopicExecutor* excutor = [[StreambusDeleteTopicExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteTopicRequest];
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
                    StreambusDeleteTopicResponse* response = [[StreambusDeleteTopicResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteTopicResponse"];
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


-(void)deleteTopicAsyncWithRequest:(StreambusDeleteTopicRequest*) deleteTopicRequest
                       completionHandler:(void(^)(int statusCode,StreambusDeleteTopicResponse* _Nullable deleteTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
StreambusDeleteTopicExecutor* excutor = [[StreambusDeleteTopicExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteTopicRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    StreambusDeleteTopicResponse* response = [[StreambusDeleteTopicResponse alloc]initWithDic:allKeys];
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
 streambus common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) streambusCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)streambusCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

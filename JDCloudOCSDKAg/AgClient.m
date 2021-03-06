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

高可用组
高可用组相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKAg/AgExecutor.h>

@implementation AgClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"ag.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 ag  v1";
    _serviceName = @"ag";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 ag  v1";
    _serviceName = @"ag";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"ag.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 ag  v1";
    _serviceName = @"ag";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 ag  v1";
    _serviceName = @"ag";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
updateAg sync request
@param updateAgRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateAgResponse` the request response data model
*/
-(NSDictionary*) updateAgSyncWithRequest:(AgUpdateAgRequest*) updateAgRequest
{
AgUpdateAgExecutor* excutor = [[AgUpdateAgExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:updateAgRequest];
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
                    AgUpdateAgResponse* response = [[AgUpdateAgResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"updateAgResponse"];
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


-(void)updateAgAsyncWithRequest:(AgUpdateAgRequest*) updateAgRequest
                       completionHandler:(void(^)(int statusCode,AgUpdateAgResponse* _Nullable updateAgResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgUpdateAgExecutor* excutor = [[AgUpdateAgExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:updateAgRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgUpdateAgResponse* response = [[AgUpdateAgResponse alloc]initWithDic:allKeys];
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
deleteAg sync request
@param deleteAgRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteAgResponse` the request response data model
*/
-(NSDictionary*) deleteAgSyncWithRequest:(AgDeleteAgRequest*) deleteAgRequest
{
AgDeleteAgExecutor* excutor = [[AgDeleteAgExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteAgRequest];
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
                    AgDeleteAgResponse* response = [[AgDeleteAgResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteAgResponse"];
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


-(void)deleteAgAsyncWithRequest:(AgDeleteAgRequest*) deleteAgRequest
                       completionHandler:(void(^)(int statusCode,AgDeleteAgResponse* _Nullable deleteAgResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgDeleteAgExecutor* excutor = [[AgDeleteAgExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteAgRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgDeleteAgResponse* response = [[AgDeleteAgResponse alloc]initWithDic:allKeys];
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
setInstanceTemplate sync request
@param setInstanceTemplateRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setInstanceTemplateResponse` the request response data model
*/
-(NSDictionary*) setInstanceTemplateSyncWithRequest:(AgSetInstanceTemplateRequest*) setInstanceTemplateRequest
{
AgSetInstanceTemplateExecutor* excutor = [[AgSetInstanceTemplateExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:setInstanceTemplateRequest];
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
                    AgSetInstanceTemplateResponse* response = [[AgSetInstanceTemplateResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"setInstanceTemplateResponse"];
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


-(void)setInstanceTemplateAsyncWithRequest:(AgSetInstanceTemplateRequest*) setInstanceTemplateRequest
                       completionHandler:(void(^)(int statusCode,AgSetInstanceTemplateResponse* _Nullable setInstanceTemplateResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgSetInstanceTemplateExecutor* excutor = [[AgSetInstanceTemplateExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:setInstanceTemplateRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgSetInstanceTemplateResponse* response = [[AgSetInstanceTemplateResponse alloc]initWithDic:allKeys];
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
describeQuotas sync request
@param describeQuotasRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeQuotasResponse` the request response data model
*/
-(NSDictionary*) describeQuotasSyncWithRequest:(AgDescribeQuotasRequest*) describeQuotasRequest
{
AgDescribeQuotasExecutor* excutor = [[AgDescribeQuotasExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeQuotasRequest];
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
                    AgDescribeQuotasResponse* response = [[AgDescribeQuotasResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeQuotasResponse"];
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


-(void)describeQuotasAsyncWithRequest:(AgDescribeQuotasRequest*) describeQuotasRequest
                       completionHandler:(void(^)(int statusCode,AgDescribeQuotasResponse* _Nullable describeQuotasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgDescribeQuotasExecutor* excutor = [[AgDescribeQuotasExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeQuotasRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgDescribeQuotasResponse* response = [[AgDescribeQuotasResponse alloc]initWithDic:allKeys];
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
abandonInstances sync request
@param abandonInstancesRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `abandonInstancesResponse` the request response data model
*/
-(NSDictionary*) abandonInstancesSyncWithRequest:(AgAbandonInstancesRequest*) abandonInstancesRequest
{
AgAbandonInstancesExecutor* excutor = [[AgAbandonInstancesExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:abandonInstancesRequest];
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
                    AgAbandonInstancesResponse* response = [[AgAbandonInstancesResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"abandonInstancesResponse"];
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


-(void)abandonInstancesAsyncWithRequest:(AgAbandonInstancesRequest*) abandonInstancesRequest
                       completionHandler:(void(^)(int statusCode,AgAbandonInstancesResponse* _Nullable abandonInstancesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgAbandonInstancesExecutor* excutor = [[AgAbandonInstancesExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:abandonInstancesRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgAbandonInstancesResponse* response = [[AgAbandonInstancesResponse alloc]initWithDic:allKeys];
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
createAg sync request
@param createAgRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createAgResponse` the request response data model
*/
-(NSDictionary*) createAgSyncWithRequest:(AgCreateAgRequest*) createAgRequest
{
AgCreateAgExecutor* excutor = [[AgCreateAgExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:createAgRequest];
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
                    AgCreateAgResponse* response = [[AgCreateAgResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"createAgResponse"];
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


-(void)createAgAsyncWithRequest:(AgCreateAgRequest*) createAgRequest
                       completionHandler:(void(^)(int statusCode,AgCreateAgResponse* _Nullable createAgResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgCreateAgExecutor* excutor = [[AgCreateAgExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:createAgRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgCreateAgResponse* response = [[AgCreateAgResponse alloc]initWithDic:allKeys];
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
describeAg sync request
@param describeAgRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeAgResponse` the request response data model
*/
-(NSDictionary*) describeAgSyncWithRequest:(AgDescribeAgRequest*) describeAgRequest
{
AgDescribeAgExecutor* excutor = [[AgDescribeAgExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeAgRequest];
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
                    AgDescribeAgResponse* response = [[AgDescribeAgResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeAgResponse"];
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


-(void)describeAgAsyncWithRequest:(AgDescribeAgRequest*) describeAgRequest
                       completionHandler:(void(^)(int statusCode,AgDescribeAgResponse* _Nullable describeAgResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgDescribeAgExecutor* excutor = [[AgDescribeAgExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeAgRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgDescribeAgResponse* response = [[AgDescribeAgResponse alloc]initWithDic:allKeys];
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
describeAgs sync request
@param describeAgsRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeAgsResponse` the request response data model
*/
-(NSDictionary*) describeAgsSyncWithRequest:(AgDescribeAgsRequest*) describeAgsRequest
{
AgDescribeAgsExecutor* excutor = [[AgDescribeAgsExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeAgsRequest];
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
                    AgDescribeAgsResponse* response = [[AgDescribeAgsResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeAgsResponse"];
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


-(void)describeAgsAsyncWithRequest:(AgDescribeAgsRequest*) describeAgsRequest
                       completionHandler:(void(^)(int statusCode,AgDescribeAgsResponse* _Nullable describeAgsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
AgDescribeAgsExecutor* excutor = [[AgDescribeAgsExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeAgsRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    AgDescribeAgsResponse* response = [[AgDescribeAgsResponse alloc]initWithDic:allKeys];
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
 ag common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) agCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)agCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

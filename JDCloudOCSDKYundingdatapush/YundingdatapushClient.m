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

云鼎2.0数据推送 openApi
云鼎2.0数据推送 openApi 相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKYundingdatapush/YundingdatapushExecutor.h>

@implementation YundingdatapushClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"yundingdatapush.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 yundingdatapush  v1";
    _serviceName = @"yundingdatapush";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 yundingdatapush  v1";
    _serviceName = @"yundingdatapush";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"yundingdatapush.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 yundingdatapush  v1";
    _serviceName = @"yundingdatapush";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 yundingdatapush  v1";
    _serviceName = @"yundingdatapush";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
addDatapushVender sync request
@param addDatapushVenderRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addDatapushVenderResponse` the request response data model
*/
-(NSDictionary*) addDatapushVenderSyncWithRequest:(YundingdatapushAddDatapushVenderRequest*) addDatapushVenderRequest
{
YundingdatapushAddDatapushVenderExecutor* excutor = [[YundingdatapushAddDatapushVenderExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:addDatapushVenderRequest];
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
                    YundingdatapushAddDatapushVenderResponse* response = [[YundingdatapushAddDatapushVenderResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"addDatapushVenderResponse"];
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


-(void)addDatapushVenderAsyncWithRequest:(YundingdatapushAddDatapushVenderRequest*) addDatapushVenderRequest
                       completionHandler:(void(^)(int statusCode,YundingdatapushAddDatapushVenderResponse* _Nullable addDatapushVenderResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
YundingdatapushAddDatapushVenderExecutor* excutor = [[YundingdatapushAddDatapushVenderExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:addDatapushVenderRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    YundingdatapushAddDatapushVenderResponse* response = [[YundingdatapushAddDatapushVenderResponse alloc]initWithDic:allKeys];
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
describeDatapushVenders sync request
@param describeDatapushVendersRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeDatapushVendersResponse` the request response data model
*/
-(NSDictionary*) describeDatapushVendersSyncWithRequest:(YundingdatapushDescribeDatapushVendersRequest*) describeDatapushVendersRequest
{
YundingdatapushDescribeDatapushVendersExecutor* excutor = [[YundingdatapushDescribeDatapushVendersExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeDatapushVendersRequest];
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
                    YundingdatapushDescribeDatapushVendersResponse* response = [[YundingdatapushDescribeDatapushVendersResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeDatapushVendersResponse"];
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


-(void)describeDatapushVendersAsyncWithRequest:(YundingdatapushDescribeDatapushVendersRequest*) describeDatapushVendersRequest
                       completionHandler:(void(^)(int statusCode,YundingdatapushDescribeDatapushVendersResponse* _Nullable describeDatapushVendersResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
YundingdatapushDescribeDatapushVendersExecutor* excutor = [[YundingdatapushDescribeDatapushVendersExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeDatapushVendersRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    YundingdatapushDescribeDatapushVendersResponse* response = [[YundingdatapushDescribeDatapushVendersResponse alloc]initWithDic:allKeys];
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
describeRdsInstances sync request
@param describeRdsInstancesRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeRdsInstancesResponse` the request response data model
*/
-(NSDictionary*) describeRdsInstancesSyncWithRequest:(YundingdatapushDescribeRdsInstancesRequest*) describeRdsInstancesRequest
{
YundingdatapushDescribeRdsInstancesExecutor* excutor = [[YundingdatapushDescribeRdsInstancesExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeRdsInstancesRequest];
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
                    YundingdatapushDescribeRdsInstancesResponse* response = [[YundingdatapushDescribeRdsInstancesResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeRdsInstancesResponse"];
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


-(void)describeRdsInstancesAsyncWithRequest:(YundingdatapushDescribeRdsInstancesRequest*) describeRdsInstancesRequest
                       completionHandler:(void(^)(int statusCode,YundingdatapushDescribeRdsInstancesResponse* _Nullable describeRdsInstancesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
YundingdatapushDescribeRdsInstancesExecutor* excutor = [[YundingdatapushDescribeRdsInstancesExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeRdsInstancesRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    YundingdatapushDescribeRdsInstancesResponse* response = [[YundingdatapushDescribeRdsInstancesResponse alloc]initWithDic:allKeys];
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
deleteDatapushVender sync request
@param deleteDatapushVenderRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteDatapushVenderResponse` the request response data model
*/
-(NSDictionary*) deleteDatapushVenderSyncWithRequest:(YundingdatapushDeleteDatapushVenderRequest*) deleteDatapushVenderRequest
{
YundingdatapushDeleteDatapushVenderExecutor* excutor = [[YundingdatapushDeleteDatapushVenderExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteDatapushVenderRequest];
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
                    YundingdatapushDeleteDatapushVenderResponse* response = [[YundingdatapushDeleteDatapushVenderResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteDatapushVenderResponse"];
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


-(void)deleteDatapushVenderAsyncWithRequest:(YundingdatapushDeleteDatapushVenderRequest*) deleteDatapushVenderRequest
                       completionHandler:(void(^)(int statusCode,YundingdatapushDeleteDatapushVenderResponse* _Nullable deleteDatapushVenderResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
YundingdatapushDeleteDatapushVenderExecutor* excutor = [[YundingdatapushDeleteDatapushVenderExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteDatapushVenderRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    YundingdatapushDeleteDatapushVenderResponse* response = [[YundingdatapushDeleteDatapushVenderResponse alloc]initWithDic:allKeys];
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
 yundingdatapush common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) yundingdatapushCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)yundingdatapushCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

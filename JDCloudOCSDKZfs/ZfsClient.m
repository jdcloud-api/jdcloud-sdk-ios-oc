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

CFS的API
CFS(Cloud-File-Service)的API包含CFS相关接口。

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKZfs/ZfsExecutor.h>

@implementation ZfsClient

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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"cfs.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 zfs  v1";
    _serviceName = @"zfs";
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
    _userAgent = @"JdCloudOCSdk 0.0.1 zfs  v1";
    _serviceName = @"zfs";
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
        self.sdkEnvironment = [[SDKEnvironment alloc] initWithEndPoint:@"cfs.jdcloud-api.com"];
    }else
    {
        self.sdkEnvironment = [GlobalConfig sdkEnvironment];
    }
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 zfs  v1";
    _serviceName = @"zfs";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}

-(id)init{
    self.httpRequestProtocol = @"https";
    _userAgent = @"JdCloudOCSdk 0.0.1 zfs  v1";
    _serviceName = @"zfs";
    _version = @"v1";
    self.contentType = @"application/json";
    return self;
}


/**
createMountTarget sync request
@param createMountTargetRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createMountTargetResponse` the request response data model
*/
-(NSDictionary*) createMountTargetSyncWithRequest:(ZfsCreateMountTargetRequest*) createMountTargetRequest
{
ZfsCreateMountTargetExecutor* excutor = [[ZfsCreateMountTargetExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:createMountTargetRequest];
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
                    ZfsCreateMountTargetResponse* response = [[ZfsCreateMountTargetResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"createMountTargetResponse"];
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


-(void)createMountTargetAsyncWithRequest:(ZfsCreateMountTargetRequest*) createMountTargetRequest
                       completionHandler:(void(^)(int statusCode,ZfsCreateMountTargetResponse* _Nullable createMountTargetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsCreateMountTargetExecutor* excutor = [[ZfsCreateMountTargetExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:createMountTargetRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsCreateMountTargetResponse* response = [[ZfsCreateMountTargetResponse alloc]initWithDic:allKeys];
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
createFileSystem sync request
@param createFileSystemRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createFileSystemResponse` the request response data model
*/
-(NSDictionary*) createFileSystemSyncWithRequest:(ZfsCreateFileSystemRequest*) createFileSystemRequest
{
ZfsCreateFileSystemExecutor* excutor = [[ZfsCreateFileSystemExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:createFileSystemRequest];
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
                    ZfsCreateFileSystemResponse* response = [[ZfsCreateFileSystemResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"createFileSystemResponse"];
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


-(void)createFileSystemAsyncWithRequest:(ZfsCreateFileSystemRequest*) createFileSystemRequest
                       completionHandler:(void(^)(int statusCode,ZfsCreateFileSystemResponse* _Nullable createFileSystemResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsCreateFileSystemExecutor* excutor = [[ZfsCreateFileSystemExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:createFileSystemRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsCreateFileSystemResponse* response = [[ZfsCreateFileSystemResponse alloc]initWithDic:allKeys];
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
describeFileSystem sync request
@param describeFileSystemRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeFileSystemResponse` the request response data model
*/
-(NSDictionary*) describeFileSystemSyncWithRequest:(ZfsDescribeFileSystemRequest*) describeFileSystemRequest
{
ZfsDescribeFileSystemExecutor* excutor = [[ZfsDescribeFileSystemExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeFileSystemRequest];
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
                    ZfsDescribeFileSystemResponse* response = [[ZfsDescribeFileSystemResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeFileSystemResponse"];
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


-(void)describeFileSystemAsyncWithRequest:(ZfsDescribeFileSystemRequest*) describeFileSystemRequest
                       completionHandler:(void(^)(int statusCode,ZfsDescribeFileSystemResponse* _Nullable describeFileSystemResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDescribeFileSystemExecutor* excutor = [[ZfsDescribeFileSystemExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeFileSystemRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDescribeFileSystemResponse* response = [[ZfsDescribeFileSystemResponse alloc]initWithDic:allKeys];
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
deleteMountTarget sync request
@param deleteMountTargetRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteMountTargetResponse` the request response data model
*/
-(NSDictionary*) deleteMountTargetSyncWithRequest:(ZfsDeleteMountTargetRequest*) deleteMountTargetRequest
{
ZfsDeleteMountTargetExecutor* excutor = [[ZfsDeleteMountTargetExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteMountTargetRequest];
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
                    ZfsDeleteMountTargetResponse* response = [[ZfsDeleteMountTargetResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteMountTargetResponse"];
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


-(void)deleteMountTargetAsyncWithRequest:(ZfsDeleteMountTargetRequest*) deleteMountTargetRequest
                       completionHandler:(void(^)(int statusCode,ZfsDeleteMountTargetResponse* _Nullable deleteMountTargetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDeleteMountTargetExecutor* excutor = [[ZfsDeleteMountTargetExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteMountTargetRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDeleteMountTargetResponse* response = [[ZfsDeleteMountTargetResponse alloc]initWithDic:allKeys];
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
describeFileSystems sync request
@param describeFileSystemsRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeFileSystemsResponse` the request response data model
*/
-(NSDictionary*) describeFileSystemsSyncWithRequest:(ZfsDescribeFileSystemsRequest*) describeFileSystemsRequest
{
ZfsDescribeFileSystemsExecutor* excutor = [[ZfsDescribeFileSystemsExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeFileSystemsRequest];
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
                    ZfsDescribeFileSystemsResponse* response = [[ZfsDescribeFileSystemsResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeFileSystemsResponse"];
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


-(void)describeFileSystemsAsyncWithRequest:(ZfsDescribeFileSystemsRequest*) describeFileSystemsRequest
                       completionHandler:(void(^)(int statusCode,ZfsDescribeFileSystemsResponse* _Nullable describeFileSystemsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDescribeFileSystemsExecutor* excutor = [[ZfsDescribeFileSystemsExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeFileSystemsRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDescribeFileSystemsResponse* response = [[ZfsDescribeFileSystemsResponse alloc]initWithDic:allKeys];
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
deleteFileSystem sync request
@param deleteFileSystemRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteFileSystemResponse` the request response data model
*/
-(NSDictionary*) deleteFileSystemSyncWithRequest:(ZfsDeleteFileSystemRequest*) deleteFileSystemRequest
{
ZfsDeleteFileSystemExecutor* excutor = [[ZfsDeleteFileSystemExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:deleteFileSystemRequest];
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
                    ZfsDeleteFileSystemResponse* response = [[ZfsDeleteFileSystemResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"deleteFileSystemResponse"];
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


-(void)deleteFileSystemAsyncWithRequest:(ZfsDeleteFileSystemRequest*) deleteFileSystemRequest
                       completionHandler:(void(^)(int statusCode,ZfsDeleteFileSystemResponse* _Nullable deleteFileSystemResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDeleteFileSystemExecutor* excutor = [[ZfsDeleteFileSystemExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:deleteFileSystemRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDeleteFileSystemResponse* response = [[ZfsDeleteFileSystemResponse alloc]initWithDic:allKeys];
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
modifyFileSystemAttribute sync request
@param modifyFileSystemAttributeRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyFileSystemAttributeResponse` the request response data model
*/
-(NSDictionary*) modifyFileSystemAttributeSyncWithRequest:(ZfsModifyFileSystemAttributeRequest*) modifyFileSystemAttributeRequest
{
ZfsModifyFileSystemAttributeExecutor* excutor = [[ZfsModifyFileSystemAttributeExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:modifyFileSystemAttributeRequest];
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
                    ZfsModifyFileSystemAttributeResponse* response = [[ZfsModifyFileSystemAttributeResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"modifyFileSystemAttributeResponse"];
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


-(void)modifyFileSystemAttributeAsyncWithRequest:(ZfsModifyFileSystemAttributeRequest*) modifyFileSystemAttributeRequest
                       completionHandler:(void(^)(int statusCode,ZfsModifyFileSystemAttributeResponse* _Nullable modifyFileSystemAttributeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsModifyFileSystemAttributeExecutor* excutor = [[ZfsModifyFileSystemAttributeExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:modifyFileSystemAttributeRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsModifyFileSystemAttributeResponse* response = [[ZfsModifyFileSystemAttributeResponse alloc]initWithDic:allKeys];
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
describeMountTargets sync request
@param describeMountTargetsRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMountTargetsResponse` the request response data model
*/
-(NSDictionary*) describeMountTargetsSyncWithRequest:(ZfsDescribeMountTargetsRequest*) describeMountTargetsRequest
{
ZfsDescribeMountTargetsExecutor* excutor = [[ZfsDescribeMountTargetsExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeMountTargetsRequest];
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
                    ZfsDescribeMountTargetsResponse* response = [[ZfsDescribeMountTargetsResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeMountTargetsResponse"];
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


-(void)describeMountTargetsAsyncWithRequest:(ZfsDescribeMountTargetsRequest*) describeMountTargetsRequest
                       completionHandler:(void(^)(int statusCode,ZfsDescribeMountTargetsResponse* _Nullable describeMountTargetsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDescribeMountTargetsExecutor* excutor = [[ZfsDescribeMountTargetsExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeMountTargetsRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDescribeMountTargetsResponse* response = [[ZfsDescribeMountTargetsResponse alloc]initWithDic:allKeys];
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
describeMountTarget sync request
@param describeMountTargetRequest request param
@return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMountTargetResponse` the request response data model
*/
-(NSDictionary*) describeMountTargetSyncWithRequest:(ZfsDescribeMountTargetRequest*) describeMountTargetRequest
{
ZfsDescribeMountTargetExecutor* excutor = [[ZfsDescribeMountTargetExecutor alloc] initWithJDCloudClient:self];
    NSDictionary* responseResult = [excutor executeSync:describeMountTargetRequest];
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
                    ZfsDescribeMountTargetResponse* response = [[ZfsDescribeMountTargetResponse alloc]initWithDic:allKeys];
                    if(response)
                    {
                        [result setValue:response forKey:@"describeMountTargetResponse"];
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


-(void)describeMountTargetAsyncWithRequest:(ZfsDescribeMountTargetRequest*) describeMountTargetRequest
                       completionHandler:(void(^)(int statusCode,ZfsDescribeMountTargetResponse* _Nullable describeMountTargetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler
{
ZfsDescribeMountTargetExecutor* excutor = [[ZfsDescribeMountTargetExecutor alloc] initWithJDCloudClient:self];
    [excutor executeAsync:describeMountTargetRequest completionHandler:^(int statusCode, NSData * _Nullable responseData, NSError * _Nullable error) {
        if(!error&&responseData)
        {
            NSData * resultData = [responseData copy];
            NSError *jsonError;
            NSDictionary* allKeys = [NSJSONSerialization JSONObjectWithData:resultData options:0 error:&jsonError];
            if(!jsonError&& allKeys)
            {
                @try {
                    ZfsDescribeMountTargetResponse* response = [[ZfsDescribeMountTargetResponse alloc]initWithDic:allKeys];
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
 zfs common sync request
 @param  jdcloudDataRequest request param
 @return key `statusCode` http request status code type is int
             `dataResult` the http request response data  type is NSData
             `requestError` the request error type is NSError
 */
 -(NSDictionary*) zfsCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                                   url:(NSString*) url
                                                method:(NSString*) method{
    CommonExecutor* excutor = [[CommonExecutor alloc] initWithJDCloudClient:self url:url method:method];
    NSDictionary* responseResult = [excutor executeDataSync:jdcloudDataRequest];
    return responseResult;
}

-(void)zfsCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
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

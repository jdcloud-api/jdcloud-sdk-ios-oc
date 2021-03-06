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

京东云function接口
function相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef FunctionClient_h
#define FunctionClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKFunction/FunctionApiModel.h>

@interface FunctionClient : NSObject<JDCloudClient>{
    @private
    NSString* _userAgent;
    NSString* _serviceName;
    NSString* _version;
    }

    @property (strong,readonly,nonatomic) NSString* userAgent;

    @property (strong,readonly,nonatomic) NSString* serviceName;

    @property (strong,readonly,nonatomic) NSString* version;

    @property (strong,nonatomic) NSString* contentType;

    @property (strong,nonatomic) Credential* credential;

    @property (strong,nonatomic) SDKEnvironment* sdkEnvironment;

    @property (strong,nonatomic) NSMutableDictionary* customHeader;

    @property  (strong,nonatomic) NSString* httpRequestProtocol;

    -(void) addCustomerHeaderWithKey:(NSString*) key
    value:(NSString*) value;

    -(id)initWithGlobalConfig;

    -(id)initWithCredential:(Credential*)credential
    sdkEnvironment:(SDKEnvironment*)sdkEnvironment;
    -(id)initWithCredential:(Credential*)credential;
    /**
    getVersion sync request
    @param getVersionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getVersionResponse` the request response data model
    */
    -(NSDictionary*) getVersionSyncWithRequest:(FunctionGetVersionRequest*) getVersionRequest;

    -(void)getVersionAsyncWithRequest:(FunctionGetVersionRequest*) getVersionRequest
    completionHandler:(void(^)(int statusCode,FunctionGetVersionResponse* _Nullable getVersionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createAlias sync request
    @param createAliasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createAliasResponse` the request response data model
    */
    -(NSDictionary*) createAliasSyncWithRequest:(FunctionCreateAliasRequest*) createAliasRequest;

    -(void)createAliasAsyncWithRequest:(FunctionCreateAliasRequest*) createAliasRequest
    completionHandler:(void(^)(int statusCode,FunctionCreateAliasResponse* _Nullable createAliasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createFunction sync request
    @param createFunctionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createFunctionResponse` the request response data model
    */
    -(NSDictionary*) createFunctionSyncWithRequest:(FunctionCreateFunctionRequest*) createFunctionRequest;

    -(void)createFunctionAsyncWithRequest:(FunctionCreateFunctionRequest*) createFunctionRequest
    completionHandler:(void(^)(int statusCode,FunctionCreateFunctionResponse* _Nullable createFunctionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteAlias sync request
    @param deleteAliasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteAliasResponse` the request response data model
    */
    -(NSDictionary*) deleteAliasSyncWithRequest:(FunctionDeleteAliasRequest*) deleteAliasRequest;

    -(void)deleteAliasAsyncWithRequest:(FunctionDeleteAliasRequest*) deleteAliasRequest
    completionHandler:(void(^)(int statusCode,FunctionDeleteAliasResponse* _Nullable deleteAliasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createVersion sync request
    @param createVersionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createVersionResponse` the request response data model
    */
    -(NSDictionary*) createVersionSyncWithRequest:(FunctionCreateVersionRequest*) createVersionRequest;

    -(void)createVersionAsyncWithRequest:(FunctionCreateVersionRequest*) createVersionRequest
    completionHandler:(void(^)(int statusCode,FunctionCreateVersionResponse* _Nullable createVersionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getFunction sync request
    @param getFunctionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getFunctionResponse` the request response data model
    */
    -(NSDictionary*) getFunctionSyncWithRequest:(FunctionGetFunctionRequest*) getFunctionRequest;

    -(void)getFunctionAsyncWithRequest:(FunctionGetFunctionRequest*) getFunctionRequest
    completionHandler:(void(^)(int statusCode,FunctionGetFunctionResponse* _Nullable getFunctionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listVersion sync request
    @param listVersionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listVersionResponse` the request response data model
    */
    -(NSDictionary*) listVersionSyncWithRequest:(FunctionListVersionRequest*) listVersionRequest;

    -(void)listVersionAsyncWithRequest:(FunctionListVersionRequest*) listVersionRequest
    completionHandler:(void(^)(int statusCode,FunctionListVersionResponse* _Nullable listVersionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    invoke sync request
    @param invokeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `invokeResponse` the request response data model
    */
    -(NSDictionary*) invokeSyncWithRequest:(FunctionInvokeRequest*) invokeRequest;

    -(void)invokeAsyncWithRequest:(FunctionInvokeRequest*) invokeRequest
    completionHandler:(void(^)(int statusCode,FunctionInvokeResponse* _Nullable invokeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateAlias sync request
    @param updateAliasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateAliasResponse` the request response data model
    */
    -(NSDictionary*) updateAliasSyncWithRequest:(FunctionUpdateAliasRequest*) updateAliasRequest;

    -(void)updateAliasAsyncWithRequest:(FunctionUpdateAliasRequest*) updateAliasRequest
    completionHandler:(void(^)(int statusCode,FunctionUpdateAliasResponse* _Nullable updateAliasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    asyncInvoke sync request
    @param asyncInvokeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `asyncInvokeResponse` the request response data model
    */
    -(NSDictionary*) asyncInvokeSyncWithRequest:(FunctionAsyncInvokeRequest*) asyncInvokeRequest;

    -(void)asyncInvokeAsyncWithRequest:(FunctionAsyncInvokeRequest*) asyncInvokeRequest
    completionHandler:(void(^)(int statusCode,FunctionAsyncInvokeResponse* _Nullable asyncInvokeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getTrigger sync request
    @param getTriggerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getTriggerResponse` the request response data model
    */
    -(NSDictionary*) getTriggerSyncWithRequest:(FunctionGetTriggerRequest*) getTriggerRequest;

    -(void)getTriggerAsyncWithRequest:(FunctionGetTriggerRequest*) getTriggerRequest
    completionHandler:(void(^)(int statusCode,FunctionGetTriggerResponse* _Nullable getTriggerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteVersion sync request
    @param deleteVersionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteVersionResponse` the request response data model
    */
    -(NSDictionary*) deleteVersionSyncWithRequest:(FunctionDeleteVersionRequest*) deleteVersionRequest;

    -(void)deleteVersionAsyncWithRequest:(FunctionDeleteVersionRequest*) deleteVersionRequest
    completionHandler:(void(^)(int statusCode,FunctionDeleteVersionResponse* _Nullable deleteVersionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteFunction sync request
    @param deleteFunctionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteFunctionResponse` the request response data model
    */
    -(NSDictionary*) deleteFunctionSyncWithRequest:(FunctionDeleteFunctionRequest*) deleteFunctionRequest;

    -(void)deleteFunctionAsyncWithRequest:(FunctionDeleteFunctionRequest*) deleteFunctionRequest
    completionHandler:(void(^)(int statusCode,FunctionDeleteFunctionResponse* _Nullable deleteFunctionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listFunction sync request
    @param listFunctionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listFunctionResponse` the request response data model
    */
    -(NSDictionary*) listFunctionSyncWithRequest:(FunctionListFunctionRequest*) listFunctionRequest;

    -(void)listFunctionAsyncWithRequest:(FunctionListFunctionRequest*) listFunctionRequest
    completionHandler:(void(^)(int statusCode,FunctionListFunctionResponse* _Nullable listFunctionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listAlias sync request
    @param listAliasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listAliasResponse` the request response data model
    */
    -(NSDictionary*) listAliasSyncWithRequest:(FunctionListAliasRequest*) listAliasRequest;

    -(void)listAliasAsyncWithRequest:(FunctionListAliasRequest*) listAliasRequest
    completionHandler:(void(^)(int statusCode,FunctionListAliasResponse* _Nullable listAliasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getAlias sync request
    @param getAliasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getAliasResponse` the request response data model
    */
    -(NSDictionary*) getAliasSyncWithRequest:(FunctionGetAliasRequest*) getAliasRequest;

    -(void)getAliasAsyncWithRequest:(FunctionGetAliasRequest*) getAliasRequest
    completionHandler:(void(^)(int statusCode,FunctionGetAliasResponse* _Nullable getAliasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateFunction sync request
    @param updateFunctionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateFunctionResponse` the request response data model
    */
    -(NSDictionary*) updateFunctionSyncWithRequest:(FunctionUpdateFunctionRequest*) updateFunctionRequest;

    -(void)updateFunctionAsyncWithRequest:(FunctionUpdateFunctionRequest*) updateFunctionRequest
    completionHandler:(void(^)(int statusCode,FunctionUpdateFunctionResponse* _Nullable updateFunctionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    function common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) functionCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)functionCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* FunctionClient_h */

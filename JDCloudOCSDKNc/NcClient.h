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

原生容器
原生容器相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef NcClient_h
#define NcClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKNc/NcApiModel.h>

@interface NcClient : NSObject<JDCloudClient>{
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
    associateElasticIp sync request
    @param associateElasticIpRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `associateElasticIpResponse` the request response data model
    */
    -(NSDictionary*) associateElasticIpSyncWithRequest:(NcAssociateElasticIpRequest*) associateElasticIpRequest;

    -(void)associateElasticIpAsyncWithRequest:(NcAssociateElasticIpRequest*) associateElasticIpRequest
    completionHandler:(void(^)(int statusCode,NcAssociateElasticIpResponse* _Nullable associateElasticIpResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeSecret sync request
    @param describeSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeSecretResponse` the request response data model
    */
    -(NSDictionary*) describeSecretSyncWithRequest:(NcDescribeSecretRequest*) describeSecretRequest;

    -(void)describeSecretAsyncWithRequest:(NcDescribeSecretRequest*) describeSecretRequest
    completionHandler:(void(^)(int statusCode,NcDescribeSecretResponse* _Nullable describeSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createSecret sync request
    @param createSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createSecretResponse` the request response data model
    */
    -(NSDictionary*) createSecretSyncWithRequest:(NcCreateSecretRequest*) createSecretRequest;

    -(void)createSecretAsyncWithRequest:(NcCreateSecretRequest*) createSecretRequest
    completionHandler:(void(^)(int statusCode,NcCreateSecretResponse* _Nullable createSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyContainerAttribute sync request
    @param modifyContainerAttributeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyContainerAttributeResponse` the request response data model
    */
    -(NSDictionary*) modifyContainerAttributeSyncWithRequest:(NcModifyContainerAttributeRequest*) modifyContainerAttributeRequest;

    -(void)modifyContainerAttributeAsyncWithRequest:(NcModifyContainerAttributeRequest*) modifyContainerAttributeRequest
    completionHandler:(void(^)(int statusCode,NcModifyContainerAttributeResponse* _Nullable modifyContainerAttributeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteSecret sync request
    @param deleteSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteSecretResponse` the request response data model
    */
    -(NSDictionary*) deleteSecretSyncWithRequest:(NcDeleteSecretRequest*) deleteSecretRequest;

    -(void)deleteSecretAsyncWithRequest:(NcDeleteSecretRequest*) deleteSecretRequest
    completionHandler:(void(^)(int statusCode,NcDeleteSecretResponse* _Nullable deleteSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    disassociateElasticIp sync request
    @param disassociateElasticIpRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `disassociateElasticIpResponse` the request response data model
    */
    -(NSDictionary*) disassociateElasticIpSyncWithRequest:(NcDisassociateElasticIpRequest*) disassociateElasticIpRequest;

    -(void)disassociateElasticIpAsyncWithRequest:(NcDisassociateElasticIpRequest*) disassociateElasticIpRequest
    completionHandler:(void(^)(int statusCode,NcDisassociateElasticIpResponse* _Nullable disassociateElasticIpResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteContainer sync request
    @param deleteContainerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteContainerResponse` the request response data model
    */
    -(NSDictionary*) deleteContainerSyncWithRequest:(NcDeleteContainerRequest*) deleteContainerRequest;

    -(void)deleteContainerAsyncWithRequest:(NcDeleteContainerRequest*) deleteContainerRequest
    completionHandler:(void(^)(int statusCode,NcDeleteContainerResponse* _Nullable deleteContainerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeContainer sync request
    @param describeContainerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeContainerResponse` the request response data model
    */
    -(NSDictionary*) describeContainerSyncWithRequest:(NcDescribeContainerRequest*) describeContainerRequest;

    -(void)describeContainerAsyncWithRequest:(NcDescribeContainerRequest*) describeContainerRequest
    completionHandler:(void(^)(int statusCode,NcDescribeContainerResponse* _Nullable describeContainerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    startContainer sync request
    @param startContainerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `startContainerResponse` the request response data model
    */
    -(NSDictionary*) startContainerSyncWithRequest:(NcStartContainerRequest*) startContainerRequest;

    -(void)startContainerAsyncWithRequest:(NcStartContainerRequest*) startContainerRequest
    completionHandler:(void(^)(int statusCode,NcStartContainerResponse* _Nullable startContainerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeContainers sync request
    @param describeContainersRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeContainersResponse` the request response data model
    */
    -(NSDictionary*) describeContainersSyncWithRequest:(NcDescribeContainersRequest*) describeContainersRequest;

    -(void)describeContainersAsyncWithRequest:(NcDescribeContainersRequest*) describeContainersRequest
    completionHandler:(void(^)(int statusCode,NcDescribeContainersResponse* _Nullable describeContainersResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getLogs sync request
    @param getLogsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getLogsResponse` the request response data model
    */
    -(NSDictionary*) getLogsSyncWithRequest:(NcGetLogsRequest*) getLogsRequest;

    -(void)getLogsAsyncWithRequest:(NcGetLogsRequest*) getLogsRequest
    completionHandler:(void(^)(int statusCode,NcGetLogsResponse* _Nullable getLogsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeQuota sync request
    @param describeQuotaRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeQuotaResponse` the request response data model
    */
    -(NSDictionary*) describeQuotaSyncWithRequest:(NcDescribeQuotaRequest*) describeQuotaRequest;

    -(void)describeQuotaAsyncWithRequest:(NcDescribeQuotaRequest*) describeQuotaRequest
    completionHandler:(void(^)(int statusCode,NcDescribeQuotaResponse* _Nullable describeQuotaResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createContainers sync request
    @param createContainersRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createContainersResponse` the request response data model
    */
    -(NSDictionary*) createContainersSyncWithRequest:(NcCreateContainersRequest*) createContainersRequest;

    -(void)createContainersAsyncWithRequest:(NcCreateContainersRequest*) createContainersRequest
    completionHandler:(void(^)(int statusCode,NcCreateContainersResponse* _Nullable createContainersResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    stopContainer sync request
    @param stopContainerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `stopContainerResponse` the request response data model
    */
    -(NSDictionary*) stopContainerSyncWithRequest:(NcStopContainerRequest*) stopContainerRequest;

    -(void)stopContainerAsyncWithRequest:(NcStopContainerRequest*) stopContainerRequest
    completionHandler:(void(^)(int statusCode,NcStopContainerResponse* _Nullable stopContainerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeSecrets sync request
    @param describeSecretsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeSecretsResponse` the request response data model
    */
    -(NSDictionary*) describeSecretsSyncWithRequest:(NcDescribeSecretsRequest*) describeSecretsRequest;

    -(void)describeSecretsAsyncWithRequest:(NcDescribeSecretsRequest*) describeSecretsRequest
    completionHandler:(void(^)(int statusCode,NcDescribeSecretsResponse* _Nullable describeSecretsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    nc common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) ncCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)ncCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* NcClient_h */

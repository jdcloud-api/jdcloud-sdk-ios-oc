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

JCLOUD IoT Engine API
API related to IoT Engine

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef IotcoreClient_h
#define IotcoreClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKIotcore/IotcoreApiModel.h>

@interface IotcoreClient : NSObject<JDCloudClient>{
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
    addDevice sync request
    @param addDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addDeviceResponse` the request response data model
    */
    -(NSDictionary*) addDeviceSyncWithRequest:(IotcoreAddDeviceRequest*) addDeviceRequest;

    -(void)addDeviceAsyncWithRequest:(IotcoreAddDeviceRequest*) addDeviceRequest
    completionHandler:(void(^)(int statusCode,IotcoreAddDeviceResponse* _Nullable addDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createProductTopic sync request
    @param createProductTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createProductTopicResponse` the request response data model
    */
    -(NSDictionary*) createProductTopicSyncWithRequest:(IotcoreCreateProductTopicRequest*) createProductTopicRequest;

    -(void)createProductTopicAsyncWithRequest:(IotcoreCreateProductTopicRequest*) createProductTopicRequest
    completionHandler:(void(^)(int statusCode,IotcoreCreateProductTopicResponse* _Nullable createProductTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateThingShadow sync request
    @param updateThingShadowRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateThingShadowResponse` the request response data model
    */
    -(NSDictionary*) updateThingShadowSyncWithRequest:(IotcoreUpdateThingShadowRequest*) updateThingShadowRequest;

    -(void)updateThingShadowAsyncWithRequest:(IotcoreUpdateThingShadowRequest*) updateThingShadowRequest
    completionHandler:(void(^)(int statusCode,IotcoreUpdateThingShadowResponse* _Nullable updateThingShadowResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteProduct sync request
    @param deleteProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteProductResponse` the request response data model
    */
    -(NSDictionary*) deleteProductSyncWithRequest:(IotcoreDeleteProductRequest*) deleteProductRequest;

    -(void)deleteProductAsyncWithRequest:(IotcoreDeleteProductRequest*) deleteProductRequest
    completionHandler:(void(^)(int statusCode,IotcoreDeleteProductResponse* _Nullable deleteProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    queryDevicePage sync request
    @param queryDevicePageRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `queryDevicePageResponse` the request response data model
    */
    -(NSDictionary*) queryDevicePageSyncWithRequest:(IotcoreQueryDevicePageRequest*) queryDevicePageRequest;

    -(void)queryDevicePageAsyncWithRequest:(IotcoreQueryDevicePageRequest*) queryDevicePageRequest
    completionHandler:(void(^)(int statusCode,IotcoreQueryDevicePageResponse* _Nullable queryDevicePageResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    invokeThingService sync request
    @param invokeThingServiceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `invokeThingServiceResponse` the request response data model
    */
    -(NSDictionary*) invokeThingServiceSyncWithRequest:(IotcoreInvokeThingServiceRequest*) invokeThingServiceRequest;

    -(void)invokeThingServiceAsyncWithRequest:(IotcoreInvokeThingServiceRequest*) invokeThingServiceRequest
    completionHandler:(void(^)(int statusCode,IotcoreInvokeThingServiceResponse* _Nullable invokeThingServiceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeThingShadow sync request
    @param describeThingShadowRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeThingShadowResponse` the request response data model
    */
    -(NSDictionary*) describeThingShadowSyncWithRequest:(IotcoreDescribeThingShadowRequest*) describeThingShadowRequest;

    -(void)describeThingShadowAsyncWithRequest:(IotcoreDescribeThingShadowRequest*) describeThingShadowRequest
    completionHandler:(void(^)(int statusCode,IotcoreDescribeThingShadowResponse* _Nullable describeThingShadowResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    invokeThingTopic sync request
    @param invokeThingTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `invokeThingTopicResponse` the request response data model
    */
    -(NSDictionary*) invokeThingTopicSyncWithRequest:(IotcoreInvokeThingTopicRequest*) invokeThingTopicRequest;

    -(void)invokeThingTopicAsyncWithRequest:(IotcoreInvokeThingTopicRequest*) invokeThingTopicRequest
    completionHandler:(void(^)(int statusCode,IotcoreInvokeThingTopicResponse* _Nullable invokeThingTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listProducts sync request
    @param listProductsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listProductsResponse` the request response data model
    */
    -(NSDictionary*) listProductsSyncWithRequest:(IotcoreListProductsRequest*) listProductsRequest;

    -(void)listProductsAsyncWithRequest:(IotcoreListProductsRequest*) listProductsRequest
    completionHandler:(void(^)(int statusCode,IotcoreListProductsResponse* _Nullable listProductsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createProduct sync request
    @param createProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createProductResponse` the request response data model
    */
    -(NSDictionary*) createProductSyncWithRequest:(IotcoreCreateProductRequest*) createProductRequest;

    -(void)createProductAsyncWithRequest:(IotcoreCreateProductRequest*) createProductRequest
    completionHandler:(void(^)(int statusCode,IotcoreCreateProductResponse* _Nullable createProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    exportThingModel sync request
    @param exportThingModelRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `exportThingModelResponse` the request response data model
    */
    -(NSDictionary*) exportThingModelSyncWithRequest:(IotcoreExportThingModelRequest*) exportThingModelRequest;

    -(void)exportThingModelAsyncWithRequest:(IotcoreExportThingModelRequest*) exportThingModelRequest
    completionHandler:(void(^)(int statusCode,IotcoreExportThingModelResponse* _Nullable exportThingModelResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listProductAbilities sync request
    @param listProductAbilitiesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listProductAbilitiesResponse` the request response data model
    */
    -(NSDictionary*) listProductAbilitiesSyncWithRequest:(IotcoreListProductAbilitiesRequest*) listProductAbilitiesRequest;

    -(void)listProductAbilitiesAsyncWithRequest:(IotcoreListProductAbilitiesRequest*) listProductAbilitiesRequest
    completionHandler:(void(^)(int statusCode,IotcoreListProductAbilitiesResponse* _Nullable listProductAbilitiesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeProduct sync request
    @param describeProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeProductResponse` the request response data model
    */
    -(NSDictionary*) describeProductSyncWithRequest:(IotcoreDescribeProductRequest*) describeProductRequest;

    -(void)describeProductAsyncWithRequest:(IotcoreDescribeProductRequest*) describeProductRequest
    completionHandler:(void(^)(int statusCode,IotcoreDescribeProductResponse* _Nullable describeProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateDevice sync request
    @param updateDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateDeviceResponse` the request response data model
    */
    -(NSDictionary*) updateDeviceSyncWithRequest:(IotcoreUpdateDeviceRequest*) updateDeviceRequest;

    -(void)updateDeviceAsyncWithRequest:(IotcoreUpdateDeviceRequest*) updateDeviceRequest
    completionHandler:(void(^)(int statusCode,IotcoreUpdateDeviceResponse* _Nullable updateDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateProduct sync request
    @param updateProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateProductResponse` the request response data model
    */
    -(NSDictionary*) updateProductSyncWithRequest:(IotcoreUpdateProductRequest*) updateProductRequest;

    -(void)updateProductAsyncWithRequest:(IotcoreUpdateProductRequest*) updateProductRequest
    completionHandler:(void(^)(int statusCode,IotcoreUpdateProductResponse* _Nullable updateProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    queryDeviceDetail sync request
    @param queryDeviceDetailRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `queryDeviceDetailResponse` the request response data model
    */
    -(NSDictionary*) queryDeviceDetailSyncWithRequest:(IotcoreQueryDeviceDetailRequest*) queryDeviceDetailRequest;

    -(void)queryDeviceDetailAsyncWithRequest:(IotcoreQueryDeviceDetailRequest*) queryDeviceDetailRequest
    completionHandler:(void(^)(int statusCode,IotcoreQueryDeviceDetailResponse* _Nullable queryDeviceDetailResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    importThingModel sync request
    @param importThingModelRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `importThingModelResponse` the request response data model
    */
    -(NSDictionary*) importThingModelSyncWithRequest:(IotcoreImportThingModelRequest*) importThingModelRequest;

    -(void)importThingModelAsyncWithRequest:(IotcoreImportThingModelRequest*) importThingModelRequest
    completionHandler:(void(^)(int statusCode,IotcoreImportThingModelResponse* _Nullable importThingModelResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    removeDevice sync request
    @param removeDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `removeDeviceResponse` the request response data model
    */
    -(NSDictionary*) removeDeviceSyncWithRequest:(IotcoreRemoveDeviceRequest*) removeDeviceRequest;

    -(void)removeDeviceAsyncWithRequest:(IotcoreRemoveDeviceRequest*) removeDeviceRequest
    completionHandler:(void(^)(int statusCode,IotcoreRemoveDeviceResponse* _Nullable removeDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    iotcore common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) iotcoreCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)iotcoreCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* IotcoreClient_h */

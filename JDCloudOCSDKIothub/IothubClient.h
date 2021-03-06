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

JCLOUD IoT Hub API
API related to IoT Hub

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef IothubClient_h
#define IothubClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKIothub/IothubApiModel.h>

@interface IothubClient : NSObject<JDCloudClient>{
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
    updateDevice sync request
    @param updateDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateDeviceResponse` the request response data model
    */
    -(NSDictionary*) updateDeviceSyncWithRequest:(IothubUpdateDeviceRequest*) updateDeviceRequest;

    -(void)updateDeviceAsyncWithRequest:(IothubUpdateDeviceRequest*) updateDeviceRequest
    completionHandler:(void(^)(int statusCode,IothubUpdateDeviceResponse* _Nullable updateDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listProductAbilities sync request
    @param listProductAbilitiesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listProductAbilitiesResponse` the request response data model
    */
    -(NSDictionary*) listProductAbilitiesSyncWithRequest:(IothubListProductAbilitiesRequest*) listProductAbilitiesRequest;

    -(void)listProductAbilitiesAsyncWithRequest:(IothubListProductAbilitiesRequest*) listProductAbilitiesRequest
    completionHandler:(void(^)(int statusCode,IothubListProductAbilitiesResponse* _Nullable listProductAbilitiesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteProduct sync request
    @param deleteProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteProductResponse` the request response data model
    */
    -(NSDictionary*) deleteProductSyncWithRequest:(IothubDeleteProductRequest*) deleteProductRequest;

    -(void)deleteProductAsyncWithRequest:(IothubDeleteProductRequest*) deleteProductRequest
    completionHandler:(void(^)(int statusCode,IothubDeleteProductResponse* _Nullable deleteProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    removeDeviceById sync request
    @param removeDeviceByIdRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `removeDeviceByIdResponse` the request response data model
    */
    -(NSDictionary*) removeDeviceByIdSyncWithRequest:(IothubRemoveDeviceByIdRequest*) removeDeviceByIdRequest;

    -(void)removeDeviceByIdAsyncWithRequest:(IothubRemoveDeviceByIdRequest*) removeDeviceByIdRequest
    completionHandler:(void(^)(int statusCode,IothubRemoveDeviceByIdResponse* _Nullable removeDeviceByIdResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    exportThingModel sync request
    @param exportThingModelRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `exportThingModelResponse` the request response data model
    */
    -(NSDictionary*) exportThingModelSyncWithRequest:(IothubExportThingModelRequest*) exportThingModelRequest;

    -(void)exportThingModelAsyncWithRequest:(IothubExportThingModelRequest*) exportThingModelRequest
    completionHandler:(void(^)(int statusCode,IothubExportThingModelResponse* _Nullable exportThingModelResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    invokeThingService sync request
    @param invokeThingServiceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `invokeThingServiceResponse` the request response data model
    */
    -(NSDictionary*) invokeThingServiceSyncWithRequest:(IothubInvokeThingServiceRequest*) invokeThingServiceRequest;

    -(void)invokeThingServiceAsyncWithRequest:(IothubInvokeThingServiceRequest*) invokeThingServiceRequest
    completionHandler:(void(^)(int statusCode,IothubInvokeThingServiceResponse* _Nullable invokeThingServiceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    removeDevice sync request
    @param removeDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `removeDeviceResponse` the request response data model
    */
    -(NSDictionary*) removeDeviceSyncWithRequest:(IothubRemoveDeviceRequest*) removeDeviceRequest;

    -(void)removeDeviceAsyncWithRequest:(IothubRemoveDeviceRequest*) removeDeviceRequest
    completionHandler:(void(^)(int statusCode,IothubRemoveDeviceResponse* _Nullable removeDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    importThingModel sync request
    @param importThingModelRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `importThingModelResponse` the request response data model
    */
    -(NSDictionary*) importThingModelSyncWithRequest:(IothubImportThingModelRequest*) importThingModelRequest;

    -(void)importThingModelAsyncWithRequest:(IothubImportThingModelRequest*) importThingModelRequest
    completionHandler:(void(^)(int statusCode,IothubImportThingModelResponse* _Nullable importThingModelResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateThingShadow sync request
    @param updateThingShadowRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateThingShadowResponse` the request response data model
    */
    -(NSDictionary*) updateThingShadowSyncWithRequest:(IothubUpdateThingShadowRequest*) updateThingShadowRequest;

    -(void)updateThingShadowAsyncWithRequest:(IothubUpdateThingShadowRequest*) updateThingShadowRequest
    completionHandler:(void(^)(int statusCode,IothubUpdateThingShadowResponse* _Nullable updateThingShadowResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeProduct sync request
    @param describeProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeProductResponse` the request response data model
    */
    -(NSDictionary*) describeProductSyncWithRequest:(IothubDescribeProductRequest*) describeProductRequest;

    -(void)describeProductAsyncWithRequest:(IothubDescribeProductRequest*) describeProductRequest
    completionHandler:(void(^)(int statusCode,IothubDescribeProductResponse* _Nullable describeProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeThingShadow sync request
    @param describeThingShadowRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeThingShadowResponse` the request response data model
    */
    -(NSDictionary*) describeThingShadowSyncWithRequest:(IothubDescribeThingShadowRequest*) describeThingShadowRequest;

    -(void)describeThingShadowAsyncWithRequest:(IothubDescribeThingShadowRequest*) describeThingShadowRequest
    completionHandler:(void(^)(int statusCode,IothubDescribeThingShadowResponse* _Nullable describeThingShadowResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    addDevice sync request
    @param addDeviceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addDeviceResponse` the request response data model
    */
    -(NSDictionary*) addDeviceSyncWithRequest:(IothubAddDeviceRequest*) addDeviceRequest;

    -(void)addDeviceAsyncWithRequest:(IothubAddDeviceRequest*) addDeviceRequest
    completionHandler:(void(^)(int statusCode,IothubAddDeviceResponse* _Nullable addDeviceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    listProducts sync request
    @param listProductsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listProductsResponse` the request response data model
    */
    -(NSDictionary*) listProductsSyncWithRequest:(IothubListProductsRequest*) listProductsRequest;

    -(void)listProductsAsyncWithRequest:(IothubListProductsRequest*) listProductsRequest
    completionHandler:(void(^)(int statusCode,IothubListProductsResponse* _Nullable listProductsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    queryDeviceDetail sync request
    @param queryDeviceDetailRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `queryDeviceDetailResponse` the request response data model
    */
    -(NSDictionary*) queryDeviceDetailSyncWithRequest:(IothubQueryDeviceDetailRequest*) queryDeviceDetailRequest;

    -(void)queryDeviceDetailAsyncWithRequest:(IothubQueryDeviceDetailRequest*) queryDeviceDetailRequest
    completionHandler:(void(^)(int statusCode,IothubQueryDeviceDetailResponse* _Nullable queryDeviceDetailResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    queryDevicePage sync request
    @param queryDevicePageRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `queryDevicePageResponse` the request response data model
    */
    -(NSDictionary*) queryDevicePageSyncWithRequest:(IothubQueryDevicePageRequest*) queryDevicePageRequest;

    -(void)queryDevicePageAsyncWithRequest:(IothubQueryDevicePageRequest*) queryDevicePageRequest
    completionHandler:(void(^)(int statusCode,IothubQueryDevicePageResponse* _Nullable queryDevicePageResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createProduct sync request
    @param createProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createProductResponse` the request response data model
    */
    -(NSDictionary*) createProductSyncWithRequest:(IothubCreateProductRequest*) createProductRequest;

    -(void)createProductAsyncWithRequest:(IothubCreateProductRequest*) createProductRequest
    completionHandler:(void(^)(int statusCode,IothubCreateProductResponse* _Nullable createProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateProduct sync request
    @param updateProductRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateProductResponse` the request response data model
    */
    -(NSDictionary*) updateProductSyncWithRequest:(IothubUpdateProductRequest*) updateProductRequest;

    -(void)updateProductAsyncWithRequest:(IothubUpdateProductRequest*) updateProductRequest
    completionHandler:(void(^)(int statusCode,IothubUpdateProductResponse* _Nullable updateProductResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    iothub common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) iothubCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)iothubCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* IothubClient_h */

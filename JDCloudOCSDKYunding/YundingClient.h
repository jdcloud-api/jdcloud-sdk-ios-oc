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

云鼎2.0 openApi
云鼎2.0 openApi 相关接口

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef YundingClient_h
#define YundingClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKYunding/YundingApiModel.h>

@interface YundingClient : NSObject<JDCloudClient>{
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
    deleteVmInstance sync request
    @param deleteVmInstanceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteVmInstanceResponse` the request response data model
    */
    -(NSDictionary*) deleteVmInstanceSyncWithRequest:(YundingDeleteVmInstanceRequest*) deleteVmInstanceRequest;

    -(void)deleteVmInstanceAsyncWithRequest:(YundingDeleteVmInstanceRequest*) deleteVmInstanceRequest
    completionHandler:(void(^)(int statusCode,YundingDeleteVmInstanceResponse* _Nullable deleteVmInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteRdsDatabase sync request
    @param deleteRdsDatabaseRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteRdsDatabaseResponse` the request response data model
    */
    -(NSDictionary*) deleteRdsDatabaseSyncWithRequest:(YundingDeleteRdsDatabaseRequest*) deleteRdsDatabaseRequest;

    -(void)deleteRdsDatabaseAsyncWithRequest:(YundingDeleteRdsDatabaseRequest*) deleteRdsDatabaseRequest
    completionHandler:(void(^)(int statusCode,YundingDeleteRdsDatabaseResponse* _Nullable deleteRdsDatabaseResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    unassignSecondaryIps sync request
    @param unassignSecondaryIpsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `unassignSecondaryIpsResponse` the request response data model
    */
    -(NSDictionary*) unassignSecondaryIpsSyncWithRequest:(YundingUnassignSecondaryIpsRequest*) unassignSecondaryIpsRequest;

    -(void)unassignSecondaryIpsAsyncWithRequest:(YundingUnassignSecondaryIpsRequest*) unassignSecondaryIpsRequest
    completionHandler:(void(^)(int statusCode,YundingUnassignSecondaryIpsResponse* _Nullable unassignSecondaryIpsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    assignSecondaryIps sync request
    @param assignSecondaryIpsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `assignSecondaryIpsResponse` the request response data model
    */
    -(NSDictionary*) assignSecondaryIpsSyncWithRequest:(YundingAssignSecondaryIpsRequest*) assignSecondaryIpsRequest;

    -(void)assignSecondaryIpsAsyncWithRequest:(YundingAssignSecondaryIpsRequest*) assignSecondaryIpsRequest
    completionHandler:(void(^)(int statusCode,YundingAssignSecondaryIpsResponse* _Nullable assignSecondaryIpsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    yunding common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) yundingCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)yundingCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* YundingClient_h */

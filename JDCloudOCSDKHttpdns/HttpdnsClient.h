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

京东云httpdns OpenAPI接口
京东云httpdns OpenAPI接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef HttpdnsClient_h
#define HttpdnsClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKHttpdns/HttpdnsApiModel.h>

@interface HttpdnsClient : NSObject<JDCloudClient>{
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
    getAccountInfo sync request
    @param getAccountInfoRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getAccountInfoResponse` the request response data model
    */
    -(NSDictionary*) getAccountInfoSyncWithRequest:(HttpdnsGetAccountInfoRequest*) getAccountInfoRequest;

    -(void)getAccountInfoAsyncWithRequest:(HttpdnsGetAccountInfoRequest*) getAccountInfoRequest
    completionHandler:(void(^)(int statusCode,HttpdnsGetAccountInfoResponse* _Nullable getAccountInfoResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    addDomains sync request
    @param addDomainsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addDomainsResponse` the request response data model
    */
    -(NSDictionary*) addDomainsSyncWithRequest:(HttpdnsAddDomainsRequest*) addDomainsRequest;

    -(void)addDomainsAsyncWithRequest:(HttpdnsAddDomainsRequest*) addDomainsRequest
    completionHandler:(void(^)(int statusCode,HttpdnsAddDomainsResponse* _Nullable addDomainsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    delDomains sync request
    @param delDomainsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `delDomainsResponse` the request response data model
    */
    -(NSDictionary*) delDomainsSyncWithRequest:(HttpdnsDelDomainsRequest*) delDomainsRequest;

    -(void)delDomainsAsyncWithRequest:(HttpdnsDelDomainsRequest*) delDomainsRequest
    completionHandler:(void(^)(int statusCode,HttpdnsDelDomainsResponse* _Nullable delDomainsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createAccount sync request
    @param createAccountRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createAccountResponse` the request response data model
    */
    -(NSDictionary*) createAccountSyncWithRequest:(HttpdnsCreateAccountRequest*) createAccountRequest;

    -(void)createAccountAsyncWithRequest:(HttpdnsCreateAccountRequest*) createAccountRequest
    completionHandler:(void(^)(int statusCode,HttpdnsCreateAccountResponse* _Nullable createAccountResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getDomains sync request
    @param getDomainsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getDomainsResponse` the request response data model
    */
    -(NSDictionary*) getDomainsSyncWithRequest:(HttpdnsGetDomainsRequest*) getDomainsRequest;

    -(void)getDomainsAsyncWithRequest:(HttpdnsGetDomainsRequest*) getDomainsRequest
    completionHandler:(void(^)(int statusCode,HttpdnsGetDomainsResponse* _Nullable getDomainsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getAccountId sync request
    @param getAccountIdRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getAccountIdResponse` the request response data model
    */
    -(NSDictionary*) getAccountIdSyncWithRequest:(HttpdnsGetAccountIdRequest*) getAccountIdRequest;

    -(void)getAccountIdAsyncWithRequest:(HttpdnsGetAccountIdRequest*) getAccountIdRequest
    completionHandler:(void(^)(int statusCode,HttpdnsGetAccountIdResponse* _Nullable getAccountIdResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    operateKey sync request
    @param operateKeyRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `operateKeyResponse` the request response data model
    */
    -(NSDictionary*) operateKeySyncWithRequest:(HttpdnsOperateKeyRequest*) operateKeyRequest;

    -(void)operateKeyAsyncWithRequest:(HttpdnsOperateKeyRequest*) operateKeyRequest
    completionHandler:(void(^)(int statusCode,HttpdnsOperateKeyResponse* _Nullable operateKeyResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    httpdns common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) httpdnsCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)httpdnsCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* HttpdnsClient_h */

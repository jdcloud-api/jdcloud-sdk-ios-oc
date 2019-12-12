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

京东云数据库MongoDB接口
数据库MongoDB相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef MongodbClient_h
#define MongodbClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKMongodb/MongodbApiModel.h>

@interface MongodbClient : NSObject<JDCloudClient>{
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
    modifyInstanceSpec sync request
    @param modifyInstanceSpecRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyInstanceSpecResponse` the request response data model
    */
    -(NSDictionary*) modifyInstanceSpecSyncWithRequest:(MongodbModifyInstanceSpecRequest*) modifyInstanceSpecRequest;

    -(void)modifyInstanceSpecAsyncWithRequest:(MongodbModifyInstanceSpecRequest*) modifyInstanceSpecRequest
    completionHandler:(void(^)(int statusCode,MongodbModifyInstanceSpecResponse* _Nullable modifyInstanceSpecResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createInstance sync request
    @param createInstanceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createInstanceResponse` the request response data model
    */
    -(NSDictionary*) createInstanceSyncWithRequest:(MongodbCreateInstanceRequest*) createInstanceRequest;

    -(void)createInstanceAsyncWithRequest:(MongodbCreateInstanceRequest*) createInstanceRequest
    completionHandler:(void(^)(int statusCode,MongodbCreateInstanceResponse* _Nullable createInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeBackupPolicy sync request
    @param describeBackupPolicyRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeBackupPolicyResponse` the request response data model
    */
    -(NSDictionary*) describeBackupPolicySyncWithRequest:(MongodbDescribeBackupPolicyRequest*) describeBackupPolicyRequest;

    -(void)describeBackupPolicyAsyncWithRequest:(MongodbDescribeBackupPolicyRequest*) describeBackupPolicyRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeBackupPolicyResponse* _Nullable describeBackupPolicyResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeSecurityIps sync request
    @param describeSecurityIpsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeSecurityIpsResponse` the request response data model
    */
    -(NSDictionary*) describeSecurityIpsSyncWithRequest:(MongodbDescribeSecurityIpsRequest*) describeSecurityIpsRequest;

    -(void)describeSecurityIpsAsyncWithRequest:(MongodbDescribeSecurityIpsRequest*) describeSecurityIpsRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeSecurityIpsResponse* _Nullable describeSecurityIpsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    backupDownloadURL sync request
    @param backupDownloadURLRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `backupDownloadURLResponse` the request response data model
    */
    -(NSDictionary*) backupDownloadURLSyncWithRequest:(MongodbBackupDownloadURLRequest*) backupDownloadURLRequest;

    -(void)backupDownloadURLAsyncWithRequest:(MongodbBackupDownloadURLRequest*) backupDownloadURLRequest
    completionHandler:(void(^)(int statusCode,MongodbBackupDownloadURLResponse* _Nullable backupDownloadURLResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeInstances sync request
    @param describeInstancesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeInstancesResponse` the request response data model
    */
    -(NSDictionary*) describeInstancesSyncWithRequest:(MongodbDescribeInstancesRequest*) describeInstancesRequest;

    -(void)describeInstancesAsyncWithRequest:(MongodbDescribeInstancesRequest*) describeInstancesRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeInstancesResponse* _Nullable describeInstancesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteInstance sync request
    @param deleteInstanceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteInstanceResponse` the request response data model
    */
    -(NSDictionary*) deleteInstanceSyncWithRequest:(MongodbDeleteInstanceRequest*) deleteInstanceRequest;

    -(void)deleteInstanceAsyncWithRequest:(MongodbDeleteInstanceRequest*) deleteInstanceRequest
    completionHandler:(void(^)(int statusCode,MongodbDeleteInstanceResponse* _Nullable deleteInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    restoreInstance sync request
    @param restoreInstanceRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `restoreInstanceResponse` the request response data model
    */
    -(NSDictionary*) restoreInstanceSyncWithRequest:(MongodbRestoreInstanceRequest*) restoreInstanceRequest;

    -(void)restoreInstanceAsyncWithRequest:(MongodbRestoreInstanceRequest*) restoreInstanceRequest
    completionHandler:(void(^)(int statusCode,MongodbRestoreInstanceResponse* _Nullable restoreInstanceResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeFlavors sync request
    @param describeFlavorsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeFlavorsResponse` the request response data model
    */
    -(NSDictionary*) describeFlavorsSyncWithRequest:(MongodbDescribeFlavorsRequest*) describeFlavorsRequest;

    -(void)describeFlavorsAsyncWithRequest:(MongodbDescribeFlavorsRequest*) describeFlavorsRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeFlavorsResponse* _Nullable describeFlavorsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    resetPassword sync request
    @param resetPasswordRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `resetPasswordResponse` the request response data model
    */
    -(NSDictionary*) resetPasswordSyncWithRequest:(MongodbResetPasswordRequest*) resetPasswordRequest;

    -(void)resetPasswordAsyncWithRequest:(MongodbResetPasswordRequest*) resetPasswordRequest
    completionHandler:(void(^)(int statusCode,MongodbResetPasswordResponse* _Nullable resetPasswordResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createBackup sync request
    @param createBackupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createBackupResponse` the request response data model
    */
    -(NSDictionary*) createBackupSyncWithRequest:(MongodbCreateBackupRequest*) createBackupRequest;

    -(void)createBackupAsyncWithRequest:(MongodbCreateBackupRequest*) createBackupRequest
    completionHandler:(void(^)(int statusCode,MongodbCreateBackupResponse* _Nullable createBackupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyBackupPolicy sync request
    @param modifyBackupPolicyRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyBackupPolicyResponse` the request response data model
    */
    -(NSDictionary*) modifyBackupPolicySyncWithRequest:(MongodbModifyBackupPolicyRequest*) modifyBackupPolicyRequest;

    -(void)modifyBackupPolicyAsyncWithRequest:(MongodbModifyBackupPolicyRequest*) modifyBackupPolicyRequest
    completionHandler:(void(^)(int statusCode,MongodbModifyBackupPolicyResponse* _Nullable modifyBackupPolicyResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyInstanceName sync request
    @param modifyInstanceNameRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyInstanceNameResponse` the request response data model
    */
    -(NSDictionary*) modifyInstanceNameSyncWithRequest:(MongodbModifyInstanceNameRequest*) modifyInstanceNameRequest;

    -(void)modifyInstanceNameAsyncWithRequest:(MongodbModifyInstanceNameRequest*) modifyInstanceNameRequest
    completionHandler:(void(^)(int statusCode,MongodbModifyInstanceNameResponse* _Nullable modifyInstanceNameResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifySecurityIps sync request
    @param modifySecurityIpsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifySecurityIpsResponse` the request response data model
    */
    -(NSDictionary*) modifySecurityIpsSyncWithRequest:(MongodbModifySecurityIpsRequest*) modifySecurityIpsRequest;

    -(void)modifySecurityIpsAsyncWithRequest:(MongodbModifySecurityIpsRequest*) modifySecurityIpsRequest
    completionHandler:(void(^)(int statusCode,MongodbModifySecurityIpsResponse* _Nullable modifySecurityIpsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeAvailableZones sync request
    @param describeAvailableZonesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeAvailableZonesResponse` the request response data model
    */
    -(NSDictionary*) describeAvailableZonesSyncWithRequest:(MongodbDescribeAvailableZonesRequest*) describeAvailableZonesRequest;

    -(void)describeAvailableZonesAsyncWithRequest:(MongodbDescribeAvailableZonesRequest*) describeAvailableZonesRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeAvailableZonesResponse* _Nullable describeAvailableZonesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeBackups sync request
    @param describeBackupsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeBackupsResponse` the request response data model
    */
    -(NSDictionary*) describeBackupsSyncWithRequest:(MongodbDescribeBackupsRequest*) describeBackupsRequest;

    -(void)describeBackupsAsyncWithRequest:(MongodbDescribeBackupsRequest*) describeBackupsRequest
    completionHandler:(void(^)(int statusCode,MongodbDescribeBackupsResponse* _Nullable describeBackupsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteBackup sync request
    @param deleteBackupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteBackupResponse` the request response data model
    */
    -(NSDictionary*) deleteBackupSyncWithRequest:(MongodbDeleteBackupRequest*) deleteBackupRequest;

    -(void)deleteBackupAsyncWithRequest:(MongodbDeleteBackupRequest*) deleteBackupRequest
    completionHandler:(void(^)(int statusCode,MongodbDeleteBackupResponse* _Nullable deleteBackupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    mongodb common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) mongodbCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)mongodbCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* MongodbClient_h */

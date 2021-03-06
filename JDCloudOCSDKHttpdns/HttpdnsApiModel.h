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

账户
httpdns OpenAPI账户接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef HttpdnsApiModel_h
#define HttpdnsApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKHttpdns/HttpdnsModel.h>


@interface HttpdnsGetDomainsRequest:JDCloudRequest

/// 当前页数，起始值为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageIndex;
/// 分页查询时设置的每页行数
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 关键字，按照”%domainName%”模式搜索域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;
-(id) initWithRegion:(NSString *)regionId
pageIndex:(NSNumber*)pageIndex
pageSize:(NSNumber*)pageSize
domainName:(NSString*)domainName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageIndex:(NSNumber*)pageIndex
pageSize:(NSNumber*)pageSize
domainName:(NSString*)domainName;

@end

@interface HttpdnsDelDomainsRequest:JDCloudRequest

/// 需要删除的域名数组
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  domainNames;
-(id) initWithRegion:(NSString *)regionId
domainNames:(NSArray<NSString*>*)domainNames;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
domainNames:(NSArray<NSString*>*)domainNames;

@end

@interface HttpdnsAddDomainsRequest:JDCloudRequest

/// 需要添加的域名数组
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  domainNames;
-(id) initWithRegion:(NSString *)regionId
domainNames:(NSArray<NSString*>*)domainNames;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
domainNames:(NSArray<NSString*>*)domainNames;

@end

@interface HttpdnsOperateKeyRequest:JDCloudRequest

/// 操作类型, create创建, enable启用, disable禁用
@property (strong,nonatomic,nonnull)  NSString*  action;
/// 操作的密钥
@property (strong,nonatomic,nonnull)  NSString*  key;
-(id) initWithRegion:(NSString *)regionId
action:(NSString*)action
key:(NSString*)key;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
action:(NSString*)action
key:(NSString*)key;

@end

@interface HttpdnsGetDomainsResult : NSObject
/// 分页查询返回的域名数据结构
 @property (strong,nonatomic,nonnull)  DomainData*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithData:(DomainData*) data;
@end

@interface HttpdnsGetDomainsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsGetDomainsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsGetDomainsResult*) result;
@end

@interface HttpdnsAddDomainsResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface HttpdnsDelDomainsResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface HttpdnsDelDomainsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsDelDomainsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsDelDomainsResult*) result;
@end

@interface HttpdnsAddDomainsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsAddDomainsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsAddDomainsResult*) result;
@end

@interface HttpdnsOperateKeyResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface HttpdnsCreateAccountResult : NSObject
/// 开户成功后得到的账户结构
 @property (strong,nonatomic,nonnull)  Account*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithData:(Account*) data;
@end

@interface HttpdnsCreateAccountResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsCreateAccountResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsCreateAccountResult*) result;
@end

@interface HttpdnsGetAccountInfoResult : NSObject
/// 查询得到的账户结构
 @property (strong,nonatomic,nonnull)  Account*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithData:(Account*) data;
@end

@interface HttpdnsCreateAccountRequest:JDCloudRequest

@end

@interface HttpdnsGetAccountInfoRequest:JDCloudRequest

@end

@interface HttpdnsGetAccountIdResult : NSObject
/// 查询得到的账户ID结构
 @property (strong,nonatomic,nonnull)  AccountId*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithData:(AccountId*) data;
@end

@interface HttpdnsGetAccountIdResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsGetAccountIdResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsGetAccountIdResult*) result;
@end

@interface HttpdnsGetAccountIdRequest:JDCloudRequest

@end

@interface HttpdnsGetAccountInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsGetAccountInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsGetAccountInfoResult*) result;
@end

@interface HttpdnsOperateKeyResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property HttpdnsOperateKeyResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(HttpdnsOperateKeyResult*) result;
@end

#endif /* HttpdnsApiModel_h */

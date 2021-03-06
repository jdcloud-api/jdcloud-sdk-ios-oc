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

Image
容器镜像服务镜像相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef ContainerregistryApiModel_h
#define ContainerregistryApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKCommon/JDCloudOCSDKCommon.h>
#import <JDCloudOCSDKContainerregistry/ContainerregistryModel.h>


@interface ContainerregistryCheckRegistryNameResult : NSObject
/// 表示用户指定的注册表是否通过校验， 0 通过 1 名称为空 2 不符合规范 3 重名
 @property (strong,nonatomic,nonnull)  NSNumber*  code;
/// code字段非零时，给出详细原因。
 @property (strong,nonatomic,nonnull)  NSString*  reason;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithCode:(NSNumber*) code

    reason:(NSString*)reason;
@end

@interface ContainerregistryCheckRegistryNameRequest:JDCloudRequest

/// 待验证的注册表名。
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
registryName:(NSString*)registryName;

@end

@interface ContainerregistryDeleteRegistryRequest:JDCloudRequest

/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
registryName:(NSString*)registryName;

@end

@interface ContainerregistryDescribeRegistryRequest:JDCloudRequest

/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
registryName:(NSString*)registryName;

@end

@interface ContainerregistryCreateRegistryRequest:JDCloudRequest

/// 用户定义的registry名称。&lt;br&gt; DNS兼容registry名称规则如下：
   ///  &lt;br&gt; 不可为空，且不能超过32字符 &lt;br&gt; 以小写字母开始和结尾，支持使用小写字母、数字、中划线(-)
   /// 
@property (strong,nonatomic,nonnull)  NSString*  registryName;
/// 注册表描述，&lt;a href&#x3D;&quot;https://www.jdcloud.com/help/detail/3870/isCatalog/1&quot;&gt;参考公共参数规范&lt;/a&gt;。
   /// 
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
-(id) initWithRegion:(NSString *)regionId
registryName:(NSString*)registryName
descriptionValue:(NSString*)descriptionValue;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
registryName:(NSString*)registryName
descriptionValue:(NSString*)descriptionValue;

@end

@interface ContainerregistryGetAuthorizationTokenRequest:JDCloudRequest

/// issue新token的过期时间, 可选参数为新生成令牌的过期时间，最大值为24小时，最小值为1小时，为空则默认为12小时过期时间。
   /// 
@property (strong,nonatomic,nonnull)  NSNumber*  expiredAfterHours;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
expiredAfterHours:(NSNumber*)expiredAfterHours
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
expiredAfterHours:(NSNumber*)expiredAfterHours
registryName:(NSString*)registryName;

@end

@interface ContainerregistryReleaseAuthorizationTokenRequest:JDCloudRequest

/// 准备释放的 token ID，功能为指定token释放。
@property (strong,nonatomic,nonnull)  NSString*  authorizationToken;
/// true 表示强制删除用户当前registry下所有有效token的标志；false 表示删除所有有效token。
@property (strong,nonatomic,nonnull)  NSNumber*  forceAll;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
authorizationToken:(NSString*)authorizationToken
forceAll:(NSNumber*)forceAll
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
authorizationToken:(NSString*)authorizationToken
forceAll:(NSNumber*)forceAll
registryName:(NSString*)registryName;

@end

@interface ContainerregistryGetAuthorizationTokenResult : NSObject
/// AuthorizationToken
 @property (strong,nonatomic,nonnull)  NSString*  authorizationToken;
/// LoginCmdLine
 @property (strong,nonatomic,nonnull)  NSString*  loginCmdLine;
/// ExpiresAt
 @property (strong,nonatomic,nonnull)  NSString*  expiresAt;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAuthorizationToken:(NSString*) authorizationToken

    loginCmdLine:(NSString*)loginCmdLine

    expiresAt:(NSString*)expiresAt;
@end

@interface ContainerregistryDeleteRepositoryRequest:JDCloudRequest

/// 是否强制删除有镜像的镜像仓库
@property (strong,nonatomic,nonnull)  NSNumber*  force;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
/// 镜像仓库名称
@property (strong,nonatomic,nonnull)  NSString*  repositoryName;
-(id) initWithRegion:(NSString *)regionId
force:(NSNumber*)force
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
force:(NSNumber*)force
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

@end

@interface ContainerregistryCheckRepositoryNameRequest:JDCloudRequest

/// 注册表名。
@property (strong,nonatomic,nonnull)  NSString*  registryName;
/// 待验证的镜像仓库名。
@property (strong,nonatomic,nonnull)  NSString*  repositoryName;
-(id) initWithRegion:(NSString *)regionId
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

@end

@interface ContainerregistryCreateRepositoryRequest:JDCloudRequest

/// 镜像仓库名称。
   /// 可以专有模式如默认命名空间nginx-web-app；或者和命名空间一起将多个仓库聚集在一起如 project-a/nginx-web-app。
   /// 
@property (strong,nonatomic,nonnull)  NSString*  repositoryName;
/// 注册表描述，&lt;a href&#x3D;&quot;https://www.jdcloud.com/help/detail/3870/isCatalog/1&quot;&gt;参考公共参数规范&lt;/a&gt;。
   /// 
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
repositoryName:(NSString*)repositoryName
descriptionValue:(NSString*)descriptionValue
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
repositoryName:(NSString*)repositoryName
descriptionValue:(NSString*)descriptionValue
registryName:(NSString*)registryName;

@end

@interface ContainerregistryCheckRepositoryNameResult : NSObject
/// 表示用户指定的镜像仓库名是否通过校验， 0 通过 1 名称为空 2 不符合规范 3 重名
 @property (strong,nonatomic,nonnull)  NSNumber*  code;
/// code字段非零时，给出详细原因。
 @property (strong,nonatomic,nonnull)  NSString*  reason;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithCode:(NSNumber*) code

    reason:(NSString*)reason;
@end

@interface ContainerregistryDeleteImageRequest:JDCloudRequest

/// sha256哈希，image manifest的digest.
@property (strong,nonatomic,nonnull)  NSString*  imageDigest;
/// image使用的tag
@property (strong,nonatomic,nonnull)  NSString*  imageTag;
/// 枚举中的一个值，如 tagged 和 untagged.
@property (strong,nonatomic,nonnull)  NSString*  imageTagStatus;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
/// 镜像仓库表名称
@property (strong,nonatomic,nonnull)  NSString*  repositoryName;
-(id) initWithRegion:(NSString *)regionId
imageDigest:(NSString*)imageDigest
imageTag:(NSString*)imageTag
imageTagStatus:(NSString*)imageTagStatus
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
imageDigest:(NSString*)imageDigest
imageTag:(NSString*)imageTag
imageTagStatus:(NSString*)imageTagStatus
registryName:(NSString*)registryName
repositoryName:(NSString*)repositoryName;

@end

@interface ContainerregistryDescribeQuotasRequest:JDCloudRequest

/// resourceTypes - 资源类型，暂时只支持 [registry, repository]，支持同时查询两种配额。
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters;

@end

@interface ContainerregistryDescribeQuotasResult : NSObject
/// Quotas
 @property (strong,nonatomic,nonnull)  NSArray<ContainerregistryQuota*>*  quotas;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithQuotas:(NSArray<ContainerregistryQuota*>*) quotas;
@end

@interface ContainerregistryDescribeQuotasResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeQuotasResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeQuotasResult*) result;
@end

@interface ContainerregistryCreateRegistryResult : NSObject
/// Registry
 @property (strong,nonatomic,nonnull)  Registry*  registry;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithRegistry:(Registry*) registry;
@end

@interface ContainerregistryCreateRegistryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryCreateRegistryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryCreateRegistryResult*) result;
@end

@interface ContainerregistryDescribeRegistriesRequest:JDCloudRequest

@end

@interface ContainerregistryDescribeRegistriesResult : NSObject
/// Registries
 @property (strong,nonatomic,nonnull)  NSArray<Registry*>*  registries;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithRegistries:(NSArray<Registry*>*) registries;
@end

@interface ContainerregistryDeleteRegistryResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface ContainerregistryDeleteRegistryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDeleteRegistryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDeleteRegistryResult*) result;
@end

@interface ContainerregistryDescribeRegistryResult : NSObject
/// Registry
 @property (strong,nonatomic,nonnull)  Registry*  registry;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithRegistry:(Registry*) registry;
@end

@interface ContainerregistryDescribeRegistryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeRegistryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeRegistryResult*) result;
@end

@interface ContainerregistryDescribeRegistriesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeRegistriesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeRegistriesResult*) result;
@end

@interface ContainerregistryCheckRegistryNameResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryCheckRegistryNameResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryCheckRegistryNameResult*) result;
@end

@interface ContainerregistryDescribeAuthorizationTokensResult : NSObject
/// AuthorizationTokens
 @property (strong,nonatomic,nonnull)  NSArray<AuthorizationData*>*  authorizationTokens;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAuthorizationTokens:(NSArray<AuthorizationData*>*) authorizationTokens

    totalCount:(NSNumber*)totalCount;
@end

@interface ContainerregistryGetAuthorizationTokenResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryGetAuthorizationTokenResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryGetAuthorizationTokenResult*) result;
@end

@interface ContainerregistryDescribeAuthorizationTokensResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeAuthorizationTokensResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeAuthorizationTokensResult*) result;
@end

@interface ContainerregistryDescribeAuthorizationTokensRequest:JDCloudRequest

/// token - 令牌 ID，支持多个
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 注册表名称
@property (strong,nonatomic,nonnull)  NSString*  registryName;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
registryName:(NSString*)registryName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
registryName:(NSString*)registryName;

@end

@interface ContainerregistryReleaseAuthorizationTokenResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface ContainerregistryReleaseAuthorizationTokenResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryReleaseAuthorizationTokenResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryReleaseAuthorizationTokenResult*) result;
@end

@interface ContainerregistryCheckRepositoryNameResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryCheckRepositoryNameResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryCheckRepositoryNameResult*) result;
@end

@interface ContainerregistryCreateRepositoryResult : NSObject
/// Repository
 @property (strong,nonatomic,nonnull)  RepositoryShort*  repository;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithRepository:(RepositoryShort*) repository;
@end

@interface ContainerregistryDescribeRepositoriesResult : NSObject
/// Repositories
 @property (strong,nonatomic,nonnull)  NSArray<Repository*>*  repositories;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithRepositories:(NSArray<Repository*>*) repositories

    totalCount:(NSNumber*)totalCount;
@end

@interface ContainerregistryDescribeRepositoriesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeRepositoriesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeRepositoriesResult*) result;
@end

@interface ContainerregistryDeleteRepositoryResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface ContainerregistryDeleteRepositoryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDeleteRepositoryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDeleteRepositoryResult*) result;
@end

@interface ContainerregistryCreateRepositoryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryCreateRepositoryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryCreateRepositoryResult*) result;
@end

@interface ContainerregistryDescribeRepositoriesRequest:JDCloudRequest

/// name - 仓库名称，模糊匹配，支持单个
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
/// 注册表名
@property (strong,nonatomic,nonnull)  NSString*  registryName;
/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters
registryName:(NSString*)registryName
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters
registryName:(NSString*)registryName
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

@end

@interface ContainerregistryDescribeImagesResult : NSObject
/// ImageDetails
 @property (strong,nonatomic,nonnull)  NSArray<ImageDetail*>*  imageDetails;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithImageDetails:(NSArray<ImageDetail*>*) imageDetails

    totalCount:(NSNumber*)totalCount;
@end

@interface ContainerregistryDeleteImageResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface ContainerregistryDescribeImagesRequest:JDCloudRequest

/// registryName - 镜像仓储名称 
   /// repositoryName - 镜像库名称 
   /// imageDigest - 镜像哈希值 
   /// imageTag - 镜像标签 
   /// tagStatus - 打标TAGGED或没打标UNTAGGED 
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

@end

@interface ContainerregistryDeleteImageResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDeleteImageResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDeleteImageResult*) result;
@end

@interface ContainerregistryDescribeImagesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property ContainerregistryDescribeImagesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(ContainerregistryDescribeImagesResult*) result;
@end

#endif /* ContainerregistryApiModel_h */

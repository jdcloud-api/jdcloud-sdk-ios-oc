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





Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

 

#ifndef ResourcetagModel_h
#define ResourcetagModel_h

@interface ResourcetagTagFilter :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  key;

/// 标签值列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  values;

/// 操作选项, 默认为eq, 表示精确匹配
@property (strong,nonatomic,nonnull)  NSString*  operatorValue;


-(id) initWithKey:(NSString*) key
    values:(NSArray<NSString*>*)values
    operatorValue:(NSString*)operatorValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResetTagResourcesInfo :NSObject

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 批量替换标签状态
   /// 0: 批量替换标签成功
   /// 1: 批量替换标签失败
   /// 
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 批量替换标签结果描述
   /// 批量替换标签成功时msg为操作成功
   /// 批量替换标签失败时msg为失败的原因
   /// 
@property (strong,nonatomic,nonnull)  NSString*  msg;


-(id) initWithResourceId:(NSString*) resourceId
    status:(NSNumber*)status
    msg:(NSString*)msg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourcesMap :NSObject

/// 产品线名称列表
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 资源id列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  resourceId;


-(id) initWithServiceCode:(NSString*) serviceCode
    resourceId:(NSArray<NSString*>*)resourceId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Tag :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  key;

/// 标签值
@property (strong,nonatomic,nonnull)  NSString*  value;


-(id) initWithKey:(NSString*) key
    value:(NSString*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagsResourcesInfo :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  tagKey;

/// 标签值
@property (strong,nonatomic,nonnull)  NSString*  tagValue;

/// 标签绑定的云主机资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  vmResourceCount;

/// 标签绑定的云硬盘资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  diskResourceCount;

/// 标签绑定的数据库SQL Server资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  sqlServerResourceCount;

/// 标签绑定的MongoDB资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  mongodbResourceCount;

/// 标签绑定的公网IP资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  ipResourceCount;

/// 标签绑定的ElasticSearch资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  esResourceCount;

/// 标签绑定的消息队列JCQ资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  jcqResourceCount;

/// 标签绑定的分布式关系型数据库DRDS资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  drdsResourceCount;

/// 标签绑定的Memcached资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  memcachedResourceCount;

/// 标签绑定的云缓存Redis资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  redisResourceCount;

/// 标签绑定的数据库(MySQL)资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  databaseResourceCount;

/// 标签绑定的数据库[只读]资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  dbRoResourceCount;

/// 标签绑定的Percona资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  perconaResourceCount;

/// 标签绑定的MariaDB资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  mariadbResourceCount;

/// 标签绑定的MariaDB[只读]资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  mariadbRoResourceCount;

/// 标签绑定的PostgreSQL资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  pgResourceCount;

/// 标签绑定的CDN资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  cdnResourceCount;

/// 标签绑定的原生容器实例资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  nativecontainerResourceCount;

/// 标签绑定的原生容器Pod资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  podResourceCount;

/// 标签绑定的队列服务资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  jqsResourceCount;

/// 标签绑定的云文件服务资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  zfsResourceCount;

/// 标签绑定的Kubernetes集群资源个数
@property (strong,nonatomic,nonnull)  NSNumber*  kubernetesNodegroupResourceCount;


-(id) initWithTagKey:(NSString*) tagKey
    tagValue:(NSString*)tagValue
    vmResourceCount:(NSNumber*)vmResourceCount
    diskResourceCount:(NSNumber*)diskResourceCount
    sqlServerResourceCount:(NSNumber*)sqlServerResourceCount
    mongodbResourceCount:(NSNumber*)mongodbResourceCount
    ipResourceCount:(NSNumber*)ipResourceCount
    esResourceCount:(NSNumber*)esResourceCount
    jcqResourceCount:(NSNumber*)jcqResourceCount
    drdsResourceCount:(NSNumber*)drdsResourceCount
    memcachedResourceCount:(NSNumber*)memcachedResourceCount
    redisResourceCount:(NSNumber*)redisResourceCount
    databaseResourceCount:(NSNumber*)databaseResourceCount
    dbRoResourceCount:(NSNumber*)dbRoResourceCount
    perconaResourceCount:(NSNumber*)perconaResourceCount
    mariadbResourceCount:(NSNumber*)mariadbResourceCount
    mariadbRoResourceCount:(NSNumber*)mariadbRoResourceCount
    pgResourceCount:(NSNumber*)pgResourceCount
    cdnResourceCount:(NSNumber*)cdnResourceCount
    nativecontainerResourceCount:(NSNumber*)nativecontainerResourceCount
    podResourceCount:(NSNumber*)podResourceCount
    jqsResourceCount:(NSNumber*)jqsResourceCount
    zfsResourceCount:(NSNumber*)zfsResourceCount
    kubernetesNodegroupResourceCount:(NSNumber*)kubernetesNodegroupResourceCount;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FailedResourcesMap :NSObject

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源与标签绑定或解绑失败的原因
@property (strong,nonatomic,nonnull)  NSString*  msg;


-(id) initWithResourceId:(NSString*) resourceId
    msg:(NSString*)msg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagCostAttrOperation :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  tagKey;

/// 0:表示取消费用属性 1:表示设置费用属性
@property (strong,nonatomic,nonnull)  NSNumber*  operate;


-(id) initWithTagKey:(NSString*) tagKey
    operate:(NSNumber*)operate;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CostAttrTagKeyInfo :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  tagKey;

/// 费用属性是否设置
@property (strong,nonatomic,nonnull)  NSNumber*  costAttr;

/// 标签键是否有效
@property (strong,nonatomic,nonnull)  NSNumber*  tagKeyValid;


-(id) initWithTagKey:(NSString*) tagKey
    costAttr:(NSNumber*)costAttr
    tagKeyValid:(NSNumber*)tagKeyValid;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PageInfo :NSObject

/// 当前页码
@property (strong,nonatomic,nonnull)  NSNumber*  currentPage;

/// 每页记录数
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;

/// 总记录数
@property (strong,nonatomic,nonnull)  NSNumber*  totalRecord;

/// 总页数
@property (strong,nonatomic,nonnull)  NSNumber*  totalPage;


-(id) initWithCurrentPage:(NSNumber*) currentPage
    pageSize:(NSNumber*)pageSize
    totalRecord:(NSNumber*)totalRecord
    totalPage:(NSNumber*)totalPage;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagValuesResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 标签值数组
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  tagValues;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    tagValues:(NSArray<NSString*>*)tagValues;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagCostAttrOperateInfo :NSObject

/// 标签键
@property (strong,nonatomic,nonnull)  NSString*  tagKey;

/// 操作费用属性是否成功
@property (strong,nonatomic,nonnull)  NSNumber*  success;

/// 操作费用属性的结果信息
@property (strong,nonatomic,nonnull)  NSString*  msg;


-(id) initWithTagKey:(NSString*) tagKey
    success:(NSNumber*)success
    msg:(NSString*)msg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagKeysResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 标签键数组
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  tagKeys;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    tagKeys:(NSArray<NSString*>*)tagKeys;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagValuesReqVo :NSObject

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;


-(id) initWithTagFilters:(NSArray<ResourcetagTagFilter*>*) tagFilters;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Resource2TagsMap :NSObject

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 标签数组(可以传入空数组)
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithResourceId:(NSString*) resourceId
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FrontResourceTagMapping :NSObject

/// jrn本期不用, 默认为null
@property (strong,nonatomic,nonnull)  NSString*  jrn;

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 产品线名称
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 资源绑定的标签数组
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 可用区
@property (strong,nonatomic,nonnull)  NSString*  az;


-(id) initWithJrn:(NSString*) jrn
    resourceId:(NSString*)resourceId
    serviceCode:(NSString*)serviceCode
    tags:(NSArray<Tag*>*)tags
    resourceName:(NSString*)resourceName
    az:(NSString*)az;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagResourcesResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 打标失败列表
@property (strong,nonatomic,nonnull)  NSArray<FailedResourcesMap*>*  failedResourcesMap;

/// 资源与标签绑定成功的次数
@property (strong,nonatomic,nonnull)  NSNumber*  successCount;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    failedResourcesMap:(NSArray<FailedResourcesMap*>*)failedResourcesMap
    successCount:(NSNumber*)successCount;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagResourcesReqVo :NSObject

/// 对指定产品线指定资源打标签, 目前只支持同一产品线的资源绑定标签
@property (strong,nonatomic,nonnull)  NSArray<ResourcesMap*>*  resources;

/// 标签集合
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithResources:(NSArray<ResourcesMap*>*) resources
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagsResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 标签数组
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FrontResourcesReqVo :NSObject

/// 产品线名称列表, 目前只支持查询同一条产品线的资源
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceCodes;

/// 资源id列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  resourceIds;

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;

/// 每页记录数大小, 默认为20条记录每页, 上限为500条记录每页
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;

/// 当前页码, 默认为第一页
@property (strong,nonatomic,nonnull)  NSNumber*  currentPage;


-(id) initWithServiceCodes:(NSArray<NSString*>*) serviceCodes
    resourceIds:(NSArray<NSString*>*)resourceIds
    tagFilters:(NSArray<ResourcetagTagFilter*>*)tagFilters
    pageSize:(NSNumber*)pageSize
    currentPage:(NSNumber*)currentPage;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface GetCostAttrTagKeysResult :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 标签键及其费用属性相关信息
@property (strong,nonatomic,nonnull)  NSArray<CostAttrTagKeyInfo*>*  costAttrTagKeyInfos;

/// 分页信息
@property (strong,nonatomic,nonnull)  PageInfo*  pageInfo;


-(id) initWithPin:(NSString*) pin
    costAttrTagKeyInfos:(NSArray<CostAttrTagKeyInfo*>*)costAttrTagKeyInfos
    pageInfo:(PageInfo*)pageInfo;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UnTagResourcesResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 解绑失败列表
@property (strong,nonatomic,nonnull)  NSArray<FailedResourcesMap*>*  failedResourcesMap;

/// 资源与标签解绑成功的次数
@property (strong,nonatomic,nonnull)  NSNumber*  successCount;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    failedResourcesMap:(NSArray<FailedResourcesMap*>*)failedResourcesMap
    successCount:(NSNumber*)successCount;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FrontResourcesResult :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 标签资源信息数组
@property (strong,nonatomic,nonnull)  NSArray<FrontResourceTagMapping*>*  frontResourceTagMapping;

/// 分页信息
@property (strong,nonatomic,nonnull)  PageInfo*  pageInfo;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    frontResourceTagMapping:(NSArray<FrontResourceTagMapping*>*)frontResourceTagMapping
    pageInfo:(PageInfo*)pageInfo;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FrontTagsResourcesInfo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 标签列表信息
@property (strong,nonatomic,nonnull)  NSArray<TagsResourcesInfo*>*  tagsResourcesInfos;

/// 分页信息
@property (strong,nonatomic,nonnull)  PageInfo*  pageInfo;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    tagsResourcesInfos:(NSArray<TagsResourcesInfo*>*)tagsResourcesInfos
    pageInfo:(PageInfo*)pageInfo;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagCostAttrOperateResult :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 标签键操作费用属性结果信息
@property (strong,nonatomic,nonnull)  NSArray<TagCostAttrOperateInfo*>*  operateInfos;


-(id) initWithPin:(NSString*) pin
    operateInfos:(NSArray<TagCostAttrOperateInfo*>*)operateInfos;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UnTagResourcesReqVo :NSObject

/// 对指定产品线指定资源进行标签解绑, 目前只支持同一产品线的资源解绑标签
@property (strong,nonatomic,nonnull)  NSArray<ResourcesMap*>*  resources;

/// 标签数组
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithResources:(NSArray<ResourcesMap*>*) resources
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagCostAttrOperateReq :NSObject

/// 标签键操作费用属性信息
@property (strong,nonatomic,nonnull)  NSArray<TagCostAttrOperation*>*  operations;


-(id) initWithOperations:(NSArray<TagCostAttrOperation*>*) operations;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResetTagResourcesResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 批量替换标签结果
@property (strong,nonatomic,nonnull)  NSArray<ResetTagResourcesInfo*>*  resetTagResourcesInfos;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    resetTagResourcesInfos:(NSArray<ResetTagResourcesInfo*>*)resetTagResourcesInfos;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceTagMapping :NSObject

/// jrn本期不用, 默认为null
@property (strong,nonatomic,nonnull)  NSString*  jrn;

/// 产品线名称
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 该资源绑定的标签组成的数组
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithJrn:(NSString*) jrn
    serviceCode:(NSString*)serviceCode
    resourceId:(NSString*)resourceId
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceResVo :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 地域名称
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 资源标签详情列表
@property (strong,nonatomic,nonnull)  NSArray<ResourceTagMapping*>*  resourceTagMappingList;


-(id) initWithPin:(NSString*) pin
    region:(NSString*)region
    resourceTagMappingList:(NSArray<ResourceTagMapping*>*)resourceTagMappingList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceReqVo :NSObject

/// 产品线名称列表
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceCodes;

/// 资源id列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  resourceIds;

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;

/// 排序依据
@property (strong,nonatomic,nonnull)  NSString*  orderCondition;

/// 排序方向, 取值为ASC, DESC
@property (strong,nonatomic,nonnull)  NSString*  descOrAsc;

/// 每页记录数
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;

/// 当前页码
@property (strong,nonatomic,nonnull)  NSNumber*  currentPage;


-(id) initWithServiceCodes:(NSArray<NSString*>*) serviceCodes
    resourceIds:(NSArray<NSString*>*)resourceIds
    tagFilters:(NSArray<ResourcetagTagFilter*>*)tagFilters
    orderCondition:(NSString*)orderCondition
    descOrAsc:(NSString*)descOrAsc
    pageSize:(NSNumber*)pageSize
    currentPage:(NSNumber*)currentPage;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface QueryResourceReqVo :NSObject

/// 产品线名称列表
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;

/// 操作项(多个tagFilter之间支持and或or关系, 默认and关系)
@property (strong,nonatomic,nonnull)  NSString*  operatorValue;


-(id) initWithServiceCode:(NSString*) serviceCode
    tagFilters:(NSArray<ResourcetagTagFilter*>*)tagFilters
    operatorValue:(NSString*)operatorValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagKeysReqVo :NSObject

/// 产品线名称列表
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceCodes;

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;


-(id) initWithServiceCodes:(NSArray<NSString*>*) serviceCodes
    tagFilters:(NSArray<ResourcetagTagFilter*>*)tagFilters;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TagsReqVo :NSObject

/// 产品线名称列表
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceCodes;

/// 搜索类型, 取值为all和cost &lt;br/&gt;
   /// all: 表示搜索全部类型的标签, 默认值, 可不传
   /// cost: 表示只搜索具有费用属性的标签
   /// 
@property (strong,nonatomic,nonnull)  NSString*  kind;

/// 标签过滤列表
@property (strong,nonatomic,nonnull)  NSArray<ResourcetagTagFilter*>*  tagFilters;


-(id) initWithServiceCodes:(NSArray<NSString*>*) serviceCodes
    kind:(NSString*)kind
    tagFilters:(NSArray<ResourcetagTagFilter*>*)tagFilters;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResetTagResourcesReqVo :NSObject

/// 产品线名称列表, 目前仅支持对同一个serviceCode下的资源进行批量标签替换
   /// 标签系统支持的产品线名称如下
   /// - vm               disk        sqlserver  es          mongodb               ip
   /// - memcached        redis       drds       rds         database              db_ro
   /// - percona          percona_ro  mariadb    mariadb_ro  pg                    cdn
   /// - nativecontainer  pod         zfs        jqs         kubernetesNodegroup   jcq
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceCodes;

/// 由资源id和替换后的标签构成的数组
@property (strong,nonatomic,nonnull)  NSArray<Resource2TagsMap*>*  resourceTags;


-(id) initWithServiceCodes:(NSArray<NSString*>*) serviceCodes
    resourceTags:(NSArray<Resource2TagsMap*>*)resourceTags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* ResourcetagModel_h */

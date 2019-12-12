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

 

#ifndef IotcloudgatewayModel_h
#define IotcloudgatewayModel_h

@interface OssSpec :NSObject

/// OSS AK
@property (strong,nonatomic,nonnull)  NSString*  oss_ak;

/// OSS SK
@property (strong,nonatomic,nonnull)  NSString*  oss_sk;

/// OSS region
@property (strong,nonatomic,nonnull)  NSString*  oss_region;

/// OSS endpoint
@property (strong,nonatomic,nonnull)  NSString*  oss_endpoint;

/// OSS bucket
@property (strong,nonatomic,nonnull)  NSString*  oss_bucket;


-(id) initWithOss_ak:(NSString*) oss_ak
    oss_sk:(NSString*)oss_sk
    oss_region:(NSString*)oss_region
    oss_endpoint:(NSString*)oss_endpoint
    oss_bucket:(NSString*)oss_bucket;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwAuthSpec :NSObject

/// 产品key
@property (strong,nonatomic,nonnull)  NSString*  productKey;

/// 设备IDENT
@property (strong,nonatomic,nonnull)  NSString*  deviceIdent;

/// 设备密钥
@property (strong,nonatomic,nonnull)  NSString*  deviceSecret;


-(id) initWithProductKey:(NSString*) productKey
    deviceIdent:(NSString*)deviceIdent
    deviceSecret:(NSString*)deviceSecret;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ReplicaSpec :NSObject

/// 副本集名称
@property (strong,nonatomic,nonnull)  NSString*  rsname;

/// 副本数
@property (strong,nonatomic,nonnull)  NSNumber*  replica;


-(id) initWithRsname:(NSString*) rsname
    replica:(NSNumber*)replica;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DeviceControlSpec :NSObject

/// 请求ID
@property (strong,nonatomic,nonnull)  NSString*  request_id;

/// 设备列表
@property (strong,nonatomic,nonnull)  NSString*  peers;

/// 设备指令串base64
@property (strong,nonatomic,nonnull)  NSString*  br_msg;


-(id) initWithRequest_id:(NSString*) request_id
    peers:(NSString*)peers
    br_msg:(NSString*)br_msg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Instance :NSObject

/// 实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;

/// 实例版本
@property (strong,nonatomic,nonnull)  NSString*  instanceVersion;

/// 所在地域
@property (strong,nonatomic,nonnull)  NSString*  instanceRegion;

/// 实例状态，running：运行，error：错误，creating：创建中，changing：变配中
@property (strong,nonatomic,nonnull)  NSString*  instanceStatus;

/// 实例硬件配置规格 例如:2C4G20G
@property (strong,nonatomic,nonnull)  NSString*  instanceFlavor;

/// az信息
@property (strong,nonatomic,nonnull)  NSString*  azId;

/// 所属VPC的ID
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 所属子网的ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 下行控制管理域名和设备上行链接的外网域名
@property (strong,nonatomic,nonnull)  NSString*  exposedDomain;

/// 节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  replica;

/// 云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  cloudstorage;

/// 实例服务配置
@property (strong,nonatomic,nonnull)  NSString*  serviceConfig;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 网关设备ID
@property (strong,nonatomic,nonnull)  NSString*  gw_dev_id;

/// 网关子设备数
@property (strong,nonatomic,nonnull)  NSNumber*  gw_dev_num;

/// 计费类型
@property (strong,nonatomic,nonnull)  NSNumber*  chargeType;

/// 计费过期时间
@property (strong,nonatomic,nonnull)  NSString*  chargeExpired;


-(id) initWithInstanceId:(NSString*) instanceId
    instanceName:(NSString*)instanceName
    instanceVersion:(NSString*)instanceVersion
    instanceRegion:(NSString*)instanceRegion
    instanceStatus:(NSString*)instanceStatus
    instanceFlavor:(NSString*)instanceFlavor
    azId:(NSString*)azId
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId
    exposedDomain:(NSString*)exposedDomain
    replica:(NSNumber*)replica
    cloudstorage:(NSNumber*)cloudstorage
    serviceConfig:(NSString*)serviceConfig
    createTime:(NSString*)createTime
    gw_dev_id:(NSString*)gw_dev_id
    gw_dev_num:(NSNumber*)gw_dev_num
    chargeType:(NSNumber*)chargeType
    chargeExpired:(NSString*)chargeExpired;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Resource :NSObject

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;


-(id) initWithResourceId:(NSString*) resourceId
    resourceName:(NSString*)resourceName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface NewInstanceSpec :NSObject

/// 可用区ID， 如果两个可用区一样，也需输入两个azId
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  azId;

/// AZ1实例硬件规格
@property (strong,nonatomic,nonnull)  NSString*  az1flavor;

/// AZ1节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  az1replica;

/// AZ1云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  az1storagesize;

/// AZ2实例硬件规格
@property (strong,nonatomic,nonnull)  NSString*  az2flavor;

/// AZ2节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  az2replica;

/// AZ2云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  az2storagesize;


-(id) initWithAzId:(NSArray<NSString*>*) azId
    az1flavor:(NSString*)az1flavor
    az1replica:(NSNumber*)az1replica
    az1storagesize:(NSNumber*)az1storagesize
    az2flavor:(NSString*)az2flavor
    az2replica:(NSNumber*)az2replica
    az2storagesize:(NSNumber*)az2storagesize;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Erpinstance :NSObject

/// 用户Pin
@property (strong,nonatomic,nonnull)  NSString*  userPin;

/// 实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;

/// 实例版本
@property (strong,nonatomic,nonnull)  NSString*  instanceVersion;

/// 所在地域
@property (strong,nonatomic,nonnull)  NSString*  instanceRegion;

/// 实例状态，running：运行，error：错误，creating：创建中，changing：变配中
@property (strong,nonatomic,nonnull)  NSString*  instanceStatus;

/// 实例硬件配置规格 例如:2C4G20G
@property (strong,nonatomic,nonnull)  NSString*  instanceFlavor;

/// az信息
@property (strong,nonatomic,nonnull)  NSString*  azId;

/// 所属VPC的ID
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 所属子网的ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 下行控制管理域名和设备上行链接的外网域名
@property (strong,nonatomic,nonnull)  NSString*  exposedDomain;

/// 节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  replica;

/// 云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  cloudstorage;

/// 实例服务配置
@property (strong,nonatomic,nonnull)  NSString*  serviceConfig;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 网关设备ID
@property (strong,nonatomic,nonnull)  NSString*  gw_dev_id;

/// 网关子设备数
@property (strong,nonatomic,nonnull)  NSNumber*  gw_dev_num;

/// 计费类型
@property (strong,nonatomic,nonnull)  NSNumber*  chargeType;

/// 计费过期时间
@property (strong,nonatomic,nonnull)  NSString*  chargeExpired;

/// 是否已经软删除
@property (strong,nonatomic,nonnull)  NSNumber*  is_deleted;


-(id) initWithUserPin:(NSString*) userPin
    instanceId:(NSString*)instanceId
    instanceName:(NSString*)instanceName
    instanceVersion:(NSString*)instanceVersion
    instanceRegion:(NSString*)instanceRegion
    instanceStatus:(NSString*)instanceStatus
    instanceFlavor:(NSString*)instanceFlavor
    azId:(NSString*)azId
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId
    exposedDomain:(NSString*)exposedDomain
    replica:(NSNumber*)replica
    cloudstorage:(NSNumber*)cloudstorage
    serviceConfig:(NSString*)serviceConfig
    createTime:(NSString*)createTime
    gw_dev_id:(NSString*)gw_dev_id
    gw_dev_num:(NSNumber*)gw_dev_num
    chargeType:(NSNumber*)chargeType
    chargeExpired:(NSString*)chargeExpired
    is_deleted:(NSNumber*)is_deleted;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FlavorSpec :NSObject

/// 副本集名称
@property (strong,nonatomic,nonnull)  NSString*  rsname;

/// 副本规格
@property (strong,nonatomic,nonnull)  NSString*  flavor;


-(id) initWithRsname:(NSString*) rsname
    flavor:(NSString*)flavor;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CloudstorageSpec :NSObject

/// 副本集名称
@property (strong,nonatomic,nonnull)  NSString*  rsname;

/// 云盘扩容大小
@property (strong,nonatomic,nonnull)  NSNumber*  size;


-(id) initWithRsname:(NSString*) rsname
    size:(NSNumber*)size;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface InstanceSpec :NSObject

/// 实例集群名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;

/// iotcloudgateway版本
@property (strong,nonatomic,nonnull)  NSString*  instanceVersion;

/// 应用服务名称
@property (strong,nonatomic,nonnull)  NSString*  serviceName;

/// 实例操作
@property (strong,nonatomic,nonnull)  NSString*  actionName;

/// 私有网络vpcId
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 子网subnetId
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 可用区ID， 如果两个可用区一样，也需输入两个azId
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  azId;

/// source type
@property (strong,nonatomic,nonnull)  NSString*  sourceType;

/// AZ1实例硬件规格
@property (strong,nonatomic,nonnull)  NSString*  az1flavor;

/// AZ1节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  az1replica;

/// AZ1云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  az1storagesize;

/// AZ2实例硬件规格
@property (strong,nonatomic,nonnull)  NSString*  az2flavor;

/// AZ2节点个数
@property (strong,nonatomic,nonnull)  NSNumber*  az2replica;

/// AZ2云硬盘大小
@property (strong,nonatomic,nonnull)  NSNumber*  az2storagesize;


-(id) initWithInstanceName:(NSString*) instanceName
    instanceVersion:(NSString*)instanceVersion
    serviceName:(NSString*)serviceName
    actionName:(NSString*)actionName
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId
    azId:(NSArray<NSString*>*)azId
    sourceType:(NSString*)sourceType
    az1flavor:(NSString*)az1flavor
    az1replica:(NSNumber*)az1replica
    az1storagesize:(NSNumber*)az1storagesize
    az2flavor:(NSString*)az2flavor
    az2replica:(NSNumber*)az2replica
    az2storagesize:(NSNumber*)az2storagesize;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface InstanceConfig :NSObject

/// 服务id
@property (strong,nonatomic,nonnull)  NSString*  serviceId;

/// 产品key
@property (strong,nonatomic,nonnull)  NSString*  productKey;

/// 产品secret
@property (strong,nonatomic,nonnull)  NSString*  productSecret;

/// 支持协议(jt808,gbt32960)
@property (strong,nonatomic,nonnull)  NSString*  protocol;

/// hub mqtt地址
@property (strong,nonatomic,nonnull)  NSString*  mqttAddr;

/// hub http地址
@property (strong,nonatomic,nonnull)  NSString*  httpAddr;

/// redis地址
@property (strong,nonatomic,nonnull)  NSString*  redisAddr;

/// 本地多媒体存放路径
@property (strong,nonatomic,nonnull)  NSString*  mediaStore;

/// 网关设备ID
@property (strong,nonatomic,nonnull)  NSString*  gwdevId;

/// 关联的OSS配置
@property (strong,nonatomic,nonnull)  OssSpec*  ossSpec;

/// 关联的DW认证配置
@property (strong,nonatomic,nonnull)  DwAuthSpec*  dwAuthSpec;


-(id) initWithServiceId:(NSString*) serviceId
    productKey:(NSString*)productKey
    productSecret:(NSString*)productSecret
    protocol:(NSString*)protocol
    mqttAddr:(NSString*)mqttAddr
    httpAddr:(NSString*)httpAddr
    redisAddr:(NSString*)redisAddr
    mediaStore:(NSString*)mediaStore
    gwdevId:(NSString*)gwdevId
    ossSpec:(OssSpec*)ossSpec
    dwAuthSpec:(DwAuthSpec*)dwAuthSpec;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* IotcloudgatewayModel_h */

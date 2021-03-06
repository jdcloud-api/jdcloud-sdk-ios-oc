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

 

#ifndef DiskModel_h
#define DiskModel_h
#import <JDCloudOCSDKCharge/JDCloudOCSDKCharge.h>

@interface DiskQuota :NSObject

/// 配额
@property (strong,nonatomic,nonnull)  NSNumber*  limit;

/// 已使用的数目
@property (strong,nonatomic,nonnull)  NSNumber*  used;


-(id) initWithLimit:(NSNumber*) limit
    used:(NSNumber*)used;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DiskTagFilter :NSObject

/// Tag键
@property (strong,nonatomic,nonnull)  NSString*  key;

/// Tag值
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  values;


-(id) initWithKey:(NSString*) key
    values:(NSArray<NSString*>*)values;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ShareInfo :NSObject

/// 被共享快照的用户的pin
@property (strong,nonatomic,nonnull)  NSString*  shareTo;

/// 共享时间
@property (strong,nonatomic,nonnull)  NSString*  shareTime;


-(id) initWithShareTo:(NSString*) shareTo
    shareTime:(NSString*)shareTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DiskSpecification :NSObject

/// 云硬盘类型
@property (strong,nonatomic,nonnull)  NSString*  diskType;

/// 支持的最小尺寸，单位为 GiB
@property (strong,nonatomic,nonnull)  NSNumber*  minSizeGB;

/// 支持的最大尺寸，单位为 GiB
@property (strong,nonatomic,nonnull)  NSNumber*  maxSizeGB;

/// 步长尺寸，单位为 GiB
@property (strong,nonatomic,nonnull)  NSNumber*  stepSizeGB;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 默认的iops数量(基础iops数量)
@property (strong,nonatomic,nonnull)  NSNumber*  defaultIOPS;

/// iops步长增量
@property (strong,nonatomic,nonnull)  NSNumber*  stepIOPS;

/// 最大iops数量
@property (strong,nonatomic,nonnull)  NSNumber*  maxIOPS;

/// 默认的吞吐量
@property (strong,nonatomic,nonnull)  NSNumber*  defaultThroughput;

/// 吞吐量步长增量
@property (strong,nonatomic,nonnull)  NSNumber*  stepThroughput;

/// 最大吞吐量
@property (strong,nonatomic,nonnull)  NSNumber*  maxThroughput;

/// 是否开启IOPS可调整
@property (strong,nonatomic,nonnull)  NSNumber*  scalableIOPS;

/// 最大iops步长
@property (strong,nonatomic,nonnull)  NSNumber*  maxStepIOPS;


-(id) initWithDiskType:(NSString*) diskType
    minSizeGB:(NSNumber*)minSizeGB
    maxSizeGB:(NSNumber*)maxSizeGB
    stepSizeGB:(NSNumber*)stepSizeGB
    descriptionValue:(NSString*)descriptionValue
    defaultIOPS:(NSNumber*)defaultIOPS
    stepIOPS:(NSNumber*)stepIOPS
    maxIOPS:(NSNumber*)maxIOPS
    defaultThroughput:(NSNumber*)defaultThroughput
    stepThroughput:(NSNumber*)stepThroughput
    maxThroughput:(NSNumber*)maxThroughput
    scalableIOPS:(NSNumber*)scalableIOPS
    maxStepIOPS:(NSNumber*)maxStepIOPS;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Tag :NSObject

/// Tag键
@property (strong,nonatomic,nonnull)  NSString*  key;

/// Tag值
@property (strong,nonatomic,nonnull)  NSString*  value;


-(id) initWithKey:(NSString*) key
    value:(NSString*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Bind :NSObject

/// 云硬盘绑定的InstanceUuid
@property (strong,nonatomic,nonnull)  NSString*  resourceId;


-(id) initWithResourceId:(NSString*) resourceId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Soldout :NSObject

/// 云硬盘所属的可用区
@property (strong,nonatomic,nonnull)  NSString*  azName;

/// 云硬盘类型，取值为ssd、premium-hdd、ssd.gp1、ssd.io1、hdd.std1之一
@property (strong,nonatomic,nonnull)  NSString*  mediaType;

/// 是否售罄
@property (strong,nonatomic,nonnull)  NSNumber*  isSoldOut;


-(id) initWithAzName:(NSString*) azName
    mediaType:(NSString*)mediaType
    isSoldOut:(NSNumber*)isSoldOut;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DiskAttachment :NSObject

/// 挂载ID
@property (strong,nonatomic,nonnull)  NSString*  attachmentId;

/// 云硬盘ID
@property (strong,nonatomic,nonnull)  NSString*  diskId;

/// 挂载实例的类型，取值为 vm、nc
@property (strong,nonatomic,nonnull)  NSString*  instanceType;

/// 挂载实例的ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 挂载状态，取值为 &quot;attaching&quot;, &quot;attached&quot;, &quot;detaching&quot;, &quot;detached&quot;
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 挂载时间
@property (strong,nonatomic,nonnull)  NSString*  attachTime;


-(id) initWithAttachmentId:(NSString*) attachmentId
    diskId:(NSString*)diskId
    instanceType:(NSString*)instanceType
    instanceId:(NSString*)instanceId
    status:(NSString*)status
    attachTime:(NSString*)attachTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SnapshotSpec :NSObject

/// 快照名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 快照描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 用于创建快照的云盘ID
@property (strong,nonatomic,nonnull)  NSString*  diskId;


-(id) initWithName:(NSString*) name
    descriptionValue:(NSString*)descriptionValue
    diskId:(NSString*)diskId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DiskSpec :NSObject

/// 云硬盘所属的可用区
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 云硬盘名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 云硬盘描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 云硬盘类型，取值为ssd、premium-hdd、ssd.gp1、ssd.io1、hdd.std1之一
@property (strong,nonatomic,nonnull)  NSString*  diskType;

/// 云硬盘大小，单位为 GiB，ssd 类型取值范围[20,1000]GB，步长为10G，premium-hdd 类型取值范围[20,3000]GB，步长为10G, ssd.gp1, ssd.io1, hdd.std1 类型取值均是范围[20,16000]GB，步长为10G
@property (strong,nonatomic,nonnull)  NSNumber*  diskSizeGB;

/// 云硬盘IOPS的大小，当且仅当云盘类型是ssd.io1型的云盘有效，步长是10.
@property (strong,nonatomic,nonnull)  NSNumber*  iops;

/// 用于创建云硬盘的快照ID
@property (strong,nonatomic,nonnull)  NSString*  snapshotId;

/// 计费配置；如不指定，默认计费类型是后付费-按使用时常付费
@property (strong,nonatomic,nonnull)  ChargeSpec*  charge;

/// 云硬盘是否支持一盘多主机挂载，默认为false（不支持）
@property (strong,nonatomic,nonnull)  NSNumber*  multiAttachable;

/// 云硬盘是否加密，默认为false（不加密）
@property (strong,nonatomic,nonnull)  NSNumber*  encrypt;


-(id) initWithAz:(NSString*) az
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    diskType:(NSString*)diskType
    diskSizeGB:(NSNumber*)diskSizeGB
    iops:(NSNumber*)iops
    snapshotId:(NSString*)snapshotId
    charge:(ChargeSpec*)charge
    multiAttachable:(NSNumber*)multiAttachable
    encrypt:(NSNumber*)encrypt;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Snapshot :NSObject

/// 云硬盘快照ID
@property (strong,nonatomic,nonnull)  NSString*  snapshotId;

/// 快照来源 可以有self，others两种来源
@property (strong,nonatomic,nonnull)  NSString*  snapshotSource;

/// 创建快照的云硬盘ID(snapshotSource为others时不展示)
@property (strong,nonatomic,nonnull)  NSString*  diskId;

/// 快照大小，单位为GiB
@property (strong,nonatomic,nonnull)  NSNumber*  snapshotSizeGB;

/// 快照关联的所有镜像ID(snapshotSource为others时不展示)
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  images;

/// 快照名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 快照描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 快照状态，取值为 creating、available、in-use、deleting、error_create、error_delete 之一
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 共享信息
@property (strong,nonatomic,nonnull)  NSArray<ShareInfo*>*  sharInfo;

/// 快照是否为加密盘的快照
@property (strong,nonatomic,nonnull)  NSNumber*  encrypted;


-(id) initWithSnapshotId:(NSString*) snapshotId
    snapshotSource:(NSString*)snapshotSource
    diskId:(NSString*)diskId
    snapshotSizeGB:(NSNumber*)snapshotSizeGB
    images:(NSArray<NSString*>*)images
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    status:(NSString*)status
    createTime:(NSString*)createTime
    sharInfo:(NSArray<ShareInfo*>*)sharInfo
    encrypted:(NSNumber*)encrypted;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Data :NSObject

/// 云硬盘ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 云硬盘名称，只允许输入中文、数字、大小写字母、英文下划线“_”及中划线“-”，不允许为空且不超过32字符。
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 绑定资源列表
@property (strong,nonatomic,nonnull)  NSArray<Bind*>*  bind;


-(id) initWithResourceId:(NSString*) resourceId
    resourceName:(NSString*)resourceName
    bind:(NSArray<Bind*>*)bind;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Disk :NSObject

/// 云硬盘ID
@property (strong,nonatomic,nonnull)  NSString*  diskId;

/// 云硬盘所属AZ
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 云硬盘名称，只允许输入中文、数字、大小写字母、英文下划线“_”及中划线“-”，不允许为空且不超过32字符。
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 云硬盘描述，允许输入UTF-8编码下的全部字符，不超过256字符。
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 云硬盘类型，取值为 ssd,premium-hdd,ssd.gp1,ssd.io1,hdd.std1
@property (strong,nonatomic,nonnull)  NSString*  diskType;

/// 云硬盘大小，单位为 GiB
@property (strong,nonatomic,nonnull)  NSNumber*  diskSizeGB;

/// 该云硬盘实际应用的iops值
@property (strong,nonatomic,nonnull)  NSNumber*  iops;

/// 该云硬盘实际应用的吞吐量的数值
@property (strong,nonatomic,nonnull)  NSNumber*  throughput;

/// 云硬盘状态，取值为 creating、available、in-use、extending、restoring、deleting、deleted、error_create、error_delete、error_restore、error_extend 之一
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 挂载信息
@property (strong,nonatomic,nonnull)  NSArray<DiskAttachment*>*  attachments;

/// 创建该云硬盘的快照ID
@property (strong,nonatomic,nonnull)  NSString*  snapshotId;

/// 云盘是否支持多挂载
@property (strong,nonatomic,nonnull)  NSNumber*  multiAttachable;

/// 云盘是否为加密盘
@property (strong,nonatomic,nonnull)  NSNumber*  encrypted;

/// 云盘是否被暂停（IOPS限制为极低）
@property (strong,nonatomic,nonnull)  NSNumber*  enabled;

/// 创建云硬盘时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 云硬盘计费配置信息
@property (strong,nonatomic,nonnull)  Charge*  charge;

/// Tag信息
@property (strong,nonatomic,nonnull)  NSArray<Tag*>*  tags;


-(id) initWithDiskId:(NSString*) diskId
    az:(NSString*)az
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    diskType:(NSString*)diskType
    diskSizeGB:(NSNumber*)diskSizeGB
    iops:(NSNumber*)iops
    throughput:(NSNumber*)throughput
    status:(NSString*)status
    attachments:(NSArray<DiskAttachment*>*)attachments
    snapshotId:(NSString*)snapshotId
    multiAttachable:(NSNumber*)multiAttachable
    encrypted:(NSNumber*)encrypted
    enabled:(NSNumber*)enabled
    createTime:(NSString*)createTime
    charge:(Charge*)charge
    tags:(NSArray<Tag*>*)tags;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* DiskModel_h */

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

 

#ifndef XdataModel_h
#define XdataModel_h

@interface DwDatabase :NSObject

/// 数据库id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 用户名
@property (strong,nonatomic,nonnull)  NSString*  userName;

/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;

/// 总表数量
@property (strong,nonatomic,nonnull)  NSNumber*  totalTableQuantity;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 最新更新时间
@property (strong,nonatomic,nonnull)  NSString*  lastUpdateTime;

/// 最新更新时间
@property (strong,nonatomic,nonnull)  NSString*  physicalStorageCapacity;

/// 类别
@property (strong,nonatomic,nonnull)  NSString*  category;

/// 来源
@property (strong,nonatomic,nonnull)  NSString*  source;

/// 所有者
@property (strong,nonatomic,nonnull)  NSString*  owner;

/// 位置
@property (strong,nonatomic,nonnull)  NSString*  location;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  comments;


-(id) initWithId:(NSNumber*) idValue
    userName:(NSString*)userName
    databaseName:(NSString*)databaseName
    totalTableQuantity:(NSNumber*)totalTableQuantity
    createTime:(NSString*)createTime
    lastUpdateTime:(NSString*)lastUpdateTime
    physicalStorageCapacity:(NSString*)physicalStorageCapacity
    category:(NSString*)category
    source:(NSString*)source
    owner:(NSString*)owner
    location:(NSString*)location
    comments:(NSString*)comments;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwInstance :NSObject

/// 实例名
@property (strong,nonatomic,nonnull)  NSString*  instanceName;

/// 实例描述
@property (strong,nonatomic,nonnull)  NSString*  comments;

/// 实例属主
@property (strong,nonatomic,nonnull)  NSString*  instanceOwnerName;

/// 实例所属区域
@property (strong,nonatomic,nonnull)  NSString*  area;

/// 实例别名（在页面显示）
@property (strong,nonatomic,nonnull)  NSString*  uname;

/// 实例创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;


-(id) initWithInstanceName:(NSString*) instanceName
    comments:(NSString*)comments
    instanceOwnerName:(NSString*)instanceOwnerName
    area:(NSString*)area
    uname:(NSString*)uname
    createTime:(NSString*)createTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwDatabaseInfo :NSObject

/// 所有者
@property (strong,nonatomic,nonnull)  NSString*  owner;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  comments;

/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;


-(id) initWithOwner:(NSString*) owner
    comments:(NSString*)comments
    databaseName:(NSString*)databaseName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwTableRow :NSObject

/// 字段名称
@property (strong,nonatomic,nonnull)  NSString*  columnName;

/// 字段类型
@property (strong,nonatomic,nonnull)  NSString*  columnType;

/// 是否分区字段
@property (strong,nonatomic,nonnull)  NSNumber*  isPartition;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  comments;


-(id) initWithColumnName:(NSString*) columnName
    columnType:(NSString*)columnType
    isPartition:(NSNumber*)isPartition
    comments:(NSString*)comments;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwTableDesc :NSObject

/// 数据库名
@property (strong,nonatomic,nonnull)  NSString*  dbName;

/// 表名
@property (strong,nonatomic,nonnull)  NSString*  tableName;

/// 存储格式
@property (strong,nonatomic,nonnull)  NSString*  hiveFileFormat;

/// 字段分隔符
@property (strong,nonatomic,nonnull)  NSString*  fieldsDelimit;

/// 行分隔符
@property (strong,nonatomic,nonnull)  NSString*  linesDelimit;

/// 其他serde属性
@property (strong,nonatomic,nonnull)  NSObject*  otherSerdeProperties;

/// 创建时间（自动生成）
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 所有者（自动生成）
@property (strong,nonatomic,nonnull)  NSString*  owner;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  comments;

/// 外表位置
@property (strong,nonatomic,nonnull)  NSString*  externalLocation;

/// 参数
@property (strong,nonatomic,nonnull)  NSObject*  parameters;

/// 列信息
@property (strong,nonatomic,nonnull)  NSArray<DwTableRow*>*  rows;


-(id) initWithDbName:(NSString*) dbName
    tableName:(NSString*)tableName
    hiveFileFormat:(NSString*)hiveFileFormat
    fieldsDelimit:(NSString*)fieldsDelimit
    linesDelimit:(NSString*)linesDelimit
    otherSerdeProperties:(NSObject*)otherSerdeProperties
    createTime:(NSString*)createTime
    owner:(NSString*)owner
    comments:(NSString*)comments
    externalLocation:(NSString*)externalLocation
    parameters:(NSObject*)parameters
    rows:(NSArray<DwTableRow*>*)rows;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwHiveObjectPrivileges :NSObject

/// 状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 返回信息
@property (strong,nonatomic,nonnull)  NSString*  message;

/// select权限
@property (strong,nonatomic,nonnull)  NSNumber*  select;

/// insert权限
@property (strong,nonatomic,nonnull)  NSNumber*  insert;

/// update权限
@property (strong,nonatomic,nonnull)  NSNumber*  update;

/// delete权限
@property (strong,nonatomic,nonnull)  NSNumber*  delete;

/// drop权限
@property (strong,nonatomic,nonnull)  NSNumber*  drop;

/// create权限
@property (strong,nonatomic,nonnull)  NSNumber*  create;

/// alter权限
@property (strong,nonatomic,nonnull)  NSNumber*  alter;

/// 是否为此表所有者
@property (strong,nonatomic,nonnull)  NSNumber*  owner;


-(id) initWithStatus:(NSNumber*) status
    message:(NSString*)message
    select:(NSNumber*)select
    insert:(NSNumber*)insert
    update:(NSNumber*)update
    delete:(NSNumber*)delete
    drop:(NSNumber*)drop
    create:(NSNumber*)create
    alter:(NSNumber*)alter
    owner:(NSNumber*)owner;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DwTable :NSObject

/// 数据库id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 用户名
@property (strong,nonatomic,nonnull)  NSString*  userName;

/// 数据库名
@property (strong,nonatomic,nonnull)  NSString*  dbName;

/// 表名
@property (strong,nonatomic,nonnull)  NSString*  tableName;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 最新更新时间
@property (strong,nonatomic,nonnull)  NSString*  lastUpdateTime;

/// 物理存储量
@property (strong,nonatomic,nonnull)  NSString*  physicalStorageCapacity;

/// 类别
@property (strong,nonatomic,nonnull)  NSString*  category;

/// 来源
@property (strong,nonatomic,nonnull)  NSString*  source;

/// 所有者
@property (strong,nonatomic,nonnull)  NSString*  owner;

/// 文件存储类型
@property (strong,nonatomic,nonnull)  NSString*  hiveFileFormat;

/// 是否加密
@property (strong,nonatomic,nonnull)  NSString*  encryption;

/// 位置
@property (strong,nonatomic,nonnull)  NSString*  location;

/// 描述信息
@property (strong,nonatomic,nonnull)  NSString*  comments;

/// hive表权限信息
@property (strong,nonatomic,nonnull)  DwHiveObjectPrivileges*  hiveObjectPrivileges;

/// 参数
@property (strong,nonatomic,nonnull)  NSObject*  parameters;


-(id) initWithId:(NSNumber*) idValue
    userName:(NSString*)userName
    dbName:(NSString*)dbName
    tableName:(NSString*)tableName
    createTime:(NSString*)createTime
    lastUpdateTime:(NSString*)lastUpdateTime
    physicalStorageCapacity:(NSString*)physicalStorageCapacity
    category:(NSString*)category
    source:(NSString*)source
    owner:(NSString*)owner
    hiveFileFormat:(NSString*)hiveFileFormat
    encryption:(NSString*)encryption
    location:(NSString*)location
    comments:(NSString*)comments
    hiveObjectPrivileges:(DwHiveObjectPrivileges*)hiveObjectPrivileges
    parameters:(NSObject*)parameters;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* XdataModel_h */

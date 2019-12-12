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

Product
关于产品基本信息操作的相关接口

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef IothubApiModel_h
#define IothubApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKCommon/JDCloudOCSDKCommon.h>
#import <JDCloudOCSDKIothub/IothubModel.h>


@interface IothubExportThingModelResult : NSObject
/// ThingModel
 @property (strong,nonatomic,nonnull)  NSObject*  thingModel;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithThingModel:(NSObject*) thingModel;
@end

@interface IothubExportThingModelResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubExportThingModelResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubExportThingModelResult*) result;
@end

@interface IothubListProductAbilitiesResult : NSObject
/// 分页信息
 @property (strong,nonatomic,nonnull)  PageinfoVO*  page;
/// Abilities
 @property (strong,nonatomic,nonnull)  NSArray<ProductAbility*>*  abilities;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPage:(PageinfoVO*) page

    abilities:(NSArray<ProductAbility*>*)abilities;
@end

@interface IothubImportThingModelRequest:JDCloudRequest

/// 物模型JSON
@property (strong,nonatomic,nonnull)  NSObject*  thingModel;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
thingModel:(NSObject*)thingModel
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
thingModel:(NSObject*)thingModel
productKey:(NSString*)productKey;

@end

@interface IothubListProductAbilitiesRequest:JDCloudRequest

/// 页码, 默认为1, 取值范围：[1,∞)
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小，默认为10，取值范围：[10,100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// abilityName-功能名称，精确匹配
   /// abilityType-功能类型，精确匹配
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters
productKey:(NSString*)productKey;

@end

@interface IothubImportThingModelResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubListProductAbilitiesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubListProductAbilitiesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubListProductAbilitiesResult*) result;
@end

@interface IothubImportThingModelResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubImportThingModelResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubImportThingModelResult*) result;
@end

@interface IothubExportThingModelRequest:JDCloudRequest

/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
productKey:(NSString*)productKey;

@end

@interface IothubQueryDevicePageResult : NSObject
/// PageSize
 @property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// NowPage
 @property (strong,nonatomic,nonnull)  NSNumber*  nowPage;
/// TotalSize
 @property (strong,nonatomic,nonnull)  NSNumber*  totalSize;
/// TotalPage
 @property (strong,nonatomic,nonnull)  NSNumber*  totalPage;
/// Data
 @property (strong,nonatomic,nonnull)  NSArray<DeviceVO*>*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPageSize:(NSNumber*) pageSize

    nowPage:(NSNumber*)nowPage

    totalSize:(NSNumber*)totalSize

    totalPage:(NSNumber*)totalPage

    data:(NSArray<DeviceVO*>*)data;
@end

@interface IothubRemoveDeviceResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubAddDeviceResult : NSObject
/// 设备名称
 @property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 设备标识符
 @property (strong,nonatomic,nonnull)  NSString*  identifier;
/// 设备秘钥
 @property (strong,nonatomic,nonnull)  NSString*  secret;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDeviceName:(NSString*) deviceName

    identifier:(NSString*)identifier

    secret:(NSString*)secret;
@end

@interface IothubQueryDeviceDetailResult : NSObject
/// 设备ID
 @property (strong,nonatomic,nonnull)  NSString*  deviceId;
/// 设备名称
 @property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 父级设备Id
 @property (strong,nonatomic,nonnull)  NSString*  parentId;
/// 设备类型，同产品类型，0-普通设备，1-网关，2-Edge
 @property (strong,nonatomic,nonnull)  NSString*  deviceType;
/// 设备状态，0-未激活，1-激活离线，2-激活在线
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// 产品Key
 @property (strong,nonatomic,nonnull)  NSString*  productKey;
/// 设备标识符
 @property (strong,nonatomic,nonnull)  NSString*  identifier;
/// 设备秘钥
 @property (strong,nonatomic,nonnull)  NSString*  secret;
/// 设备描述
 @property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 激活时间
 @property (strong,nonatomic,nonnull)  NSNumber*  activatedTime;
/// 最后连接时间
 @property (strong,nonatomic,nonnull)  NSNumber*  lastConnectedTime;
/// 注册时间
 @property (strong,nonatomic,nonnull)  NSNumber*  createdTime;
/// 修改时间
 @property (strong,nonatomic,nonnull)  NSNumber*  updatedTime;
/// 产品名称
 @property (strong,nonatomic,nonnull)  NSString*  productName;
/// 设备型号
 @property (strong,nonatomic,nonnull)  NSString*  model;
/// 设备厂商
 @property (strong,nonatomic,nonnull)  NSString*  manufacturer;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDeviceId:(NSString*) deviceId

    deviceName:(NSString*)deviceName

    parentId:(NSString*)parentId

    deviceType:(NSString*)deviceType

    status:(NSNumber*)status

    productKey:(NSString*)productKey

    identifier:(NSString*)identifier

    secret:(NSString*)secret

    descriptionValue:(NSString*)descriptionValue

    activatedTime:(NSNumber*)activatedTime

    lastConnectedTime:(NSNumber*)lastConnectedTime

    createdTime:(NSNumber*)createdTime

    updatedTime:(NSNumber*)updatedTime

    productName:(NSString*)productName

    model:(NSString*)model

    manufacturer:(NSString*)manufacturer;
@end

@interface IothubInvokeThingServiceRequest:JDCloudRequest

/// 服务名称
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 输入参数,object的key为参数名称，value为参数值
@property (strong,nonatomic,nonnull)  NSObject*  input;
/// 设备唯一标识
@property (strong,nonatomic,nonnull)  NSString*  identifier;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name
input:(NSObject*)input
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name
input:(NSObject*)input
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

@end

@interface IothubDescribeThingShadowRequest:JDCloudRequest

/// 设备唯一标识
@property (strong,nonatomic,nonnull)  NSString*  identifier;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

@end

@interface IothubQueryDevicePageRequest:JDCloudRequest

/// 设备名称，模糊匹配
@property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 设备状态 0-未激活，1-激活离线，2-激活在线
@property (strong,nonatomic,nonnull)  NSNumber*  status;
/// 设备所归属的产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
/// 设备类型，同产品类型，0-设备，1-网关
@property (strong,nonatomic,nonnull)  NSNumber*  deviceType;
/// 当前页数
@property (strong,nonatomic,nonnull)  NSNumber*  nowPage;
/// 每页的数据条数
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 排序关键字--name,type,productKey,status--最多支持一个字段
@property (strong,nonatomic,nonnull)  NSString*  order;
/// 顺序，升序降序--asc,desc
@property (strong,nonatomic,nonnull)  NSString*  direction;
/// 父设备Id
@property (strong,nonatomic,nonnull)  NSString*  parentId;
-(id) initWithRegion:(NSString *)regionId
deviceName:(NSString*)deviceName
status:(NSNumber*)status
productKey:(NSString*)productKey
deviceType:(NSNumber*)deviceType
nowPage:(NSNumber*)nowPage
pageSize:(NSNumber*)pageSize
order:(NSString*)order
direction:(NSString*)direction
parentId:(NSString*)parentId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deviceName:(NSString*)deviceName
status:(NSNumber*)status
productKey:(NSString*)productKey
deviceType:(NSNumber*)deviceType
nowPage:(NSNumber*)nowPage
pageSize:(NSNumber*)pageSize
order:(NSString*)order
direction:(NSString*)direction
parentId:(NSString*)parentId;

@end

@interface IothubDescribeThingShadowResult : NSObject
/// 设备状态
 @property (strong,nonatomic,nonnull)  NSObject*  state;
/// 当用户更新设备状态文档后，设备影子服务会自动更新metadata的值。设备状态的元数据的信息包含以 Epoch 时间表示的每个属性的时间戳，用来获取准确的更新时间。
 @property (strong,nonatomic,nonnull)  NSObject*  metadata;
/// 设备影子版本
 @property (strong,nonatomic,nonnull)  NSNumber*  version;
/// 设备影子更新时间
 @property (strong,nonatomic,nonnull)  NSNumber*  timestamp;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithState:(NSObject*) state

    metadata:(NSObject*)metadata

    version:(NSNumber*)version

    timestamp:(NSNumber*)timestamp;
@end

@interface IothubDescribeThingShadowResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubDescribeThingShadowResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubDescribeThingShadowResult*) result;
@end

@interface IothubUpdateDeviceResult : NSObject
/// 设备详情
 @property (strong,nonatomic,nonnull)  DeviceVO*  device;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDevice:(DeviceVO*) device;
@end

@interface IothubUpdateDeviceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubUpdateDeviceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubUpdateDeviceResult*) result;
@end

@interface IothubRemoveDeviceByIdResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubRemoveDeviceByIdRequest:JDCloudRequest

/// 设备Id
@property (strong,nonatomic,nonnull)  NSString*  deviceId;
-(id) initWithRegion:(NSString *)regionId
deviceId:(NSString*)deviceId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deviceId:(NSString*)deviceId;

@end

@interface IothubQueryDeviceDetailRequest:JDCloudRequest

/// 设备名称
@property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey;

@end

@interface IothubAddDeviceRequest:JDCloudRequest

/// 设备名称
@property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 设备所归属的产品
@property (strong,nonatomic,nonnull)  NSString*  productKey;
/// 设备型号
@property (strong,nonatomic,nonnull)  NSString*  model;
/// 厂商
@property (strong,nonatomic,nonnull)  NSString*  manufacturer;
/// 设备描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
-(id) initWithRegion:(NSString *)regionId
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey
model:(NSString*)model
manufacturer:(NSString*)manufacturer
descriptionValue:(NSString*)descriptionValue;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey
model:(NSString*)model
manufacturer:(NSString*)manufacturer
descriptionValue:(NSString*)descriptionValue;

@end

@interface IothubRemoveDeviceByIdResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubRemoveDeviceByIdResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubRemoveDeviceByIdResult*) result;
@end

@interface IothubAddDeviceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubAddDeviceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubAddDeviceResult*) result;
@end

@interface IothubQueryDevicePageResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubQueryDevicePageResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubQueryDevicePageResult*) result;
@end

@interface IothubQueryDeviceDetailResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubQueryDeviceDetailResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubQueryDeviceDetailResult*) result;
@end

@interface IothubInvokeThingServiceResult : NSObject
/// 消息唯一标识
 @property (strong,nonatomic,nonnull)  NSString*  msgId;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMsgId:(NSString*) msgId;
@end

@interface IothubUpdateThingShadowResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubUpdateThingShadowResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubUpdateThingShadowResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubUpdateThingShadowResult*) result;
@end

@interface IothubInvokeThingServiceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubInvokeThingServiceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubInvokeThingServiceResult*) result;
@end

@interface IothubUpdateThingShadowRequest:JDCloudRequest

/// 运行状态
@property (strong,nonatomic,nonnull)  NSObject*  state;
/// 设备唯一标识
@property (strong,nonatomic,nonnull)  NSString*  identifier;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
state:(NSObject*)state
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
state:(NSObject*)state
identifier:(NSString*)identifier
productKey:(NSString*)productKey;

@end

@interface IothubRemoveDeviceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubRemoveDeviceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubRemoveDeviceResult*) result;
@end

@interface IothubUpdateDeviceRequest:JDCloudRequest

/// 设备型号
@property (strong,nonatomic,nonnull)  NSString*  model;
/// 设备厂商
@property (strong,nonatomic,nonnull)  NSString*  manufacturer;
/// 设备描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 设备状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;
/// 设备Id
@property (strong,nonatomic,nonnull)  NSString*  deviceId;
-(id) initWithRegion:(NSString *)regionId
model:(NSString*)model
manufacturer:(NSString*)manufacturer
descriptionValue:(NSString*)descriptionValue
status:(NSNumber*)status
deviceId:(NSString*)deviceId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
model:(NSString*)model
manufacturer:(NSString*)manufacturer
descriptionValue:(NSString*)descriptionValue
status:(NSNumber*)status
deviceId:(NSString*)deviceId;

@end

@interface IothubRemoveDeviceRequest:JDCloudRequest

/// 设备名称
@property (strong,nonatomic,nonnull)  NSString*  deviceName;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deviceName:(NSString*)deviceName
productKey:(NSString*)productKey;

@end

@interface IothubCreateProductResult : NSObject
/// ProductKey
 @property (strong,nonatomic,nonnull)  NSString*  productKey;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithProductKey:(NSString*) productKey;
@end

@interface IothubListProductsResult : NSObject
/// 分页信息
 @property (strong,nonatomic,nonnull)  PageinfoVO*  page;
/// Products
 @property (strong,nonatomic,nonnull)  NSArray<Product*>*  products;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPage:(PageinfoVO*) page

    products:(NSArray<Product*>*)products;
@end

@interface IothubDescribeProductRequest:JDCloudRequest

/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
productKey:(NSString*)productKey;

@end

@interface IothubUpdateProductRequest:JDCloudRequest

/// 产品名称，名称不可为空，3-30个字符，只支持汉字、英文字母、数字、下划线“_”及中划线“-”，必须以汉字、英文字母及数字开头结尾
@property (strong,nonatomic,nonnull)  NSString*  productName;
/// 产品描述，80字符以内
@property (strong,nonatomic,nonnull)  NSString*  productDescription;
/// 动态注册,0:关闭，1:开启
@property (strong,nonatomic,nonnull)  NSNumber*  dynamicRegister;
/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
productName:(NSString*)productName
productDescription:(NSString*)productDescription
dynamicRegister:(NSNumber*)dynamicRegister
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
productName:(NSString*)productName
productDescription:(NSString*)productDescription
dynamicRegister:(NSNumber*)dynamicRegister
productKey:(NSString*)productKey;

@end

@interface IothubUpdateProductResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubDescribeProductResult : NSObject
/// 产品名称
 @property (strong,nonatomic,nonnull)  NSString*  productName;
/// 节点类型，取值：
   /// 0：设备。设备不能挂载子设备。可以直连物联网平台，也可以作为网关的子设备连接物联网平台
   /// 1：网关。网关可以挂载子设备，具有子设备管理模块，维持子设备的拓扑关系，和将拓扑关系同步到物联网平台
   /// 
 @property (strong,nonatomic,nonnull)  NSNumber*  productType;
/// 产品key
 @property (strong,nonatomic,nonnull)  NSString*  productKey;
/// 产品秘钥
 @property (strong,nonatomic,nonnull)  NSString*  productSecret;
/// 创建时间,时间为东八区（UTC/GMT+08:00）
 @property (strong,nonatomic,nonnull)  NSNumber*  createdTime;
/// 包含设备数
 @property (strong,nonatomic,nonnull)  NSNumber*  deviceCount;
/// 动态注册,0:关闭，1:开启
 @property (strong,nonatomic,nonnull)  NSNumber*  dynamicRegister;
/// 产品描述信息
 @property (strong,nonatomic,nonnull)  NSString*  productDescription;
/// 产品类型,如自定义等
 @property (strong,nonatomic,nonnull)  NSString*  templateName;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithProductName:(NSString*) productName

    productType:(NSNumber*)productType

    productKey:(NSString*)productKey

    productSecret:(NSString*)productSecret

    createdTime:(NSNumber*)createdTime

    deviceCount:(NSNumber*)deviceCount

    dynamicRegister:(NSNumber*)dynamicRegister

    productDescription:(NSString*)productDescription

    templateName:(NSString*)templateName;
@end

@interface IothubDescribeProductResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubDescribeProductResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubDescribeProductResult*) result;
@end

@interface IothubDeleteProductRequest:JDCloudRequest

/// 产品Key
@property (strong,nonatomic,nonnull)  NSString*  productKey;
-(id) initWithRegion:(NSString *)regionId
productKey:(NSString*)productKey;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
productKey:(NSString*)productKey;

@end

@interface IothubDeleteProductResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface IothubUpdateProductResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubUpdateProductResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubUpdateProductResult*) result;
@end

@interface IothubCreateProductResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubCreateProductResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubCreateProductResult*) result;
@end

@interface IothubListProductsRequest:JDCloudRequest

/// 页码, 默认为1, 取值范围：[1,∞)
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小，默认为10，取值范围：[10,100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// productName-产品名称，精确匹配，支持单个
   /// productKey-产品key，精确匹配，支持单个
   /// productType-产品类型，精确匹配，支持单个
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters;

@end

@interface IothubDeleteProductResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubDeleteProductResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubDeleteProductResult*) result;
@end

@interface IothubListProductsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IothubListProductsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IothubListProductsResult*) result;
@end

@interface IothubCreateProductRequest:JDCloudRequest

/// 产品名称，名称不可为空，3-30个字符，只支持汉字、英文字母、数字、下划线“_”及中划线“-”，必须以汉字、英文字母及数字开头结尾
@property (strong,nonatomic,nonnull)  NSString*  productName;
/// 节点类型，取值：
   /// 0：设备。设备不能挂载子设备。可以直连物联网平台，也可以作为网关的子设备连接物联网平台
   /// 1：网关。网关可以挂载子设备，具有子设备管理模块，维持子设备的拓扑关系，和将拓扑关系同步到物联网平台
   /// 
@property (strong,nonatomic,nonnull)  NSNumber*  productType;
/// 产品描述，80字符以内
@property (strong,nonatomic,nonnull)  NSString*  productDescription;
/// 物模型模板ID，内部参数，用户不可见，默认为自定义
@property (strong,nonatomic,nonnull)  NSString*  templateId;
-(id) initWithRegion:(NSString *)regionId
productName:(NSString*)productName
productType:(NSNumber*)productType
productDescription:(NSString*)productDescription
templateId:(NSString*)templateId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
productName:(NSString*)productName
productType:(NSNumber*)productType
productDescription:(NSString*)productDescription
templateId:(NSString*)templateId;

@end

#endif /* IothubApiModel_h */

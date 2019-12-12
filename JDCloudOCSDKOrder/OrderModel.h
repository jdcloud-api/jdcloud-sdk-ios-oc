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

相关接口
API related to order

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

 

#ifndef OrderModel_h
#define OrderModel_h

@interface ExtraInfo :NSObject

/// 名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 值
@property (strong,nonatomic,nonnull)  NSString*  value;


-(id) initWithName:(NSString*) name
    value:(NSString*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ListOrderRequest :NSObject

/// 业务线
@property (strong,nonatomic,nonnull)  NSString*  appCode;

/// 计费类型(CONFIG-按配置,FLOW-按用量MONTHLY-包年包月,ONCE-按次付费)
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 查询订单开始时间戳
@property (strong,nonatomic,nonnull)  NSNumber*  startTime;

/// 查询订单结束时间戳
@property (strong,nonatomic,nonnull)  NSNumber*  endTime;

/// 购买订单类型(NEW-新购,RENEW-续费,RESIZE_FORMULA-配置变更,TEMP_UPGRADE-临时升配)
@property (strong,nonatomic,nonnull)  NSString*  orderType;

/// 分页：订单第几页
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;

/// 分页：订单条数
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;

/// 付费类型(PRE_PAID-预付费,POST_PAID-后付费)
@property (strong,nonatomic,nonnull)  NSString*  payType;

/// 产品线
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 订单状态（PAID-已支付,CANCELED-已取消,NO_PAY-未支付,FAILED-失败,DEALING-处理中,REFUND_PART-部分退款,REFUND_ALL-全部退款）
@property (strong,nonatomic,nonnull)  NSString*  status;


-(id) initWithAppCode:(NSString*) appCode
    chargeMode:(NSString*)chargeMode
    startTime:(NSNumber*)startTime
    endTime:(NSNumber*)endTime
    orderType:(NSString*)orderType
    pageNumber:(NSNumber*)pageNumber
    pageSize:(NSNumber*)pageSize
    payType:(NSString*)payType
    serviceCode:(NSString*)serviceCode
    status:(NSString*)status;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OrderResponseObject :NSObject

/// 订单应付金额
@property (strong,nonatomic,nonnull)  NSNumber*  actualFee;

/// 业务线
@property (strong,nonatomic,nonnull)  NSString*  appCode;

/// 业务名称
@property (strong,nonatomic,nonnull)  NSString*  appName;

/// 计费类型(CONFIG-按配置,FLOW-按用量MONTHLY-包年包月,ONCE-按次付费)
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 订单创建时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 折扣金额
@property (strong,nonatomic,nonnull)  NSNumber*  discountFee;

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  orderNumber;

/// 购买订单类型(NEW-新购,RENEW-续费，RESIZE_FORMULA-配置变更)
@property (strong,nonatomic,nonnull)  NSString*  orderType;

/// 订单支付时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  payTime;

/// 付费类型(PRE_PAID-预付费,POST_PAID-后付费)
@property (strong,nonatomic,nonnull)  NSString*  payType;

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  paymentNumber;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 自营类型(SELF_SUPPORT-自营,THIRD_PARTY_SUPPORT-非自营)
@property (strong,nonatomic,nonnull)  NSString*  selfSupportType;

/// 产品线名称
@property (strong,nonatomic,nonnull)  NSString*  serviceName;

/// 订单状态（PAID-已支付,FAILED-失败,NO_PAY-未支付,DEALING-处理中,CANCELED-已取消,REFUND_PART-部分退款,REFUND_ALL-全部退款）
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 订单总金额
@property (strong,nonatomic,nonnull)  NSNumber*  totalFee;


-(id) initWithActualFee:(NSNumber*) actualFee
    appCode:(NSString*)appCode
    appName:(NSString*)appName
    chargeMode:(NSString*)chargeMode
    createTime:(NSString*)createTime
    discountFee:(NSNumber*)discountFee
    orderNumber:(NSString*)orderNumber
    orderType:(NSString*)orderType
    payTime:(NSString*)payTime
    payType:(NSString*)payType
    paymentNumber:(NSString*)paymentNumber
    pin:(NSString*)pin
    selfSupportType:(NSString*)selfSupportType
    serviceName:(NSString*)serviceName
    status:(NSString*)status
    totalFee:(NSNumber*)totalFee;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OrderResourceInfo :NSObject

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  orderNumber;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 资源id,下单没有传替，则预生成一个
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 创建资源唯一标识
@property (strong,nonatomic,nonnull)  NSString*  sourceId;


-(id) initWithOrderNumber:(NSString*) orderNumber
    pin:(NSString*)pin
    resourceId:(NSString*)resourceId
    sourceId:(NSString*)sourceId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OrderItemDetailResponseObject :NSObject

/// 订单总金额
@property (strong,nonatomic,nonnull)  NSNumber*  totalFee;

/// 应付金额（订单总金额-折扣金额）
@property (strong,nonatomic,nonnull)  NSNumber*  actualFee;

/// 余额支付金额
@property (strong,nonatomic,nonnull)  NSNumber*  balancePay;

/// 计费时长
@property (strong,nonatomic,nonnull)  NSNumber*  chargeDuration;

/// 现金支付金额
@property (strong,nonatomic,nonnull)  NSNumber*  moneyPay;

/// 退款金额
@property (strong,nonatomic,nonnull)  NSNumber*  refundFee;

/// 计费类型(CONFIG-按配置,FLOW-按用量MONTHLY-包年包月,ONCE-按次付费)
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 订单创建时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 续费后资源到期时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  expireDateAfter;

/// 续费前资源到期时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  expireDateBefore;

/// 销售属性
@property (strong,nonatomic,nonnull)  NSArray<ExtraInfo*>*  extraInfo;

/// 续费后资源到期-销售属性
@property (strong,nonatomic,nonnull)  NSArray<ExtraInfo*>*  extraInfoAfter;

/// 续费前资源到期-销售属性
@property (strong,nonatomic,nonnull)  NSArray<ExtraInfo*>*  extraInfoBefore;

/// 代金券金额
@property (strong,nonatomic,nonnull)  NSNumber*  favorableFee;

/// 配置计费项
@property (strong,nonatomic,nonnull)  NSString*  formula;

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  itemId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  itemName;

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  orderNumber;

/// 价格快照
@property (strong,nonatomic,nonnull)  NSString*  priceSnapshot;

/// 数量
@property (strong,nonatomic,nonnull)  NSNumber*  quantity;

/// 备注
@property (strong,nonatomic,nonnull)  NSString*  remark;

/// 变配明细(UP-升配补差价，DOWN-降配延时,MODIFY_CONFIG-调整配置，RENEW-续费，RENEW_UP-续费升配，RENEW_DOWN-续费降配，MONTHLY-配置转包年包月，RENEW_FREE-补偿续费)
@property (strong,nonatomic,nonnull)  NSString*  resizeFormulaType;

/// 产品名称
@property (strong,nonatomic,nonnull)  NSString*  serviceName;

/// 站点名称（MAIN_SITE-主站，INTERNATIONAL_SITE-国际站，SUQIAN_DEDICATED_CLOUD-宿迁专有云）
@property (strong,nonatomic,nonnull)  NSString*  siteType;

/// 资源状态（CREATING-创建中,SUCCESS-成功,FAIL-失败）
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 计费时长单位（HOUR-小时,DAY-天,MONTH-月,YEAR-年）
@property (strong,nonatomic,nonnull)  NSString*  unit;

/// 子订单
@property (strong,nonatomic,nonnull)  NSArray<OrderItemDetailResponseObject*>*  orderItemDetailResponse;


-(id) initWithTotalFee:(NSNumber*) totalFee
    actualFee:(NSNumber*)actualFee
    balancePay:(NSNumber*)balancePay
    chargeDuration:(NSNumber*)chargeDuration
    moneyPay:(NSNumber*)moneyPay
    refundFee:(NSNumber*)refundFee
    chargeMode:(NSString*)chargeMode
    createTime:(NSString*)createTime
    expireDateAfter:(NSString*)expireDateAfter
    expireDateBefore:(NSString*)expireDateBefore
    extraInfo:(NSArray<ExtraInfo*>*)extraInfo
    extraInfoAfter:(NSArray<ExtraInfo*>*)extraInfoAfter
    extraInfoBefore:(NSArray<ExtraInfo*>*)extraInfoBefore
    favorableFee:(NSNumber*)favorableFee
    formula:(NSString*)formula
    itemId:(NSString*)itemId
    itemName:(NSString*)itemName
    orderNumber:(NSString*)orderNumber
    priceSnapshot:(NSString*)priceSnapshot
    quantity:(NSNumber*)quantity
    remark:(NSString*)remark
    resizeFormulaType:(NSString*)resizeFormulaType
    serviceName:(NSString*)serviceName
    siteType:(NSString*)siteType
    status:(NSString*)status
    unit:(NSString*)unit
    orderItemDetailResponse:(NSArray<OrderItemDetailResponseObject*>*)orderItemDetailResponse;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CreateOrderRequestObject :NSObject

/// 业务线
@property (strong,nonatomic,nonnull)  NSString*  appCode;

/// 可用区
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 计费时长
@property (strong,nonatomic,nonnull)  NSNumber*  chargeDuration;

/// 计费类型(CONFIG-按配置,FLOW-按用量MONTHLY-包年包月,ONCE-按次付费)
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 计费时长单位（HOUR-小时,DAY-天,MONTH-月,YEAR-年）
@property (strong,nonatomic,nonnull)  NSString*  chargeUnit;

/// 自定义参数
@property (strong,nonatomic,nonnull)  NSString*  customInfo;

/// 销售属性
@property (strong,nonatomic,nonnull)  NSArray<ExtraInfo*>*  extraInfo;

/// 配置计费项
@property (strong,nonatomic,nonnull)  NSString*  formula;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  itemName;

/// 商品类型(COMMON_ITEM-普通商品,ACTIVITY_ITEM-活动商品)
@property (strong,nonatomic,nonnull)  NSString*  itemType;

/// 购买订单类型(NEW-新购,RENEW-续费，RESIZE_FORMULA-配置变更)
@property (strong,nonatomic,nonnull)  NSString*  orderType;

/// 付费类型(PRE_PAID-预付费,POST_PAID-后付费)
@property (strong,nonatomic,nonnull)  NSString*  payType;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 促销明细
@property (strong,nonatomic,nonnull)  NSString*  promotionInfo;

/// 数量
@property (strong,nonatomic,nonnull)  NSNumber*  quantity;

/// 资源地域
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 资源id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 支付成功后的回调地址(例如：//inf.jcloud.com)，如果需要自己提供回调地址则设置该字段，否则会回调到inf.jdcloud.com
@property (strong,nonatomic,nonnull)  NSString*  returnUrl;

/// 销售属性
@property (strong,nonatomic,nonnull)  NSString*  salesAttribute;

/// 产品线
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 服务商名称
@property (strong,nonatomic,nonnull)  NSString*  serviceProviderName;

/// 服务商pin
@property (strong,nonatomic,nonnull)  NSString*  serviceProviderPin;

/// 站点名称（MAIN_SITE-主站，INTERNATIONAL_SITE-国际站，SUQIAN_DEDICATED_CLOUD-宿迁专有云）
@property (strong,nonatomic,nonnull)  NSString*  siteType;

/// 下单唯一标识
@property (strong,nonatomic,nonnull)  NSString*  sourceId;

/// 打包标识，打包在一起的产品用相同的taskId
@property (strong,nonatomic,nonnull)  NSString*  taskId;


-(id) initWithAppCode:(NSString*) appCode
    az:(NSString*)az
    chargeDuration:(NSNumber*)chargeDuration
    chargeMode:(NSString*)chargeMode
    chargeUnit:(NSString*)chargeUnit
    customInfo:(NSString*)customInfo
    extraInfo:(NSArray<ExtraInfo*>*)extraInfo
    formula:(NSString*)formula
    itemName:(NSString*)itemName
    itemType:(NSString*)itemType
    orderType:(NSString*)orderType
    payType:(NSString*)payType
    pin:(NSString*)pin
    promotionInfo:(NSString*)promotionInfo
    quantity:(NSNumber*)quantity
    region:(NSString*)region
    resourceId:(NSString*)resourceId
    returnUrl:(NSString*)returnUrl
    salesAttribute:(NSString*)salesAttribute
    serviceCode:(NSString*)serviceCode
    serviceProviderName:(NSString*)serviceProviderName
    serviceProviderPin:(NSString*)serviceProviderPin
    siteType:(NSString*)siteType
    sourceId:(NSString*)sourceId
    taskId:(NSString*)taskId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CreateOrderRequestList :NSObject

/// CreateOrderRequests
@property (strong,nonatomic,nonnull)  NSArray<CreateOrderRequestObject*>*  createOrderRequests;


-(id) initWithCreateOrderRequests:(NSArray<CreateOrderRequestObject*>*) createOrderRequests;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CreateOrderResponseObject :NSObject

/// 消息
@property (strong,nonatomic,nonnull)  NSString*  message;

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  orderNumber;

/// 应付金额（订单总金额-折扣金额）
@property (strong,nonatomic,nonnull)  NSNumber*  actualFee;

/// 是否成功
@property (strong,nonatomic,nonnull)  NSNumber*  success;

/// 资源简单列表
@property (strong,nonatomic,nonnull)  NSArray<OrderResourceInfo*>*  orderResourceInfoList;


-(id) initWithMessage:(NSString*) message
    orderNumber:(NSString*)orderNumber
    actualFee:(NSNumber*)actualFee
    success:(NSNumber*)success
    orderResourceInfoList:(NSArray<OrderResourceInfo*>*)orderResourceInfoList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OrderDetailResponseObject :NSObject

/// 业务线
@property (strong,nonatomic,nonnull)  NSString*  appCode;

/// 业务线名称
@property (strong,nonatomic,nonnull)  NSString*  appName;

/// 余额支付金额
@property (strong,nonatomic,nonnull)  NSNumber*  balancePay;

/// 折扣金额
@property (strong,nonatomic,nonnull)  NSNumber*  discountFee;

/// 退款金额
@property (strong,nonatomic,nonnull)  NSNumber*  refundFee;

/// 代金券金额
@property (strong,nonatomic,nonnull)  NSNumber*  favorableFee;

/// 订单总金额
@property (strong,nonatomic,nonnull)  NSNumber*  totalFee;

/// 现金支付金额
@property (strong,nonatomic,nonnull)  NSNumber*  moneyPay;

/// 应付金额（订单总金额-折扣金额）
@property (strong,nonatomic,nonnull)  NSNumber*  actualFee;

/// 已支付总额
@property (strong,nonatomic,nonnull)  NSNumber*  paidFee;

/// 活动订单类型(NORMAL-正常订单,ACTIVITY-活动订单)
@property (strong,nonatomic,nonnull)  NSString*  activityType;

/// 计费类型(CONFIG-按配置,FLOW-按用量MONTHLY-包年包月,ONCE-按次付费)
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 订单创建时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 未支付订单自动取消时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  expirationTime;

/// 订单号
@property (strong,nonatomic,nonnull)  NSString*  orderNumber;

/// 购买订单类型(NEW-新购,RENEW-续费，RESIZE_FORMULA-配置变更)
@property (strong,nonatomic,nonnull)  NSString*  orderType;

/// 订单支付时间（格式：yyyy-MM-dd HH:mm:ss）
@property (strong,nonatomic,nonnull)  NSString*  payTime;

/// 付费类型(PRE_PAID-预付费,POST_PAID-后付费)
@property (strong,nonatomic,nonnull)  NSString*  payType;

/// 支付确认页地址
@property (strong,nonatomic,nonnull)  NSString*  payUrl;

/// 付款人
@property (strong,nonatomic,nonnull)  NSString*  payer;

/// 支付渠道（BALANCE_PAYMENT-余额支付,ENTERPRISE_BANK_PAYMENT-企业网银,PERSONAL_BANK_PAYMENT-个人网银,JD_PAYMENT-京东,WENXIN_PAYMENT-微信支付,OFFLINE_PAYMENT-线下汇款）
@property (strong,nonatomic,nonnull)  NSString*  paymentChannel;

/// 支付订单号
@property (strong,nonatomic,nonnull)  NSString*  paymentNumber;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 订单申请人，创建人
@property (strong,nonatomic,nonnull)  NSString*  proposer;

/// 备注
@property (strong,nonatomic,nonnull)  NSString*  remark;

/// 自营类型(SELF_SUPPORT-自营,THIRD_PARTY_SUPPORT-非自营)
@property (strong,nonatomic,nonnull)  NSString*  selfSupportType;

/// 产品线名称
@property (strong,nonatomic,nonnull)  NSString*  serviceName;

/// 站点名称（MAIN_SITE-主站，INTERNATIONAL_SITE-国际站，SUQIAN_DEDICATED_CLOUD-宿迁专有云）
@property (strong,nonatomic,nonnull)  NSString*  siteType;

/// 订单状态（PAID-已支付,FAILED-失败,NO_PAY-未支付,DEALING-处理中,CANCELED-已取消,REFUND_PART-部分退款,REFUND_ALL-全部退款）
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 订单更新时间
@property (strong,nonatomic,nonnull)  NSString*  updatedTime;

/// 子订单
@property (strong,nonatomic,nonnull)  NSArray<OrderDetailResponseObject*>*  childOrderDetailList;

/// 子资源订单
@property (strong,nonatomic,nonnull)  NSArray<OrderItemDetailResponseObject*>*  orderItemDetails;


-(id) initWithAppCode:(NSString*) appCode
    appName:(NSString*)appName
    balancePay:(NSNumber*)balancePay
    discountFee:(NSNumber*)discountFee
    refundFee:(NSNumber*)refundFee
    favorableFee:(NSNumber*)favorableFee
    totalFee:(NSNumber*)totalFee
    moneyPay:(NSNumber*)moneyPay
    actualFee:(NSNumber*)actualFee
    paidFee:(NSNumber*)paidFee
    activityType:(NSString*)activityType
    chargeMode:(NSString*)chargeMode
    createTime:(NSString*)createTime
    expirationTime:(NSString*)expirationTime
    orderNumber:(NSString*)orderNumber
    orderType:(NSString*)orderType
    payTime:(NSString*)payTime
    payType:(NSString*)payType
    payUrl:(NSString*)payUrl
    payer:(NSString*)payer
    paymentChannel:(NSString*)paymentChannel
    paymentNumber:(NSString*)paymentNumber
    pin:(NSString*)pin
    proposer:(NSString*)proposer
    remark:(NSString*)remark
    selfSupportType:(NSString*)selfSupportType
    serviceName:(NSString*)serviceName
    siteType:(NSString*)siteType
    status:(NSString*)status
    updatedTime:(NSString*)updatedTime
    childOrderDetailList:(NSArray<OrderDetailResponseObject*>*)childOrderDetailList
    orderItemDetails:(NSArray<OrderItemDetailResponseObject*>*)orderItemDetails;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* OrderModel_h */

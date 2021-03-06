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

 

#ifndef ChargeModel_h
#define ChargeModel_h

@interface ChargeSpec :NSObject

/// 计费模式，取值为：prepaid_by_duration，postpaid_by_usage或postpaid_by_duration，prepaid_by_duration表示预付费，postpaid_by_usage表示按用量后付费，postpaid_by_duration表示按配置后付费，默认为postpaid_by_duration.请参阅具体产品线帮助文档确认该产品线支持的计费类型
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 预付费计费单位，预付费必填，当chargeMode为prepaid_by_duration时有效，取值为：month、year，默认为month
@property (strong,nonatomic,nonnull)  NSString*  chargeUnit;

/// 预付费计费时长，预付费必填，当chargeMode取值为prepaid_by_duration时有效。当chargeUnit为month时取值为：1~9，当chargeUnit为year时取值为：1、2、3
@property (strong,nonatomic,nonnull)  NSNumber*  chargeDuration;

/// True&#x3D;：OPEN——开通自动续费、False&#x3D;CLOSE—— 不开通自动续费，默认为CLOSE
@property (strong,nonatomic,nonnull)  NSNumber*  autoRenew;

/// 产品线统一活动凭证JSON字符串，需要BASE64编码，目前要求编码前格式为 {&quot;activity&quot;:{&quot;activityType&quot;:必填字段, &quot;activityIdentifier&quot;:必填字段}}
@property (strong,nonatomic,nonnull)  NSString*  buyScenario;


-(id) initWithChargeMode:(NSString*) chargeMode
    chargeUnit:(NSString*)chargeUnit
    chargeDuration:(NSNumber*)chargeDuration
    autoRenew:(NSNumber*)autoRenew
    buyScenario:(NSString*)buyScenario;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Charge :NSObject

/// 支付模式，取值为：prepaid_by_duration，postpaid_by_usage或postpaid_by_duration，prepaid_by_duration表示预付费，postpaid_by_usage表示按用量后付费，postpaid_by_duration表示按配置后付费，默认为postpaid_by_duration
@property (strong,nonatomic,nonnull)  NSString*  chargeMode;

/// 费用支付状态，取值为：normal、overdue、arrear，normal表示正常，overdue表示已到期，arrear表示欠费
@property (strong,nonatomic,nonnull)  NSString*  chargeStatus;

/// 计费开始时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  chargeStartTime;

/// 过期时间，预付费资源的到期时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ，后付费资源此字段内容为空
@property (strong,nonatomic,nonnull)  NSString*  chargeExpiredTime;

/// 预期释放时间，资源的预期释放时间，预付费/后付费资源均有此值，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  chargeRetireTime;


-(id) initWithChargeMode:(NSString*) chargeMode
    chargeStatus:(NSString*)chargeStatus
    chargeStartTime:(NSString*)chargeStartTime
    chargeExpiredTime:(NSString*)chargeExpiredTime
    chargeRetireTime:(NSString*)chargeRetireTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* ChargeModel_h */

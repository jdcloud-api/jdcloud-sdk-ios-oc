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

 

#ifndef SmsModel_h
#define SmsModel_h

@interface SendBatchSms :NSObject

/// 请求状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 错误码
@property (strong,nonatomic,nonnull)  NSString*  code;

/// 错误消息
@property (strong,nonatomic,nonnull)  NSString*  message;


-(id) initWithStatus:(NSNumber*) status
    code:(NSString*)code
    message:(NSString*)message;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface MtSms :NSObject

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 扩展码
@property (strong,nonatomic,nonnull)  NSString*  expandNum;

/// 手机号
@property (strong,nonatomic,nonnull)  NSString*  mobileNum;

/// 应用ID
@property (strong,nonatomic,nonnull)  NSString*  appId;

/// 套餐包ID
@property (strong,nonatomic,nonnull)  NSString*  packageId;

/// 签名ID
@property (strong,nonatomic,nonnull)  NSString*  signId;

/// 模板ID
@property (strong,nonatomic,nonnull)  NSString*  templateId;

/// 消息内容
@property (strong,nonatomic,nonnull)  NSString*  msgContent;

/// 批次ID
@property (strong,nonatomic,nonnull)  NSString*  orderId;

/// 错误码
@property (strong,nonatomic,nonnull)  NSNumber*  code;

/// 流水号
@property (strong,nonatomic,nonnull)  NSString*  receiptNum;

/// 拆分标识
@property (strong,nonatomic,nonnull)  NSString*  splitFlag;

/// 发送状态
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 类型
@property (strong,nonatomic,nonnull)  NSString*  type;


-(id) initWithPin:(NSString*) pin
    expandNum:(NSString*)expandNum
    mobileNum:(NSString*)mobileNum
    appId:(NSString*)appId
    packageId:(NSString*)packageId
    signId:(NSString*)signId
    templateId:(NSString*)templateId
    msgContent:(NSString*)msgContent
    orderId:(NSString*)orderId
    code:(NSNumber*)code
    receiptNum:(NSString*)receiptNum
    splitFlag:(NSString*)splitFlag
    status:(NSString*)status
    type:(NSString*)type;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ReplyResp :NSObject

/// 应用Id
@property (strong,nonatomic,nonnull)  NSString*  appId;

/// 签名Id
@property (strong,nonatomic,nonnull)  NSString*  signId;

/// 手机号
@property (strong,nonatomic,nonnull)  NSString*  phoneNum;

/// 回复时间（yyyy-MM-dd HH:mm:ss)
@property (strong,nonatomic,nonnull)  NSString*  dataTime;

/// 回复内容
@property (strong,nonatomic,nonnull)  NSString*  content;


-(id) initWithAppId:(NSString*) appId
    signId:(NSString*)signId
    phoneNum:(NSString*)phoneNum
    dataTime:(NSString*)dataTime
    content:(NSString*)content;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BatchSendResp :NSObject

/// 本次发送请求的序列号
@property (strong,nonatomic,nonnull)  NSString*  sequenceNumber;


-(id) initWithSequenceNumber:(NSString*) sequenceNumber;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface StatusReportResp :NSObject

/// 手机号
@property (strong,nonatomic,nonnull)  NSString*  phoneNum;

/// 发送短信的序列号
@property (strong,nonatomic,nonnull)  NSString*  sequenceNumber;

/// 短信发送时间（yyyy-MM-dd HH:mm:ss)
@property (strong,nonatomic,nonnull)  NSString*  sendTime;

/// 接收到回执的时间（yyyy-MM-dd HH:mm:ss)
@property (strong,nonatomic,nonnull)  NSString*  reportTime;

/// 发送状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 错误码
@property (strong,nonatomic,nonnull)  NSString*  code;

/// 长短信拆分序号（短短信直接返回1)
@property (strong,nonatomic,nonnull)  NSNumber*  splitNum;


-(id) initWithPhoneNum:(NSString*) phoneNum
    sequenceNumber:(NSString*)sequenceNumber
    sendTime:(NSString*)sendTime
    reportTime:(NSString*)reportTime
    status:(NSNumber*)status
    code:(NSString*)code
    splitNum:(NSNumber*)splitNum;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PullMtMsgByMobile :NSObject

/// 总量
@property (strong,nonatomic,nonnull)  NSNumber*  total;

/// 本次拉取的数量
@property (strong,nonatomic,nonnull)  NSNumber*  size;

/// 发送信息明细列表
@property (strong,nonatomic,nonnull)  NSArray<MtSms*>*  detailList;


-(id) initWithTotal:(NSNumber*) total
    size:(NSNumber*)size
    detailList:(NSArray<MtSms*>*)detailList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* SmsModel_h */

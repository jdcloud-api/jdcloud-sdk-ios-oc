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

京东云sms接口
sms相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef SmsExecutor_h
#define SmsExecutor_h
#import <JDCloudOCSDKSms/SmsClient.h>

///  指定模板群发短信
@interface SmsBatchSendExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SmsClient*)JDCloudClient;
@end
///  短信发送回执接口
@interface SmsStatusReportExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SmsClient*)JDCloudClient;
@end
///  短信回复接口
@interface SmsReplyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SmsClient*)JDCloudClient;
@end
#endif /* SmsExecutor_h */

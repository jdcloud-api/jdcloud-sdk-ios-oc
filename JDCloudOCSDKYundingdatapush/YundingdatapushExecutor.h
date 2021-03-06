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

云鼎2.0数据推送 openApi
云鼎2.0数据推送 openApi 相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef YundingdatapushExecutor_h
#define YundingdatapushExecutor_h
#import <JDCloudOCSDKYundingdatapush/YundingdatapushClient.h>

///  添加数据推送用户
@interface YundingdatapushAddDatapushVenderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(YundingdatapushClient*)JDCloudClient;
@end
///  查询已经开通的用户
@interface YundingdatapushDescribeDatapushVendersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(YundingdatapushClient*)JDCloudClient;
@end
///  查询开通数据推送的数据库实例
@interface YundingdatapushDescribeRdsInstancesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(YundingdatapushClient*)JDCloudClient;
@end
///  删除数据推送用户
@interface YundingdatapushDeleteDatapushVenderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(YundingdatapushClient*)JDCloudClient;
@end
#endif /* YundingdatapushExecutor_h */

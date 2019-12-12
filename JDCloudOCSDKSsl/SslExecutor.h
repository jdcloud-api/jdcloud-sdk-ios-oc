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

JDCLOUD SSL数字证书管理 API
提供SSL数字证书，证书申购记录管理相关信息接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef SslExecutor_h
#define SslExecutor_h
#import <JDCloudOCSDKSsl/SslClient.h>

///  更新证书 [MFA enabled]
@interface SslUpdateCertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  查看证书详情
@interface SslDescribeCertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  上传证书
@interface SslUploadCertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  删除证书 [MFA enabled]
@interface SslDeleteCertsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  下载证书 [MFA enabled]
@interface SslDownloadCertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  查看证书列表
@interface SslDescribeCertsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
///  修改证书名称
@interface SslUpdateCertNameExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(SslClient*)JDCloudClient;
@end
#endif /* SslExecutor_h */

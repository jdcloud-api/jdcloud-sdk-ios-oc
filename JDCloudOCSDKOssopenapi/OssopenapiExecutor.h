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

oss openapi
oss openapi

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef OssopenapiExecutor_h
#define OssopenapiExecutor_h
#import <JDCloudOCSDKOssopenapi/OssopenapiClient.h>

///  根据type获取指定bucket用量数据
@interface OssopenapiGetSingleBucketCapacityExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(OssopenapiClient*)JDCloudClient;
@end
///  获取回源配置
@interface OssopenapiGetBackSourceConfigurationExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(OssopenapiClient*)JDCloudClient;
@end
///  添加修改回源配置
@interface OssopenapiPutBackSourceConfigurationExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(OssopenapiClient*)JDCloudClient;
@end
///  删除回源配置
@interface OssopenapiDeleteBackSourceConfigurationExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(OssopenapiClient*)JDCloudClient;
@end
#endif /* OssopenapiExecutor_h */

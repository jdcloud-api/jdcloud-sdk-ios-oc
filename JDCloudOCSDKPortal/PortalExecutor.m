
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

京东云官网公告API
提供公告操作的相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKPortal/PortalExecutor.h>


/// 查询产品的详细信息
   /// 
@implementation  PortalDescribeProductExecutor

-(id) initWithJDCloudClient:(PortalClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/product";
    return self;
}
@end

/// 产品页列表查询接口
   /// 
@implementation  PortalDescribeProductsByIdExecutor

-(id) initWithJDCloudClient:(PortalClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/getProductsById";
    return self;
}
@end

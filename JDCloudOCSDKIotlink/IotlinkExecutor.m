
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

京东云iotlink接口
iotlink相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKIotlink/IotlinkExecutor.h>


/// 根据物联网卡iccid查询该卡的开关机状态信息
@implementation  IotlinkOnOffStatusExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/onOffStatus";
    return self;
}
@end

/// 物联网卡开机操作
@implementation  IotlinkOpenIotCardExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/openIotCard";
    return self;
}
@end

/// 物联网卡停机操作
@implementation  IotlinkCloseIotCardExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/closeIotCard";
    return self;
}
@end

/// 根据物联网卡iccid查询该卡的生命周期信息
@implementation  IotlinkLifeStatusExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/lifeStatus";
    return self;
}
@end

/// 物联网卡停流量操作
@implementation  IotlinkCloseIotFlowExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/closeIotFlow";
    return self;
}
@end

/// 根据物联网卡iccid查询该卡的gprs状态信息
@implementation  IotlinkGprsStatusExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/gprsStatus";
    return self;
}
@end

/// 物联网卡开启流量操作
@implementation  IotlinkOpenIotFlowExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/openIotFlow";
    return self;
}
@end

/// 根据物联网卡iccid查询该卡的当月套餐内的GPRS实时使用量
@implementation  IotlinkGprsRealtimeInfoExecutor

-(id) initWithJDCloudClient:(IotlinkClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/gprsRealtimeInfo";
    return self;
}
@end

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

云物理服务器
云物理服务器相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef CpsExecutor_h
#define CpsExecutor_h
#import <JDCloudOCSDKCps/CpsClient.h>

///  查询子网详情
@interface CpsDescribeSubnetExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改监听器
@interface CpsModifyListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  绑定弹性公网IP
@interface CpsAssociateElasticIpLBExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询监听器详情
@interface CpsQueryListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  删除私有网络
   /// 
@interface CpsDeleteVpcExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询单个云物理服务器硬件监控信息
@interface CpsDescribeInstanceStatusExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  添加后端服务器
@interface CpsAddServersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  重装云物理服务器，只能重装stopped状态的服务器&lt;br/&gt;
   /// - 可调用接口（describeOS）获取云物理服务器支持的操作系统列表
   ///  [MFA enabled]
@interface CpsReinstallInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  删除虚拟服务器组
@interface CpsDeleteServerGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询某种实例类型的云物理服务器支持的RAID类型，可查询系统盘RAID类型和数据盘RAID类型
@interface CpsDescribeDeviceRaidsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  解绑弹性公网IP
@interface CpsDisassociateElasticIpLBExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改私有网络
   /// 
@interface CpsModifyVpcExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询负载均衡实例详情
@interface CpsQueryLoadBalancerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询后端服务器列表
@interface CpsQueryServersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询云物理服务器名称
@interface CpsDescribeInstanceNameExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改子网
@interface CpsModifySubnetExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询私有网络列表
@interface CpsDescribeVpcsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询密钥对详情
@interface CpsQueryKeypairExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询单个云物理服务器已安装的RAID信息，包括系统盘RAID信息和数据盘RAID信息
@interface CpsDescribeInstanceRaidExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询云物理服务器地域列表
@interface CpsDescribeRegionesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询负载均衡实例列表
@interface CpsQueryLoadBalancersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改虚拟服务器组
@interface CpsModifyServerGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改云物理服务器部分信息，包括名称、描述
@interface CpsModifyInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询密钥对列表
@interface CpsQueryKeypairsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询云物理服务器实例类型
@interface CpsDescribeDeviceTypesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  解绑弹性公网IP
   /// 
@interface CpsDisassociateElasticIpExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询弹性公网IP详情
@interface CpsDescribeElasticIpExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询路由表列表
@interface CpsQueryRouteTablesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改负载均衡实例
@interface CpsModifyLoadBalancerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  开启负载均衡实例
@interface CpsStartLoadBalancerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  关闭负载均衡实例
@interface CpsStopLoadBalancerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询单台云物理服务器详细信息
@interface CpsDescribeInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  升级云物理服务器外网带宽，只能操作running或者stopped状态的服务器&lt;br/&gt;
   /// - 不支持未启用外网的服务器升级带宽
   /// - 外网带宽不支持降级
   /// 
@interface CpsModifyBandwidthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询虚拟服务器组列表
@interface CpsQueryServerGroupsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询云物理服务器监控信息
@interface CpsDescribeInstanceMonitorInfoExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建一台或多台指定配置的云物理服务器&lt;br/&gt;
   /// - 地域与可用区&lt;br/&gt;
   ///   - 调用接口（describeRegiones）获取云物理服务器支持的地域与可用区&lt;br/&gt;
   /// - 实例类型&lt;br/&gt;
   ///   - 调用接口（describeDeviceTypes）获取物理实例类型列表&lt;br/&gt;
   ///   - 不能使用已下线、或已售馨的实例类型&lt;br/&gt;
   /// - 操作系统&lt;br/&gt;
   ///   - 可调用接口（describeOS）获取云物理服务器支持的操作系统列表&lt;br/&gt;
   /// - 存储&lt;br/&gt;
   ///   - 数据盘多种RAID可选，可调用接口（describeDeviceRaids）获取服务器支持的RAID列表&lt;br/&gt;
   /// - 网络&lt;br/&gt;
   ///   - 网络类型目前支持basic、vpc&lt;br/&gt;
   ///   - 线路目前只支持bgp&lt;br/&gt;
   ///   - 支持不启用外网，如果启用外网，带宽范围[1,200] 单位Mbps&lt;br/&gt;
   /// - 其他&lt;br/&gt;
   ///   - 购买时长，可按年或月购买：月取值范围[1,9], 年取值范围[1,3]&lt;br/&gt;
   ///   - 密码设置参考公共参数规范&lt;br/&gt;
   /// 
@interface CpsCreateInstancesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  重置云物理服务器密码
   /// 
@interface CpsResetPasswordExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  绑定弹性公网IP
   /// 
@interface CpsAssociateElasticIpExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  对单台云物理服务器执行关机操作，只能停止running状态的服务器 [MFA enabled]
@interface CpsStopInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询私有网络详情
@interface CpsDescribeVpcExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询子网列表
@interface CpsDescribeSubnetsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询路由表详情
@interface CpsQueryRouteTableExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  删除监听器
@interface CpsDeleteListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  申请弹性公网IP
   /// 
@interface CpsApplyElasticIpsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建密钥对
@interface CpsCreateKeypairsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  移除后端服务器
@interface CpsRemoveServerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  导入密钥对
@interface CpsImportKeypairsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建虚拟服务器组
@interface CpsCreateServerGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  开启监听器
@interface CpsStartListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询负载均衡地域列表
@interface CpsQueryCPSLBRegionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询虚拟服务器组
@interface CpsQueryServerGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  对单台云物理服务器执行开机操作，只能启动stopped状态的服务器
@interface CpsStartInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建子网
@interface CpsCreateSubnetExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  重启单台云物理服务器，只能重启running状态的服务器 [MFA enabled]
@interface CpsRestartInstanceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询弹性公网IP列表&lt;br/&gt;
   /// 支持分页查询，默认每页20条&lt;br/&gt;
   /// 
@interface CpsDescribeElasticIpsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询云物理服务器支持的操作系统
@interface CpsDescribeOSExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建监听器
@interface CpsCreateListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改弹性公网IP带宽
   /// 
@interface CpsModifyElasticIpBandwidthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询监听器
@interface CpsQueryListenersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  修改后端服务器
@interface CpsModifyServerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  批量查询云物理服务器详细信息&lt;br/&gt;
   /// 支持分页查询，默认每页20条&lt;br/&gt;
   /// 
@interface CpsDescribeInstancesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建负载均衡实例
@interface CpsCreateLoadBalancerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  创建私有网络
@interface CpsCreateVpcExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  删除密钥对
@interface CpsDeleteKeypairsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  关闭监听器
@interface CpsStopListenerExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  删除子网
@interface CpsDeleteSubnetExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
///  查询基础网络子网
@interface CpsDescribeBasicSubnetExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CpsClient*)JDCloudClient;
@end
#endif /* CpsExecutor_h */

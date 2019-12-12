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

 

#ifndef JdccsModel_h
#define JdccsModel_h

@interface Statistic :NSObject

/// 最大值
@property (strong,nonatomic,nonnull)  NSNumber*  max;

/// 最小值
@property (strong,nonatomic,nonnull)  NSNumber*  min;

/// 平均值
@property (strong,nonatomic,nonnull)  NSNumber*  avg;


-(id) initWithMax:(NSNumber*) max
    min:(NSNumber*)min
    avg:(NSNumber*)avg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Metric :NSObject

/// 监控项英文标识
@property (strong,nonatomic,nonnull)  NSString*  metricValue;

/// 监控项名称
@property (strong,nonatomic,nonnull)  NSString*  metricName;


-(id) initWithMetricValue:(NSString*) metricValue
    metricName:(NSString*)metricName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DataPoint :NSObject

/// UNIX时间戳
@property (strong,nonatomic,nonnull)  NSNumber*  timestamp;

/// 采样值
@property (strong,nonatomic,nonnull)  NSNumber*  value;


-(id) initWithTimestamp:(NSNumber*) timestamp
    value:(NSNumber*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DescribeDevice :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 设备Id
@property (strong,nonatomic,nonnull)  NSString*  deviceId;

/// 设备SN号
@property (strong,nonatomic,nonnull)  NSString*  snNo;

/// 机柜编码
@property (strong,nonatomic,nonnull)  NSString*  cabinetNo;

/// 所在U位
@property (strong,nonatomic,nonnull)  NSString*  rackUIndex;

/// U数（U）
@property (strong,nonatomic,nonnull)  NSNumber*  uNum;

/// 品牌
@property (strong,nonatomic,nonnull)  NSString*  brand;

/// 型号
@property (strong,nonatomic,nonnull)  NSString*  model;

/// 设备类型 server:服务器 network:网络设备 storage:存储设备 other:其他设备
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// 资产归属 own:自备 lease:租赁
@property (strong,nonatomic,nonnull)  NSString*  assetBelong;

/// 资产状态 inWarehouse:已入库 launched:已上架
@property (strong,nonatomic,nonnull)  NSString*  assetStatus;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    deviceId:(NSString*)deviceId
    snNo:(NSString*)snNo
    cabinetNo:(NSString*)cabinetNo
    rackUIndex:(NSString*)rackUIndex
    uNum:(NSNumber*)uNum
    brand:(NSString*)brand
    model:(NSString*)model
    deviceType:(NSString*)deviceType
    assetBelong:(NSString*)assetBelong
    assetStatus:(NSString*)assetStatus;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Alarm :NSObject

/// 规则实例ID
@property (strong,nonatomic,nonnull)  NSString*  alarmId;

/// 规则名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 资源类型 bandwidth:带宽
@property (strong,nonatomic,nonnull)  NSString*  resourceType;

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 监控项英文标识
@property (strong,nonatomic,nonnull)  NSString*  metric;

/// 监控项名称
@property (strong,nonatomic,nonnull)  NSString*  metricName;

/// 统计周期（单位：分钟）
@property (strong,nonatomic,nonnull)  NSNumber*  period;

/// 统计方法：平均值&#x3D;avg、最大值&#x3D;max、最小值&#x3D;min
@property (strong,nonatomic,nonnull)  NSString*  statisticMethod;

/// 计算方式 &gt;&#x3D;、&gt;、&lt;、&lt;&#x3D;、&#x3D;、！&#x3D;
@property (strong,nonatomic,nonnull)  NSString*  operatorValue;

/// 阈值
@property (strong,nonatomic,nonnull)  NSNumber*  threshold;

/// 连续多少次后报警
@property (strong,nonatomic,nonnull)  NSNumber*  times;

/// 通知周期 单位：小时
@property (strong,nonatomic,nonnull)  NSNumber*  noticePeriod;

/// 规则状态 disabled:禁用 enabled:启用
@property (strong,nonatomic,nonnull)  NSString*  status;

/// Switchboard
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  switchboard;


-(id) initWithAlarmId:(NSString*) alarmId
    name:(NSString*)name
    idc:(NSString*)idc
    idcName:(NSString*)idcName
    resourceType:(NSString*)resourceType
    resourceId:(NSString*)resourceId
    resourceName:(NSString*)resourceName
    metric:(NSString*)metric
    metricName:(NSString*)metricName
    period:(NSNumber*)period
    statisticMethod:(NSString*)statisticMethod
    operatorValue:(NSString*)operatorValue
    threshold:(NSNumber*)threshold
    times:(NSNumber*)times
    noticePeriod:(NSNumber*)noticePeriod
    status:(NSString*)status
    switchboard:(NSArray<NSObject*>*)switchboard;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DescribeBandwidth :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 带宽实例ID
@property (strong,nonatomic,nonnull)  NSString*  bandwidthId;

/// 带宽名称
@property (strong,nonatomic,nonnull)  NSString*  bandwidthName;

/// 状态 normal:正常 abnormal:异常
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 线路类型 bgp:BGP telecom:电信单线 unicom:联通单线 mobile:移动单线
@property (strong,nonatomic,nonnull)  NSNumber*  lineType;

/// 合同带宽（Mbps）
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 关联的公网IP
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  relatedIp;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    bandwidthId:(NSString*)bandwidthId
    bandwidthName:(NSString*)bandwidthName
    status:(NSString*)status
    lineType:(NSNumber*)lineType
    bandwidth:(NSNumber*)bandwidth
    relatedIp:(NSArray<NSObject*>*)relatedIp;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface LastDownsampleRespItem :NSObject

/// 监控项英文标识
@property (strong,nonatomic,nonnull)  NSString*  metric;

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 采样值
@property (strong,nonatomic,nonnull)  NSNumber*  value;


-(id) initWithMetric:(NSString*) metric
    resourceId:(NSString*)resourceId
    value:(NSNumber*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DescribeCabinet :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 机柜Id
@property (strong,nonatomic,nonnull)  NSString*  cabinetId;

/// 机柜编码
@property (strong,nonatomic,nonnull)  NSString*  cabinetNo;

/// 房间号
@property (strong,nonatomic,nonnull)  NSString*  roomNo;

/// 机柜空间(U)
@property (strong,nonatomic,nonnull)  NSNumber*  cabinetSpace;

/// 额定电流(A)
@property (strong,nonatomic,nonnull)  NSNumber*  cabinetPower;

/// 机柜类型 formal:正式机柜 reserved:预留机柜
@property (strong,nonatomic,nonnull)  NSString*  cabinetType;

/// 机柜开通状态 disabled:未开通 enabling:开通中 enabled:已开通 disabling:关闭中
@property (strong,nonatomic,nonnull)  NSString*  cabinetOpenStatus;

/// 开通时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  cabinetOpenTime;

/// 起租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  startTime;

/// 退租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  endTime;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    cabinetId:(NSString*)cabinetId
    cabinetNo:(NSString*)cabinetNo
    roomNo:(NSString*)roomNo
    cabinetSpace:(NSNumber*)cabinetSpace
    cabinetPower:(NSNumber*)cabinetPower
    cabinetType:(NSString*)cabinetType
    cabinetOpenStatus:(NSString*)cabinetOpenStatus
    cabinetOpenTime:(NSString*)cabinetOpenTime
    startTime:(NSString*)startTime
    endTime:(NSString*)endTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Ticket :NSObject

/// 工单编号
@property (strong,nonatomic,nonnull)  NSString*  ticketNo;

/// 工单名称
@property (strong,nonatomic,nonnull)  NSString*  ticketTemplateName;

/// 工单模板CODE
@property (strong,nonatomic,nonnull)  NSString*  ticketTemplateCode;

/// 工单类型
@property (strong,nonatomic,nonnull)  NSString*  ticketTypeName;

/// 工单状态 pendingReview:待审核 已撤销 revoked:已撤销 processing:处理中 pendingVerification:待核验 pendingClose:待关单 rejected:已拒绝 completed:已完成 cancelled:已取消 draft:草稿中
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 创建时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  createdTime;

/// 关闭时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  closedTime;

/// 电话
@property (strong,nonatomic,nonnull)  NSString*  phone;

/// 邮箱
@property (strong,nonatomic,nonnull)  NSString*  email;

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;


-(id) initWithTicketNo:(NSString*) ticketNo
    ticketTemplateName:(NSString*)ticketTemplateName
    ticketTemplateCode:(NSString*)ticketTemplateCode
    ticketTypeName:(NSString*)ticketTypeName
    status:(NSString*)status
    descriptionValue:(NSString*)descriptionValue
    createdTime:(NSString*)createdTime
    closedTime:(NSString*)closedTime
    phone:(NSString*)phone
    email:(NSString*)email
    idc:(NSString*)idc
    idcName:(NSString*)idcName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Device :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 设备Id
@property (strong,nonatomic,nonnull)  NSString*  deviceId;

/// 设备SN号
@property (strong,nonatomic,nonnull)  NSString*  snNo;

/// 机柜编码
@property (strong,nonatomic,nonnull)  NSString*  cabinetNo;

/// 所在U位
@property (strong,nonatomic,nonnull)  NSString*  rackUIndex;

/// U数（U）
@property (strong,nonatomic,nonnull)  NSNumber*  uNum;

/// 品牌
@property (strong,nonatomic,nonnull)  NSString*  brand;

/// 型号
@property (strong,nonatomic,nonnull)  NSString*  model;

/// 设备类型 server:服务器 network:网络设备 storage:存储设备 other:其他设备
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// 资产归属 own:自备 lease:租赁
@property (strong,nonatomic,nonnull)  NSString*  assetBelong;

/// 资产状态 inWarehouse:已入库 launched:已上架
@property (strong,nonatomic,nonnull)  NSString*  assetStatus;

/// CPU逻辑核数(核)
@property (strong,nonatomic,nonnull)  NSString*  cpuCore;

/// 内存总容量(GB)
@property (strong,nonatomic,nonnull)  NSString*  memory;

/// 硬盘总容量(GB)
@property (strong,nonatomic,nonnull)  NSString*  disk;

/// 网卡带宽(Mbps)
@property (strong,nonatomic,nonnull)  NSString*  networkCardBandwidth;

/// 起租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  startTime;

/// 退租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  endTime;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    deviceId:(NSString*)deviceId
    snNo:(NSString*)snNo
    cabinetNo:(NSString*)cabinetNo
    rackUIndex:(NSString*)rackUIndex
    uNum:(NSNumber*)uNum
    brand:(NSString*)brand
    model:(NSString*)model
    deviceType:(NSString*)deviceType
    assetBelong:(NSString*)assetBelong
    assetStatus:(NSString*)assetStatus
    cpuCore:(NSString*)cpuCore
    memory:(NSString*)memory
    disk:(NSString*)disk
    networkCardBandwidth:(NSString*)networkCardBandwidth
    startTime:(NSString*)startTime
    endTime:(NSString*)endTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Bandwidth :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 带宽实例ID
@property (strong,nonatomic,nonnull)  NSString*  bandwidthId;

/// 带宽名称
@property (strong,nonatomic,nonnull)  NSString*  bandwidthName;

/// 状态 normal:正常 abnormal:异常
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 线路类型 bgp:BGP telecom:电信单线 unicom:联通单线 mobile:移动单线
@property (strong,nonatomic,nonnull)  NSNumber*  lineType;

/// 合同带宽（Mbps）
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidthValue;

/// 关联的公网IP
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  relatedIp;

/// 交换机信息
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  switchboard;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    bandwidthId:(NSString*)bandwidthId
    bandwidthName:(NSString*)bandwidthName
    status:(NSString*)status
    lineType:(NSNumber*)lineType
    bandwidthValue:(NSNumber*)bandwidthValue
    relatedIp:(NSArray<NSObject*>*)relatedIp
    switchboard:(NSArray<NSObject*>*)switchboard;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Idc :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idcValue;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;


-(id) initWithIdcValue:(NSString*) idcValue
    idcName:(NSString*)idcName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BandwidthTraffic :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 带宽实例ID
@property (strong,nonatomic,nonnull)  NSString*  bandwidthId;

/// 带宽名称
@property (strong,nonatomic,nonnull)  NSString*  bandwidthName;

/// 总上行实时流量
@property (strong,nonatomic,nonnull)  NSNumber*  totalTrafficIn;

/// 总下行实时流量
@property (strong,nonatomic,nonnull)  NSNumber*  totalTrafficOut;

/// 总带宽
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 线路类型 bgp:BGP telecom:电信单线 unicom:联通单线 mobile:移动单线
@property (strong,nonatomic,nonnull)  NSString*  lineType;

/// 关联的公网IP
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  relatedIp;

/// Switchboard
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  switchboard;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    bandwidthId:(NSString*)bandwidthId
    bandwidthName:(NSString*)bandwidthName
    totalTrafficIn:(NSNumber*)totalTrafficIn
    totalTrafficOut:(NSNumber*)totalTrafficOut
    bandwidth:(NSNumber*)bandwidth
    lineType:(NSString*)lineType
    relatedIp:(NSArray<NSObject*>*)relatedIp
    switchboard:(NSArray<NSObject*>*)switchboard;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Ip :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 公网IP实例ID
@property (strong,nonatomic,nonnull)  NSString*  ipId;

/// IP地址段
@property (strong,nonatomic,nonnull)  NSString*  cidrAddr;

/// 网络位地址
@property (strong,nonatomic,nonnull)  NSString*  networkAddr;

/// 网关地址
@property (strong,nonatomic,nonnull)  NSNumber*  gatewayAddr;

/// 广播地址
@property (strong,nonatomic,nonnull)  NSNumber*  broadcastAddr;

/// 状态 normal:正常 abnormal:异常
@property (strong,nonatomic,nonnull)  NSString*  status;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    ipId:(NSString*)ipId
    cidrAddr:(NSString*)cidrAddr
    networkAddr:(NSString*)networkAddr
    gatewayAddr:(NSNumber*)gatewayAddr
    broadcastAddr:(NSNumber*)broadcastAddr
    status:(NSString*)status;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DescribeBandwidthTraffic :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 带宽实例ID
@property (strong,nonatomic,nonnull)  NSString*  bandwidthId;

/// 带宽名称
@property (strong,nonatomic,nonnull)  NSString*  bandwidthName;

/// 总上行实时流量
@property (strong,nonatomic,nonnull)  NSNumber*  totalTrafficIn;

/// 总下行实时流量
@property (strong,nonatomic,nonnull)  NSNumber*  totalTrafficOut;

/// 总带宽
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    bandwidthId:(NSString*)bandwidthId
    bandwidthName:(NSString*)bandwidthName
    totalTrafficIn:(NSNumber*)totalTrafficIn
    totalTrafficOut:(NSNumber*)totalTrafficOut
    bandwidth:(NSNumber*)bandwidth;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Room :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 房间号
@property (strong,nonatomic,nonnull)  NSString*  roomNo;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    roomNo:(NSString*)roomNo;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Cabinet :NSObject

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 机柜Id
@property (strong,nonatomic,nonnull)  NSString*  cabinetId;

/// 机柜编码
@property (strong,nonatomic,nonnull)  NSString*  cabinetNo;

/// 房间号
@property (strong,nonatomic,nonnull)  NSString*  roomNo;

/// 机柜空间(U)
@property (strong,nonatomic,nonnull)  NSNumber*  cabinetSpace;

/// 额定电流(A)
@property (strong,nonatomic,nonnull)  NSNumber*  cabinetPower;

/// 机柜类型 formal:正式机柜 reserved:预留机柜
@property (strong,nonatomic,nonnull)  NSString*  cabinetType;

/// 机柜开通状态 disabled:未开通 enabling:开通中 enabled:已开通 disabling:关闭中
@property (strong,nonatomic,nonnull)  NSString*  cabinetOpenStatus;

/// 开通时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  cabinetOpenTime;

/// 起租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  startTime;

/// 退租时间，遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  endTime;

/// 设备数量
@property (strong,nonatomic,nonnull)  NSNumber*  deviceNum;

/// 占用U数(U)
@property (strong,nonatomic,nonnull)  NSNumber*  rackUOccupy;

/// 空闲U数(U)
@property (strong,nonatomic,nonnull)  NSNumber*  rackUFree;


-(id) initWithIdc:(NSString*) idc
    idcName:(NSString*)idcName
    cabinetId:(NSString*)cabinetId
    cabinetNo:(NSString*)cabinetNo
    roomNo:(NSString*)roomNo
    cabinetSpace:(NSNumber*)cabinetSpace
    cabinetPower:(NSNumber*)cabinetPower
    cabinetType:(NSString*)cabinetType
    cabinetOpenStatus:(NSString*)cabinetOpenStatus
    cabinetOpenTime:(NSString*)cabinetOpenTime
    startTime:(NSString*)startTime
    endTime:(NSString*)endTime
    deviceNum:(NSNumber*)deviceNum
    rackUOccupy:(NSNumber*)rackUOccupy
    rackUFree:(NSNumber*)rackUFree;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AlarmHistory :NSObject

/// 规则实例ID
@property (strong,nonatomic,nonnull)  NSString*  alarmId;

/// 规则名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 资源类型 bandwidth:带宽
@property (strong,nonatomic,nonnull)  NSString*  resourceType;

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 监控项英文标识
@property (strong,nonatomic,nonnull)  NSString*  metric;

/// 监控项名称
@property (strong,nonatomic,nonnull)  NSString*  metricName;

/// 统计周期（单位：分钟）
@property (strong,nonatomic,nonnull)  NSNumber*  period;

/// 统计方法：平均值&#x3D;avg、最大值&#x3D;max、最小值&#x3D;min
@property (strong,nonatomic,nonnull)  NSString*  statisticMethod;

/// 计算方式 &gt;&#x3D;、&gt;、&lt;、&lt;&#x3D;、&#x3D;、！&#x3D;
@property (strong,nonatomic,nonnull)  NSString*  operatorValue;

/// 阈值
@property (strong,nonatomic,nonnull)  NSNumber*  threshold;

/// 连续多少次后报警
@property (strong,nonatomic,nonnull)  NSNumber*  times;

/// 通知周期 单位：小时
@property (strong,nonatomic,nonnull)  NSNumber*  noticePeriod;

/// 规则状态 disabled:禁用 enabled:启用
@property (strong,nonatomic,nonnull)  NSString*  status;

/// Switchboard
@property (strong,nonatomic,nonnull)  NSArray<NSObject*>*  switchboard;

/// 报警状态 normal:正常 alarm:报警
@property (strong,nonatomic,nonnull)  NSString*  alarmStatus;

/// 报警值
@property (strong,nonatomic,nonnull)  NSNumber*  value;

/// 报警时间 遵循ISO8601标准，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  noticeTime;


-(id) initWithAlarmId:(NSString*) alarmId
    name:(NSString*)name
    idc:(NSString*)idc
    idcName:(NSString*)idcName
    resourceType:(NSString*)resourceType
    resourceId:(NSString*)resourceId
    resourceName:(NSString*)resourceName
    metric:(NSString*)metric
    metricName:(NSString*)metricName
    period:(NSNumber*)period
    statisticMethod:(NSString*)statisticMethod
    operatorValue:(NSString*)operatorValue
    threshold:(NSNumber*)threshold
    times:(NSNumber*)times
    noticePeriod:(NSNumber*)noticePeriod
    status:(NSString*)status
    switchboard:(NSArray<NSObject*>*)switchboard
    alarmStatus:(NSString*)alarmStatus
    value:(NSNumber*)value
    noticeTime:(NSString*)noticeTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DescribeAlarm :NSObject

/// 规则实例ID
@property (strong,nonatomic,nonnull)  NSString*  alarmId;

/// 规则名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 机房英文标识
@property (strong,nonatomic,nonnull)  NSString*  idc;

/// 机房名称
@property (strong,nonatomic,nonnull)  NSString*  idcName;

/// 资源类型 bandwidth:带宽
@property (strong,nonatomic,nonnull)  NSString*  resourceType;

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 监控项英文标识
@property (strong,nonatomic,nonnull)  NSString*  metric;

/// 监控项名称
@property (strong,nonatomic,nonnull)  NSString*  metricName;

/// 统计周期（单位：分钟）
@property (strong,nonatomic,nonnull)  NSNumber*  period;

/// 统计方法：平均值&#x3D;avg、最大值&#x3D;max、最小值&#x3D;min
@property (strong,nonatomic,nonnull)  NSString*  statisticMethod;

/// 计算方式 &gt;&#x3D;、&gt;、&lt;、&lt;&#x3D;、&#x3D;、！&#x3D;
@property (strong,nonatomic,nonnull)  NSString*  operatorValue;

/// 阈值
@property (strong,nonatomic,nonnull)  NSNumber*  threshold;

/// 连续多少次后报警
@property (strong,nonatomic,nonnull)  NSNumber*  times;

/// 通知周期 单位：小时
@property (strong,nonatomic,nonnull)  NSNumber*  noticePeriod;

/// 规则状态 disabled:禁用 enabled:启用
@property (strong,nonatomic,nonnull)  NSString*  status;


-(id) initWithAlarmId:(NSString*) alarmId
    name:(NSString*)name
    idc:(NSString*)idc
    idcName:(NSString*)idcName
    resourceType:(NSString*)resourceType
    resourceId:(NSString*)resourceId
    resourceName:(NSString*)resourceName
    metric:(NSString*)metric
    metricName:(NSString*)metricName
    period:(NSNumber*)period
    statisticMethod:(NSString*)statisticMethod
    operatorValue:(NSString*)operatorValue
    threshold:(NSNumber*)threshold
    times:(NSNumber*)times
    noticePeriod:(NSNumber*)noticePeriod
    status:(NSString*)status;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface MetricData :NSObject

/// Data
@property (strong,nonatomic,nonnull)  NSArray<DataPoint*>*  data;

/// Statistic
@property (strong,nonatomic,nonnull)  Statistic*  statistic;

/// Metric
@property (strong,nonatomic,nonnull)  Metric*  metric;


-(id) initWithData:(NSArray<DataPoint*>*) data
    statistic:(Statistic*)statistic
    metric:(Metric*)metric;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* JdccsModel_h */

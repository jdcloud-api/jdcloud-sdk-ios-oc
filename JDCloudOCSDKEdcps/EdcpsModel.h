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

 

#ifndef EdcpsModel_h
#define EdcpsModel_h
#import <JDCloudOCSDKCharge/JDCloudOCSDKCharge.h>

@interface AliasIp :NSObject

/// 实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 地域
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用区
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 子网ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 次要cidr ID
@property (strong,nonatomic,nonnull)  NSString*  secondaryCidrId;

/// 别名IP ID
@property (strong,nonatomic,nonnull)  NSString*  aliasIpId;

/// cidr段
@property (strong,nonatomic,nonnull)  NSString*  cidr;


-(id) initWithInstanceId:(NSString*) instanceId
    region:(NSString*)region
    az:(NSString*)az
    subnetId:(NSString*)subnetId
    secondaryCidrId:(NSString*)secondaryCidrId
    aliasIpId:(NSString*)aliasIpId
    cidr:(NSString*)cidr;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Os :NSObject

/// 操作系统系统类型ID
@property (strong,nonatomic,nonnull)  NSString*  osTypeId;

/// 操作系统系统名称, 如 Ubuntu 16.04(x86_64)
@property (strong,nonatomic,nonnull)  NSString*  osName;

/// 操作系统类型, 如 ubuntu/centos
@property (strong,nonatomic,nonnull)  NSString*  osType;

/// 操作系统版本, 如 14.04/16.04
@property (strong,nonatomic,nonnull)  NSString*  osVersion;

/// 实例类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceType;


-(id) initWithOsTypeId:(NSString*) osTypeId
    osName:(NSString*)osName
    osType:(NSString*)osType
    osVersion:(NSString*)osVersion
    deviceType:(NSString*)deviceType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SubnetSpec :NSObject

/// 可用区, 如 cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 私有网络ID
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 子网的网络范围
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 子网的次要cidr
@property (strong,nonatomic,nonnull)  NSString*  secondaryCidr;

/// 子网的次要cidr名称
@property (strong,nonatomic,nonnull)  NSString*  secondaryCidrName;

/// 名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;


-(id) initWithAz:(NSString*) az
    vpcId:(NSString*)vpcId
    cidr:(NSString*)cidr
    secondaryCidr:(NSString*)secondaryCidr
    secondaryCidrName:(NSString*)secondaryCidrName
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ReinstallInstanceSpec :NSObject

/// 可用区, 如cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 镜像类型, 取值范围：standard
@property (strong,nonatomic,nonnull)  NSString*  imageType;

/// 操作系统类型ID
@property (strong,nonatomic,nonnull)  NSString*  osTypeId;

/// 系统盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  sysRaidTypeId;

/// 是否保留数据盘数据, 取值为：yes、no
@property (strong,nonatomic,nonnull)  NSString*  keepData;

/// 数据盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  dataRaidTypeId;

/// 密码
@property (strong,nonatomic,nonnull)  NSString*  password;

/// 主机名
@property (strong,nonatomic,nonnull)  NSString*  hostname;

/// 可执行脚本Base64编码后的内容，支持shell和python脚本
@property (strong,nonatomic,nonnull)  NSString*  userData;

/// 密钥对id
@property (strong,nonatomic,nonnull)  NSString*  keypairId;


-(id) initWithAz:(NSString*) az
    imageType:(NSString*)imageType
    osTypeId:(NSString*)osTypeId
    sysRaidTypeId:(NSString*)sysRaidTypeId
    keepData:(NSString*)keepData
    dataRaidTypeId:(NSString*)dataRaidTypeId
    password:(NSString*)password
    hostname:(NSString*)hostname
    userData:(NSString*)userData
    keypairId:(NSString*)keypairId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Subnet :NSObject

/// 地域代码, 如cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用区, 如cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 子网ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 子网名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 子网CIDR
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 私有网络Id
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 私有网络名称
@property (strong,nonatomic,nonnull)  NSString*  vpcName;

/// 可用ip数量
@property (strong,nonatomic,nonnull)  NSNumber*  availableIpCount;

/// 总ip数量
@property (strong,nonatomic,nonnull)  NSNumber*  totalIpCount;

/// 网络类型
@property (strong,nonatomic,nonnull)  NSString*  networkType;

/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;


-(id) initWithRegion:(NSString*) region
    az:(NSString*)az
    subnetId:(NSString*)subnetId
    name:(NSString*)name
    cidr:(NSString*)cidr
    vpcId:(NSString*)vpcId
    vpcName:(NSString*)vpcName
    availableIpCount:(NSNumber*)availableIpCount
    totalIpCount:(NSNumber*)totalIpCount
    networkType:(NSString*)networkType
    descriptionValue:(NSString*)descriptionValue
    createTime:(NSString*)createTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Az :NSObject

/// 地域代码，如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用区代码，如 cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  azValue;

/// 可用区名称
@property (strong,nonatomic,nonnull)  NSString*  azName;


-(id) initWithRegion:(NSString*) region
    azValue:(NSString*)azValue
    azName:(NSString*)azName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface LineType :NSObject

/// 链路类型
@property (strong,nonatomic,nonnull)  NSString*  lineTypeValue;

/// 地域
@property (strong,nonatomic,nonnull)  NSString*  region;


-(id) initWithLineTypeValue:(NSString*) lineTypeValue
    region:(NSString*)region;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AliasIpInfo :NSObject

/// 主CIDR或次要CIDR id
@property (strong,nonatomic,nonnull)  NSString*  idValue;

/// cidr段
@property (strong,nonatomic,nonnull)  NSString*  cidr;


-(id) initWithId:(NSString*) idValue
    cidr:(NSString*)cidr;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Keypair :NSObject

/// 密钥对id
@property (strong,nonatomic,nonnull)  NSString*  keypairId;

/// 地域
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 密钥对名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 公钥
@property (strong,nonatomic,nonnull)  NSString*  publicKey;

/// 指纹
@property (strong,nonatomic,nonnull)  NSString*  fingerPrint;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 更新时间
@property (strong,nonatomic,nonnull)  NSString*  updateTime;


-(id) initWithKeypairId:(NSString*) keypairId
    region:(NSString*)region
    name:(NSString*)name
    publicKey:(NSString*)publicKey
    fingerPrint:(NSString*)fingerPrint
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecondaryCidr :NSObject

/// 次要cidr的ID
@property (strong,nonatomic,nonnull)  NSString*  secondaryCidrId;

/// 次要cidr
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 地域代码, 如cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用区, 如cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 子网ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 次要cidr名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 私有网络Id
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 私有网络名称
@property (strong,nonatomic,nonnull)  NSString*  vpcName;

/// 可用ip数量
@property (strong,nonatomic,nonnull)  NSNumber*  availableIpCount;

/// 总ip数量
@property (strong,nonatomic,nonnull)  NSNumber*  totalIpCount;


-(id) initWithSecondaryCidrId:(NSString*) secondaryCidrId
    cidr:(NSString*)cidr
    region:(NSString*)region
    az:(NSString*)az
    subnetId:(NSString*)subnetId
    name:(NSString*)name
    vpcId:(NSString*)vpcId
    vpcName:(NSString*)vpcName
    availableIpCount:(NSNumber*)availableIpCount
    totalIpCount:(NSNumber*)totalIpCount;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AliasIpErrorInfo :NSObject

/// cidr段
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 错误信息
@property (strong,nonatomic,nonnull)  NSString*  message;


-(id) initWithCidr:(NSString*) cidr
    message:(NSString*)message;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Raid :NSObject

/// 磁盘类型, 如 system/data
@property (strong,nonatomic,nonnull)  NSString*  volumeType;

/// 设备详情
@property (strong,nonatomic,nonnull)  NSString*  volumeDetail;

/// RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  raidTypeId;

/// RAID类型, 如 NORAID, RAID0, RAID1
@property (strong,nonatomic,nonnull)  NSString*  raidType;

/// 云物理服务器类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// RAID类型描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;


-(id) initWithVolumeType:(NSString*) volumeType
    volumeDetail:(NSString*)volumeDetail
    raidTypeId:(NSString*)raidTypeId
    raidType:(NSString*)raidType
    deviceType:(NSString*)deviceType
    descriptionValue:(NSString*)descriptionValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface VpcSpec :NSObject

/// 私有网络范围
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;


-(id) initWithCidr:(NSString*) cidr
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecondaryCidrSpec :NSObject

/// 子网ID
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 子网的次要CIDR
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 名称
@property (strong,nonatomic,nonnull)  NSString*  name;


-(id) initWithSubnetId:(NSString*) subnetId
    cidr:(NSString*)cidr
    name:(NSString*)name;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceStock :NSObject

/// 实例类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// 区域代码, 如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用库存
@property (strong,nonatomic,nonnull)  NSNumber*  available;


-(id) initWithDeviceType:(NSString*) deviceType
    region:(NSString*)region
    available:(NSNumber*)available;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DeviceType :NSObject

/// 实例类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceTypeValue;

/// 实例类型名称, 如 边缘标准计算型Ⅰ
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 实例所属规格系列，如 计算、存储、GPU
@property (strong,nonatomic,nonnull)  NSString*  family;

/// 区域代码, 如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// CPU概要描述
@property (strong,nonatomic,nonnull)  NSString*  cpuConcise;

/// CPU详细信息
@property (strong,nonatomic,nonnull)  NSString*  cpuDetail;

/// 内存概要信息
@property (strong,nonatomic,nonnull)  NSString*  memConcise;

/// 内存详细信息
@property (strong,nonatomic,nonnull)  NSString*  memDetail;

/// 网口概要信息
@property (strong,nonatomic,nonnull)  NSString*  ifConcise;

/// 网口详细信息
@property (strong,nonatomic,nonnull)  NSString*  ifDetail;

/// GPU概要信息
@property (strong,nonatomic,nonnull)  NSString*  gpuConcise;

/// GPU详细信息
@property (strong,nonatomic,nonnull)  NSString*  gpuDetail;

/// 系统盘数量
@property (strong,nonatomic,nonnull)  NSNumber*  systemDiskAmount;

/// 系统盘单盘大小（GB）
@property (strong,nonatomic,nonnull)  NSNumber*  systemDiskSize;

/// 系统盘规格
@property (strong,nonatomic,nonnull)  NSString*  systemDiskModel;

/// 数据盘数量
@property (strong,nonatomic,nonnull)  NSNumber*  dataDiskAmount;

/// 数据盘单盘大小（GB）
@property (strong,nonatomic,nonnull)  NSNumber*  dataDiskSize;

/// 数据盘规格
@property (strong,nonatomic,nonnull)  NSString*  dataDiskModel;

/// 售罄状态
@property (strong,nonatomic,nonnull)  NSNumber*  isSoldOut;


-(id) initWithDeviceTypeValue:(NSString*) deviceTypeValue
    name:(NSString*)name
    family:(NSString*)family
    region:(NSString*)region
    cpuConcise:(NSString*)cpuConcise
    cpuDetail:(NSString*)cpuDetail
    memConcise:(NSString*)memConcise
    memDetail:(NSString*)memDetail
    ifConcise:(NSString*)ifConcise
    ifDetail:(NSString*)ifDetail
    gpuConcise:(NSString*)gpuConcise
    gpuDetail:(NSString*)gpuDetail
    systemDiskAmount:(NSNumber*)systemDiskAmount
    systemDiskSize:(NSNumber*)systemDiskSize
    systemDiskModel:(NSString*)systemDiskModel
    dataDiskAmount:(NSNumber*)dataDiskAmount
    dataDiskSize:(NSNumber*)dataDiskSize
    dataDiskModel:(NSString*)dataDiskModel
    isSoldOut:(NSNumber*)isSoldOut;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Vpc :NSObject

/// 地域代码, 如cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 私有网络ID
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 私有网络名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 私有网络CIDR
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;


-(id) initWithRegion:(NSString*) region
    vpcId:(NSString*)vpcId
    name:(NSString*)name
    cidr:(NSString*)cidr
    descriptionValue:(NSString*)descriptionValue
    createTime:(NSString*)createTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AliasIpSuccessInfo :NSObject

/// 别名IP id
@property (strong,nonatomic,nonnull)  NSString*  aliasIpId;

/// cidr段
@property (strong,nonatomic,nonnull)  NSString*  cidr;


-(id) initWithAliasIpId:(NSString*) aliasIpId
    cidr:(NSString*)cidr;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ElasticIp :NSObject

/// 地域代码, 如cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 弹性公网IPID
@property (strong,nonatomic,nonnull)  NSString*  elasticIpId;

/// 弹性公网IP
@property (strong,nonatomic,nonnull)  NSString*  elasticIpValue;

/// 带宽, 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 额外上行带宽, 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  extraUplinkBandwidth;

/// 链路类型
@property (strong,nonatomic,nonnull)  NSString*  lineType;

/// 状态
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 实例类型
@property (strong,nonatomic,nonnull)  NSString*  instanceType;

/// 实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 别名IP id
@property (strong,nonatomic,nonnull)  NSString*  aliasIpId;

/// 计费信息
@property (strong,nonatomic,nonnull)  Charge*  charge;


-(id) initWithRegion:(NSString*) region
    elasticIpId:(NSString*)elasticIpId
    elasticIpValue:(NSString*)elasticIpValue
    bandwidth:(NSNumber*)bandwidth
    extraUplinkBandwidth:(NSNumber*)extraUplinkBandwidth
    lineType:(NSString*)lineType
    status:(NSString*)status
    instanceType:(NSString*)instanceType
    instanceId:(NSString*)instanceId
    createTime:(NSString*)createTime
    aliasIpId:(NSString*)aliasIpId
    charge:(Charge*)charge;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ElasticIpSpec :NSObject

/// 带宽, 范围[1,10240] 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 额外上行带宽, 范围[0,10240] 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  extraUplinkBandwidth;

/// 购买数量
@property (strong,nonatomic,nonnull)  NSNumber*  count;

/// 计费配置
@property (strong,nonatomic,nonnull)  ChargeSpec*  charge;


-(id) initWithBandwidth:(NSNumber*) bandwidth
    extraUplinkBandwidth:(NSNumber*)extraUplinkBandwidth
    count:(NSNumber*)count
    charge:(ChargeSpec*)charge;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Instance :NSObject

/// 云物理服务器实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 区域代码, 如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  region;

/// 可用区, 如 cn-east-tz1a
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 实例类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// 云物理服务器名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 云物理服务器描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 云物理服务器生命周期状态
@property (strong,nonatomic,nonnull)  NSString*  status;

/// 是否启用外网, 如 yes/no
@property (strong,nonatomic,nonnull)  NSString*  enableInternet;

/// 是否启用IPv6, 如 yes/no
@property (strong,nonatomic,nonnull)  NSString*  enableIpv6;

/// 带宽, 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 额外上行带宽, 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  extraUplinkBandwidth;

/// 镜像类型, 如 standard
@property (strong,nonatomic,nonnull)  NSString*  imageType;

/// 操作系统类型ID
@property (strong,nonatomic,nonnull)  NSString*  osTypeId;

/// 操作系统名称
@property (strong,nonatomic,nonnull)  NSString*  osName;

/// 操作系统类型, 如 ubuntu/centos
@property (strong,nonatomic,nonnull)  NSString*  osType;

/// 操作系统版本, 如 16.04
@property (strong,nonatomic,nonnull)  NSString*  osVersion;

/// 系统盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  sysRaidTypeId;

/// 系统盘RAID类型, 如 NORAID, RAID0, RAID1
@property (strong,nonatomic,nonnull)  NSString*  sysRaidType;

/// 数据盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  dataRaidTypeId;

/// 数据盘RAID类型, 如 NORAID, RAID0, RAID1
@property (strong,nonatomic,nonnull)  NSString*  dataRaidType;

/// 网络类型, 如 basic, vpc
@property (strong,nonatomic,nonnull)  NSString*  networkType;

/// 私有网络ID
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 私有网络名称
@property (strong,nonatomic,nonnull)  NSString*  vpcName;

/// 子网编号
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 子网名称
@property (strong,nonatomic,nonnull)  NSString*  subnetName;

/// 内网IP
@property (strong,nonatomic,nonnull)  NSString*  privateIp;

/// 外网链路类型, 如 bgp
@property (strong,nonatomic,nonnull)  NSString*  lineType;

/// 弹性公网IPID
@property (strong,nonatomic,nonnull)  NSString*  elasticIpId;

/// 公网IP
@property (strong,nonatomic,nonnull)  NSString*  publicIp;

/// 公网IPv6
@property (strong,nonatomic,nonnull)  NSString*  publicIpv6;

/// 密钥对id
@property (strong,nonatomic,nonnull)  NSString*  keypairId;

/// agent状态
@property (strong,nonatomic,nonnull)  NSString*  agentStatus;

/// 计费信息
@property (strong,nonatomic,nonnull)  Charge*  charge;


-(id) initWithInstanceId:(NSString*) instanceId
    region:(NSString*)region
    az:(NSString*)az
    deviceType:(NSString*)deviceType
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    status:(NSString*)status
    enableInternet:(NSString*)enableInternet
    enableIpv6:(NSString*)enableIpv6
    bandwidth:(NSNumber*)bandwidth
    extraUplinkBandwidth:(NSNumber*)extraUplinkBandwidth
    imageType:(NSString*)imageType
    osTypeId:(NSString*)osTypeId
    osName:(NSString*)osName
    osType:(NSString*)osType
    osVersion:(NSString*)osVersion
    sysRaidTypeId:(NSString*)sysRaidTypeId
    sysRaidType:(NSString*)sysRaidType
    dataRaidTypeId:(NSString*)dataRaidTypeId
    dataRaidType:(NSString*)dataRaidType
    networkType:(NSString*)networkType
    vpcId:(NSString*)vpcId
    vpcName:(NSString*)vpcName
    subnetId:(NSString*)subnetId
    subnetName:(NSString*)subnetName
    privateIp:(NSString*)privateIp
    lineType:(NSString*)lineType
    elasticIpId:(NSString*)elasticIpId
    publicIp:(NSString*)publicIp
    publicIpv6:(NSString*)publicIpv6
    keypairId:(NSString*)keypairId
    agentStatus:(NSString*)agentStatus
    charge:(Charge*)charge;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface RenewalResource :NSObject

/// 资源ID
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 备注
@property (strong,nonatomic,nonnull)  NSString*  remark;

/// 绑定资源列表
@property (strong,nonatomic,nonnull)  NSArray<RenewalResource*>*  bind;


-(id) initWithResourceId:(NSString*) resourceId
    resourceName:(NSString*)resourceName
    remark:(NSString*)remark
    bind:(NSArray<RenewalResource*>*)bind;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AliasIpSpec :NSObject

/// 实例ID
@property (strong,nonatomic,nonnull)  NSString*  instanceId;

/// 别名ip配置
@property (strong,nonatomic,nonnull)  NSArray<AliasIpInfo*>*  aliasIps;


-(id) initWithInstanceId:(NSString*) instanceId
    aliasIps:(NSArray<AliasIpInfo*>*)aliasIps;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Region :NSObject

/// 地域代码, 如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  regionValue;

/// 地域名称，如 华东-台州
@property (strong,nonatomic,nonnull)  NSString*  regionName;

/// 可用区列表
@property (strong,nonatomic,nonnull)  NSArray<Az*>*  azs;


-(id) initWithRegionValue:(NSString*) regionValue
    regionName:(NSString*)regionName
    azs:(NSArray<Az*>*)azs;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface InstanceSpec :NSObject

/// 可用区, 如 cn-east-tz1
@property (strong,nonatomic,nonnull)  NSString*  az;

/// 实例类型, 如 edcps.c.normal1
@property (strong,nonatomic,nonnull)  NSString*  deviceType;

/// 主机名
@property (strong,nonatomic,nonnull)  NSString*  hostname;

/// 镜像类型, 取值范围：standard
@property (strong,nonatomic,nonnull)  NSString*  imageType;

/// 操作系统类型ID
@property (strong,nonatomic,nonnull)  NSString*  osTypeId;

/// 系统盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  sysRaidTypeId;

/// 数据盘RAID类型ID
@property (strong,nonatomic,nonnull)  NSString*  dataRaidTypeId;

/// 子网编号
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 是否启用外网，取值范围：yes、no
@property (strong,nonatomic,nonnull)  NSString*  enableInternet;

/// 网络类型，取值范围：vpc
@property (strong,nonatomic,nonnull)  NSString*  networkType;

/// 网络CIDR
@property (strong,nonatomic,nonnull)  NSString*  cidr;

/// 内网IP
@property (strong,nonatomic,nonnull)  NSString*  privateIp;

/// 外网链路类型, 目前支持联通un、电信ct、移动cm
@property (strong,nonatomic,nonnull)  NSString*  lineType;

/// 外网带宽, 范围[1,10240] 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  bandwidth;

/// 额外上行带宽, 范围[0,10240] 单位Mbps
@property (strong,nonatomic,nonnull)  NSNumber*  extraUplinkBandwidth;

/// 云物理服务器名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 云物理服务器描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 密码，不传值会随机生成密码
@property (strong,nonatomic,nonnull)  NSString*  password;

/// 购买数量
@property (strong,nonatomic,nonnull)  NSNumber*  count;

/// 可执行脚本Base64编码后的内容，支持shell和python脚本
@property (strong,nonatomic,nonnull)  NSString*  userData;

/// 密钥对id
@property (strong,nonatomic,nonnull)  NSString*  keypairId;

/// 计费配置
@property (strong,nonatomic,nonnull)  ChargeSpec*  charge;

/// 别名ip配置
@property (strong,nonatomic,nonnull)  NSArray<AliasIpInfo*>*  aliasIps;


-(id) initWithAz:(NSString*) az
    deviceType:(NSString*)deviceType
    hostname:(NSString*)hostname
    imageType:(NSString*)imageType
    osTypeId:(NSString*)osTypeId
    sysRaidTypeId:(NSString*)sysRaidTypeId
    dataRaidTypeId:(NSString*)dataRaidTypeId
    subnetId:(NSString*)subnetId
    enableInternet:(NSString*)enableInternet
    networkType:(NSString*)networkType
    cidr:(NSString*)cidr
    privateIp:(NSString*)privateIp
    lineType:(NSString*)lineType
    bandwidth:(NSNumber*)bandwidth
    extraUplinkBandwidth:(NSNumber*)extraUplinkBandwidth
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    password:(NSString*)password
    count:(NSNumber*)count
    userData:(NSString*)userData
    keypairId:(NSString*)keypairId
    charge:(ChargeSpec*)charge
    aliasIps:(NSArray<AliasIpInfo*>*)aliasIps;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* EdcpsModel_h */

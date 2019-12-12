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

elite相关API
elite相关API

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef EliteExecutor_h
#define EliteExecutor_h
#import <JDCloudOCSDKElite/EliteClient.h>

///  分页查询交付单信息
@interface EliteListSaleServiceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  查询价格
@interface EliteJdxQueryPriceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  查询交付信息接口
@interface EliteJdxQueryDeliveryInfoExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  获取云存服务信息
@interface EliteGetStoreServiceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  上报订单
@interface EliteJdxReportOrderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  根据交付单号查询交付单信息
@interface EliteGetSaleServiceByDeliverNumberExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  下单接口
@interface EliteJdxCreateOrderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  输出商品接口
@interface EliteJdxQueryProductExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
///  确认交付
@interface EliteConfirmSaleServiceDeliveryExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(EliteClient*)JDCloudClient;
@end
#endif /* EliteExecutor_h */

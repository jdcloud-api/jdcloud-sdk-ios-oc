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

jdx价格相关接口
jdx价格相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKElite/EliteApiModel.h>


@implementation EliteJdxQueryProductRequest
-(id) initWithRegion:(NSString *)regionId
pageNo:(NSNumber*)pageNo
pageSize:(NSNumber*)pageSize { 
    self.regionId = regionId;
    self.pageNo = pageNo;
    self.pageSize = pageSize;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNo:(NSNumber*)pageNo
pageSize:(NSNumber*)pageSize { 
    self.regionId = regionId;
    self.version = version;
    self.pageNo = pageNo;
    self.pageSize = pageSize;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self pageNo])
    {
        [result setValue:[self pageNo] forKey:@"pageNo"];
    }
    if([self pageSize])
    {
        [result setValue:[self pageSize] forKey:@"pageSize"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.pageNo = [dictionary objectForKey:@"pageNo"];
    self.pageSize = [dictionary objectForKey:@"pageSize"];
    return self;
} 

@end
@implementation EliteGetSaleServiceByDeliverNumberRequest
-(id) initWithRegion:(NSString *)regionId
deliverNumber:(NSString*)deliverNumber { 
    self.regionId = regionId;
    self.deliverNumber = deliverNumber;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
deliverNumber:(NSString*)deliverNumber { 
    self.regionId = regionId;
    self.version = version;
    self.deliverNumber = deliverNumber;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self deliverNumber])
    {
        [result setValue:[self deliverNumber] forKey:@"deliverNumber"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.deliverNumber = [dictionary objectForKey:@"deliverNumber"];
    return self;
} 

@end
@implementation EliteListSaleServiceRequest
-(id) initWithRegion:(NSString *)regionId
pageNo:(NSNumber*)pageNo
pageSize:(NSNumber*)pageSize
deliverNumber:(NSString*)deliverNumber
deliverStatus:(NSNumber*)deliverStatus
createDtStart:(NSString*)createDtStart
createDtEnd:(NSString*)createDtEnd { 
    self.regionId = regionId;
    self.pageNo = pageNo;
    self.pageSize = pageSize;
    self.deliverNumber = deliverNumber;
    self.deliverStatus = deliverStatus;
    self.createDtStart = createDtStart;
    self.createDtEnd = createDtEnd;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNo:(NSNumber*)pageNo
pageSize:(NSNumber*)pageSize
deliverNumber:(NSString*)deliverNumber
deliverStatus:(NSNumber*)deliverStatus
createDtStart:(NSString*)createDtStart
createDtEnd:(NSString*)createDtEnd { 
    self.regionId = regionId;
    self.version = version;
    self.pageNo = pageNo;
    self.pageSize = pageSize;
    self.deliverNumber = deliverNumber;
    self.deliverStatus = deliverStatus;
    self.createDtStart = createDtStart;
    self.createDtEnd = createDtEnd;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self pageNo])
    {
        [result setValue:[self pageNo] forKey:@"pageNo"];
    }
    if([self pageSize])
    {
        [result setValue:[self pageSize] forKey:@"pageSize"];
    }
    if([self deliverNumber])
    {
        [result setValue:[self deliverNumber] forKey:@"deliverNumber"];
    }
    if([self deliverStatus])
    {
        [result setValue:[self deliverStatus] forKey:@"deliverStatus"];
    }
    if([self createDtStart])
    {
        [result setValue:[self createDtStart] forKey:@"createDtStart"];
    }
    if([self createDtEnd])
    {
        [result setValue:[self createDtEnd] forKey:@"createDtEnd"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.pageNo = [dictionary objectForKey:@"pageNo"];
    self.pageSize = [dictionary objectForKey:@"pageSize"];
    self.deliverNumber = [dictionary objectForKey:@"deliverNumber"];
    self.deliverStatus = [dictionary objectForKey:@"deliverStatus"];
    self.createDtStart = [dictionary objectForKey:@"createDtStart"];
    self.createDtEnd = [dictionary objectForKey:@"createDtEnd"];
    return self;
} 

@end
@implementation EliteConfirmSaleServiceDeliveryResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message { 
    self.status = status;               
    self.message = message;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    return self;
} 

@end
@implementation EliteJdxQueryDeliveryInfoRequest
-(id) initWithRegion:(NSString *)regionId
orderNumber:(NSString*)orderNumber { 
    self.regionId = regionId;
    self.orderNumber = orderNumber;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
orderNumber:(NSString*)orderNumber { 
    self.regionId = regionId;
    self.version = version;
    self.orderNumber = orderNumber;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self orderNumber])
    {
        [result setValue:[self orderNumber] forKey:@"orderNumber"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.orderNumber = [dictionary objectForKey:@"orderNumber"];
    return self;
} 

@end
@implementation EliteGetStoreServiceRequest
-(id) initWithRegion:(NSString *)regionId
buyerPin:(NSString*)buyerPin
businessData:(NSString*)businessData
queryAll:(NSNumber*)queryAll { 
    self.regionId = regionId;
    self.buyerPin = buyerPin;
    self.businessData = businessData;
    self.queryAll = queryAll;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
buyerPin:(NSString*)buyerPin
businessData:(NSString*)businessData
queryAll:(NSNumber*)queryAll { 
    self.regionId = regionId;
    self.version = version;
    self.buyerPin = buyerPin;
    self.businessData = businessData;
    self.queryAll = queryAll;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self buyerPin])
    {
        [result setValue:[self buyerPin] forKey:@"buyerPin"];
    }
    if([self businessData])
    {
        [result setValue:[self businessData] forKey:@"businessData"];
    }
    if([self queryAll])
    {
        [result setValue:[self queryAll] forKey:@"queryAll"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.buyerPin = [dictionary objectForKey:@"buyerPin"];
    self.businessData = [dictionary objectForKey:@"businessData"];
    self.queryAll = [dictionary objectForKey:@"queryAll"];
    return self;
} 

@end
@implementation EliteJdxReportOrderResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message { 
    self.status = status;               
    self.message = message;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    return self;
} 

@end
@implementation EliteJdxQueryProductResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(JdxProductVoListData*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[JdxProductVoListData alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteJdxQueryProductResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteJdxQueryProductResult* result = [[EliteJdxQueryProductResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteJdxQueryProductResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteListSaleServiceResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(ProductServiceVoListData*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[ProductServiceVoListData alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteListSaleServiceResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteListSaleServiceResult* result = [[EliteListSaleServiceResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteListSaleServiceResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteConfirmSaleServiceDeliveryRequest
-(id) initWithRegion:(NSString *)regionId
confirmDeliveryInfo:(ConfirmDeliveryInfo*)confirmDeliveryInfo { 
    self.regionId = regionId;
    self.confirmDeliveryInfo = confirmDeliveryInfo;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
confirmDeliveryInfo:(ConfirmDeliveryInfo*)confirmDeliveryInfo { 
    self.regionId = regionId;
    self.version = version;
    self.confirmDeliveryInfo = confirmDeliveryInfo;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self confirmDeliveryInfo])
    {
        [result setValue:[[self confirmDeliveryInfo] dictionary]forKey:@"confirmDeliveryInfo"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.confirmDeliveryInfo = [[ConfirmDeliveryInfo alloc]initWithDic:[dictionary objectForKey:@"confirmDeliveryInfo"]];
    return self;
} 

@end
  
@implementation EliteConfirmSaleServiceDeliveryResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteConfirmSaleServiceDeliveryResult* result = [[EliteConfirmSaleServiceDeliveryResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteConfirmSaleServiceDeliveryResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteGetSaleServiceByDeliverNumberResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(ProductServiceVo*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[ProductServiceVo alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteGetSaleServiceByDeliverNumberResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteGetSaleServiceByDeliverNumberResult* result = [[EliteGetSaleServiceByDeliverNumberResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteGetSaleServiceByDeliverNumberResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteJdxQueryDeliveryInfoResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(QueryDeliveryInfoResultVo*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[QueryDeliveryInfoResultVo alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteJdxQueryDeliveryInfoResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteJdxQueryDeliveryInfoResult* result = [[EliteJdxQueryDeliveryInfoResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteJdxQueryDeliveryInfoResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteGetStoreServiceResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(StoreServiceVo*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[StoreServiceVo alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteGetStoreServiceResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteGetStoreServiceResult* result = [[EliteGetStoreServiceResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteGetStoreServiceResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteJdxCreateOrderResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(CreateOrderResultVo*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[CreateOrderResultVo alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteJdxReportOrderResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteJdxReportOrderResult* result = [[EliteJdxReportOrderResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteJdxReportOrderResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteJdxReportOrderRequest
-(id) initWithRegion:(NSString *)regionId
reportOrderInfo:(ReportOrderInfo*)reportOrderInfo { 
    self.regionId = regionId;
    self.reportOrderInfo = reportOrderInfo;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
reportOrderInfo:(ReportOrderInfo*)reportOrderInfo { 
    self.regionId = regionId;
    self.version = version;
    self.reportOrderInfo = reportOrderInfo;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self reportOrderInfo])
    {
        [result setValue:[[self reportOrderInfo] dictionary]forKey:@"reportOrderInfo"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.reportOrderInfo = [[ReportOrderInfo alloc]initWithDic:[dictionary objectForKey:@"reportOrderInfo"]];
    return self;
} 

@end
  
@implementation EliteJdxCreateOrderResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteJdxCreateOrderResult* result = [[EliteJdxCreateOrderResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteJdxCreateOrderResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation EliteJdxCreateOrderRequest
-(id) initWithRegion:(NSString *)regionId
createOrderInfo:(CreateOrderInfo*)createOrderInfo { 
    self.regionId = regionId;
    self.createOrderInfo = createOrderInfo;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
createOrderInfo:(CreateOrderInfo*)createOrderInfo { 
    self.regionId = regionId;
    self.version = version;
    self.createOrderInfo = createOrderInfo;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self createOrderInfo])
    {
        [result setValue:[[self createOrderInfo] dictionary]forKey:@"createOrderInfo"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.createOrderInfo = [[CreateOrderInfo alloc]initWithDic:[dictionary objectForKey:@"createOrderInfo"]];
    return self;
} 

@end
@implementation EliteJdxQueryPriceRequest
-(id) initWithRegion:(NSString *)regionId
queryPriceParam:(QueryPriceParam*)queryPriceParam { 
    self.regionId = regionId;
    self.queryPriceParam = queryPriceParam;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
queryPriceParam:(QueryPriceParam*)queryPriceParam { 
    self.regionId = regionId;
    self.version = version;
    self.queryPriceParam = queryPriceParam;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self queryPriceParam])
    {
        [result setValue:[[self queryPriceParam] dictionary]forKey:@"queryPriceParam"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.queryPriceParam = [[QueryPriceParam alloc]initWithDic:[dictionary objectForKey:@"queryPriceParam"]];
    return self;
} 

@end
@implementation EliteJdxQueryPriceResult
-(id) initWithStatus:(NSNumber*) status
        message:(NSString*)message
        data:(QueryPriceResultVo*)data { 
    self.status = status;               
    self.message = message;               
    self.data = data;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self data])
    {
        [result setValue:[[self data] dictionary]forKey:@"data"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    self.data = [[QueryPriceResultVo alloc]initWithDic:[dictionary objectForKey:@"data"]];
    return self;
} 

@end
  
@implementation EliteJdxQueryPriceResponse
-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init]; 
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    } 
    if([self result])
    {
        
        [result setValue:[[self result] dictionary] forKey:@"result"];
    }
    if([self error])
    {
        
        [result setValue:[[self error] dictionary] forKey:@"error"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary
{
    
    self.requestId = [dictionary objectForKey:@"requestId"];
EliteJdxQueryPriceResult* result = [[EliteJdxQueryPriceResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(EliteJdxQueryPriceResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
 

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

yunding-datapush
云鼎数据推送OPENAPI接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKYundingdatapush/YundingdatapushApiModel.h>


@implementation YundingdatapushDescribeDatapushVendersRequest
-(id) initWithRegion:(NSString *)regionId
appkey:(NSString*)appkey
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
ydRdsInstanceId:(NSString*)ydRdsInstanceId
rdsInstanceName:(NSString*)rdsInstanceName
venderId:(NSString*)venderId
venderName:(NSString*)venderName { 
    self.regionId = regionId;
    self.appkey = appkey;
    self.pageNumber = pageNumber;
    self.pageSize = pageSize;
    self.ydRdsInstanceId = ydRdsInstanceId;
    self.rdsInstanceName = rdsInstanceName;
    self.venderId = venderId;
    self.venderName = venderName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
appkey:(NSString*)appkey
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
ydRdsInstanceId:(NSString*)ydRdsInstanceId
rdsInstanceName:(NSString*)rdsInstanceName
venderId:(NSString*)venderId
venderName:(NSString*)venderName { 
    self.regionId = regionId;
    self.version = version;
    self.appkey = appkey;
    self.pageNumber = pageNumber;
    self.pageSize = pageSize;
    self.ydRdsInstanceId = ydRdsInstanceId;
    self.rdsInstanceName = rdsInstanceName;
    self.venderId = venderId;
    self.venderName = venderName;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self appkey])
    {
        [result setValue:[self appkey] forKey:@"appkey"];
    }
    if([self pageNumber])
    {
        [result setValue:[self pageNumber] forKey:@"pageNumber"];
    }
    if([self pageSize])
    {
        [result setValue:[self pageSize] forKey:@"pageSize"];
    }
    if([self ydRdsInstanceId])
    {
        [result setValue:[self ydRdsInstanceId] forKey:@"ydRdsInstanceId"];
    }
    if([self rdsInstanceName])
    {
        [result setValue:[self rdsInstanceName] forKey:@"rdsInstanceName"];
    }
    if([self venderId])
    {
        [result setValue:[self venderId] forKey:@"venderId"];
    }
    if([self venderName])
    {
        [result setValue:[self venderName] forKey:@"venderName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.appkey = [dictionary objectForKey:@"appkey"];
    self.pageNumber = [dictionary objectForKey:@"pageNumber"];
    self.pageSize = [dictionary objectForKey:@"pageSize"];
    self.ydRdsInstanceId = [dictionary objectForKey:@"ydRdsInstanceId"];
    self.rdsInstanceName = [dictionary objectForKey:@"rdsInstanceName"];
    self.venderId = [dictionary objectForKey:@"venderId"];
    self.venderName = [dictionary objectForKey:@"venderName"];
    return self;
} 

@end
@implementation YundingdatapushDeleteDatapushVenderRequest
-(id) initWithRegion:(NSString *)regionId
appkey:(NSString*)appkey
ydRdsInstanceId:(NSString*)ydRdsInstanceId
venderId:(NSString*)venderId { 
    self.regionId = regionId;
    self.appkey = appkey;
    self.ydRdsInstanceId = ydRdsInstanceId;
    self.venderId = venderId;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
appkey:(NSString*)appkey
ydRdsInstanceId:(NSString*)ydRdsInstanceId
venderId:(NSString*)venderId { 
    self.regionId = regionId;
    self.version = version;
    self.appkey = appkey;
    self.ydRdsInstanceId = ydRdsInstanceId;
    self.venderId = venderId;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self appkey])
    {
        [result setValue:[self appkey] forKey:@"appkey"];
    }
    if([self ydRdsInstanceId])
    {
        [result setValue:[self ydRdsInstanceId] forKey:@"ydRdsInstanceId"];
    }
    if([self venderId])
    {
        [result setValue:[self venderId] forKey:@"venderId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.appkey = [dictionary objectForKey:@"appkey"];
    self.ydRdsInstanceId = [dictionary objectForKey:@"ydRdsInstanceId"];
    self.venderId = [dictionary objectForKey:@"venderId"];
    return self;
} 

@end
@implementation YundingdatapushDescribeRdsInstancesRequest
-(id) initWithRegion:(NSString *)regionId
appkey:(NSString*)appkey { 
    self.regionId = regionId;
    self.appkey = appkey;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
appkey:(NSString*)appkey { 
    self.regionId = regionId;
    self.version = version;
    self.appkey = appkey;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self appkey])
    {
        [result setValue:[self appkey] forKey:@"appkey"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.appkey = [dictionary objectForKey:@"appkey"];
    return self;
} 

@end
@implementation YundingdatapushAddDatapushVenderResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
@implementation YundingdatapushDescribeDatapushVendersResult
-(id) initWithVenders:(NSArray<VenderShow*>*) venders { 
    self.venders = venders;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self venders])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self venders] count]; i++) {
            VenderShow* item = [[self venders] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"venders"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* vendersArray = [dictionary objectForKey:@"venders"];
    if(vendersArray&&![vendersArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [vendersArray count];i++)
        {
        VenderShow* item = [[VenderShow alloc]initWithDic:[vendersArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.venders = propertyArray;
    }
    return self;
} 

@end
  
@implementation YundingdatapushDescribeDatapushVendersResponse
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
YundingdatapushDescribeDatapushVendersResult* result = [[YundingdatapushDescribeDatapushVendersResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(YundingdatapushDescribeDatapushVendersResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation YundingdatapushAddDatapushVenderRequest
-(id) initWithRegion:(NSString *)regionId
datapushVender:(Vender*)datapushVender { 
    self.regionId = regionId;
    self.datapushVender = datapushVender;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
datapushVender:(Vender*)datapushVender { 
    self.regionId = regionId;
    self.version = version;
    self.datapushVender = datapushVender;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self datapushVender])
    {
        [result setValue:[[self datapushVender] dictionary]forKey:@"datapushVender"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.datapushVender = [[Vender alloc]initWithDic:[dictionary objectForKey:@"datapushVender"]];
    return self;
} 

@end
  
@implementation YundingdatapushAddDatapushVenderResponse
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
YundingdatapushAddDatapushVenderResult* result = [[YundingdatapushAddDatapushVenderResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(YundingdatapushAddDatapushVenderResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation YundingdatapushDescribeRdsInstancesResult
-(id) initWithVenders:(NSArray<RdsInstance*>*) venders { 
    self.venders = venders;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self venders])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self venders] count]; i++) {
            RdsInstance* item = [[self venders] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"venders"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* vendersArray = [dictionary objectForKey:@"venders"];
    if(vendersArray&&![vendersArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [vendersArray count];i++)
        {
        RdsInstance* item = [[RdsInstance alloc]initWithDic:[vendersArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.venders = propertyArray;
    }
    return self;
} 

@end
@implementation YundingdatapushDeleteDatapushVenderResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation YundingdatapushDeleteDatapushVenderResponse
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
YundingdatapushDeleteDatapushVenderResult* result = [[YundingdatapushDeleteDatapushVenderResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(YundingdatapushDeleteDatapushVenderResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation YundingdatapushDescribeRdsInstancesResponse
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
YundingdatapushDescribeRdsInstancesResult* result = [[YundingdatapushDescribeRdsInstancesResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(YundingdatapushDescribeRdsInstancesResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
 

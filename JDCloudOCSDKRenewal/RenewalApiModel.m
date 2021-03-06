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

Renew Management APIs
续费管理相关接口

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKRenewal/RenewalApiModel.h>


@implementation RenewalSetRenewalResult
-(id) initWithStringResult:(NSString*) stringResult { 
    self.stringResult = stringResult;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self stringResult])
    {
        [result setValue:[self stringResult] forKey:@"stringResult"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.stringResult = [dictionary objectForKey:@"stringResult"];
    return self;
} 

@end
@implementation RenewalRenewInstanceResult
-(id) initWithOrderNumber:(NSString*) orderNumber { 
    self.orderNumber = orderNumber;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
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
@implementation RenewalSetRenewalRequest
-(id) initWithRegion:(NSString *)regionId
setRenewalParam:(SetRenewalParam*)setRenewalParam { 
    self.regionId = regionId;
    self.setRenewalParam = setRenewalParam;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
setRenewalParam:(SetRenewalParam*)setRenewalParam { 
    self.regionId = regionId;
    self.version = version;
    self.setRenewalParam = setRenewalParam;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self setRenewalParam])
    {
        [result setValue:[[self setRenewalParam] dictionary]forKey:@"setRenewalParam"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.setRenewalParam = [[SetRenewalParam alloc]initWithDic:[dictionary objectForKey:@"setRenewalParam"]];
    return self;
} 

@end
@implementation RenewalQueryInstanceResult
-(id) initWithListQueries:(NSArray<ListQuery*>*) listQueries
        totalCount:(NSNumber*)totalCount { 
    self.listQueries = listQueries;               
    self.totalCount = totalCount;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self listQueries])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self listQueries] count]; i++) {
            ListQuery* item = [[self listQueries] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"listQueries"];
    }
    if([self totalCount])
    {
        [result setValue:[self totalCount] forKey:@"totalCount"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* listQueriesArray = [dictionary objectForKey:@"listQueries"];
    if(listQueriesArray&&![listQueriesArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [listQueriesArray count];i++)
        {
        ListQuery* item = [[ListQuery alloc]initWithDic:[listQueriesArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.listQueries = propertyArray;
    }
    self.totalCount = [dictionary objectForKey:@"totalCount"];
    return self;
} 

@end
@implementation RenewalQueryInstanceRequest
-(id) initWithRegion:(NSString *)regionId
queryInstanceParam:(QueryInstanceParam*)queryInstanceParam { 
    self.regionId = regionId;
    self.queryInstanceParam = queryInstanceParam;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
queryInstanceParam:(QueryInstanceParam*)queryInstanceParam { 
    self.regionId = regionId;
    self.version = version;
    self.queryInstanceParam = queryInstanceParam;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self queryInstanceParam])
    {
        [result setValue:[[self queryInstanceParam] dictionary]forKey:@"queryInstanceParam"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.queryInstanceParam = [[QueryInstanceParam alloc]initWithDic:[dictionary objectForKey:@"queryInstanceParam"]];
    return self;
} 

@end
  
@implementation RenewalRenewInstanceResponse
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
RenewalRenewInstanceResult* result = [[RenewalRenewInstanceResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(RenewalRenewInstanceResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation RenewalSetRenewalResponse
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
RenewalSetRenewalResult* result = [[RenewalSetRenewalResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(RenewalSetRenewalResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation RenewalQueryInstanceResponse
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
RenewalQueryInstanceResult* result = [[RenewalQueryInstanceResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(RenewalQueryInstanceResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation RenewalRenewInstanceRequest
-(id) initWithRegion:(NSString *)regionId
renewInstanceParam:(RenewInstanceParam*)renewInstanceParam { 
    self.regionId = regionId;
    self.renewInstanceParam = renewInstanceParam;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
renewInstanceParam:(RenewInstanceParam*)renewInstanceParam { 
    self.regionId = regionId;
    self.version = version;
    self.renewInstanceParam = renewInstanceParam;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self renewInstanceParam])
    {
        [result setValue:[[self renewInstanceParam] dictionary]forKey:@"renewInstanceParam"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.renewInstanceParam = [[RenewInstanceParam alloc]initWithDic:[dictionary objectForKey:@"renewInstanceParam"]];
    return self;
} 

@end
 

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

back source configuration openapi
back source configuration openapi

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKOssopenapi/OssopenapiApiModel.h>


@implementation OssopenapiGetSingleBucketCapacityRequest
-(id) initWithRegion:(NSString *)regionId
capacityTypes:(NSArray<NSNumber*>*)capacityTypes
beginTime:(NSString*)beginTime
endTime:(NSString*)endTime
periodType:(NSNumber*)periodType
method:(NSNumber*)method
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.capacityTypes = capacityTypes;
    self.beginTime = beginTime;
    self.endTime = endTime;
    self.periodType = periodType;
    self.method = method;
    self.bucketName = bucketName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
capacityTypes:(NSArray<NSNumber*>*)capacityTypes
beginTime:(NSString*)beginTime
endTime:(NSString*)endTime
periodType:(NSNumber*)periodType
method:(NSNumber*)method
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.version = version;
    self.capacityTypes = capacityTypes;
    self.beginTime = beginTime;
    self.endTime = endTime;
    self.periodType = periodType;
    self.method = method;
    self.bucketName = bucketName;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self capacityTypes])
    {
        [result setValue:[self capacityTypes] forKey:@"capacityTypes"];
    }
    if([self beginTime])
    {
        [result setValue:[self beginTime] forKey:@"beginTime"];
    }
    if([self endTime])
    {
        [result setValue:[self endTime] forKey:@"endTime"];
    }
    if([self periodType])
    {
        [result setValue:[self periodType] forKey:@"periodType"];
    }
    if([self method])
    {
        [result setValue:[self method] forKey:@"method"];
    }
    if([self bucketName])
    {
        [result setValue:[self bucketName] forKey:@"bucketName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.capacityTypes = [dictionary objectForKey:@"capacityTypes"];
    self.beginTime = [dictionary objectForKey:@"beginTime"];
    self.endTime = [dictionary objectForKey:@"endTime"];
    self.periodType = [dictionary objectForKey:@"periodType"];
    self.method = [dictionary objectForKey:@"method"];
    self.bucketName = [dictionary objectForKey:@"bucketName"];
    return self;
} 

@end
@implementation OssopenapiDeleteBackSourceConfigurationRequest
-(id) initWithRegion:(NSString *)regionId
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.bucketName = bucketName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.version = version;
    self.bucketName = bucketName;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self bucketName])
    {
        [result setValue:[self bucketName] forKey:@"bucketName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.bucketName = [dictionary objectForKey:@"bucketName"];
    return self;
} 

@end
@implementation OssopenapiGetBackSourceConfigurationRequest
-(id) initWithRegion:(NSString *)regionId
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.bucketName = bucketName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.version = version;
    self.bucketName = bucketName;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self bucketName])
    {
        [result setValue:[self bucketName] forKey:@"bucketName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.bucketName = [dictionary objectForKey:@"bucketName"];
    return self;
} 

@end
@implementation OssopenapiGetSingleBucketCapacityResult
-(id) initWithResultList:(NSArray<BucketCapacityStatistic*>*) resultList { 
    self.resultList = resultList;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self resultList])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self resultList] count]; i++) {
            BucketCapacityStatistic* item = [[self resultList] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"resultList"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* resultListArray = [dictionary objectForKey:@"resultList"];
    if(resultListArray&&![resultListArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [resultListArray count];i++)
        {
        BucketCapacityStatistic* item = [[BucketCapacityStatistic alloc]initWithDic:[resultListArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.resultList = propertyArray;
    }
    return self;
} 

@end
  
@implementation OssopenapiGetSingleBucketCapacityResponse
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
OssopenapiGetSingleBucketCapacityResult* result = [[OssopenapiGetSingleBucketCapacityResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(OssopenapiGetSingleBucketCapacityResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation OssopenapiPutBackSourceConfigurationResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation OssopenapiPutBackSourceConfigurationResponse
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
OssopenapiPutBackSourceConfigurationResult* result = [[OssopenapiPutBackSourceConfigurationResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(OssopenapiPutBackSourceConfigurationResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation OssopenapiDeleteBackSourceConfigurationResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation OssopenapiDeleteBackSourceConfigurationResponse
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
OssopenapiDeleteBackSourceConfigurationResult* result = [[OssopenapiDeleteBackSourceConfigurationResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(OssopenapiDeleteBackSourceConfigurationResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation OssopenapiGetBackSourceConfigurationResult
-(id) initWithBackSourceRules:(NSArray<BackSourceRule*>*) backSourceRules { 
    self.backSourceRules = backSourceRules;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self backSourceRules])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self backSourceRules] count]; i++) {
            BackSourceRule* item = [[self backSourceRules] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"backSourceRules"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* backSourceRulesArray = [dictionary objectForKey:@"backSourceRules"];
    if(backSourceRulesArray&&![backSourceRulesArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [backSourceRulesArray count];i++)
        {
        BackSourceRule* item = [[BackSourceRule alloc]initWithDic:[backSourceRulesArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.backSourceRules = propertyArray;
    }
    return self;
} 

@end
  
@implementation OssopenapiGetBackSourceConfigurationResponse
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
OssopenapiGetBackSourceConfigurationResult* result = [[OssopenapiGetBackSourceConfigurationResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(OssopenapiGetBackSourceConfigurationResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation OssopenapiPutBackSourceConfigurationRequest
-(id) initWithRegion:(NSString *)regionId
backSourceRules:(NSArray<BackSourceRule*>*)backSourceRules
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.backSourceRules = backSourceRules;
    self.bucketName = bucketName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
backSourceRules:(NSArray<BackSourceRule*>*)backSourceRules
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.version = version;
    self.backSourceRules = backSourceRules;
    self.bucketName = bucketName;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self backSourceRules])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self backSourceRules] count]; i++) {
            BackSourceRule* item = [[self backSourceRules] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"backSourceRules"];
    }
    if([self bucketName])
    {
        [result setValue:[self bucketName] forKey:@"bucketName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* backSourceRulesArray = [dictionary objectForKey:@"backSourceRules"];
    if(backSourceRulesArray&&![backSourceRulesArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [backSourceRulesArray count];i++)
        {
        BackSourceRule* item = [[BackSourceRule alloc]initWithDic:[backSourceRulesArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.backSourceRules = propertyArray;
    }
    self.bucketName = [dictionary objectForKey:@"bucketName"];
    return self;
} 

@end
 

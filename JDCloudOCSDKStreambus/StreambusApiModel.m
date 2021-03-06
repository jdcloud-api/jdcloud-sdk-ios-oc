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

TOPIC相关 API
流数据总线topic相关信息接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKStreambus/StreambusApiModel.h>


@implementation StreambusGetConsumerGroupListRequest
-(id) initWithRegion:(NSString *)regionId
topicId:(NSNumber*)topicId { 
    self.regionId = regionId;
    self.topicId = topicId;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicId:(NSNumber*)topicId { 
    self.regionId = regionId;
    self.version = version;
    self.topicId = topicId;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self topicId])
    {
        [result setValue:[self topicId] forKey:@"topicId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.topicId = [dictionary objectForKey:@"topicId"];
    return self;
} 

@end
@implementation StreambusDeleteConsumerGroupRequest
-(id) initWithRegion:(NSString *)regionId
topicId:(NSNumber*)topicId
consumerGroupId:(NSNumber*)consumerGroupId { 
    self.regionId = regionId;
    self.topicId = topicId;
    self.consumerGroupId = consumerGroupId;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicId:(NSNumber*)topicId
consumerGroupId:(NSNumber*)consumerGroupId { 
    self.regionId = regionId;
    self.version = version;
    self.topicId = topicId;
    self.consumerGroupId = consumerGroupId;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self topicId])
    {
        [result setValue:[self topicId] forKey:@"topicId"];
    }
    if([self consumerGroupId])
    {
        [result setValue:[self consumerGroupId] forKey:@"consumerGroupId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.topicId = [dictionary objectForKey:@"topicId"];
    self.consumerGroupId = [dictionary objectForKey:@"consumerGroupId"];
    return self;
} 

@end
@implementation StreambusDeleteConsumerGroupResult
-(id) initWithMessage:(NSString*) message
        status:(NSNumber*)status { 
    self.message = message;               
    self.status = status;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.message = [dictionary objectForKey:@"message"];
    self.status = [dictionary objectForKey:@"status"];
    return self;
} 

@end
@implementation StreambusCreateConsumerGroupResult
-(id) initWithMessage:(NSString*) message
        status:(NSNumber*)status { 
    self.message = message;               
    self.status = status;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.message = [dictionary objectForKey:@"message"];
    self.status = [dictionary objectForKey:@"status"];
    return self;
} 

@end
@implementation StreambusUpdateTopicResult
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
@implementation StreambusGetTopicListRequest
-(id) initWithRegion:(NSString *)regionId
keyword:(NSString*)keyword { 
    self.regionId = regionId;
    self.keyword = keyword;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
keyword:(NSString*)keyword { 
    self.regionId = regionId;
    self.version = version;
    self.keyword = keyword;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self keyword])
    {
        [result setValue:[self keyword] forKey:@"keyword"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.keyword = [dictionary objectForKey:@"keyword"];
    return self;
} 

@end
@implementation StreambusDeleteTopicResult
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
@implementation StreambusDescribeTopicRequest
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name { 
    self.regionId = regionId;
    self.name = name;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name { 
    self.regionId = regionId;
    self.version = version;
    self.name = name;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    return self;
} 

@end
@implementation StreambusAddTopicResult
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
@implementation StreambusDeleteTopicRequest
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name { 
    self.regionId = regionId;
    self.name = name;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name { 
    self.regionId = regionId;
    self.version = version;
    self.name = name;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    return self;
} 

@end
@implementation StreambusCreateConsumerGroupRequest
-(id) initWithRegion:(NSString *)regionId
consumerGroupStr:(ConsumerGroup*)consumerGroupStr { 
    self.regionId = regionId;
    self.consumerGroupStr = consumerGroupStr;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
consumerGroupStr:(ConsumerGroup*)consumerGroupStr { 
    self.regionId = regionId;
    self.version = version;
    self.consumerGroupStr = consumerGroupStr;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self consumerGroupStr])
    {
        [result setValue:[[self consumerGroupStr] dictionary]forKey:@"consumerGroupStr"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.consumerGroupStr = [[ConsumerGroup alloc]initWithDic:[dictionary objectForKey:@"consumerGroupStr"]];
    return self;
} 

@end
  
@implementation StreambusDeleteConsumerGroupResponse
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
StreambusDeleteConsumerGroupResult* result = [[StreambusDeleteConsumerGroupResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusDeleteConsumerGroupResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation StreambusCreateConsumerGroupResponse
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
StreambusCreateConsumerGroupResult* result = [[StreambusCreateConsumerGroupResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusCreateConsumerGroupResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation StreambusGetConsumerGroupListResult
-(id) initWithConsumerGroup:(NSArray<ConsumerGroup*>*) consumerGroup { 
    self.consumerGroup = consumerGroup;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self consumerGroup])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self consumerGroup] count]; i++) {
            ConsumerGroup* item = [[self consumerGroup] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"consumerGroup"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* consumerGroupArray = [dictionary objectForKey:@"consumerGroup"];
    if(consumerGroupArray&&![consumerGroupArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [consumerGroupArray count];i++)
        {
        ConsumerGroup* item = [[ConsumerGroup alloc]initWithDic:[consumerGroupArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.consumerGroup = propertyArray;
    }
    return self;
} 

@end
  
@implementation StreambusGetConsumerGroupListResponse
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
StreambusGetConsumerGroupListResult* result = [[StreambusGetConsumerGroupListResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusGetConsumerGroupListResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation StreambusDescribeTopicResult
-(id) initWithTopic:(TopicModel*) topic { 
    self.topic = topic;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self topic])
    {
        [result setValue:[[self topic] dictionary]forKey:@"topic"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.topic = [[TopicModel alloc]initWithDic:[dictionary objectForKey:@"topic"]];
    return self;
} 

@end
  
@implementation StreambusDescribeTopicResponse
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
StreambusDescribeTopicResult* result = [[StreambusDescribeTopicResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusDescribeTopicResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation StreambusAddTopicRequest
-(id) initWithRegion:(NSString *)regionId
topicModel:(TopicModel*)topicModel { 
    self.regionId = regionId;
    self.topicModel = topicModel;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicModel:(TopicModel*)topicModel { 
    self.regionId = regionId;
    self.version = version;
    self.topicModel = topicModel;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self topicModel])
    {
        [result setValue:[[self topicModel] dictionary]forKey:@"topicModel"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.topicModel = [[TopicModel alloc]initWithDic:[dictionary objectForKey:@"topicModel"]];
    return self;
} 

@end
@implementation StreambusUpdateTopicRequest
-(id) initWithRegion:(NSString *)regionId
topicModel:(TopicModel*)topicModel { 
    self.regionId = regionId;
    self.topicModel = topicModel;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicModel:(TopicModel*)topicModel { 
    self.regionId = regionId;
    self.version = version;
    self.topicModel = topicModel;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self topicModel])
    {
        [result setValue:[[self topicModel] dictionary]forKey:@"topicModel"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.topicModel = [[TopicModel alloc]initWithDic:[dictionary objectForKey:@"topicModel"]];
    return self;
} 

@end
  
@implementation StreambusAddTopicResponse
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
StreambusAddTopicResult* result = [[StreambusAddTopicResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusAddTopicResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation StreambusGetTopicListResult
-(id) initWithTopic:(NSArray<TopicListInfo*>*) topic { 
    self.topic = topic;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self topic])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self topic] count]; i++) {
            TopicListInfo* item = [[self topic] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"topic"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    NSArray* topicArray = [dictionary objectForKey:@"topic"];
    if(topicArray&&![topicArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [topicArray count];i++)
        {
        TopicListInfo* item = [[TopicListInfo alloc]initWithDic:[topicArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.topic = propertyArray;
    }
    return self;
} 

@end
  
@implementation StreambusGetTopicListResponse
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
StreambusGetTopicListResult* result = [[StreambusGetTopicListResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusGetTopicListResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation StreambusUpdateTopicResponse
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
StreambusUpdateTopicResult* result = [[StreambusUpdateTopicResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusUpdateTopicResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation StreambusDeleteTopicResponse
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
StreambusDeleteTopicResult* result = [[StreambusDeleteTopicResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(StreambusDeleteTopicResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
 

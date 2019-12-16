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

媒体处理相关接口
多媒体处理服务API，包括截图、转码、媒体处理消息通知等操作。本文档详细说明了媒体处理API及用法，适合开发人员阅读。

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>
#import <JDCloudOCSDKMps/MpsApiModel.h>


@implementation MpsGetStyleDelimiterResult
-(id) initWithDelimiters:(NSArray<NSString*>*) delimiters { 
    self.delimiters = delimiters;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self delimiters])
    {
        [result setValue:[self delimiters] forKey:@"delimiters"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.delimiters = [dictionary objectForKey:@"delimiters"];
    return self;
} 

@end
@implementation MpsDeleteStyleDelimiterRequest
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
@implementation MpsGetStyleDelimiterRequest
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
@implementation MpsSetStyleDelimiterRequest
-(id) initWithRegion:(NSString *)regionId
delimiters:(NSArray<NSString*>*)delimiters
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.delimiters = delimiters;
    self.bucketName = bucketName;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
delimiters:(NSArray<NSString*>*)delimiters
bucketName:(NSString*)bucketName { 
    self.regionId = regionId;
    self.version = version;
    self.delimiters = delimiters;
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
    if([self delimiters])
    {
        [result setValue:[self delimiters] forKey:@"delimiters"];
    }
    if([self bucketName])
    {
        [result setValue:[self bucketName] forKey:@"bucketName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.delimiters = [dictionary objectForKey:@"delimiters"];
    self.bucketName = [dictionary objectForKey:@"bucketName"];
    return self;
} 

@end
@implementation MpsListThumbnailTaskRequest
-(id) initWithRegion:(NSString *)regionId
status:(NSString*)status
begin:(NSString*)begin
end:(NSString*)end
marker:(NSString*)marker
limit:(NSNumber*)limit { 
    self.regionId = regionId;
    self.status = status;
    self.begin = begin;
    self.end = end;
    self.marker = marker;
    self.limit = limit;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
status:(NSString*)status
begin:(NSString*)begin
end:(NSString*)end
marker:(NSString*)marker
limit:(NSNumber*)limit { 
    self.regionId = regionId;
    self.version = version;
    self.status = status;
    self.begin = begin;
    self.end = end;
    self.marker = marker;
    self.limit = limit;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self begin])
    {
        [result setValue:[self begin] forKey:@"begin"];
    }
    if([self end])
    {
        [result setValue:[self end] forKey:@"end"];
    }
    if([self marker])
    {
        [result setValue:[self marker] forKey:@"marker"];
    }
    if([self limit])
    {
        [result setValue:[self limit] forKey:@"limit"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.begin = [dictionary objectForKey:@"begin"];
    self.end = [dictionary objectForKey:@"end"];
    self.marker = [dictionary objectForKey:@"marker"];
    self.limit = [dictionary objectForKey:@"limit"];
    return self;
} 

@end
@implementation MpsGetNotificationResult
-(id) initWithEnabled:(NSNumber*) enabled
        endpoint:(NSString*)endpoint
        events:(NSArray<NSString*>*)events
        notifyStrategy:(NSString*)notifyStrategy
        notifyContentFormat:(NSString*)notifyContentFormat { 
    self.enabled = enabled;               
    self.endpoint = endpoint;               
    self.events = events;               
    self.notifyStrategy = notifyStrategy;               
    self.notifyContentFormat = notifyContentFormat;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self enabled])
    {
        [result setValue:[self enabled] forKey:@"enabled"];
    }
    if([self endpoint])
    {
        [result setValue:[self endpoint] forKey:@"endpoint"];
    }
    if([self events])
    {
        [result setValue:[self events] forKey:@"events"];
    }
    if([self notifyStrategy])
    {
        [result setValue:[self notifyStrategy] forKey:@"notifyStrategy"];
    }
    if([self notifyContentFormat])
    {
        [result setValue:[self notifyContentFormat] forKey:@"notifyContentFormat"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.enabled = [dictionary objectForKey:@"enabled"];
    self.endpoint = [dictionary objectForKey:@"endpoint"];
    self.events = [dictionary objectForKey:@"events"];
    self.notifyStrategy = [dictionary objectForKey:@"notifyStrategy"];
    self.notifyContentFormat = [dictionary objectForKey:@"notifyContentFormat"];
    return self;
} 

@end
@implementation MpsGetThumbnailTaskRequest
-(id) initWithRegion:(NSString *)regionId
taskId:(NSString*)taskId { 
    self.regionId = regionId;
    self.taskId = taskId;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
taskId:(NSString*)taskId { 
    self.regionId = regionId;
    self.version = version;
    self.taskId = taskId;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self taskId])
    {
        [result setValue:[self taskId] forKey:@"taskId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.taskId = [dictionary objectForKey:@"taskId"];
    return self;
} 

@end
@implementation MpsSetNotificationRequest
-(id) initWithRegion:(NSString *)regionId
enabled:(NSNumber*)enabled
endpoint:(NSString*)endpoint
events:(NSArray<NSString*>*)events
notifyStrategy:(NSString*)notifyStrategy
notifyContentFormat:(NSString*)notifyContentFormat { 
    self.regionId = regionId;
    self.enabled = enabled;
    self.endpoint = endpoint;
    self.events = events;
    self.notifyStrategy = notifyStrategy;
    self.notifyContentFormat = notifyContentFormat;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
enabled:(NSNumber*)enabled
endpoint:(NSString*)endpoint
events:(NSArray<NSString*>*)events
notifyStrategy:(NSString*)notifyStrategy
notifyContentFormat:(NSString*)notifyContentFormat { 
    self.regionId = regionId;
    self.version = version;
    self.enabled = enabled;
    self.endpoint = endpoint;
    self.events = events;
    self.notifyStrategy = notifyStrategy;
    self.notifyContentFormat = notifyContentFormat;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self enabled])
    {
        [result setValue:[self enabled] forKey:@"enabled"];
    }
    if([self endpoint])
    {
        [result setValue:[self endpoint] forKey:@"endpoint"];
    }
    if([self events])
    {
        [result setValue:[self events] forKey:@"events"];
    }
    if([self notifyStrategy])
    {
        [result setValue:[self notifyStrategy] forKey:@"notifyStrategy"];
    }
    if([self notifyContentFormat])
    {
        [result setValue:[self notifyContentFormat] forKey:@"notifyContentFormat"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.enabled = [dictionary objectForKey:@"enabled"];
    self.endpoint = [dictionary objectForKey:@"endpoint"];
    self.events = [dictionary objectForKey:@"events"];
    self.notifyStrategy = [dictionary objectForKey:@"notifyStrategy"];
    self.notifyContentFormat = [dictionary objectForKey:@"notifyContentFormat"];
    return self;
} 

@end
@implementation MpsCreateThumbnailTaskResult
-(id) initWithTaskID:(NSString*) taskID { 
    self.taskID = taskID;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self taskID])
    {
        [result setValue:[self taskID] forKey:@"taskID"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.taskID = [dictionary objectForKey:@"taskID"];
    return self;
} 

@end
  
@implementation MpsGetStyleDelimiterResponse
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
MpsGetStyleDelimiterResult* result = [[MpsGetStyleDelimiterResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsGetStyleDelimiterResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsSetStyleDelimiterResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation MpsSetStyleDelimiterResponse
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
MpsSetStyleDelimiterResult* result = [[MpsSetStyleDelimiterResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsSetStyleDelimiterResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsDeleteStyleDelimiterResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation MpsDeleteStyleDelimiterResponse
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
MpsDeleteStyleDelimiterResult* result = [[MpsDeleteStyleDelimiterResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsDeleteStyleDelimiterResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsListThumbnailTaskResult
-(id) initWithStatus:(NSString*) status
        begin:(NSString*)begin
        end:(NSString*)end
        marker:(NSString*)marker
        limit:(NSNumber*)limit
        nextMarker:(NSString*)nextMarker
        truncated:(NSNumber*)truncated
        taskList:(NSArray<ThumbnailTask*>*)taskList { 
    self.status = status;               
    self.begin = begin;               
    self.end = end;               
    self.marker = marker;               
    self.limit = limit;               
    self.nextMarker = nextMarker;               
    self.truncated = truncated;               
    self.taskList = taskList;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self begin])
    {
        [result setValue:[self begin] forKey:@"begin"];
    }
    if([self end])
    {
        [result setValue:[self end] forKey:@"end"];
    }
    if([self marker])
    {
        [result setValue:[self marker] forKey:@"marker"];
    }
    if([self limit])
    {
        [result setValue:[self limit] forKey:@"limit"];
    }
    if([self nextMarker])
    {
        [result setValue:[self nextMarker] forKey:@"nextMarker"];
    }
    if([self truncated])
    {
        [result setValue:[self truncated] forKey:@"truncated"];
    }
    if([self taskList])
    {
            NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
            for (int i =0 ; i< [[self taskList] count]; i++) {
            ThumbnailTask* item = [[self taskList] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"taskList"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.begin = [dictionary objectForKey:@"begin"];
    self.end = [dictionary objectForKey:@"end"];
    self.marker = [dictionary objectForKey:@"marker"];
    self.limit = [dictionary objectForKey:@"limit"];
    self.nextMarker = [dictionary objectForKey:@"nextMarker"];
    self.truncated = [dictionary objectForKey:@"truncated"];
    NSArray* taskListArray = [dictionary objectForKey:@"taskList"];
    if(taskListArray&&![taskListArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [taskListArray count];i++)
        {
        ThumbnailTask* item = [[ThumbnailTask alloc]initWithDic:[taskListArray objectAtIndex:i]];
            if(item)
            {
            [propertyArray addObject:item];
            }
        }
        self.taskList = propertyArray;
    }
    return self;
} 

@end
  
@implementation MpsCreateThumbnailTaskResponse
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
MpsCreateThumbnailTaskResult* result = [[MpsCreateThumbnailTaskResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsCreateThumbnailTaskResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsGetNotificationRequest
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation MpsListThumbnailTaskResponse
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
MpsListThumbnailTaskResult* result = [[MpsListThumbnailTaskResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsListThumbnailTaskResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsGetThumbnailTaskResult
-(id) initWithTaskID:(NSString*) taskID
        status:(NSString*)status
        errorCode:(NSNumber*)errorCode
        createdTime:(NSString*)createdTime
        lastUpdatedTime:(NSString*)lastUpdatedTime
        source:(ThumbnailTaskSource*)source
        target:(ThumbnailTaskTarget*)target
        rule:(ThumbnailTaskRule*)rule { 
    self.taskID = taskID;               
    self.status = status;               
    self.errorCode = errorCode;               
    self.createdTime = createdTime;               
    self.lastUpdatedTime = lastUpdatedTime;               
    self.source = source;               
    self.target = target;               
    self.rule = rule;               
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self taskID])
    {
        [result setValue:[self taskID] forKey:@"taskID"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self errorCode])
    {
        [result setValue:[self errorCode] forKey:@"errorCode"];
    }
    if([self createdTime])
    {
        [result setValue:[self createdTime] forKey:@"createdTime"];
    }
    if([self lastUpdatedTime])
    {
        [result setValue:[self lastUpdatedTime] forKey:@"lastUpdatedTime"];
    }
    if([self source])
    {
        [result setValue:[[self source] dictionary]forKey:@"source"];
    }
    if([self target])
    {
        [result setValue:[[self target] dictionary]forKey:@"target"];
    }
    if([self rule])
    {
        [result setValue:[[self rule] dictionary]forKey:@"rule"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.taskID = [dictionary objectForKey:@"taskID"];
    self.status = [dictionary objectForKey:@"status"];
    self.errorCode = [dictionary objectForKey:@"errorCode"];
    self.createdTime = [dictionary objectForKey:@"createdTime"];
    self.lastUpdatedTime = [dictionary objectForKey:@"lastUpdatedTime"];
    self.source = [[ThumbnailTaskSource alloc]initWithDic:[dictionary objectForKey:@"source"]];
    self.target = [[ThumbnailTaskTarget alloc]initWithDic:[dictionary objectForKey:@"target"]];
    self.rule = [[ThumbnailTaskRule alloc]initWithDic:[dictionary objectForKey:@"rule"]];
    return self;
} 

@end
  
@implementation MpsGetNotificationResponse
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
MpsGetNotificationResult* result = [[MpsGetNotificationResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsGetNotificationResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
  
@implementation MpsGetThumbnailTaskResponse
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
MpsGetThumbnailTaskResult* result = [[MpsGetThumbnailTaskResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsGetThumbnailTaskResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsSetNotificationResult
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    return self;
} 

@end
  
@implementation MpsSetNotificationResponse
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
MpsSetNotificationResult* result = [[MpsSetNotificationResult alloc]initWithDic:[dictionary objectForKey:@"result"]];
    self.result = result;
    ServiceError* error = [[ServiceError alloc]initWithDic:[dictionary objectForKey:@"error"]];
    self.error = error;
    return self;
}

-(id) initWithRequestId:(NSString*) requestId
                  error:(ServiceError*) error
                 result:(MpsSetNotificationResult*) result
{
    self.error = error;
    self.result =result;
    self.requestId = requestId;
    return self;
}

@end
@implementation MpsCreateThumbnailTaskRequest
-(id) initWithRegion:(NSString *)regionId
taskID:(NSString*)taskID
status:(NSString*)status
errorCode:(NSNumber*)errorCode
createdTime:(NSString*)createdTime
lastUpdatedTime:(NSString*)lastUpdatedTime
source:(ThumbnailTaskSource*)source
target:(ThumbnailTaskTarget*)target
rule:(ThumbnailTaskRule*)rule { 
    self.regionId = regionId;
    self.taskID = taskID;
    self.status = status;
    self.errorCode = errorCode;
    self.createdTime = createdTime;
    self.lastUpdatedTime = lastUpdatedTime;
    self.source = source;
    self.target = target;
    self.rule = rule;
    return self;
}

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
taskID:(NSString*)taskID
status:(NSString*)status
errorCode:(NSNumber*)errorCode
createdTime:(NSString*)createdTime
lastUpdatedTime:(NSString*)lastUpdatedTime
source:(ThumbnailTaskSource*)source
target:(ThumbnailTaskTarget*)target
rule:(ThumbnailTaskRule*)rule { 
    self.regionId = regionId;
    self.version = version;
    self.taskID = taskID;
    self.status = status;
    self.errorCode = errorCode;
    self.createdTime = createdTime;
    self.lastUpdatedTime = lastUpdatedTime;
    self.source = source;
    self.target = target;
    self.rule = rule;
    return self;
}
-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *superObjectDic = [super dictionary];
    if(superObjectDic && [superObjectDic count]>0)
    {
        [result addEntriesFromDictionary:superObjectDic];
    }
    if([self taskID])
    {
        [result setValue:[self taskID] forKey:@"taskID"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self errorCode])
    {
        [result setValue:[self errorCode] forKey:@"errorCode"];
    }
    if([self createdTime])
    {
        [result setValue:[self createdTime] forKey:@"createdTime"];
    }
    if([self lastUpdatedTime])
    {
        [result setValue:[self lastUpdatedTime] forKey:@"lastUpdatedTime"];
    }
    if([self source])
    {
        [result setValue:[[self source] dictionary]forKey:@"source"];
    }
    if([self target])
    {
        [result setValue:[[self target] dictionary]forKey:@"target"];
    }
    if([self rule])
    {
        [result setValue:[[self rule] dictionary]forKey:@"rule"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.taskID = [dictionary objectForKey:@"taskID"];
    self.status = [dictionary objectForKey:@"status"];
    self.errorCode = [dictionary objectForKey:@"errorCode"];
    self.createdTime = [dictionary objectForKey:@"createdTime"];
    self.lastUpdatedTime = [dictionary objectForKey:@"lastUpdatedTime"];
    self.source = [[ThumbnailTaskSource alloc]initWithDic:[dictionary objectForKey:@"source"]];
    self.target = [[ThumbnailTaskTarget alloc]initWithDic:[dictionary objectForKey:@"target"]];
    self.rule = [[ThumbnailTaskRule alloc]initWithDic:[dictionary objectForKey:@"rule"]];
    return self;
} 

@end
 

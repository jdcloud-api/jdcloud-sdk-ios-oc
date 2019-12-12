//
//  JDCloudExecutor.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef JDCloudExecutor_h
#define JDCloudExecutor_h
#import "JDCloudClient.h"
#import "JDCloudRequest.h"
@interface JDCloudExecutor:NSObject

@property id<JDCloudClient> jdCloudClient;

@property (strong,nonatomic) NSString* method;

@property (strong,nonatomic) NSString* url;
 

-(id)initWithClient:(id<JDCloudClient>)jdCloudClient;

-(id)init:(id<JDCloudClient>)jdCloudClient
   method:(NSString*) method
      url:(NSString*) url;

-(NSDictionary*) executeSync:(JDCloudRequest *) request;

-(NSDictionary*) executeDataSync:(JDCloudDataRequest *) request;

-(void)executeAsync:(JDCloudRequest *) request
  completionHandler:(void(^)(int statusCode,NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

-(void)executeDataAsync:(JDCloudDataRequest *) request
  completionHandler:(void(^)(int statusCode,NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

@end


@interface CommonExecutor : JDCloudExecutor
-(id) initWithJDCloudClient:(id<JDCloudClient>)JDCloudClient
                        url:(NSString*) url
                     method:(NSString*) method;
@end

#endif /* JDCloudExecutor_h */

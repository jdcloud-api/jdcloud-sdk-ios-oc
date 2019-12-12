//
//  JDCloudClient.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef JDCloudClient_h
#define JDCloudClient_h
#import "Credential.h"
#import "SDKEnvironment.h"
@protocol JDCloudClient<NSObject>

@property (strong,nonatomic,readonly) NSString* userAgent;

@property (strong,nonatomic,readonly) NSString* serviceName;

@property (strong,nonatomic,readonly) NSString* version;

@property (strong,nonatomic) Credential* credential;

@property (strong,nonatomic) SDKEnvironment* sdkEnvironment;

@property (strong,nonatomic) NSMutableDictionary* customHeader;

@property (strong,nonatomic) NSString* httpRequestProtocol;

@property (strong,nonatomic) NSString* contentType;

@required
-(void) addCustomerHeaderWithKey:(NSString*)key
                           value:(NSString*)value;
@end

#endif /* JDCloudClient_h */

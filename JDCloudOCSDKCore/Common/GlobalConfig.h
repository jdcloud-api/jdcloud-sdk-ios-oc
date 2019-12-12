//
//  GlobalConfig.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2018/12/31.
//  Copyright © 2018年 李士军. All rights reserved.
//

#ifndef GlobalConfig_h
#define GlobalConfig_h
#import "SDKEnvironment.h"
#import "Credential.h"

@interface GlobalConfig : NSObject

+(BOOL) isDebug;
+(void) setDebug:(bool)debug;

+(SDKEnvironment*) sdkEnvironment;

+(void)setSDKEnvironment:(SDKEnvironment*)sdkEnviroment;

+(Credential*) credential;

+(void)setCredential:(Credential*)credential;

@end
#endif /* GlobalConfig_h */


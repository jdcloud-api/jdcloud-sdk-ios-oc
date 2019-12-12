//
//  GlobalConfig.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2018/12/30.
//  Copyright © 2018年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GlobalConfig.h"


static BOOL _debug;

static SDKEnvironment* _sdkEnvironment;

static Credential* _credential;

@implementation GlobalConfig

+(bool)isDebug{
    return _debug;
}

+(void)setDebug:(bool)debug{
    _debug = debug;
}

+(SDKEnvironment*)sdkEnvironment{
    return _sdkEnvironment;
}

+(void)setSDKEnvironment:(SDKEnvironment *)sdkEnviroment{
    _sdkEnvironment = sdkEnviroment;
}

+(Credential*) credential{
    return _credential;
}

+(void)setCredential:(Credential*)credential{
    _credential = credential;
}

@end


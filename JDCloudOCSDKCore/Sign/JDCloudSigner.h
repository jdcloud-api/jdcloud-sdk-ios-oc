//
//  JDCloudSigner.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef JDCloudSigner_h
#define JDCloudSigner_h
#import "Credential.h"
#import "RequestInfo.h"
@interface JDCloudSigner:NSObject

@property (strong,nonatomic) NSString* serviceName,*regionId;

@property (strong,nonatomic) NSDate* dateTime;

@property (strong,nonatomic) Credential* credential;

@property  BOOL doubleUrlEncode;

-(id)initWithServiceName:(NSString*) serviceName
                regionId:(NSString*) regionId
                dateTime:(NSDate*) dateTime
              credential:(Credential*)credential;


-(SignedRequestInfo*) doSign:(RequestInfo*)requestInfo;

@end
#endif /* JDCloudSigner_h */

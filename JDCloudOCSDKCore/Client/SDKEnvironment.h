//
//  SDKEnvironment.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2018/12/31.
//  Copyright © 2018年 李士军. All rights reserved.
//

#ifndef SDKEnvironment_h
#define SDKEnvironment_h


@interface SDKEnvironment : NSObject

@property NSString* endPoint,*realEndPoint;

-(id) initWithEndPoint:(NSString*)endPoint;

-(id) initWithEndPointAndRealEndPoint:(NSString *)endPoint
                         realEndPoint:(NSString *)realEndPoint;
@end

#endif /* SDKEnvironment_h */

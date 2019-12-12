//
//  ServiceError.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/6.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef ServiceError_h
#define ServiceError_h


@interface ServiceError : NSObject

@property  (strong,nonatomic) NSNumber* code;

@property  (strong,nonatomic) NSString* message;

@property  (strong,nonatomic) NSString* status;

-(id) initWithCode:(NSNumber*) code
           message:(NSString*) message
            status:(NSString*) status;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

@end

#endif /* ServiceError_h */

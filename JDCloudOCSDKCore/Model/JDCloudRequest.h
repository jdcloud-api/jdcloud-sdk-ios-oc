//
//  JdCloudRequest.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef JdCloudRequest_h
#define JdCloudRequest_h

@interface JDCloudDataRequest : NSObject

@property NSString *regionId, *version;

@property NSData* requestData;

-(id)initWithRegion:(NSString*)regionId
        requestData:(NSData*) requestData;

-(id)initWithRegion:(NSString*)regionId
            version:(NSString*)version
        requestData:(NSData*) requestData;
@end

@interface JDCloudRequest:NSObject

@property NSString *regionId, *version;

-(id)initWithRegion:(NSString*)regionId;

-(id)initWithRegion:(NSString*)regionId
            version:(NSString*)version;

-(NSMutableDictionary *) dictionary;

@end

@protocol JDCloudResult<NSObject>

@optional
-(NSMutableDictionary *) dictionary;
@end

#endif /* JdCloudRequest_h */

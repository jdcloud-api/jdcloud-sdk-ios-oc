//
//  Credential.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef Credential_h
#define Credential_h

@interface Credential : NSObject

@property NSString *accessKeyId,*secretAccessKey;

-(id) initWithAccessKeyId:(NSString*) accessKeyId
                          secretAccessKey:(NSString*)secretAccessKey;

@end


#endif /* Credential_h */

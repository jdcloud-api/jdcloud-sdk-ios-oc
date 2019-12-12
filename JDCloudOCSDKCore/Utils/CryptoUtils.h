//
//  CryptoUtils.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef CryptoUtils_h
#define CryptoUtils_h
@interface NSString(SHA)
-(NSString *) sha1;
-(NSString *) sha224;
-(NSString *) sha256;
-(NSString *) sha384;
-(NSString *) sha512;
@end
#endif /* CryptoUtils_h */

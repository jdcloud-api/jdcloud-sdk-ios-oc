//
//  GzipUtility.h
//  JDCloudOCSDKCore
//
//  Created by 李士军 on 2019/1/10.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef GzipUtility_h
#define GzipUtility_h


 

@interface GzipUtility : NSObject

// 数据压缩

+ (NSData *)compressData:(NSData*)uncompressedData;

// 数据解压缩

+ (NSData *)decompressData:(NSData *)compressedData;

@end
#endif /* GzipUtility_h */

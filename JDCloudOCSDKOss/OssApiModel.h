/* Copyright 2018 JDCLOUD.COM

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http:#www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

OSS相关接口
OSS相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef OssApiModel_h
#define OssApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKOss/OssModel.h>


@interface OssPutBucketResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface OssHeadBucketRequest:JDCloudRequest

/// bucket名字，例如：test-bucket
@property (strong,nonatomic,nonnull)  NSString*  bucketname;
-(id) initWithRegion:(NSString *)regionId
bucketname:(NSString*)bucketname;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
bucketname:(NSString*)bucketname;

@end

@interface OssDeleteBucketResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface OssDeleteBucketResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property OssDeleteBucketResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(OssDeleteBucketResult*) result;
@end

@interface OssListBucketsResult : NSObject
/// Owner
 @property (strong,nonatomic,nonnull)  User*  owner;
/// Buckets
 @property (strong,nonatomic,nonnull)  NSArray<Bucket*>*  buckets;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithOwner:(User*) owner

    buckets:(NSArray<Bucket*>*)buckets;
@end

@interface OssListBucketsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property OssListBucketsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(OssListBucketsResult*) result;
@end

@interface OssHeadBucketResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface OssHeadBucketResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property OssHeadBucketResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(OssHeadBucketResult*) result;
@end

@interface OssPutBucketResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property OssPutBucketResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(OssPutBucketResult*) result;
@end

@interface OssListBucketsRequest:JDCloudRequest

@end

@interface OssPutBucketRequest:JDCloudRequest

/// bucket名字，例如：test-bucket
@property (strong,nonatomic,nonnull)  NSString*  bucketname;
-(id) initWithRegion:(NSString *)regionId
bucketname:(NSString*)bucketname;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
bucketname:(NSString*)bucketname;

@end

@interface OssDeleteBucketRequest:JDCloudRequest

/// bucket名字，例如：test-bucket
@property (strong,nonatomic,nonnull)  NSString*  bucketname;
-(id) initWithRegion:(NSString *)regionId
bucketname:(NSString*)bucketname;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
bucketname:(NSString*)bucketname;

@end

#endif /* OssApiModel_h */

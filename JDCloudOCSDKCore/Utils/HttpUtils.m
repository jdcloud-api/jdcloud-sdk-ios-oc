//
//  HttpUtils.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/3.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpUtils.h"
#import "GzipUtility.h"
#import "ParameterConstant.h"
@implementation HttpUtils

+(NSDictionary*) httpRequestSyncWithUrl:(NSString*) urlStr
                         requestContent:(NSData*) requestContent
                          requestHeader:(NSDictionary*) requestHeader
                          requestMethod:(NSString*) requestMethod{
    NSMutableURLRequest *urlRequest = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlStr]];
    NSString* contentEncoding = [requestHeader valueForKey:CONTENT_ENCODING];
    [urlRequest setHTTPMethod:requestMethod];
    if(requestHeader)
    {
        urlRequest.allHTTPHeaderFields = requestHeader;
    }
    if(requestContent && [requestContent length] > 0 &&
       ![[requestMethod uppercaseString] isEqualToString:@"GET"] &&
       ![[requestMethod uppercaseString] isEqualToString:@"HEAD"] &&
       ![[requestMethod uppercaseString] isEqualToString:@"DELETE"] )
    {
        
        if(contentEncoding && [[contentEncoding lowercaseString] isEqualToString:@"gzip"])
        {
            if(requestContent && [requestContent length]>0)
            {
                 [urlRequest setHTTPBody:[GzipUtility compressData: requestContent]];
                [urlRequest setValue:@"gzip" forHTTPHeaderField:@"Accept-Encoding"];
            }else
            {
                 [urlRequest setHTTPBody:requestContent ];
            }
        }else{
             [urlRequest setHTTPBody:requestContent ];
        }
    }
    NSHTTPURLResponse* urlResponse = nil;
    NSError *error = [[NSError alloc] init];
    NSData *responseData = [NSURLConnection sendSynchronousRequest:urlRequest returningResponse:&urlResponse error:&error];
    
    NSMutableDictionary* resultDict = [[NSMutableDictionary alloc]init];
    [resultDict setValue:[NSNumber numberWithInt:(int)[urlResponse statusCode]] forKey:@"statusCode"];
    [resultDict setValue:responseData forKey:@"dataResult"];
    [resultDict setValue:error forKey:@"requestError"];
    return resultDict;
}

+(void)httpRequestAsyncWithUrl:(NSString*) urlStr
                requestContent:(NSData*) requestContent
                 requestHeader:(NSDictionary*) requestHeader
                 requestMethod:(NSString*) requestMethod
             completionHandler:(void(^)(int statusCode,NSData* _Nullable  responseData,NSError * _Nullable error))completionHandler{
    NSString* contentEncoding = [requestHeader valueForKey:CONTENT_ENCODING];
    NSMutableURLRequest *urlRequest = [NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlStr]];
    urlRequest.HTTPMethod = requestMethod;
    if(requestHeader){
        urlRequest.allHTTPHeaderFields = requestHeader;
    }
    
    if(requestContent && [requestContent length] > 0 &&
       ![[requestMethod uppercaseString] isEqualToString:@"GET"] &&
       ![[requestMethod uppercaseString] isEqualToString:@"HEAD"] &&
       ![[requestMethod uppercaseString] isEqualToString:@"DELETE"] )
    {
        
        if(contentEncoding && [[contentEncoding lowercaseString] isEqualToString:@"gzip"])
        {
            if(requestContent && [requestContent length]>0)
            {
                [urlRequest setHTTPBody:[GzipUtility compressData:requestContent]];
                [urlRequest setValue:@"gzip" forHTTPHeaderField:@"Accept-Encoding"];
            }else
            {
                [urlRequest setHTTPBody:requestContent];
            }
        }else{
            [urlRequest setHTTPBody:requestContent];
        }
    }
    
    NSURLSession *urlSession = [NSURLSession sharedSession];
    NSURLSessionDataTask* sessionDataTask = [urlSession dataTaskWithRequest:urlRequest completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        int statusCode = 0; 
        if (!error) {
            NSHTTPURLResponse* res = (NSHTTPURLResponse*)response;
            statusCode = (int)res.statusCode;
        }else{
            NSLog(@"error:%@",error);
        }
        if (completionHandler) {
             completionHandler(statusCode,data,error);
        }
    }];
    [sessionDataTask resume];
}
@end

//
//  JDCloudOCSDKVmTests.m
//  JDCloudOCSDKVmTests
//
//  Created by 李士军 on 2019/1/4.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <XCTest/XCTest.h>

#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKVm/JDCloudOCSDKVm.h>
@interface JDCloudOCSDKVmTests : XCTestCase

@end

@implementation JDCloudOCSDKVmTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

-(void)testRequestAsync{
    Credential * credential = [[Credential alloc]initWithAccessKeyId:@"ak" secretAccessKey:@"sk"];
    SDKEnvironment* sdkEnvironment = [[SDKEnvironment alloc]initWithEndPoint:@"apigw-internal.cn-north-1.jcloudcs.com"];
    VmClient* vmClient = [[VmClient alloc] initWithCredential:credential sdkEnvironment:sdkEnvironment];
    [GlobalConfig setDebug:true];
    VmDescribeInstancesRequest* describeInstancesRequest = [[VmDescribeInstancesRequest alloc]initWithRegion:@"cn-north-1"];
    vmClient.httpRequestProtocol = @"http";
    dispatch_semaphore_t semaphore = dispatch_semaphore_create(0);
    
    [vmClient describeInstancesAsyncWithRequest:describeInstancesRequest completionHandler:^(int statusCode, VmDescribeInstancesResponse * _Nullable describeInstancesResponse, NSData * _Nullable responseData, NSError * _Nullable error) {
        NSLog(@"总条数为：%@",[[describeInstancesResponse result] totalCount]);
        dispatch_semaphore_signal(semaphore);
    }];
    
    dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);
}

-(void)testRequestSync{
    
    Credential * credential = [[Credential alloc]initWithAccessKeyId:@"ak" secretAccessKey:@"sk"];
    VmClient* vmClient = [[VmClient alloc] initWithCredential:credential];
    [GlobalConfig setDebug:true];
    VmDescribeInstancesRequest* describeInstancesRequest = [[VmDescribeInstancesRequest alloc]initWithRegion:@"cn-north-1"];
    NSDictionary* result = [vmClient describeInstancesSyncWithRequest:describeInstancesRequest];
    VmDescribeInstancesResponse* response = [result objectForKey:@"describeInstancesResponse"];
    NSLog(@"总条数为：%@",[[response result] totalCount]);
}

@end

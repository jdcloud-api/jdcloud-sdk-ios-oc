Pod::Spec.new do |s|

s.name         = "JDCloudOCSDKYunding"
s.version      = "0.0.2"
s.summary      = "JDCloud Open API Objective-C SDK Yunding"

s.description  = <<-DESC
JDCloud Open API Objective-C SDK Yunding framework
DESC

s.homepage     = "https://github.com/jdcloud-api/jdcloud-sdk-ios"



s.license      = "Apache License, Version 2.0"

s.author       = { "JDCloud API GateWay Team" => "JDCloud API GateWay Team" }

s.ios.deployment_target = "8.0"
s.osx.deployment_target = "10.9"

s.source       = { :git => "https://github.com/jdcloud-api/jdcloud-sdk-ios.git", :tag => "#{s.version}" }


s.source_files  = "Sources/JDCloudOCSDKYunding", "JDCloudOCSDKYunding/**/*.{h,m}"


s.public_header_files = "JDCloudSDKYunding/*.h"



s.requires_arc = true
    s.dependency "JDCloudOCSDKCore", "~> 0.0.1"
        s.dependency "JDCloudOCSDKVpc", "~> 0.0.1"
        s.dependency "JDCloudOCSDKRds", "~> 0.0.1"
        s.dependency "JDCloudOCSDKVm", "~> 0.0.1"
        s.dependency "JDCloudOCSDKCharge", "~> 0.0.1"
        s.dependency "JDCloudOCSDKMonitor", "~> 0.0.1"
        s.dependency "JDCloudOCSDKDisk", "~> 0.0.1"
        s.dependency "JDCloudOCSDKCommon", "~> 0.0.1"
end

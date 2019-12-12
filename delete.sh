#!/bin/bash
Key="JDCloudOCSDK"
for file in $(ls )
do 
 if [[ $file == $Key* ]]&&[[ $file != "JDCloudOCSDKCore" ]]&&[[ $file != "JDCloudOCSDKCoreTests" ]]&&[[ $file != "JDCloudOCSDKVmTests" ]];then
    rm -rf $file
 fi
done


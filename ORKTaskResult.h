/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKCollectionResult.h>
#import <ResearchKit/ORKTaskResultSource.h>

@class NSUUID, NSURL, NSString;

@interface ORKTaskResult : ORKCollectionResult <ORKTaskResultSource> {

	NSUUID* _taskRunUUID;
	NSURL* _outputDirectory;

}

@property (nonatomic,copy,readonly) NSUUID * taskRunUUID;                 //@synthesize taskRunUUID=_taskRunUUID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * outputDirectory;              //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)outputDirectory;
-(NSUUID *)taskRunUUID;
-(id)initWithTaskIdentifier:(id)arg1 taskRunUUID:(id)arg2 outputDirectory:(id)arg3 ;
-(id)stepResultForStepIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


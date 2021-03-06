/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKRecorder.h>

@class ORKDataLogger, HKHealthStore, NSPredicate, HKObserverQuery, HKQuantitySample, HKQuantityType, HKUnit, NSError;

@interface ORKHealthQuantityTypeRecorder : ORKRecorder {

	ORKDataLogger* _logger;
	BOOL _isRecording;
	HKHealthStore* _healthStore;
	NSPredicate* _samplePredicate;
	HKObserverQuery* _observerQuery;
	long long _anchor;
	HKQuantitySample* _lastSample;
	HKQuantityType* _quantityType;
	HKUnit* _unit;
	NSError* _recordingError;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy,readonly) HKUnit * unit;                              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy,readonly) HKQuantitySample * lastSample;              //@synthesize lastSample=_lastSample - In the implementation block
@property (nonatomic,retain) NSError * recordingError;                          //@synthesize recordingError=_recordingError - In the implementation block
-(void)finishRecordingWithError:(id)arg1 ;
-(void)_doStopRecording;
-(id)_recorderType;
-(NSError *)recordingError;
-(void)setRecordingError:(NSError *)arg1 ;
-(void)_updateMostRecentSample:(id)arg1 ;
-(void)_doFetchNewData;
-(void)_query_logResults:(id)arg1 withAnchor:(unsigned long long)arg2 ;
-(id)initWithHealthQuantityType:(id)arg1 unit:(id)arg2 step:(id)arg3 outputDirectory:(id)arg4 ;
-(BOOL)isRecording;
-(HKQuantityType *)quantityType;
-(void)dealloc;
-(void)start;
-(id)mimeType;
-(void)_reset;
-(void)stop;
-(HKQuantitySample *)lastSample;
-(HKUnit *)unit;
@end


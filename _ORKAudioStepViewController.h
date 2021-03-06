/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKActiveStepViewController.h>

@class _ORKAudioContentView, ORKAudioRecorder, ORKActiveStepTimer, AVAudioRecorder;

@interface _ORKAudioStepViewController : ORKActiveStepViewController {

	_ORKAudioContentView* _audioContentView;
	ORKAudioRecorder* _audioRecorder;
	ORKActiveStepTimer* _timer;
	AVAudioRecorder* _avAudioRecorder;

}

@property (nonatomic,retain) AVAudioRecorder * avAudioRecorder;              //@synthesize avAudioRecorder=_avAudioRecorder - In the implementation block
-(id)initWithStep:(id)arg1 ;
-(void)recordersDidChange;
-(id)audioStep;
-(void)setAvAudioRecorder:(AVAudioRecorder *)arg1 ;
-(void)_audioRecorderDidChange;
-(void)_doSample;
-(void)_startNewTimerIfNeeded;
-(void)stepDidFinish;
-(AVAudioRecorder *)avAudioRecorder;
-(void)suspend;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)start;
-(void)resume;
-(void)finish;
@end


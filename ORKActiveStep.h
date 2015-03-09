/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKStep.h>

@class NSString, UIImage, NSArray, NSSet;

@interface ORKActiveStep : ORKStep {

	BOOL _shouldShowDefaultTimer;
	BOOL _shouldSpeakCountDown;
	BOOL _shouldStartTimerAutomatically;
	BOOL _shouldPlaySoundOnStart;
	BOOL _shouldPlaySoundOnFinish;
	BOOL _shouldVibrateOnStart;
	BOOL _shouldVibrateOnFinish;
	BOOL _shouldUseNextAsSkipButton;
	BOOL _shouldContinueOnFinish;
	double _stepDuration;
	NSString* _spokenInstruction;
	UIImage* _image;
	NSArray* _recorderConfigurations;

}

@property (assign,nonatomic) double stepDuration;                                      //@synthesize stepDuration=_stepDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDefaultTimer;                              //@synthesize shouldShowDefaultTimer=_shouldShowDefaultTimer - In the implementation block
@property (assign,nonatomic) BOOL shouldSpeakCountDown;                                //@synthesize shouldSpeakCountDown=_shouldSpeakCountDown - In the implementation block
@property (assign,nonatomic) BOOL shouldStartTimerAutomatically;                       //@synthesize shouldStartTimerAutomatically=_shouldStartTimerAutomatically - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaySoundOnStart;                              //@synthesize shouldPlaySoundOnStart=_shouldPlaySoundOnStart - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaySoundOnFinish;                             //@synthesize shouldPlaySoundOnFinish=_shouldPlaySoundOnFinish - In the implementation block
@property (assign,nonatomic) BOOL shouldVibrateOnStart;                                //@synthesize shouldVibrateOnStart=_shouldVibrateOnStart - In the implementation block
@property (assign,nonatomic) BOOL shouldVibrateOnFinish;                               //@synthesize shouldVibrateOnFinish=_shouldVibrateOnFinish - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNextAsSkipButton;                           //@synthesize shouldUseNextAsSkipButton=_shouldUseNextAsSkipButton - In the implementation block
@property (assign,nonatomic) BOOL shouldContinueOnFinish;                              //@synthesize shouldContinueOnFinish=_shouldContinueOnFinish - In the implementation block
@property (nonatomic,copy) NSString * spokenInstruction;                               //@synthesize spokenInstruction=_spokenInstruction - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * recorderConfigurations;                           //@synthesize recorderConfigurations=_recorderConfigurations - In the implementation block
@property (nonatomic,readonly) NSSet * requestedHealthKitTypesForReading; 
@property (nonatomic,readonly) long long requestedPermissions; 
+(Class)_stepViewControllerClass;
+(BOOL)supportsSecureCoding;
-(double)stepDuration;
-(id)dictionaryValue;
-(NSSet *)requestedHealthKitTypesForReading;
-(long long)requestedPermissions;
-(BOOL)isRestorable;
-(void)setShouldShowDefaultTimer:(BOOL)arg1 ;
-(void)setStepDuration:(double)arg1 ;
-(BOOL)shouldStartTimerAutomatically;
-(void)setShouldStartTimerAutomatically:(BOOL)arg1 ;
-(BOOL)shouldSpeakCountDown;
-(void)setShouldSpeakCountDown:(BOOL)arg1 ;
-(BOOL)shouldShowDefaultTimer;
-(BOOL)shouldPlaySoundOnStart;
-(void)setShouldPlaySoundOnStart:(BOOL)arg1 ;
-(BOOL)shouldPlaySoundOnFinish;
-(void)setShouldPlaySoundOnFinish:(BOOL)arg1 ;
-(BOOL)shouldVibrateOnStart;
-(void)setShouldVibrateOnStart:(BOOL)arg1 ;
-(BOOL)shouldVibrateOnFinish;
-(void)setShouldVibrateOnFinish:(BOOL)arg1 ;
-(BOOL)shouldUseNextAsSkipButton;
-(void)setShouldUseNextAsSkipButton:(BOOL)arg1 ;
-(BOOL)shouldContinueOnFinish;
-(void)setShouldContinueOnFinish:(BOOL)arg1 ;
-(NSString *)spokenInstruction;
-(void)setSpokenInstruction:(NSString *)arg1 ;
-(NSArray *)recorderConfigurations;
-(void)setRecorderConfigurations:(NSArray *)arg1 ;
-(BOOL)startsFinished;
-(BOOL)hasCountDown;
-(BOOL)hasVoice;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(BOOL)hasText;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)hasTitle;
@end

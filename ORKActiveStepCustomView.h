/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:15 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class ORKActiveStepViewController;

@interface ORKActiveStepCustomView : UIView {

	ORKActiveStepViewController* _activeStepViewController;

}

@property (assign,nonatomic,__weak) ORKActiveStepViewController * activeStepViewController;              //@synthesize activeStepViewController=_activeStepViewController - In the implementation block
-(ORKActiveStepViewController *)activeStepViewController;
-(void)resetStep:(id)arg1 ;
-(void)startStep:(id)arg1 ;
-(void)suspendStep:(id)arg1 ;
-(void)resumeStep:(id)arg1 ;
-(void)finishStep:(id)arg1 ;
-(void)setActiveStepViewController:(ORKActiveStepViewController *)arg1 ;
-(void)updateDisplay:(id)arg1 ;
@end


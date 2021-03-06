/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:15 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKStepViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UILabel, UIImageView, UIButton, UIImage, NSDate, ORKDataResult, UIImagePickerController, ORKMediaOverlayView, NSString;

@interface ORKMediaStepViewController : ORKStepViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UILabel* _questionLabel;
	UIImageView* _previewView;
	UIButton* _pickButton;
	UIImage* _capturedImage;
	NSDate* _imageShotDate;
	ORKDataResult* _dataResult;
	UIImagePickerController* _picker;
	ORKMediaOverlayView* _overlayView;
	BOOL _sentResult;
	BOOL _haveShownOnAppear;
	BOOL _requiresResultToContinue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStep:(id)arg1 ;
-(void)_notifyDelegateOnResultChange;
-(void)prepareStep;
-(void)presentPickerAction;
-(BOOL)canContinue;
-(void)removeCameraOverlay;
-(void)addCameraOverlay;
-(id)mediaStep;
-(void)presentPickerAnimated:(BOOL)arg1 ;
-(void)_generateResultWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)resume;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)result;
-(BOOL)hasResult;
-(void)updateNextButton;
@end


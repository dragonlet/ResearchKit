/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:15 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol _ORKImageSelectionViewDelegate;
@class NSArray, ORKImageChoiceLabel, NSSet;

@interface _ORKImageSelectionView : UIView {

	NSArray* _options;
	NSArray* _buttonViews;
	ORKImageChoiceLabel* _choiceLabel;
	ORKImageChoiceLabel* _placeHolderLabel;
	ORKImageChoiceLabel* _invisibleLabel;
	id<_ORKImageSelectionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ORKImageSelectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedIndexes; 
-(void)setSelectedIndexes:(NSSet *)arg1 ;
-(id)_makeLabel;
-(void)_resetLabelText;
-(void)_setLabelText:(id)arg1 ;
-(NSSet *)selectedIndexes;
-(void)setDelegate:(id<_ORKImageSelectionViewDelegate>)arg1 ;
-(id<_ORKImageSelectionViewDelegate>)delegate;
-(void)buttonTapped:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)initWithOptions:(id)arg1 ;
@end


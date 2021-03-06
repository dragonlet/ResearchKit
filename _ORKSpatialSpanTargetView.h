/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _ORKSpatialSpanTargetViewDelegate;
@class UITapGestureRecognizer, UIView, UIColor, UIImage;

@interface _ORKSpatialSpanTargetView : UIView {

	UITapGestureRecognizer* _tapRecognizer;
	double _flowerScaleFactor;
	UIView* _flowerView;
	UIView* _checkView;
	UIView* _errorView;
	id<_ORKSpatialSpanTargetViewDelegate> _delegate;
	long long _state;
	UIColor* _color;
	UIImage* _customTargetImage;

}

@property (assign,nonatomic,__weak) id<_ORKSpatialSpanTargetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * customTargetImage;                                        //@synthesize customTargetImage=_customTargetImage - In the implementation block
-(UIImage *)customTargetImage;
-(void)setCustomTargetImage:(UIImage *)arg1 ;
-(id)_newFlowerViewWithImage:(id)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)handleTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_ORKSpatialSpanTargetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<_ORKSpatialSpanTargetViewDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)tintColorDidChange;
-(id)accessibilityLabel;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isAccessibilityElement;
@end


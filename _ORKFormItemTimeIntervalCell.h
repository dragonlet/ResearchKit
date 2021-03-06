/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/_ORKFormItemTextFieldBasedCell.h>

@class UIDatePicker;

@interface _ORKFormItemTimeIntervalCell : _ORKFormItemTextFieldBasedCell {

	UIDatePicker* _picker;
	BOOL _haveValue;
	BOOL _haveDefault;
	long long _stepInMinute;

}
-(id)_impliedAnswerFormat;
-(void)_cellInit;
-(void)_answerDidChange;
-(void)_inputValueDidChange;
-(void)_setupScale;
-(void)_updateLabelValue;
-(void)_configurePicker;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(double)_currentValue;
@end


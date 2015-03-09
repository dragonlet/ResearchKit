/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:16 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKStep.h>

@class ORKAnswerFormat, NSString;

@interface ORKQuestionStep : ORKStep {

	ORKAnswerFormat* _answerFormat;
	NSString* _placeholder;

}

@property (nonatomic,retain) ORKAnswerFormat * answerFormat;              //@synthesize answerFormat=_answerFormat - In the implementation block
@property (nonatomic,readonly) long long questionType; 
@property (nonatomic,copy) NSString * placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
+(Class)_stepViewControllerClass;
+(id)questionStepWithIdentifier:(id)arg1 title:(id)arg2 answer:(id)arg3 ;
-(id)dictionaryValue;
-(void)validateParameters;
-(ORKAnswerFormat *)answerFormat;
-(id)_impliedAnswerFormat;
-(long long)questionType;
-(void)setAnswerFormat:(ORKAnswerFormat *)arg1 ;
-(BOOL)_formatRequiresTableView;
-(BOOL)_isFormatImmediateNavigation;
-(BOOL)_isFormatFitsChoiceCells;
-(BOOL)_isFormatChoiceWithImageOptions;
-(BOOL)_isFormatTextfield;
-(BOOL)_isFormatChoiceValuePicker;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)placeholder;
@end

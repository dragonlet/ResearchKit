/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKSerialization.h>
#import <ResearchKit/NSSecureCoding.h>
#import <ResearchKit/NSCopying.h>

@class NSMutableArray, NSString, NSArray, ORKHtmlPdfWriter;

@interface ORKConsentDocument : NSObject <ORKSerialization, NSSecureCoding, NSCopying> {

	NSMutableArray* _signatures;
	NSString* _title;
	NSArray* _sections;
	NSString* _signaturePageTitle;
	NSString* _signaturePageContent;
	NSString* _htmlReviewContent;
	ORKHtmlPdfWriter* _writer;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * signaturePageTitle;                //@synthesize signaturePageTitle=_signaturePageTitle - In the implementation block
@property (nonatomic,copy) NSString * signaturePageContent;              //@synthesize signaturePageContent=_signaturePageContent - In the implementation block
@property (nonatomic,copy) NSString * htmlReviewContent;                 //@synthesize htmlReviewContent=_htmlReviewContent - In the implementation block
@property (nonatomic,copy) NSArray * signatures; 
@property (nonatomic,retain) ORKHtmlPdfWriter * writer;                  //@synthesize writer=_writer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapHtmlBody:(id)arg1 mobile:(BOOL)arg2 ;
+(id)_cssStyleSheet:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)dictionaryValue;
-(id)_htmlForMobile:(BOOL)arg1 withTitle:(id)arg2 detail:(id)arg3 ;
-(NSString *)signaturePageTitle;
-(NSString *)signaturePageContent;
-(NSString *)htmlReviewContent;
-(void)setSignaturePageTitle:(NSString *)arg1 ;
-(void)setSignaturePageContent:(NSString *)arg1 ;
-(void)setHtmlReviewContent:(NSString *)arg1 ;
-(void)makePDFWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_mobileHtmlWithTitle:(id)arg1 detail:(id)arg2 ;
-(void)addSignature:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(NSArray *)signatures;
-(void)setSignatures:(NSArray *)arg1 ;
-(ORKHtmlPdfWriter *)writer;
-(void)setWriter:(ORKHtmlPdfWriter *)arg1 ;
@end

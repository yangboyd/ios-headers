/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUILParseableExpression, NSString;

@interface SAUILParsedExpression : SADomainObject

@property (nonatomic,retain) SAUILParseableExpression * parseableExpression; 
@property (nonatomic,copy) NSString * parsedOutput; 
+(id)parsedExpression;
+(id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setParseableExpression:(SAUILParseableExpression *)arg1 ;
-(NSString *)parsedOutput;
-(void)setParsedOutput:(NSString *)arg1 ;
-(SAUILParseableExpression *)parseableExpression;
@end


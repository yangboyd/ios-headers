/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <libobjc.A.dylib/ASVFeedbackGenerator.h>

@class NSString, _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator <ASVFeedbackGenerator> {

	long long _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_impactConfiguration,nonatomic,readonly) _UIImpactFeedbackGeneratorConfiguration * impactConfiguration; 
+(Class)_configurationClass;
-(void)prepare;
-(void)fire;
-(id)initWithStyle:(long long)arg1 ;
-(id)_styleString;
-(id)_ui_descriptionBuilder;
-(void)impactOccurredWithIntensity:(double)arg1 ;
-(void)_impactOccurredWithIntensity:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)impactOccurred;
-(id)_stats_key;
-(id)_impactConfiguration;
@end


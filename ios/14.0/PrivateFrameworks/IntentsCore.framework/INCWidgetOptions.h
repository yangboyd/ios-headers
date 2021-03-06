/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface INCWidgetOptions : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _intentType;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentType;                             //@synthesize intentType=_intentType - In the implementation block
-(NSString *)extensionBundleIdentifier;
-(NSString *)intentType;
-(void)setIntentType:(NSString *)arg1 ;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 intentType:(id)arg2 ;
@end


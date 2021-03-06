/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber, NSString;

@interface MCUIPayloadUserInputField : NSObject {

	NSMutableDictionary* _fieldDictionary;
	id _response;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int flags; 
@property (nonatomic,readonly) NSNumber * minimumLength; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,retain) NSString * fieldDescription; 
@property (nonatomic,readonly) NSString * retypeDescription; 
@property (nonatomic,readonly) NSString * mismatchDescription; 
@property (nonatomic,retain) NSString * finePrint; 
@property (nonatomic,readonly) NSString * defaultValue; 
@property (nonatomic,readonly) NSString * placeholderValue; 
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long capitalizationType; 
@property (nonatomic,readonly) BOOL isRequired; 
@property (nonatomic,readonly) BOOL isPassword; 
@property (nonatomic,readonly) BOOL needsRetype; 
@property (nonatomic,readonly) BOOL isDevicePasscodeField; 
-(long long)keyboardType;
-(id)responseDictionary;
-(NSString *)defaultValue;
-(int)flags;
-(NSString *)title;
-(int)type;
-(void)setUserResponse:(id)arg1 ;
-(BOOL)isRequired;
-(id)description;
-(id)_uuid;
-(NSString *)fieldDescription;
-(id)initWithFieldDictionary:(id)arg1 ;
-(NSNumber *)minimumLength;
-(void)setFieldDescription:(NSString *)arg1 ;
-(NSString *)retypeDescription;
-(NSString *)mismatchDescription;
-(NSString *)finePrint;
-(void)setFinePrint:(NSString *)arg1 ;
-(NSString *)placeholderValue;
-(long long)capitalizationType;
-(BOOL)isPassword;
-(BOOL)needsRetype;
-(BOOL)isDevicePasscodeField;
@end


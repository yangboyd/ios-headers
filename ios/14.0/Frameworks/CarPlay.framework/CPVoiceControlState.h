/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIImage, NSString;

@interface CPVoiceControlState : NSObject <NSSecureCoding> {

	BOOL _repeats;
	NSArray* _titleVariants;
	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * titleVariants;              //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                              //@synthesize repeats=_repeats - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(BOOL)repeats;
-(UIImage *)image;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)titleVariants;
-(id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(BOOL)arg4 ;
@end


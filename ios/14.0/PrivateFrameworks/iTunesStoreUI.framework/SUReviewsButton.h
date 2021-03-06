/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUGradientButton.h>

@class UIImageView, NSString;

@interface SUReviewsButton : SUGradientButton {

	UIImageView* _disclosureView;
	float _userRating;
	long long _userRatingCount;
	NSString* _userRatingCountString;

}

@property (assign,nonatomic) float userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) long long userRatingCount;                     //@synthesize userRatingCount=_userRatingCount - In the implementation block
@property (nonatomic,retain) NSString * userRatingCountString;              //@synthesize userRatingCountString=_userRatingCountString - In the implementation block
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(float)userRating;
-(void)layoutSubviews;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)reloadView;
-(NSString *)userRatingCountString;
-(void)setUserRatingCount:(long long)arg1 ;
-(void)setUserRatingCountString:(NSString *)arg1 ;
-(long long)userRatingCount;
@end


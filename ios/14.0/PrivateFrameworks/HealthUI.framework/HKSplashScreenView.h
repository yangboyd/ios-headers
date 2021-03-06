/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UITableView, UIButton, UIVisualEffectView;

@interface HKSplashScreenView : UIView {

	UILabel* _titleLabel;
	UITableView* _featureTableView;
	UIButton* _continueButton;
	UIVisualEffectView* _topBlurView;
	UIVisualEffectView* _bottomBlurView;

}

@property (nonatomic,retain) UIVisualEffectView * topBlurView;                 //@synthesize topBlurView=_topBlurView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * bottomBlurView;              //@synthesize bottomBlurView=_bottomBlurView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITableView * featureTableView;                   //@synthesize featureTableView=_featureTableView - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                        //@synthesize continueButton=_continueButton - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)updateForFontOrTextChange;
-(UITableView *)featureTableView;
-(void)setFeatureTableView:(UITableView *)arg1 ;
-(void)setTopBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)topBlurView;
-(void)setBottomBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)bottomBlurView;
-(void)updateTableViewInsetsForHeaderAndFooterBlurView;
@end


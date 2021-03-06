/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _chatEligibleForContactImage;
	BOOL _wantsContactImageLayout;
	BOOL _isReply;
	BOOL _isReplyContextPreview;
	BOOL _isFromMe;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL chatEligibleForContactImage;                             //@synthesize chatEligibleForContactImage=_chatEligibleForContactImage - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                 //@synthesize isReply=_isReply - In the implementation block
@property (assign,nonatomic) BOOL isReplyContextPreview;                                   //@synthesize isReplyContextPreview=_isReplyContextPreview - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                                //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutSubviewsForContents;
-(BOOL)chatEligibleForContactImage;
-(void)setIsReplyContextPreview:(BOOL)arg1 ;
-(BOOL)isReply;
-(void)setIsFromMe:(BOOL)arg1 ;
-(BOOL)failed;
-(BOOL)isReplyContextPreview;
-(BOOL)isFromMe;
-(id)contactImageView;
-(void)setChatEligibleForContactImage:(BOOL)arg1 ;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(UIButton *)failureButton;
-(BOOL)wantsContactImageLayout;
-(void)setFailed:(BOOL)arg1 ;
-(CGRect)contactImageViewFrame;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(void)setFailureButton:(UIButton *)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(id)description;
@end


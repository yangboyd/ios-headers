/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>

@class _UIRemoteViewController, NSMutableArray, NSMapTable;

@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController {

	_UIRemoteViewController* _wrappedRemoteViewController;
	NSMutableArray* _constraints;
	NSMapTable* _touchCancellationAssertionsToTokens;

}
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)dealloc;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(void)loadView;
-(id)init;
-(void)wrapRemoteViewController:(id)arg1 ;
-(void)_updateViewIntrinsicContentSize:(CGSize)arg1 ;
-(BOOL)_canShowWhileLocked;
@end


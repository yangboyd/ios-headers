//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIColor, UIImage, UIView;

@interface PKViewController : UIViewController
{
    UIView *_navigationBarBackgroundView;
    UIImage *_emptyImage;
    _Bool _navigationBarPrepared;
    double _navigationBarShadowAlpha;
    _Bool _navigationBarWasTranslucent;
    UIColor *_navigationBarTintColor;
    UIColor *_navigationBarBackgroundColor;
    UIImage *_navigationBarBackgroundImage;
    _Bool _skipRestoringNavigationBarState;
    UIColor *_navigationBarBleedColor;
}

@property(nonatomic) _Bool skipRestoringNavigationBarState; // @synthesize skipRestoringNavigationBarState=_skipRestoringNavigationBarState;
@property(retain, nonatomic) UIColor *navigationBarBleedColor; // @synthesize navigationBarBleedColor=_navigationBarBleedColor;
- (void).cxx_destruct;
- (void)_restoreNavigationBar;
- (void)_prepareNavigationBarForBackground;
- (void)_updateNavigationBarBleedView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)captureNavigationBarState:(id)arg1;

@end


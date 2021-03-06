//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Pegasus/PGPictureInPictureControlsViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PGHostedWindowHostingHandle, PGLayerHostView, PGLoadingIndicatorView, PGPictureInPictureApplication, PGPictureInPictureControlsViewController, PGPlaybackProgress, PGStashedView, UIView;
@protocol PGPictureInPictureViewControllerContentContainer, PGPictureInPictureViewControllerDelegate;

@interface PGPictureInPictureViewController : UIViewController <PGPictureInPictureControlsViewControllerDelegate>
{
    long long _stashState;
    PGHostedWindowHostingHandle *_hostedWindowHostingHandle;
    struct CGAffineTransform _layerHostTransform;
    _Bool _showsAlternateActionButtonImage;
    _Bool _showsLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    UIView *_styleViewBelow;
    UIView *_containerView;
    PGLayerHostView *_contentView;
    PGLoadingIndicatorView *_loadingIndicatorView;
    PGStashedView *_stashedView;
    UIView *_styleViewAbove;
    PGPictureInPictureControlsViewController *_controlsViewController;
    _Bool _initialLayerFrameIsNull;
    id <PGPictureInPictureViewControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureViewController_updateHostedWindowSize_animationType_initialSpringVelocity:1;
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeBegan:1;
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeEnded:1;
        unsigned int pictureInPictureViewControllerStopButtonTapped:1;
        unsigned int pictureInPictureViewControllerActionButtonTapped:1;
        unsigned int pictureInPictureViewControllerCancelButtonTapped:1;
    } _delegateRespondsTo;
    id <PGPictureInPictureViewControllerContentContainer> _contentContainer;
    struct {
        unsigned int prepareStopAnimationWithCompletionHandler:1;
        unsigned int acquireInterfaceOrientationLock:1;
        unsigned int relinquishInterfaceOrientationLock:1;
        unsigned int handleTapGesture:1;
        unsigned int handleDoubleTapGesture:1;
        unsigned int performRotateAnimationWithRotation:1;
    } _contentContainerRespondsTo;
    struct CGSize _preferredContentSize;
    _Bool _canStartShowingChrome;
    PGPictureInPictureApplication *_application;
    CDUnknownBlockType _waitForUIFinalizationCompletionBlock;
    long long _controlsStyle;
}

+ (void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (double)contentViewCornerRadius;
- (void).cxx_destruct;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property(copy, nonatomic) CDUnknownBlockType waitForUIFinalizationCompletionBlock; // @synthesize waitForUIFinalizationCompletionBlock=_waitForUIFinalizationCompletionBlock;
@property(nonatomic) _Bool canStartShowingChrome; // @synthesize canStartShowingChrome=_canStartShowingChrome;
@property(nonatomic) __weak id <PGPictureInPictureViewControllerContentContainer> contentContainer; // @synthesize contentContainer=_contentContainer;
@property(readonly, nonatomic) __weak PGPictureInPictureApplication *application; // @synthesize application=_application;
- (_Bool)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(id)arg1;
- (_Bool)pictureInPictureControlsViewControllerShouldHandleTapGesture:(id)arg1;
- (void)pictureInPictureControlsViewControllerCancelButtonTapped:(id)arg1;
- (void)pictureInPictureControlsViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureControlsViewControllerStopButtonTapped:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)setControlsStyle:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stopShowingControlsAnimated:(_Bool)arg1;
- (void)relinquishInterfaceOrientationLock;
- (void)acquireInterfaceOrientationLock;
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performResumeAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performSuspendAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performStopAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performStartAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSize;
@property(readonly, nonatomic) UIView *contentContainerView;
- (void)loadView;
- (void)setStashState:(long long)arg1 animated:(_Bool)arg2;
- (void)hostedWindowSizeChangeEnded;
- (void)hostedWindowSizeChangeBegan;
- (void)updateLayerHostTransform:(struct CGAffineTransform)arg1;
- (void)updateHostedWindowSize:(struct CGSize)arg1;
- (void)showChrome:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <PGPictureInPictureViewControllerDelegate> delegate;
@property(retain, nonatomic) NSArray *loadedTimeRanges;
@property(retain, nonatomic) PGPlaybackProgress *playbackProgress;
@property(nonatomic) _Bool showsLoadingIndicator;
@property(nonatomic) _Bool showsAlternateActionButtonImage;
@property(retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property(nonatomic) long long stashState;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


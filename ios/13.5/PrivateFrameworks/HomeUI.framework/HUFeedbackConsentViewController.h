//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController
{
    _Bool _isFamilyAndFriendsConsent;
    WKWebView *_consentView;
    id <HUFeedbackConsentViewControllerDelegate> _consentDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HUFeedbackConsentViewControllerDelegate> consentDelegate; // @synthesize consentDelegate=_consentDelegate;
@property(nonatomic) _Bool isFamilyAndFriendsConsent; // @synthesize isFamilyAndFriendsConsent=_isFamilyAndFriendsConsent;
@property(retain, nonatomic) WKWebView *consentView; // @synthesize consentView=_consentView;
- (id)consentFormFilePath;
- (void)dealloc;
- (id)htmlString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didDeclineConsent;
- (void)didAcceptConsent;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConsentDelegate:(id)arg1;

@end


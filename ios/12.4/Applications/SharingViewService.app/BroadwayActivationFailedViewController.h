//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class UILabel;

@interface BroadwayActivationFailedViewController : SVSBaseViewController
{
    UILabel *_titleLabel;
    UILabel *_subheadLabel;
    UILabel *_cardNameLabel;
    long long _failureResult;
}

@property(nonatomic) long long failureResult; // @synthesize failureResult=_failureResult;
- (void).cxx_destruct;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end


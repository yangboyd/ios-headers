//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/WFQuickLookAction.h>

#import <ActionKitUI/QLPreviewControllerPrivateDelegate-Protocol.h>

@class NSString, QLPreviewController, WFContentCollection;

@interface WFQuickLookAction (UIKit) <QLPreviewControllerPrivateDelegate>
- (_Bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@property(retain, nonatomic) QLPreviewController *previewController;
@property(retain, nonatomic) WFContentCollection *dataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


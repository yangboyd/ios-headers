//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

@class CNActionView, CNContactInlineActionsViewController;

@interface SearchUIInlineActionsView : NUIContainerStackView
{
    CNActionView *_messageButton;
    CNContactInlineActionsViewController *_inlineActionsViewController;
    CNActionView *_directionsButton;
}

- (void).cxx_destruct;
@property(retain) CNActionView *directionsButton; // @synthesize directionsButton=_directionsButton;
@property(retain) CNContactInlineActionsViewController *inlineActionsViewController; // @synthesize inlineActionsViewController=_inlineActionsViewController;
@property(retain) CNActionView *messageButton; // @synthesize messageButton=_messageButton;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3;

@end


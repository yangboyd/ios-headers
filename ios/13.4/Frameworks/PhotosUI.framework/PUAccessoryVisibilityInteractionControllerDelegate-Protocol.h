//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAccessoryVisibilityInteractionController, UIView;
@protocol PUDisplayLocationProvider;

@protocol PUAccessoryVisibilityInteractionControllerDelegate <NSObject>
- (UIView *)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(PUAccessoryVisibilityInteractionController *)arg1;

@optional
- (void)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 setAccessoryVisible:(_Bool)arg2 changeReason:(long long)arg3;
- (_Bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 isLocationFromProviderInAccessoryContent:(id <PUDisplayLocationProvider>)arg2;
- (void)accessoryVisibilityInteractionControllerDidEnd:(PUAccessoryVisibilityInteractionController *)arg1;
- (_Bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 canBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
@end


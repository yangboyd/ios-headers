//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprintModifierResult, FRFeedCollectionViewUpdateManager;

@protocol FRFeedCollectionViewUpdateManagerDelegate <NSObject>

@optional
- (void)collectionViewUpdateManager:(FRFeedCollectionViewUpdateManager *)arg1 didUpdateViewWithResult:(FRFeedCollectionViewLayoutBlueprintModifierResult *)arg2 success:(_Bool)arg3;
- (void)collectionViewUpdateManager:(FRFeedCollectionViewUpdateManager *)arg1 willUpdateViewWithResult:(FRFeedCollectionViewLayoutBlueprintModifierResult *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class UIViewController, WDAddDataManualEntryItem;

@protocol WDAddDataManualEntryItemDelegate <NSObject>
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)manualEntryItemDidUpdate:(WDAddDataManualEntryItem *)arg1;
@end


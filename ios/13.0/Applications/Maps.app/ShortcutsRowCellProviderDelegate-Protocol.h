//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MapsSuggestionsEntry, ShortcutsRowCellProvider;

@protocol ShortcutsRowCellProviderDelegate <NSObject>
- (void)shortcutsRowCellProvider:(ShortcutsRowCellProvider *)arg1 openShortcut:(MapsSuggestionsEntry *)arg2;
- (void)shortcutsRowCellProviderAddNewShortcut:(ShortcutsRowCellProvider *)arg1;
@end


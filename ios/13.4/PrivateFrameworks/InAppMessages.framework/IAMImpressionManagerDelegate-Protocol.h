//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InAppMessages/NSObject-Protocol.h>

@class IAMImpressionManager, ICInAppMessageEntry, NSDictionary;

@protocol IAMImpressionManagerDelegate <NSObject>
- (void)impressionManager:(IAMImpressionManager *)arg1 impressionDidEndForMessageEntry:(ICInAppMessageEntry *)arg2;
- (void)impressionManager:(IAMImpressionManager *)arg1 shouldReportImpressionEventWithDictionary:(NSDictionary *)arg2;
@end


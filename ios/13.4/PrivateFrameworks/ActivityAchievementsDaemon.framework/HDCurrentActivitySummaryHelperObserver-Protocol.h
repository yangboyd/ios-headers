//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class HDCurrentActivitySummaryHelper, HKActivitySummary;

@protocol HDCurrentActivitySummaryHelperObserver <NSObject>
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateYesterdayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateTodayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
@end


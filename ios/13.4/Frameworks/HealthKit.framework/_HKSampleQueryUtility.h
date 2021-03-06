//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, HKQueryAnchor, HKSampleType, NSMutableArray, NSPredicate;

@interface _HKSampleQueryUtility : NSObject
{
    HKHealthStore *_healthStore;
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
    HKAnchoredObjectQuery *_query;
    HKQueryAnchor *_queryAnchor;
    NSMutableArray *_samples;
    _Bool _sortStartDateAscending;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) _Bool sortStartDateAscending; // @synthesize sortStartDateAscending=_sortStartDateAscending;
- (void)stop;
- (void)execute;
- (void)handleAddedObjects:(id)arg1 deletedObjects:(id)arg2 queryAnchor:(id)arg3 error:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)setupQueryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (id)initWithHealthStore:(id)arg1 sampleType:(id)arg2 predicate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 updateHandler:(CDUnknownBlockType)arg5;

@end


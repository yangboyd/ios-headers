//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMDHomeManager, NSString;

@interface HMDBackingStoreSaveToPersistentStore : NSOperation
{
    _Bool _incrementGeneration;
    HMDHomeManager *_homeManager;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool incrementGeneration; // @synthesize incrementGeneration=_incrementGeneration;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)main;
- (id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(_Bool)arg3;

@end


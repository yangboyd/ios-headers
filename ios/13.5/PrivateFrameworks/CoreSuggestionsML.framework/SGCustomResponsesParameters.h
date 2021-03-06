//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGCustomResponsesParameters : NSObject
{
    _Bool _isCustomResponsesEnabled;
    _Bool _allowProfanity;
    unsigned long long _filterBatchSize;
    double _minimumTimeIntervalSecs;
    unsigned long long _minimumDistinctRecipients;
    unsigned long long _minimumReplyOccurences;
    double _timeDecayFactor;
    double _countExponent;
    double _distanceThreshold;
    double _minDecayedCountForPruning;
    unsigned long long _minDecayedCountForPrediction;
    unsigned long long _maxStoredMessages;
    unsigned long long _maxStoredCustomResponses;
    unsigned long long _knowledgeStoreQueryLimit;
    unsigned long long _maxReplyLength;
    double _maxReplyGapSecs;
    unsigned long long _compatibilityVersion;
}

@property(readonly, nonatomic) unsigned long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) _Bool allowProfanity; // @synthesize allowProfanity=_allowProfanity;
@property(readonly, nonatomic) double maxReplyGapSecs; // @synthesize maxReplyGapSecs=_maxReplyGapSecs;
@property(readonly, nonatomic) unsigned long long maxReplyLength; // @synthesize maxReplyLength=_maxReplyLength;
@property(readonly, nonatomic) unsigned long long knowledgeStoreQueryLimit; // @synthesize knowledgeStoreQueryLimit=_knowledgeStoreQueryLimit;
@property(readonly, nonatomic) unsigned long long maxStoredCustomResponses; // @synthesize maxStoredCustomResponses=_maxStoredCustomResponses;
@property(readonly, nonatomic) unsigned long long maxStoredMessages; // @synthesize maxStoredMessages=_maxStoredMessages;
@property(readonly, nonatomic) unsigned long long minDecayedCountForPrediction; // @synthesize minDecayedCountForPrediction=_minDecayedCountForPrediction;
@property(readonly, nonatomic) double minDecayedCountForPruning; // @synthesize minDecayedCountForPruning=_minDecayedCountForPruning;
@property(readonly, nonatomic) double distanceThreshold; // @synthesize distanceThreshold=_distanceThreshold;
@property(readonly, nonatomic) double countExponent; // @synthesize countExponent=_countExponent;
@property(readonly, nonatomic) double timeDecayFactor; // @synthesize timeDecayFactor=_timeDecayFactor;
@property(readonly, nonatomic) unsigned long long minimumReplyOccurences; // @synthesize minimumReplyOccurences=_minimumReplyOccurences;
@property(readonly, nonatomic) unsigned long long minimumDistinctRecipients; // @synthesize minimumDistinctRecipients=_minimumDistinctRecipients;
@property(readonly, nonatomic) double minimumTimeIntervalSecs; // @synthesize minimumTimeIntervalSecs=_minimumTimeIntervalSecs;
@property(readonly, nonatomic) unsigned long long filterBatchSize; // @synthesize filterBatchSize=_filterBatchSize;
@property(readonly, nonatomic) _Bool isCustomResponsesEnabled; // @synthesize isCustomResponsesEnabled=_isCustomResponsesEnabled;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSNovDetectorResult : NSObject
{
    _Bool _earlyWarning;
    _Bool _isRescoring;
    float _bestScore;
    unsigned long long _sampleFed;
    unsigned long long _bestPhrase;
    unsigned long long _bestStart;
    unsigned long long _bestEnd;
}

@property(nonatomic) _Bool isRescoring; // @synthesize isRescoring=_isRescoring;
@property(nonatomic) _Bool earlyWarning; // @synthesize earlyWarning=_earlyWarning;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) unsigned long long bestEnd; // @synthesize bestEnd=_bestEnd;
@property(nonatomic) unsigned long long bestStart; // @synthesize bestStart=_bestStart;
@property(nonatomic) unsigned long long bestPhrase; // @synthesize bestPhrase=_bestPhrase;
@property(nonatomic) unsigned long long sampleFed; // @synthesize sampleFed=_sampleFed;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithResult:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDUserPresenceRegion : NSObject
{
    unsigned long long _value;
}

+ (id)regionWithCoder:(id)arg1;
+ (id)regionWithDict:(id)arg1;
+ (id)regionWithMessage:(id)arg1;
+ (id)regionWithNumber:(id)arg1;
+ (id)regionWithValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@protocol GEOTransitFare <NSObject>
@property(readonly, nonatomic) _Bool cashOnly;
@property(readonly, nonatomic) NSArray *supportedICCardProviders;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *value;
@end


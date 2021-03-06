//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TIPreferenceDomain : NSObject
{
    _Bool _needsGetSync;
    _Bool _needsSetSync;
    NSString *_domain;
    NSString *_notification;
    double _lastSynchronizedTime;
}

+ (id)domainWithName:(id)arg1 notification:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double lastSynchronizedTime; // @synthesize lastSynchronizedTime=_lastSynchronizedTime;
@property(nonatomic) _Bool needsSetSync; // @synthesize needsSetSync=_needsSetSync;
@property(nonatomic) _Bool needsGetSync; // @synthesize needsGetSync=_needsGetSync;
@property(retain, nonatomic) NSString *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;

@end


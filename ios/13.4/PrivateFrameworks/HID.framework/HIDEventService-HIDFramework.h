//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOKit/HIDEventService.h>

@interface HIDEventService (HIDFramework)
@property(readonly) unsigned long long serviceID;
- (id)eventMatching:(id)arg1;
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)dispatchEvent:(id)arg1;
@end


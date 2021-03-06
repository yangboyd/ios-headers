//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol AVOutputDeviceImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceInternal : NSObject
{
    id <AVOutputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    unsigned long long deviceFeatures;
}

@end


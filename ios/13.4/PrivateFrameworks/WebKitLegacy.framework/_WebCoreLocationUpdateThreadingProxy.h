//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationCoreLocationUpdateListener-Protocol.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener>
{
    WebGeolocationProviderIOS *_provider;
}

- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(struct GeolocationPositionData *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)initWithProvider:(id)arg1;

@end


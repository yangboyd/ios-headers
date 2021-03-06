//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleConnectClient/ACMobileAuthenticationContext.h>

@class NSData, NSString;

@interface ACMobileRetailAuthenticationContext : ACMobileAuthenticationContext
{
    NSData *_applicationData;
    NSString *_failoverRetrieveSaltAPIAddress;
    NSString *_failoverAuthenticateAPIAddress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *failoverAuthenticateAPIAddress; // @synthesize failoverAuthenticateAPIAddress=_failoverAuthenticateAPIAddress;
@property(retain, nonatomic) NSString *failoverRetrieveSaltAPIAddress; // @synthesize failoverRetrieveSaltAPIAddress=_failoverRetrieveSaltAPIAddress;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
- (void)prepareMessage:(id)arg1;
- (void)signOutWithEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end


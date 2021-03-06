//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload
{
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    unsigned long long _nextPayload;
}

+ (id)copyTypeDescription;
@property unsigned long long nextPayload; // @synthesize nextPayload=_nextPayload;
@property unsigned int totalFragments; // @synthesize totalFragments=_totalFragments;
@property unsigned int fragmentNumber; // @synthesize fragmentNumber=_fragmentNumber;
- (_Bool)parsePayloadData;
- (_Bool)hasRequiredFields;
- (unsigned long long)type;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionaryRepresentation;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToPKServiceProviderPurchaseData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBImageOption-Protocol.h>

@class NSData, NSString, _SFPBStringDictionary;

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding>
{
    NSString *_name;
    NSString *_defaultValue;
    _SFPBStringDictionary *_options;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _SFPBStringDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


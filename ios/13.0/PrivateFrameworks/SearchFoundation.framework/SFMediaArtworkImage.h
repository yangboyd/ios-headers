//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMediaArtworkImage-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMediaArtworkImage : SFImage <SFMediaArtworkImage, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int mediaEntityType:1;
    } _has;
    int _mediaEntityType;
    NSString *_persistentID;
    NSString *_spotlightIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasMediaEntityType;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) _Bool isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end


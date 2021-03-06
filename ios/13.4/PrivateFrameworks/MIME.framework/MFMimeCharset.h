//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/ECMIMECharset-Protocol.h>
#import <MIME/NSSecureCoding-Protocol.h>

@class NSString;

@interface MFMimeCharset : NSObject <NSSecureCoding, ECMIMECharset>
{
    unsigned int _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)primaryLanguage;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool useBase64InHeaders;
- (_Bool)coversLargeUnicodeSubset;
@property(readonly, nonatomic) _Bool canBeUsedForOutgoingMessages;
@property(readonly, copy, nonatomic) NSString *charsetName;
@property(readonly) unsigned long long encoding;
@property(readonly, nonatomic) unsigned int cfStringEncoding;
- (void)_setPrimaryLanguage:(id)arg1;
- (id)initWithEncoding:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


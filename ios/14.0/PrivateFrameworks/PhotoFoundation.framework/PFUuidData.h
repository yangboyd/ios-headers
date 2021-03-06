/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSString, NSData;

@interface PFUuidData : NSData {

	unsigned char _uuid[16];

}

@property (nonatomic,readonly) NSString * canonicalStringValue; 
@property (nonatomic,readonly) NSString * mercuryStringValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,readonly) BOOL isNull; 
+(BOOL)isMercuryBase64String:(id)arg1 ;
+(id)nullUuid;
+(id)hostUuid;
+(id)randomUuid;
+(BOOL)isCanonicalUuidString:(id)arg1 ;
+(id)uuidWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(BOOL)isMercuryUuidString:(id)arg1 ;
+(BOOL)isSupportedUuidString:(id)arg1 ;
+(id)generateUuidAsCanonicalString;
+(id)generateUuidAsMercuryString;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)dataValue;
-(Class)classForCoder;
-(const void*)bytes;
-(unsigned long long)length;
-(id)init;
-(BOOL)isNull;
-(id)initWithString:(id)arg1 ;
-(id)initWithMercuryBase64String:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initNull;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initRandom;
-(NSString *)canonicalStringValue;
-(NSString *)mercuryStringValue;
-(unsigned long long)hash;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)description;
@end


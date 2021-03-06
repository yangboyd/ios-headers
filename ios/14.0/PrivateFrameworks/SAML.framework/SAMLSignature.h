/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignedInfo, NSData, SAMLKeyInfo;

@interface SAMLSignature : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SAMLSignedInfo * signedInfo; 
@property (nonatomic,readonly) NSData * signatureValue; 
@property (nonatomic,readonly) NSString * signatureValueId; 
@property (nonatomic,readonly) SAMLKeyInfo * keyInfo; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLKeyInfo *)keyInfo;
-(BOOL)isValid;
-(SAMLSignedInfo *)signedInfo;
-(NSData *)signatureValue;
-(NSString *)signatureValueId;
@end


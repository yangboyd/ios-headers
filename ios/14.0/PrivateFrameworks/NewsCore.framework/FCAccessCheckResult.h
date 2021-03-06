/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCAccessCheckResult : NSObject <NSCopying> {

	BOOL _canAccess;
	unsigned long long _blockedReason;

}

@property (nonatomic,readonly) BOOL canAccess;                                //@synthesize canAccess=_canAccess - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedReason;              //@synthesize blockedReason=_blockedReason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canAccess;
-(unsigned long long)blockedReason;
-(id)initWithCanAccess:(BOOL)arg1 blockedReason:(unsigned long long)arg2 ;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3 ;
@end


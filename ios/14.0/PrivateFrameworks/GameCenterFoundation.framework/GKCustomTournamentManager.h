/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKCustomTournamentDelegate.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate> {

	GKTournament* _tournament;
	GKPlayer* _creator;

}

@property (assign,nonatomic,__weak) GKTournament * tournament;              //@synthesize tournament=_tournament - In the implementation block
@property (nonatomic,retain) GKPlayer * creator;                            //@synthesize creator=_creator - In the implementation block
-(GKPlayer *)creator;
-(void)setTournament:(GKTournament *)arg1 ;
-(void)setCreator:(GKPlayer *)arg1 ;
-(GKTournament *)tournament;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface WBUGeneratedPasswordCredentialUpdater : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _urlsScheduledForUpdating;
	NSMutableDictionary* _urlsToUpdateRequests;

}
+(id)sharedUpdater;
-(id)init;
-(void)_performRequest:(id)arg1 ;
-(void)updateCredentialWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6 ;
@end


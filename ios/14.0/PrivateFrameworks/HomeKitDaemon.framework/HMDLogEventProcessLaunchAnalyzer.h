/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSDate, NSString;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate> {

	BOOL _processLaunchInfoSubmitStatus;
	NSDate* _processLaunchTime;
	NSString* _dataSyncStateAsString;
	NSString* _jetsamReason;
	long long _previousPID;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;
	double _processRelaunchEventTimeIntervalThreshold;

}

@property (readonly) double processRelaunchEventTimeIntervalThreshold;                 //@synthesize processRelaunchEventTimeIntervalThreshold=_processRelaunchEventTimeIntervalThreshold - In the implementation block
@property (readonly) id<HMDLogEventProcessLaunchAnalyzerContext> context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerDidFire:(id)arg1 ;
-(void)processLogEvent:(id)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)_handleDataSyncStateUpdateLogEvent:(id)arg1 ;
-(void)_handleProcessLaunchLogEvent:(id)arg1 ;
-(void)_updateProcessLaunchInfoFromDisk;
-(void)_readJetsamSnapshotEntryForHomed;
-(double)processRelaunchEventTimeIntervalThreshold;
@end


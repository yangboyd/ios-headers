/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUserNotificationStrategy.h>

@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>
+(id)_centerForBundleId:(id)arg1 ;
+(id)_activeNotificationsWithCenterBundleId:(id)arg1 ;
+(BOOL)_badgeBundleId:(id)arg1 increment:(BOOL)arg2 error:(id*)arg3 ;
+(id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3 ;
+(id)_removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
+(id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(BOOL)arg4 ;
@end


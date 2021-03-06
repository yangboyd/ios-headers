/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSAutoupdatingCurrentCalendar : NSObject
+(void)initialize;
+(id)timezone;
+(BOOL)isWeekendDate:(id)arg1 ;
+(id)calendar;
+(BOOL)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg1 ;
+(BOOL)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3 ;
+(BOOL)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
@end


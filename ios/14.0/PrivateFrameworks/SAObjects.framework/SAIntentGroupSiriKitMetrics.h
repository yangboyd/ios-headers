/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * intentTypeName; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * metricsStateOrigin; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * taskId; 
@property (nonatomic,copy) NSNumber * taskStepStartTime; 
@property (nonatomic,copy) NSString * turnId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitMetrics;
+(id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)taskId;
-(NSString *)intentTypeName;
-(void)setIntentTypeName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setTaskId:(NSString *)arg1 ;
-(NSString *)turnId;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)metricsStateOrigin;
-(void)setMetricsStateOrigin:(NSString *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSNumber *)taskStepStartTime;
-(void)setTaskStepStartTime:(NSNumber *)arg1 ;
-(void)setTurnId:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HFSelectedUserCollection;

@interface HUPresenceActivationOptionItem : HFItem {

	BOOL _selected;
	HMHome* _home;
	unsigned long long _activationGranularity;
	unsigned long long _eventType;
	unsigned long long _style;
	HFSelectedUserCollection* _selectedUsers;

}

@property (nonatomic,readonly) HMHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity;              //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                         //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) HFSelectedUserCollection * selectedUsers;                //@synthesize selectedUsers=_selectedUsers - In the implementation block
-(unsigned long long)eventType;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)style;
-(HFSelectedUserCollection *)selectedUsers;
-(void)setSelectedUsers:(HFSelectedUserCollection *)arg1 ;
-(id)init;
-(BOOL)isSelected;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)activationGranularity;
-(id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5 ;
-(HMHome *)home;
-(id)_summaryTitle;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@class HMHome, HFItem;

@interface HUServiceDetailsItemModule : HFItemModule {

	HMHome* _home;
	HFItem* _sourceItem;

}

@property (nonatomic,retain) HMHome * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFItem * sourceItem;              //@synthesize sourceItem=_sourceItem - In the implementation block
+(/*^block*/id)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(HFItem *)sourceItem;
-(id)itemProviders;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
@end


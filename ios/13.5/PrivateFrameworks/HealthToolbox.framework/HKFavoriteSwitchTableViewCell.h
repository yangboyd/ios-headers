//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSwitchTableViewCell.h>

#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDFavoriteDisplayTypesControllerObserver-Protocol.h>

@class HKDisplayType, NSString, WDFavoriteDisplayTypesController;

__attribute__((visibility("hidden")))
@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver>
{
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;
    HKDisplayType *_displayType;
}

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // @synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)updateSwitchValue;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


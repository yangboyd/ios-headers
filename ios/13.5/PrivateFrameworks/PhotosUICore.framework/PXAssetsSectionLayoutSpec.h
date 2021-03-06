//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class NSShadow, PXDayAssetsSectionConfigurator, PXMonthCardSectionConfigurator, PXMonthChapterSectionConfigurator, PXYearAssetsSectionConfigurator;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec
{
    PXYearAssetsSectionConfigurator *_yearSectionConfigurator;
    PXMonthCardSectionConfigurator *_monthSectionConfigurator;
    PXMonthChapterSectionConfigurator *_monthsChapterConfigurator;
    PXDayAssetsSectionConfigurator *_daySectionConfigurator;
    _Bool _userInterfaceStyleAllowsShadow;
    NSShadow *_shadow;
    double _shadowCornerRadius;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool userInterfaceStyleAllowsShadow; // @synthesize userInterfaceStyleAllowsShadow=_userInterfaceStyleAllowsShadow;
@property(readonly, nonatomic) double shadowCornerRadius; // @synthesize shadowCornerRadius=_shadowCornerRadius;
@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
- (_Bool)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)arg1;
- (id)sectionConfiguratorForAssetCollection:(id)arg1 inZoomLevel:(long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end


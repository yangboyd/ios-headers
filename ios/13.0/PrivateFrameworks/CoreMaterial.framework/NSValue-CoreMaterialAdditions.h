//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValue.h>

#import <CoreMaterial/MTFilterIdentityValueProviding-Protocol.h>
#import <CoreMaterial/MTMaterialSettingsPropertyIdentityValueProviding-Protocol.h>

@class NSString;

@interface NSValue (CoreMaterialAdditions) <MTFilterIdentityValueProviding, MTMaterialSettingsPropertyIdentityValueProviding>
+ (id)mt_identityValueForMaterialSettingsProperty:(id)arg1;
+ (id)mt_identityValueForFilter:(id)arg1;
- (_Bool)mt_isIdentityValueForMaterialSettingsProperty:(id)arg1;
- (_Bool)mt_isIdentityValueForFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKPhoto, PHAsset;

@interface _NTKPickedPhoto : NSObject
{
    NTKPhoto *_photo;
    PHAsset *_asset;
    unsigned long long _subsampleFactor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NTKPhoto *photo; // @synthesize photo=_photo;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMetalLayer;

@interface PKMetalView : UIView
{
    _Bool _isWideGamut;
    _Bool _isFixedPixelSize;
    _Bool _doubleBuffered;
    struct CGSize _fixedPixelSize;
}

+ (Class)layerClass;
@property(nonatomic) _Bool doubleBuffered; // @synthesize doubleBuffered=_doubleBuffered;
@property(readonly, nonatomic) struct CGSize fixedPixelSize; // @synthesize fixedPixelSize=_fixedPixelSize;
@property(readonly, nonatomic) _Bool isFixedPixelSize; // @synthesize isFixedPixelSize=_isFixedPixelSize;
@property(readonly, nonatomic) _Bool isWideGamut; // @synthesize isWideGamut=_isWideGamut;
- (void)flushDrawables;
- (void)resizeDrawableIfNecessary;
- (void)setFixedPixelSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isDrawableAvailable; // @dynamic isDrawableAvailable;
@property(readonly, nonatomic) struct CGSize drawableSize;
@property(readonly, nonatomic) CAMetalLayer *metalLayer;
- (id)initWithFrame:(struct CGRect)arg1 andPixelSize:(struct CGSize)arg2 isWideGamut:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isWideGamut:(_Bool)arg2;
- (void)initLayer;

@end


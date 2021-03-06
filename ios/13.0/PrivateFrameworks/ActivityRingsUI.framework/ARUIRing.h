//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUIAnimatableObject.h>

#import <ActivityRingsUI/NSCopying-Protocol.h>

@class ARUIIcon, MISSING_TYPE, NSArray, NSMutableArray, UIColor;

__attribute__((visibility("hidden")))
@interface ARUIRing : ARUIAnimatableObject <NSCopying>
{
    _Bool _vertexAttributesDirty;
    _Bool _calculatedUniformsDirty;
    NSMutableArray *_celebrations;
    NSMutableArray *_celebrationsToRemove;
    _Bool _premultiplyAlpha;
    _Bool _sizeDirty;
    float _screenScale;
    float _ringBoundsDiameter;
    float _scale;
    float _thickness;
    float _interspacing;
    float _size;
    float _zRotation;
    ARUIIcon *_icon;
    MISSING_TYPE *_drawableSize;
    UIColor *_topColor;
    UIColor *_bottomColor;
    UIColor *_contrastColor;
    MISSING_TYPE *_center;
    MISSING_TYPE *_topColorVector;
    MISSING_TYPE *_topColorPremultiplied;
    MISSING_TYPE *_bottomColorVector;
    MISSING_TYPE *_bottomColorPremultiplied;
    MISSING_TYPE *_contrastColorVector;
    CDStruct_14d5dc5e _skewAdjustmentMatrix;
    CDStruct_ee1f7a4d _vertexAttributes;
    struct {
        MISSING_TYPE *color1__color2__center__startPosition__endPosition__ringValues__blendingValues__trigResults;
    } _uniforms;
}

@property(readonly, nonatomic) MISSING_TYPE *contrastColorVector; // @synthesize contrastColorVector=_contrastColorVector;
@property(readonly, nonatomic) MISSING_TYPE *bottomColorPremultiplied; // @synthesize bottomColorPremultiplied=_bottomColorPremultiplied;
@property(readonly, nonatomic) MISSING_TYPE *bottomColorVector; // @synthesize bottomColorVector=_bottomColorVector;
@property(readonly, nonatomic) MISSING_TYPE *topColorPremultiplied; // @synthesize topColorPremultiplied=_topColorPremultiplied;
@property(readonly, nonatomic) MISSING_TYPE *topColorVector; // @synthesize topColorVector=_topColorVector;
@property(nonatomic) MISSING_TYPE *center; // @synthesize center=_center;
@property(nonatomic) float zRotation; // @synthesize zRotation=_zRotation;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic, getter=isSizeDirty) _Bool sizeDirty; // @synthesize sizeDirty=_sizeDirty;
@property(nonatomic) float interspacing; // @synthesize interspacing=_interspacing;
@property(nonatomic) float thickness; // @synthesize thickness=_thickness;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *contrastColor; // @synthesize contrastColor=_contrastColor;
@property(retain, nonatomic) UIColor *bottomColor; // @synthesize bottomColor=_bottomColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(nonatomic) _Bool premultiplyAlpha; // @synthesize premultiplyAlpha=_premultiplyAlpha;
@property(nonatomic) CDStruct_14d5dc5e skewAdjustmentMatrix; // @synthesize skewAdjustmentMatrix=_skewAdjustmentMatrix;
@property(nonatomic) MISSING_TYPE *drawableSize; // @synthesize drawableSize=_drawableSize;
@property(nonatomic) float ringBoundsDiameter; // @synthesize ringBoundsDiameter=_ringBoundsDiameter;
@property(readonly, nonatomic) float screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) ARUIIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) struct uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, nonatomic) CDStruct_ee1f7a4d vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
- (void).cxx_destruct;
- (void)updateCelebrationWithColors:(id)arg1;
- (void)updateCelebrationsWithColors;
- (void)_updateCalculatedUniforms;
- (void)_updateVertexAttributes;
- (void)updateCalculatedAttributes;
- (void *)vertexAttributesBytes;
@property(nonatomic) float emptyOpacity;
@property(nonatomic) float opacity;
@property(nonatomic) float trackOpacity;
@property(nonatomic) float percentage;
- (void *)uniformsBytes;
- (void)_updateBottomColorUniform;
- (void)_updatePremultipliedBottomColor;
- (void)_updateTopColorUniform;
- (void)_updatePremultipliedTopColor;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)removeAllAnimationsForRingPropertyType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forRingPropertyType:(unsigned long long)arg2;
- (void)update:(double)arg1;
- (_Bool)areAnimationsInProgress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *celebrations;
- (void)removeCelebration:(id)arg1;
- (void)addCelebration:(id)arg1;

@end


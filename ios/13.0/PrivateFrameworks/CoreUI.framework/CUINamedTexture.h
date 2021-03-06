//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup
{
    double _scale;
    struct _cuintproperties {
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isOpaque:1;
        unsigned int _reserved:26;
    } _textureProperties;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;
- (id)description;
@property(readonly, nonatomic) _Bool isAlphaCropped;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) int exifOrientation;
- (id)textureWithBufferAllocator:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (_Bool)_cacheRenditionProperties;

@end


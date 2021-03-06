//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXLivePhotoTrimScrubberHiddenAnimationHelper : NSObject
{
    long long _hideRequestCounter;
    _Bool _hidden;
    CDUnknownBlockType _animationBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 withRequstID:(long long)arg3;
- (void)_setHidden:(_Bool)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithAnimationBlock:(CDUnknownBlockType)arg1;

@end


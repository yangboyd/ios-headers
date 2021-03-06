//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UILayerHostView.h>

@class _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView
{
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    CDUnknownBlockType _tintColorDidChangeHandler;
}

+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (_Bool)_requiresWindowTouches;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tintColorDidChangeHandler; // @synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler;
@property(retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property(nonatomic, setter=_setInheritsSecurity:) _Bool _inheritsSecurity;
- (void)tintColorDidChange;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;

@end


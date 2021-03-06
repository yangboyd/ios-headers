//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings
{
    _Bool _enableImagePreheating;
    _Bool _showBordersOnAnimatedContent;
    _Bool _animateContentByDefault;
    _Bool _allowLivePhotoPlayback;
    _Bool _playLivePhotosAsLoops;
    _Bool _allowLoopingVideoPlayback;
    _Bool _allowVideoPlayback;
    _Bool _allowAnimatedImagePlayback;
    double _transitionDuration;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool allowAnimatedImagePlayback; // @synthesize allowAnimatedImagePlayback=_allowAnimatedImagePlayback;
@property(nonatomic) _Bool allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(nonatomic) _Bool allowLoopingVideoPlayback; // @synthesize allowLoopingVideoPlayback=_allowLoopingVideoPlayback;
@property(nonatomic) _Bool playLivePhotosAsLoops; // @synthesize playLivePhotosAsLoops=_playLivePhotosAsLoops;
@property(nonatomic) _Bool allowLivePhotoPlayback; // @synthesize allowLivePhotoPlayback=_allowLivePhotoPlayback;
@property(nonatomic) _Bool animateContentByDefault; // @synthesize animateContentByDefault=_animateContentByDefault;
@property(nonatomic) _Bool showBordersOnAnimatedContent; // @synthesize showBordersOnAnimatedContent=_showBordersOnAnimatedContent;
@property(nonatomic) _Bool enableImagePreheating; // @synthesize enableImagePreheating=_enableImagePreheating;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void)setDefaultValues;
- (id)parentSettings;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface AXWaveformSelectionBarElement : UIAccessibilityElement
{
    _Bool _adjustsStartTime;
}

@property(nonatomic) _Bool adjustsStartTime; // @synthesize adjustsStartTime=_adjustsStartTime;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_accessibilityIncreaseValue:(_Bool)arg1 isThreeFingerScroll:(_Bool)arg2;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isWaveformOverview;

@end


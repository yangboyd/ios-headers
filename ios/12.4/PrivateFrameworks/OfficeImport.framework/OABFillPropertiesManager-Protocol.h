//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABColorPropertiesManager-Protocol.h>

@class NSString;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (NSString *)fillBlipName;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
@end


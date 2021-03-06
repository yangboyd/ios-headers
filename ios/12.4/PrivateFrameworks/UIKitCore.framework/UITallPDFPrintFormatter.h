//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter
{
    NSURL *_pdfPath;
    struct CGPDFDocument *_pdfDocRef;
    double _pdfScaleFactor;
    _Bool _rotate90;
    double _shiftUpLength;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (long long)_recalcPageCount;
- (id)initWithPDFData:(id)arg1;
- (id)initWithPDFURL:(id)arg1;

@end


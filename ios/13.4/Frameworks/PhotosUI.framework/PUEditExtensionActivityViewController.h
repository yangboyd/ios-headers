//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditExtensionActivityViewController : UIActivityViewController
{
    id <PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate; // @synthesize editExtensionActivityViewControllerDelegate=_editExtensionActivityViewControllerDelegate;
- (void)_performActivity:(id)arg1;
- (_Bool)appWantsLargePreview;
- (_Bool)isPhotosOrCamera;
- (_Bool)_shouldUseModernDesign;

@end


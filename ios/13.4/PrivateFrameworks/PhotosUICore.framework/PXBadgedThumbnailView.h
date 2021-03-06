//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PXCollageView, UIImage, UIImageView;

@interface PXBadgedThumbnailView : UIView
{
    _Bool _showBadge;
    UIImage *_badgeImage;
    UIImageView *_placeholderImageView;
    PXCollageView *_collageView;
    UIImageView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXCollageView *collageView; // @synthesize collageView=_collageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic, getter=shouldShowLikeBadge) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
- (void)setImageHidden:(_Bool)arg1 forItemAtIndex:(unsigned long long)arg2;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (_Bool)shouldShowBadge;
@property(nonatomic) long long numberOfItems;
- (void)layoutSubviews;
- (id)initWithplaceholderImageView:(id)arg1;

@end


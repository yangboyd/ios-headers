//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class FRArticleViewHeadlineContext, NSURL;

@interface FROpenInSafariActivity : UIActivity
{
    FRArticleViewHeadlineContext *_headlineContext;
    NSURL *_URL;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)_firstURLActivityItemFromActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithHeadlineContext:(id)arg1;
- (id)init;

@end


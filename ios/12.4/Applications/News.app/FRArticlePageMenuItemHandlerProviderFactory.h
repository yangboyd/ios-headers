//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FRArticlePageViewController, UINavigationController;

@interface FRArticlePageMenuItemHandlerProviderFactory : NSObject
{
    FRArticlePageViewController *_pageViewController;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) __weak FRArticlePageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (id)createArticlePageMenuItemHandlerProviderForHeadlineContext:(id)arg1;
- (id)initWithArticlePageViewController:(id)arg1 navigationController:(id)arg2;

@end


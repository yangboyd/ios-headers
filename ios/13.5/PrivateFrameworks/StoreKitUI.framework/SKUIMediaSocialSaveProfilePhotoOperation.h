//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSLock, SKUIClientContext, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    UIImage *_photo;
}

- (void).cxx_destruct;
- (id)_requestWithError:(id *)arg1;
- (id)_photoUploadWithResponseDictionary:(id)arg1;
- (void)main;
- (void)setPhoto:(id)arg1;
- (void)setOutputBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)outputBlock;
- (id)initWithClientContext:(id)arg1;

@end


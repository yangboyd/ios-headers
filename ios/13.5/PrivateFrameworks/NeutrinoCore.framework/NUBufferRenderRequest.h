//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageRenderRequest.h>

@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest
{
}

- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
@property id <NUMutableBufferImage> targetBufferImage;

@end


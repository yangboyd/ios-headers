//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSScene, NSObject, NSSet, NSString;
@protocol NSCopying;

@protocol FBSWorkspaceScenesSource <NSObject>
@property(readonly, nonatomic) NSObject<NSCopying> *identifier;
- (FBSScene *)sceneWithIdentifier:(NSString *)arg1;
- (NSSet *)scenes;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WKTextManipulationToken : NSObject
{
    _Bool _excluded;
    NSString *_identifier;
    NSString *_content;
}

@property(nonatomic, getter=isExcluded) _Bool excluded; // @synthesize excluded=_excluded;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_descriptionPreservingPrivacy:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *debugDescription;
- (id)description;
- (_Bool)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;

@end


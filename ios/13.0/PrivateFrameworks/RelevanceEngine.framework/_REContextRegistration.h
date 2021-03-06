//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, REDuetContextQuery;
@protocol _CDUserContext;

@interface _REContextRegistration : NSObject
{
    _Bool _registered;
    NSArray *_registrations;
    REDuetContextQuery *_query;
    id <_CDUserContext> _context;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <_CDUserContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) REDuetContextQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)_evaluateQueryWithRegistration:(_Bool)arg1;
- (void)evaluateQuery;
- (void)deregisterWithContext;
- (void)registerWithContext;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;

@end


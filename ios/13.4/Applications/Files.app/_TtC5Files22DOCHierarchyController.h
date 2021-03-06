//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOCConcreteLocation, NSArray;
@protocol _TtP5Files30DOCHierarchyControllerDelegate_;

@interface _TtC5Files22DOCHierarchyController : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: locations
    // Error parsing type: , name: effectiveRootLocationCandidate
    // Error parsing type: , name: preventLoadingOperation
    // Error parsing type: , name: localOperation
    // Error parsing type: , name: locationChangePreparationQueue
    // Error parsing type: , name: configuration
    // Error parsing type: , name: minParentLocations
    // Error parsing type: , name: itemManager
    // Error parsing type: , name: sourceObserverContext
    // Error parsing type: , name: sourceObserver
    // Error parsing type: , name: userInterfaceStateStore
    // Error parsing type: , name: activeOrInflightAppend
    // Error parsing type: , name: isPreparingViewController
}

- (void).cxx_destruct;
- (id)init;
- (void)removeLastLocation;
- (void)reset;
- (void)resetFromRootWith:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetWith:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetWithDefaultLocationWithAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2 minParentLocations:(unsigned long long)arg3;
@property(nonatomic) _Bool preventLoading;
@property(nonatomic, readonly) _Bool isFetchingLocations;
- (void)loadAllParentsHiddenByEffectiveRootLocation:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) _Bool effectiveRootLocationIsHidingParentLocations;
@property(nonatomic, readonly) DOCConcreteLocation *lastLocation;
@property(nonatomic, readonly) DOCConcreteLocation *effectiveRootLocation;
@property(nonatomic, readonly) NSArray *effectiveLocations;
@property(nonatomic, copy) NSArray *locations;
@property(nonatomic) __weak id <_TtP5Files30DOCHierarchyControllerDelegate_> delegate; // @synthesize delegate;

@end


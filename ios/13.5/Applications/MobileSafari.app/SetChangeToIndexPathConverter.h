//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SetChangeToIndexPathConverter : NSObject
{
    NSMutableArray *_indexPathsToDelete;
    NSMutableArray *_indexPathsToInsert;
    NSMutableArray *_indexPathsToReload;
    NSMutableArray *_indexPathsToMove;
    NSMutableArray *_deleteInsertPairsToTreatAsMoves;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *deleteInsertPairsToTreatAsMoves; // @synthesize deleteInsertPairsToTreatAsMoves=_deleteInsertPairsToTreatAsMoves;
@property(readonly, nonatomic) NSArray *indexPathsToMove; // @synthesize indexPathsToMove=_indexPathsToMove;
@property(readonly, nonatomic) NSArray *indexPathsToReload; // @synthesize indexPathsToReload=_indexPathsToReload;
@property(readonly, nonatomic) NSArray *indexPathsToInsert; // @synthesize indexPathsToInsert=_indexPathsToInsert;
@property(readonly, nonatomic) NSArray *indexPathsToDelete; // @synthesize indexPathsToDelete=_indexPathsToDelete;
- (void)_addIndexPathsForItems:(id)arg1 inSection:(long long)arg2 toIndexPaths:(id)arg3;
- (void)addChange:(id)arg1 forSection:(long long)arg2;
- (id)init;

@end


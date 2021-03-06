/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PSKeyboardNavigationSearchResultsController.h>

@protocol PSSpotlightSearchResultsControllerDelegate;
@class NSMutableDictionary, NSMutableArray, NSArray;

@interface PSSpotlightSearchResultsController : UITableViewController <PSKeyboardNavigationSearchResultsController> {

	NSMutableDictionary* _iconViewMap;
	NSMutableArray* _reusableIconViews;
	long long _deviceOrientation;
	double originalInset;
	NSArray* _results;
	id<PSSpotlightSearchResultsControllerDelegate> _delegate;
	NSMutableArray* _tableData;

}

@property (nonatomic,retain) NSMutableArray * tableData;                                                  //@synthesize tableData=_tableData - In the implementation block
@property (nonatomic,retain) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id<PSSpotlightSearchResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(NSArray *)results;
-(NSMutableArray *)tableData;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(void)setTableData:(NSMutableArray *)arg1 ;
-(void)searchQueryStarted;
-(id)_itemForIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_selectIndexPath:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)iconWidth;
-(void)searchQueryCompleted;
-(void)viewDidLoad;
-(void)showSelectedSearchResult;
-(void)searchQueryFoundItems:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<PSSpotlightSearchResultsControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)selectNextSearchResult;
-(id<PSSpotlightSearchResultsControllerDelegate>)delegate;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)_removeIconViewForSection:(id)arg1 ;
-(void)_updateIconViews:(BOOL)arg1 ;
-(void)selectPreviousSearchResult;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end


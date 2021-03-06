/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UITable_RowDataSource <UITable>
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (getter=_headerFooterLeadingMarginWidth,nonatomic,readonly) double headerFooterLeadingMarginWidth; 
@property (getter=_headerFooterTrailingMarginWidth,nonatomic,readonly) double headerFooterTrailingMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_sectionHeaderPadding,nonatomic,readonly) double sectionHeaderPadding; 
@property (getter=_sectionFooterPadding,nonatomic,readonly) double sectionFooterPadding; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesHeights,nonatomic,readonly) BOOL estimatesHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@required
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3;
-(BOOL)_isTableHeaderAutohiding;
-(double)_headerFooterTrailingMarginWidth;
-(double)_defaultSectionHeaderHeight;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1;
-(BOOL)_estimatesSectionHeaderHeights;
-(BOOL)_providesRowHeights;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1;
-(double)_sectionFooterPadding;
-(double)_defaultSectionFooterHeight;
-(BOOL)_estimatesHeights;
-(id)_titleForFooterInSection:(long long)arg1;
-(id)_tableFooterView;
-(double)_heightForTableHeader;
-(double)_headerFooterLeadingMarginWidth;
-(double)_heightForRowAtIndexPath:(id)arg1;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(double)_sidePadding;
-(UIEdgeInsets)_contentInset;
-(BOOL)_shouldUseNewHeaderFooterBehavior;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1;
-(id)_constants;
-(void)_applyContentSizeDeltaImmediately:(double)arg1;
-(BOOL)_estimatesSectionFooterHeights;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
-(double)_rowSpacing;
-(double)_heightForFooterInSection:(long long)arg1;
-(void)_prepareForRowDataHeaderFooterSizing;
-(id)_titleForHeaderInSection:(long long)arg1;
-(double)_sectionHeaderPadding;
-(double)_heightForTableFooter;
-(id)_tableHeaderView;
-(UIEdgeInsets*)_tableContentInset;
-(id)_detailTextForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForFooterInSection:(long long)arg1;
-(double)_heightForHeaderInSection:(long long)arg1;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1;
-(BOOL)_estimatesRowHeights;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSUndoManager, UIBarButtonItem, UIScrollView, UITextField, UIView, _TtC9Reminders13TTRISeparator, _TtC9Reminders16TTRListBadgeView, _TtC9Reminders30TTRListAppearanceBadgeGridView;

@interface _TtC9Reminders41TTRIListDetailAndAppearanceViewController : UIViewController
{
    // Error parsing type: , name: listBadgeContainerView
    // Error parsing type: , name: listBadgeView
    // Error parsing type: , name: colorsGridView
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: colorsAndEmblemsScrollView
    // Error parsing type: , name: emblemsGridView
    // Error parsing type: , name: listTitleTextField
    // Error parsing type: , name: doneBarButtonItem
    // Error parsing type: , name: listBadgeViewHeightConstraint
    // Error parsing type: , name: listBadgeViewTopMargin
    // Error parsing type: , name: listTitleTextFieldBottomMarginConstraint
    // Error parsing type: , name: listTitleTextFieldTopToListBadgeBottomConstraint
    // Error parsing type: , name: presenter
    // Error parsing type: , name: style
    // Error parsing type: , name: localUndoManager
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didTapDone:(id)arg1;
- (void)didTapCancel:(id)arg1;
- (void)listTitleTextFieldEditingChanged:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *listTitleTextFieldTopToListBadgeBottomConstraint; // @synthesize listTitleTextFieldTopToListBadgeBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *listTitleTextFieldBottomMarginConstraint; // @synthesize listTitleTextFieldBottomMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *listBadgeViewTopMargin; // @synthesize listBadgeViewTopMargin;
@property(nonatomic) __weak NSLayoutConstraint *listBadgeViewHeightConstraint; // @synthesize listBadgeViewHeightConstraint;
@property(nonatomic) __weak UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem;
@property(nonatomic) __weak UITextField *listTitleTextField; // @synthesize listTitleTextField;
@property(nonatomic) __weak _TtC9Reminders30TTRListAppearanceBadgeGridView *emblemsGridView; // @synthesize emblemsGridView;
@property(nonatomic) __weak UIScrollView *colorsAndEmblemsScrollView; // @synthesize colorsAndEmblemsScrollView;
@property(nonatomic) __weak _TtC9Reminders13TTRISeparator *separatorView; // @synthesize separatorView;
@property(nonatomic) __weak _TtC9Reminders30TTRListAppearanceBadgeGridView *colorsGridView; // @synthesize colorsGridView;
@property(nonatomic) __weak _TtC9Reminders16TTRListBadgeView *listBadgeView; // @synthesize listBadgeView;
@property(nonatomic) __weak UIView *listBadgeContainerView; // @synthesize listBadgeContainerView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;

@end


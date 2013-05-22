//
//  PSPDFEmptyTableViewController.h
//  PSPDFKit
//
//  Copyright (c) 2013 Peter Steinberger. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PSPDFEmptyTableViewState) {
    PSPDFEmptyTableViewStateLoading,  // Controller is querying data
    PSPDFEmptyTableViewStateEmpty,    // Controller finished loading, has no data.
    PSPDFEmptyTableViewStateFinished  // Controller has data.
};

/// Shows a message when the controller is empty.
@interface PSPDFEmptyTableViewController : UITableViewController

/// Empty view.
@property (nonatomic, strong) UIView *emptyView;

/// Loading view.
@property (nonatomic, strong) UIView *loadingView;

/// Implement in subclass.
@property (nonatomic, assign) PSPDFEmptyTableViewState controllerState;

@end


// Preconfigured label subclass that optionally shows an activity indicator.
@interface PSPDFGrayBackgroundLabel : UILabel

// Convenience constructor.
+ (instancetype)labelWithText:(NSString *)text showActivity:(BOOL)showActivity;

// Enable spinning wheel next to text.
@property (nonatomic, assign) BOOL showActivity;

@end

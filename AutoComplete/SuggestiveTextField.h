//
//  SuggestiveTextField.h
//  SuggestiveTextField
//
//  Created by Wojciech Mandrysz on 19/09/2011.
//  Copyright 2011 http://tetek.wordpress.com . All rights reserved.
//
#import <UIKit/UIKit.h>

@interface SuggestiveTextField
    : UITextField <UITextFieldDelegate, UITableViewDataSource,
                   UITableViewDelegate>

// Set suggestions list of NSString's.
- (void)setSuggestions:(NSArray *)suggestionStrings;

// Set Custom popover size.
- (void)setPopoverSize:(CGSize)size;

// Filter array and reload TableView
- (void)matchStrings:(NSString *)letters;

// Present PopOver
- (void)showPopOverList;

-(void)suggestionSelectedAtIndexPath:(NSIndexPath*)indexPath;

// Define if popover should hide after user selects a suggestion.
@property BOOL shouldHideOnSelection;

@end

//
//  UITextView+BlocksKit.h
//  fentu
//
//  Created by 廖坚 on 16/10/27.
//  Copyright © 2016年 廖坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (BlocksKit)

/**
 *	The block that fires before the receiver begins editing
 *
 *  The return value indicates whether the receiver should begin editing
 */
@property (nonatomic, copy) BOOL(^bk_shouldBeginEditingBlock)(__kindof UITextView *textView);

/**
 *	The block that fires after the receiver begins editing
 */
@property (nonatomic, copy) void(^bk_didBeginEditingBlock)(__kindof UITextView *textView);

/**
 *	The block that fires before the receiver ends editing
 *
 *  The return value indicates whether the receiver should end editing
 */
@property (nonatomic, copy) BOOL(^bk_shouldEndEditingBlock)(__kindof UITextView *textView);

/**
 *	The block that fires after the receiver ends editing
 */
@property (nonatomic, copy) void(^bk_didEndEditingBlock)(__kindof UITextView *textView);

/**
 *	The block that fires when the receiver's text will change
 *
 *  The return value indicates whether the receiver should replace the characters in the given range with the replacement string
 */
@property (nonatomic, copy) BOOL(^bk_shouldChangeCharactersInRangeWithReplacementTextBlock)(__kindof UITextView *textView, NSRange range, NSString *text);

/**
 *	The block that fires after the receiver's text changed
 */
@property (nonatomic, copy) void(^bk_didChangeBlock)(__kindof UITextView *textView);

/**
 *	The block that fires after the receiver changes selection
 */
@property (nonatomic, copy) void(^bk_didChangeSelecionBlock)(__kindof UITextView *textView);

/**
 *  The block that fires when the user tring to interact with the receiver's text attachment
 *
 *  The return value indicates whether the user should interact with the text attachment
 */
@property (nonatomic, copy) BOOL(^bk_shouldInteractWithTextAttachmentInRangeBlock)(__kindof UITextView *textView, NSTextAttachment *attachment, NSRange range);

/**
 *  The block that fires when the user tring to interact with an URL in the given range
 *
 *  The return value indicates whether the receiver should response to the interaction or not
 */
@property (nonatomic, copy) BOOL(^bk_shouldInteractWithURLInRangeBlock)(__kindof UITextView *textView, NSURL *url, NSRange range);

@end

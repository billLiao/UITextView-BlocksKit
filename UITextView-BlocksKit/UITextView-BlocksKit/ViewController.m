//
//  ViewController.m
//  UITextView-BlocksKit
//
//  Created by 廖坚 on 17/2/13.
//  Copyright © 2017年 liaojian. All rights reserved.
//

#import "ViewController.h"
#import "UITextView+BlocksKit.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UITextView *textView = [UITextView new];
    textView.frame = CGRectMake(100, 100, 200, 200);
    [self.view addSubview:textView];
    
    textView.bk_shouldBeginEditingBlock = ^(UITextView *textView){
        NSLog(@"shouldBeginEditing");
        return YES;
    };
    textView.bk_shouldEndEditingBlock = ^(UITextView *textView){
        NSLog(@"shouldEndEditing");
        return YES;
    };
    
    textView.bk_didBeginEditingBlock = ^(UITextView *textView){
        NSLog(@"didBeginEditing");
    };
    textView.bk_didEndEditingBlock = ^(UITextView *textView){
        NSLog(@"didEndEditing");
    };
    
    textView.bk_didChangeBlock = ^(UITextView *textView){
        NSLog(@"didChange");
    };
    textView.bk_didChangeSelecionBlock = ^(UITextView *textView){
        NSLog(@"didChangeSelection");
    };
    textView.bk_shouldChangeCharactersInRangeWithReplacementTextBlock = ^(UITextView *textView, NSRange range, NSString *text){
        NSLog(@"shouldChangeCharactersInRangeWithReplacementText");
        return YES;
    };
    textView.bk_shouldInteractWithTextAttachmentInRangeBlock = ^(UITextView *textView, NSTextAttachment *attachment, NSRange range){
        NSLog(@"shouldInteractWithTextAttachmentInRange");
        return YES;
    };
    textView.bk_shouldInteractWithURLInRangeBlock = ^(UITextView *textView, NSURL *url, NSRange range){
        return YES;
    };
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

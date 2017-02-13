# UITextView-BlocksKit
一直都喜欢使用 BlocksKit，但是没有 UITextView 的拓展，为了自己的使用方便就写了一个 UITextView 的拓展。

# 使用方法
需要导入 [BlocksKit](https://github.com/zwaldowski/BlocksKit) ,使用 ‘A2DynamicDelegate.h’ 和 ‘NSObject+A2BlockDelegate.h’ 实现的拓展。

代码实现：

```

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
```

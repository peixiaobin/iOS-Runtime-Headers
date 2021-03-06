/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKActionSheetManager : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    BOOL _dismissingActionSheetForRotation;
    id /* block */ _handler;
    BOOL _performBeforeAnimation;
    id /* block */ _presenter;
}

@property (nonatomic, retain) UIActionSheet *actionSheet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL performBeforeAnimation;
@property (nonatomic, copy) id /* block */ presenter;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)actionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)didFinishRotating;
- (void)dismissActionSheet:(id)arg1 withButtonIndex:(int)arg2;
- (void)dismissCurrentActionSheet;
- (id /* block */)handler;
- (id)init;
- (BOOL)performBeforeAnimation;
- (id /* block */)presenter;
- (void)setActionSheet:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setPerformBeforeAnimation:(BOOL)arg1;
- (void)setPresenter:(id /* block */)arg1;
- (void)showActionSheet:(id)arg1 withPresenter:(id /* block */)arg2 performBeforeAnimation:(BOOL)arg3 withHandler:(id /* block */)arg4;
- (void)showActionSheet:(id)arg1 withPresenter:(id /* block */)arg2 withHandler:(id /* block */)arg3;
- (void)willStartRotating;

@end

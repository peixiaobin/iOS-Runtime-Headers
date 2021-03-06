/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {
    float _cornerRadius;
    BOOL _disabled;
    UIColor *_fillColor;
    float _lineWidth;
    UIColor *_strokeColor;
}

@property (nonatomic) float cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) float lineWidth;
@property (nonatomic, retain) UIColor *strokeColor;

- (id)_fillColor:(BOOL)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2 lineWidth:(float)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2 lineWidth:(float)arg3 updateView:(BOOL)arg4;
- (id)_strokeColor:(BOOL)arg1;
- (float)cornerRadius;
- (void)dealloc;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (float)lineWidth;
- (void)setActive:(BOOL)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)updateView;

@end

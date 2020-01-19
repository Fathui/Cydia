/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>


@class UIPDFPageView, CALayer;

@interface UIPDFPageContentDelegate : NSObject {
	UIPDFPageView *_view;	// 4 = 0x4
	CGRect _bounds;	// 8 = 0x8
	CGAffineTransform _transform;	// 24 = 0x18
	CGColorRef _white;	// 48 = 0x30
	CGColorRef _highlightColor;	// 52 = 0x34
	CALayer *_owner;	// 56 = 0x38
	CGRect _box;	// 60 = 0x3c
	unsigned _pageRotation;	// 76 = 0x4c
}
@property(assign) CALayer *owner;	// G=0x5e001; S=0x5e011; @synthesize=_owner
@property(assign) CGRect box;	// G=0x5e0a1; S=0x5e061; @synthesize=_box
@property(assign) unsigned pageRotation;	// G=0x5dfe1; S=0x5dff1; @synthesize=_pageRotation
@property(assign) CGColorRef highlightColor;	// G=0x5dfc1; S=0x5dfd1; @synthesize=_highlightColor
@property(assign) UIPDFPageView *view;	// G=0x5dfa1; S=0x5dfb1; @synthesize=_view
@property(readonly, assign) CGAffineTransform transform;	// G=0x5e0c5; @synthesize=_transform
- (void)dealloc;	// 0x5e021
- (void)computeTransform;	// 0x5e851
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x5e721
- (void)drawSelectionLayerBlockMode:(id)mode inContext:(CGContextRef)context;	// 0x5e5f1
- (void)addRect:(CGRect)rect toPath:(CGPathRef)path transform:(CGAffineTransform *)transform view:(id)view owner:(id)owner;	// 0x5e299
- (void)drawSelectionLayer:(id)layer inContext:(CGContextRef)context;	// 0x5e0e9
// declared property getter: - (CGAffineTransform)transform;	// 0x5e0c5
// declared property getter: - (id)view;	// 0x5dfa1
// declared property setter: - (void)setView:(id)view;	// 0x5dfb1
// declared property getter: - (CGColorRef)highlightColor;	// 0x5dfc1
// declared property setter: - (void)setHighlightColor:(CGColorRef)color;	// 0x5dfd1
// declared property getter: - (unsigned)pageRotation;	// 0x5dfe1
// declared property setter: - (void)setPageRotation:(unsigned)rotation;	// 0x5dff1
// declared property getter: - (CGRect)box;	// 0x5e0a1
// declared property setter: - (void)setBox:(CGRect)box;	// 0x5e061
// declared property getter: - (id)owner;	// 0x5e001
// declared property setter: - (void)setOwner:(id)owner;	// 0x5e011
@end
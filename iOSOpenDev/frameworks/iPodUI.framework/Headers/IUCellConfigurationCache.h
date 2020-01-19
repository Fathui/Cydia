/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface IUCellConfigurationCache : XXUnknownSuperclass {
	NSMutableArray *_configurations;	// 4 = 0x4
	id _globalContext;	// 8 = 0x8
}
@property(retain, nonatomic) id globalContext;	// G=0x1efa9; S=0x1efb9; @synthesize=_globalContext
// declared property setter: - (void)setGlobalContext:(id)context;	// 0x1efb9
// declared property getter: - (id)globalContext;	// 0x1efa9
- (void)invalidateDynamicTrackCaches;	// 0x1eea5
- (void)reset;	// 0x1edd5
- (id)configurationForRow:(unsigned)row;	// 0x1ed8d
- (void)dealloc;	// 0x1ed15
- (id)initWithClass:(Class)aClass tableHeight:(float)height;	// 0x1ec25
@end
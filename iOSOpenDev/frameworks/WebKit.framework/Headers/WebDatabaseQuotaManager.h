/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebQuotaManager.h>
#import <WebKit/XXUnknownSuperclass.h>

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebDatabaseQuotaManager : XXUnknownSuperclass <WebQuotaManager> {
@private
	WebSecurityOrigin *_origin;	// 4 = 0x4
}
@property(assign) unsigned long long quota;	// G=0x8646d; S=0x86425; converted property
@property(readonly, retain) WebSecurityOrigin *origin;	// G=0x863d1; converted property
- (id)initWithOrigin:(id)origin;	// 0x863e1
// converted property getter: - (id)origin;	// 0x863d1
- (unsigned long long)usage;	// 0x864a5
// converted property getter: - (unsigned long long)quota;	// 0x8646d
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x86425
@end
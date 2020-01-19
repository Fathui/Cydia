/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/XXUnknownSuperclass.h>
#import <iTunesStore/iTunesStore-Structs.h>


@interface ISCertificate : XXUnknownSuperclass {
	SecTrust *_trust;	// 4 = 0x4
}
- (void)_invalidate;	// 0x21e1
- (void)setCertificateData:(id)data;	// 0x1f95
- (BOOL)isValid;	// 0x1f05
- (BOOL)checkData:(id)data againstAppleSignature:(id)signature;	// 0x1e91
- (BOOL)checkData:(id)data againstSignature:(id)signature;	// 0x1d81
- (void)dealloc;	// 0x1d41
@end
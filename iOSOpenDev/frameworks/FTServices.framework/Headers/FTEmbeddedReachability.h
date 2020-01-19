/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTServices-Structs.h>
#import <FTServices/XXUnknownSuperclass.h>


@interface FTEmbeddedReachability : XXUnknownSuperclass {
	BOOL localWiFiRef;	// 4 = 0x4
	SCNetworkReachabilityRef reachabilityRef;	// 8 = 0x8
}
+ (id)reachabilityForLocalWiFi;	// 0x1e8fd
+ (id)reachabilityForInternetConnection;	// 0x1e8c9
+ (id)reachabilityWithAddress:(const sockaddr_in *)address;	// 0x1e7fd
+ (id)reachabilityWithHostName:(id)hostName;	// 0x1e725
- (int)currentReachabilityStatus;	// 0x1eb91
- (BOOL)connectionRequired;	// 0x1ea91
- (int)networkStatusForFlags:(unsigned)flags;	// 0x1ea45
- (int)localWiFiStatusForFlags:(unsigned)flags;	// 0x1e949
- (void)dealloc;	// 0x1e6c9
- (void)stopNotifer;	// 0x1e641
- (BOOL)startNotifer;	// 0x1e381
@end
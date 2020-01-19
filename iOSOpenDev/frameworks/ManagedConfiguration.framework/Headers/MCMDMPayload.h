/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSString, NSData;

@interface MCMDMPayload : MCPayload {
@private
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
	BOOL _checkOutWhenRemoved;	// 69 = 0x45
}
@property(readonly, assign) NSString *identityUUID;	// G=0x1e6ad; @synthesize=_identityUUID
@property(retain) NSData *identityPersistentID;	// G=0x1e9e9; S=0x1e9c5; @synthesize=_identityPersistentID
@property(readonly, assign) NSString *topic;	// G=0x1e69d; @synthesize=_topic
@property(readonly, assign) NSString *serverURLString;	// G=0x1e68d; @synthesize=_serverURLString
@property(readonly, assign) BOOL useDevelopmentAPNS;	// G=0x1e67d; @synthesize=_useDevelopmentAPNS
@property(readonly, assign) NSString *checkInURLString;	// G=0x1e66d; @synthesize=_checkInURLString
@property(readonly, assign) int accessRights;	// G=0x1e65d; @synthesize=_accessRights
@property(readonly, assign) BOOL signMessage;	// G=0x1e64d; @synthesize=_signMessage
@property(readonly, assign) BOOL checkOutWhenRemoved;	// G=0x1e63d; @synthesize=_checkOutWhenRemoved
@property(readonly, assign) NSArray *localizedAccessRightDescriptions;	// G=0x1ec69; 
+ (id)typeStrings;	// 0x1e6cd
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x1e9b5
- (id)_invalidRightsError;	// 0x1e6f5
- (id)_invalidTopicError;	// 0x1e765
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x1e7d5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x1f295
- (id)stubDictionary;	// 0x1e835
- (id)description;	// 0x1ef1d
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x1ec69
- (id)installationWarnings;	// 0x1eabd
- (void)dealloc;	// 0x1ea21
- (id)title;	// 0x1e6bd
- (id)subtitle1Label;	// 0x1ea11
- (id)subtitle1Description;	// 0x1e61d
- (id)subtitle2Label;	// 0x1ea01
- (id)subtitle2Description;	// 0x1e62d
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x1e63d
// declared property getter: - (BOOL)signMessage;	// 0x1e64d
// declared property getter: - (int)accessRights;	// 0x1e65d
// declared property getter: - (id)checkInURLString;	// 0x1e66d
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x1e67d
// declared property getter: - (id)serverURLString;	// 0x1e68d
// declared property getter: - (id)topic;	// 0x1e69d
// declared property getter: - (id)identityPersistentID;	// 0x1e9e9
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x1e9c5
// declared property getter: - (id)identityUUID;	// 0x1e6ad
@end
///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeDeviceSessionError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeDeviceSessionError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeDeviceSessionError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMRevokeDeviceSessionErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMRevokeDeviceSessionError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMRevokeDeviceSessionErrorTag) {
  /// Device session not found.
  DBTEAMRevokeDeviceSessionErrorDeviceSessionNotFound,

  /// Member not found.
  DBTEAMRevokeDeviceSessionErrorMemberNotFound,

  /// (no description).
  DBTEAMRevokeDeviceSessionErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMRevokeDeviceSessionErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "device_session_not_found".
///
/// Description of the "device_session_not_found" tag state: Device session not
/// found.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeviceSessionNotFound;

///
/// Initializes union class with tag state of "member_not_found".
///
/// Description of the "member_not_found" tag state: Member not found.
///
/// @return An initialized instance.
///
- (instancetype)initWithMemberNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "device_session_not_found".
///
/// @return Whether the union's current tag state has value
/// "device_session_not_found".
///
- (BOOL)isDeviceSessionNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "member_not_found".
///
/// @return Whether the union's current tag state has value "member_not_found".
///
- (BOOL)isMemberNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMRevokeDeviceSessionError` union.
///
@interface DBTEAMRevokeDeviceSessionErrorSerializer : NSObject

///
/// Serializes `DBTEAMRevokeDeviceSessionError` instances.
///
/// @param instance An instance of the `DBTEAMRevokeDeviceSessionError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeDeviceSessionError` API object.
///
+ (NSDictionary *)serialize:(DBTEAMRevokeDeviceSessionError *)instance;

///
/// Deserializes `DBTEAMRevokeDeviceSessionError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeDeviceSessionError` API object.
///
/// @return An instantiation of the `DBTEAMRevokeDeviceSessionError` object.
///
+ (DBTEAMRevokeDeviceSessionError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

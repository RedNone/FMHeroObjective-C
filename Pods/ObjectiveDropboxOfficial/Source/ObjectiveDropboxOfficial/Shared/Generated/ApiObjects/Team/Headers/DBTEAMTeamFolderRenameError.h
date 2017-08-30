///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderAccessError;
@class DBTEAMTeamFolderInvalidStatusError;
@class DBTEAMTeamFolderRenameError;
@class DBTEAMTeamFolderTeamSharedDropboxError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderRenameError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderRenameError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMTeamFolderRenameErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMTeamFolderRenameError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamFolderRenameErrorTag) {
  /// (no description).
  DBTEAMTeamFolderRenameErrorAccessError,

  /// (no description).
  DBTEAMTeamFolderRenameErrorStatusError,

  /// (no description).
  DBTEAMTeamFolderRenameErrorTeamSharedDropboxError,

  /// (no description).
  DBTEAMTeamFolderRenameErrorOther,

  /// The provided folder name cannot be used.
  DBTEAMTeamFolderRenameErrorInvalidFolderName,

  /// There is already a team folder with the same name.
  DBTEAMTeamFolderRenameErrorFolderNameAlreadyUsed,

  /// The provided name cannot be used because it is reserved.
  DBTEAMTeamFolderRenameErrorFolderNameReserved,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMTeamFolderRenameErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderAccessError *accessError;

/// (no description). @note Ensure the `isStatusError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderInvalidStatusError *statusError;

/// (no description). @note Ensure the `isTeamSharedDropboxError` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderTeamSharedDropboxError *teamSharedDropboxError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBTEAMTeamFolderAccessError *)accessError;

///
/// Initializes union class with tag state of "status_error".
///
/// @param statusError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithStatusError:(DBTEAMTeamFolderInvalidStatusError *)statusError;

///
/// Initializes union class with tag state of "team_shared_dropbox_error".
///
/// @param teamSharedDropboxError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamSharedDropboxError:(DBTEAMTeamFolderTeamSharedDropboxError *)teamSharedDropboxError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "invalid_folder_name".
///
/// Description of the "invalid_folder_name" tag state: The provided folder name
/// cannot be used.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidFolderName;

///
/// Initializes union class with tag state of "folder_name_already_used".
///
/// Description of the "folder_name_already_used" tag state: There is already a
/// team folder with the same name.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderNameAlreadyUsed;

///
/// Initializes union class with tag state of "folder_name_reserved".
///
/// Description of the "folder_name_reserved" tag state: The provided name
/// cannot be used because it is reserved.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderNameReserved;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "status_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `statusError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "status_error".
///
- (BOOL)isStatusError;

///
/// Retrieves whether the union's current tag state has value
/// "team_shared_dropbox_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `teamSharedDropboxError` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "team_shared_dropbox_error".
///
- (BOOL)isTeamSharedDropboxError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_folder_name".
///
/// @return Whether the union's current tag state has value
/// "invalid_folder_name".
///
- (BOOL)isInvalidFolderName;

///
/// Retrieves whether the union's current tag state has value
/// "folder_name_already_used".
///
/// @return Whether the union's current tag state has value
/// "folder_name_already_used".
///
- (BOOL)isFolderNameAlreadyUsed;

///
/// Retrieves whether the union's current tag state has value
/// "folder_name_reserved".
///
/// @return Whether the union's current tag state has value
/// "folder_name_reserved".
///
- (BOOL)isFolderNameReserved;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamFolderRenameError` union.
///
@interface DBTEAMTeamFolderRenameErrorSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderRenameError` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderRenameError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderRenameError` API object.
///
+ (NSDictionary *)serialize:(DBTEAMTeamFolderRenameError *)instance;

///
/// Deserializes `DBTEAMTeamFolderRenameError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderRenameError` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderRenameError` object.
///
+ (DBTEAMTeamFolderRenameError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

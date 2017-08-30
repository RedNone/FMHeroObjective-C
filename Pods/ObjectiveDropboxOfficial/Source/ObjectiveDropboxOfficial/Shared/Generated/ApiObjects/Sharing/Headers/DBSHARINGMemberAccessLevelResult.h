///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGMemberAccessLevelResult;
@class DBSHARINGParentFolderAccessInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberAccessLevelResult` struct.
///
/// Contains information about a member's access level to content after an
/// operation.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGMemberAccessLevelResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The member still has this level of access to the content through a parent
/// folder.
@property (nonatomic, readonly, nullable) DBSHARINGAccessLevel *accessLevel;

/// A localized string with additional information about why the user has this
/// access level to the content.
@property (nonatomic, readonly, copy, nullable) NSString *warning;

/// The parent folders that a member has access to. The field is present if the
/// user has access to the first parent folder where the member gains access.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGParentFolderAccessInfo *> *accessDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessLevel The member still has this level of access to the content
/// through a parent folder.
/// @param warning A localized string with additional information about why the
/// user has this access level to the content.
/// @param accessDetails The parent folders that a member has access to. The
/// field is present if the user has access to the first parent folder where the
/// member gains access.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessLevel:(nullable DBSHARINGAccessLevel *)accessLevel
                            warning:(nullable NSString *)warning
                      accessDetails:(nullable NSArray<DBSHARINGParentFolderAccessInfo *> *)accessDetails;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberAccessLevelResult` struct.
///
@interface DBSHARINGMemberAccessLevelResultSerializer : NSObject

///
/// Serializes `DBSHARINGMemberAccessLevelResult` instances.
///
/// @param instance An instance of the `DBSHARINGMemberAccessLevelResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGMemberAccessLevelResult` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGMemberAccessLevelResult *)instance;

///
/// Deserializes `DBSHARINGMemberAccessLevelResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGMemberAccessLevelResult` API object.
///
/// @return An instantiation of the `DBSHARINGMemberAccessLevelResult` object.
///
+ (DBSHARINGMemberAccessLevelResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

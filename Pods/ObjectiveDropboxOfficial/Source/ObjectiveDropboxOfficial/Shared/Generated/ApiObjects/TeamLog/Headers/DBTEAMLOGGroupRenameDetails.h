///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupRenameDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupRenameDetails` struct.
///
/// Renamed a group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupRenameDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous display name.
@property (nonatomic, readonly, copy) NSString *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous display name.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(NSString *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupRenameDetails` struct.
///
@interface DBTEAMLOGGroupRenameDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupRenameDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupRenameDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupRenameDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGGroupRenameDetails *)instance;

///
/// Deserializes `DBTEAMLOGGroupRenameDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupRenameDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupRenameDetails` object.
///
+ (DBTEAMLOGGroupRenameDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

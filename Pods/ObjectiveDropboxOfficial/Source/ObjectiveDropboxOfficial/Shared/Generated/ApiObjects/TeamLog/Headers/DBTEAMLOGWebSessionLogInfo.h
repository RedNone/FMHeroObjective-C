///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMLOGSessionLogInfo.h"

@class DBTEAMLOGWebSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebSessionLogInfo` struct.
///
/// Web session.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebSessionLogInfo : DBTEAMLOGSessionLogInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sessionId Session ID. Might be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(nullable NSString *)sessionId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebSessionLogInfo` struct.
///
@interface DBTEAMLOGWebSessionLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebSessionLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGWebSessionLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionLogInfo` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGWebSessionLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGWebSessionLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGWebSessionLogInfo` object.
///
+ (DBTEAMLOGWebSessionLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

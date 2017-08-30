///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESMediaMetadata.h"
#import "DBSerializableProtocol.h"

@class DBFILESDimensions;
@class DBFILESGpsCoordinates;
@class DBFILESVideoMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `VideoMetadata` struct.
///
/// Metadata for a video.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESVideoMetadata : DBFILESMediaMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The duration of the video in milliseconds.
@property (nonatomic, readonly, nullable) NSNumber *duration;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dimensions Dimension of the photo/video.
/// @param location The GPS coordinate of the photo/video.
/// @param timeTaken The timestamp when the photo/video is taken.
/// @param duration The duration of the video in milliseconds.
///
/// @return An initialized instance.
///
- (instancetype)initWithDimensions:(nullable DBFILESDimensions *)dimensions
                          location:(nullable DBFILESGpsCoordinates *)location
                         timeTaken:(nullable NSDate *)timeTaken
                          duration:(nullable NSNumber *)duration;

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
/// The serialization class for the `VideoMetadata` struct.
///
@interface DBFILESVideoMetadataSerializer : NSObject

///
/// Serializes `DBFILESVideoMetadata` instances.
///
/// @param instance An instance of the `DBFILESVideoMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESVideoMetadata` API object.
///
+ (NSDictionary *)serialize:(DBFILESVideoMetadata *)instance;

///
/// Deserializes `DBFILESVideoMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESVideoMetadata` API object.
///
/// @return An instantiation of the `DBFILESVideoMetadata` object.
///
+ (DBFILESVideoMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

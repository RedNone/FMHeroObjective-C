///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceLogInfo` struct.
///
/// Device's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Device unique id. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *deviceId;

/// Device display name. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *displayName;

/// True if this device is emm managed, false otherwise. Might be missing due to
/// historical data gap.
@property (nonatomic, readonly, nullable) NSNumber *isEmmManaged;

/// Device platform name. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *platform;

/// Device mac address. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *macAddress;

/// Device OS version. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *osVersion;

/// Device type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *deviceType;

/// IP address. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *ipAddress;

/// Last activity. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *lastActivity;

/// Linking app version. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *appVersion;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param deviceId Device unique id. Might be missing due to historical data
/// gap.
/// @param displayName Device display name. Might be missing due to historical
/// data gap.
/// @param isEmmManaged True if this device is emm managed, false otherwise.
/// Might be missing due to historical data gap.
/// @param platform Device platform name. Might be missing due to historical
/// data gap.
/// @param macAddress Device mac address. Might be missing due to historical
/// data gap.
/// @param osVersion Device OS version. Might be missing due to historical data
/// gap.
/// @param deviceType Device type. Might be missing due to historical data gap.
/// @param ipAddress IP address. Might be missing due to historical data gap.
/// @param lastActivity Last activity. Might be missing due to historical data
/// gap.
/// @param appVersion Linking app version. Might be missing due to historical
/// data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeviceId:(nullable NSString *)deviceId
                     displayName:(nullable NSString *)displayName
                    isEmmManaged:(nullable NSNumber *)isEmmManaged
                        platform:(nullable NSString *)platform
                      macAddress:(nullable NSString *)macAddress
                       osVersion:(nullable NSString *)osVersion
                      deviceType:(nullable NSString *)deviceType
                       ipAddress:(nullable NSString *)ipAddress
                    lastActivity:(nullable NSString *)lastActivity
                      appVersion:(nullable NSString *)appVersion;

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
/// The serialization class for the `DeviceLogInfo` struct.
///
@interface DBTEAMLOGDeviceLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceLogInfo` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDeviceLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGDeviceLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceLogInfo` object.
///
+ (DBTEAMLOGDeviceLogInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
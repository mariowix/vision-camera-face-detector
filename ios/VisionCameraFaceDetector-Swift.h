// Generated by Xcode automatically
// VisionCameraFaceDetector-Swift.h

#pragma once

#import <Foundation/Foundation.h>

@class VisionCameraFaceDetector;
@class Frame;
@class VisionCameraProxyHolder;

NS_ASSUME_NONNULL_BEGIN

@interface VisionCameraFaceDetector : NSObject

- (instancetype)initWithProxy:(VisionCameraProxyHolder *)proxy options:(NSDictionary * _Nullable)options;
- (NSArray * _Nullable)callback:(Frame *)frame withArguments:(NSDictionary * _Nullable)arguments;

@end

NS_ASSUME_NONNULL_END

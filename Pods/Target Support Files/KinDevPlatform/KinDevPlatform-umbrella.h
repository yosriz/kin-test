#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "KinEcosystem.h"

FOUNDATION_EXPORT double KinDevPlatformVersionNumber;
FOUNDATION_EXPORT const unsigned char KinDevPlatformVersionString[];


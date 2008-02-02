// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

#import <Cocoa/Cocoa.h>

@interface AdminAction : NSObject
{
  AuthorizationRef _authorizationRef;
}

- (BOOL) setSysctlInt:(NSString *)name value:(NSNumber *)value;
- (BOOL) saveSetting;

@end

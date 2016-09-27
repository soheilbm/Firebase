//
//  FIRInvitesError.h
//  Firebase Invites SDK
//
//  Copyright 2016 Google Inc.
//
//  Use of this SDK is subject to the Google APIs Terms of Service:
//  https://developers.google.com/terms
//
//  Detailed instructions to use this SDK can be found at:
//  https://developers.google.com/app-invites
//

#import <Foundation/Foundation.h>

// Error domain for errors returned by the invite dialog.
extern NSString *const kFIRInvitesErrorDomain;

// Possible error codes returned by the invite dialog.
typedef NS_ENUM(NSInteger, FIRInvitesErrorCode) {
  FIRInvitesErrorCodeUnknown = -400,
  FIRInvitesErrorCodeCanceled = -401,
  FIRInvitesErrorCodeCanceledByUser = -402,
  FIRInvitesErrorCodeLaunchError = -403,
  FIRInvitesErrorCodeSignInError = -404,
  FIRInvitesErrorCodeServerError = -490,
  FIRInvitesErrorCodeNetworkError = -491,
  FIRInvitesErrorCodeSMSError = -492,
  FIRInvitesErrorCodeInvalidParameters = -497,
};

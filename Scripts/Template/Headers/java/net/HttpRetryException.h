//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/HttpRetryException.java
//

#ifndef _JavaNetHttpRetryException_H_
#define _JavaNetHttpRetryException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/io/IOException.h>

/*!
 @brief If a HTTP request has to be retried, this exception will be thrown if the
 request cannot be retried automatically.
 */
@interface JavaNetHttpRetryException : JavaIoIOException

#pragma mark Public

/*!
 @brief Creates a new <code>HttpRetryException</code> instance with the specified
 response code and the given detail message.
 @param detail
 the detail message for this exception.
 @param code
 the HTTP response code from target host.
 */
- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code;

/*!
 @brief Creates a new <code>HttpRetryException</code> instance with the specified
 response code, the given detail message and the value of the location
 field from the response header.
 @param detail
 the detail message for this exception.
 @param code
 the HTTP response code from target host.
 @param location
 the destination URL of the redirection.
 */
- (instancetype)initWithNSString:(NSString *)detail
                         withInt:(jint)code
                    withNSString:(NSString *)location;

/*!
 @brief Gets the location value.
 @return the stored location from the HTTP header.
 */
- (NSString *)getLocation;

/*!
 @brief Gets the detail message.
 @return the detail message.
 */
- (NSString *)getReason;

/*!
 @brief Gets the response code.
 @return the HTTP response code.
 */
- (jint)responseCode;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetHttpRetryException)

FOUNDATION_EXPORT void JavaNetHttpRetryException_initWithNSString_withInt_(JavaNetHttpRetryException *self, NSString *detail, jint code);

FOUNDATION_EXPORT JavaNetHttpRetryException *new_JavaNetHttpRetryException_initWithNSString_withInt_(NSString *detail, jint code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetHttpRetryException_initWithNSString_withInt_withNSString_(JavaNetHttpRetryException *self, NSString *detail, jint code, NSString *location);

FOUNDATION_EXPORT JavaNetHttpRetryException *new_JavaNetHttpRetryException_initWithNSString_withInt_withNSString_(NSString *detail, jint code, NSString *location) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpRetryException)

#endif // _JavaNetHttpRetryException_H_
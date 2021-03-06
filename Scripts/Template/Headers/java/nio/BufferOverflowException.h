//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/BufferOverflowException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioBufferOverflowException")
#ifdef RESTRICT_JavaNioBufferOverflowException
#define INCLUDE_ALL_JavaNioBufferOverflowException 0
#else
#define INCLUDE_ALL_JavaNioBufferOverflowException 1
#endif
#undef RESTRICT_JavaNioBufferOverflowException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioBufferOverflowException_) && (INCLUDE_ALL_JavaNioBufferOverflowException || defined(INCLUDE_JavaNioBufferOverflowException))
#define JavaNioBufferOverflowException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief A <code>BufferOverflowException</code> is thrown when elements are written
 to a buffer but there is not enough remaining space in the buffer.
 */
@interface JavaNioBufferOverflowException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>BufferOverflowException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBufferOverflowException)

FOUNDATION_EXPORT void JavaNioBufferOverflowException_init(JavaNioBufferOverflowException *self);

FOUNDATION_EXPORT JavaNioBufferOverflowException *new_JavaNioBufferOverflowException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioBufferOverflowException *create_JavaNioBufferOverflowException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBufferOverflowException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioBufferOverflowException")

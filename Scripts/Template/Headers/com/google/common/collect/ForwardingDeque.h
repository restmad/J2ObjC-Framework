//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ForwardingDeque.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectForwardingDeque_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingDeque_RESTRICT
#define ComGoogleCommonCollectForwardingDeque_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingDeque_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingDeque_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingDeque_) && (ComGoogleCommonCollectForwardingDeque_INCLUDE_ALL || ComGoogleCommonCollectForwardingDeque_INCLUDE)
#define _ComGoogleCommonCollectForwardingDeque_

#define ComGoogleCommonCollectForwardingQueue_RESTRICT 1
#define ComGoogleCommonCollectForwardingQueue_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingQueue.h>

#define JavaUtilDeque_RESTRICT 1
#define JavaUtilDeque_INCLUDE 1
#include <j2objc/java/util/Deque.h>

@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectForwardingDeque : ComGoogleCommonCollectForwardingQueue < JavaUtilDeque >

#pragma mark Public

- (void)addFirstWithId:(id)e;

- (void)addLastWithId:(id)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id)getFirst;

- (id)getLast;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (id)peekFirst;

- (id)peekLast;

- (id)pollFirst;

- (id)pollLast;

- (id)pop;

- (void)pushWithId:(id)e;

- (id)removeFirst;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (id)removeLast;

- (jboolean)removeLastOccurrenceWithId:(id)o;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilDeque>)delegate;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingDeque)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingDeque_init(ComGoogleCommonCollectForwardingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingDeque)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingDeque_INCLUDE_ALL")
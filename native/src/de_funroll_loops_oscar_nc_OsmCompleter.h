/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_funroll_loops_oscar_nc_OsmCompleter */

#ifndef _Included_de_funroll_loops_oscar_nc_OsmCompleter
#define _Included_de_funroll_loops_oscar_nc_OsmCompleter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_create
  (JNIEnv *, jobject);

/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    setFilePrefix
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_setFilePrefix
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    energize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_energize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    store
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_store
  (JNIEnv *, jobject, jlong);

/*
 * Class:     de_funroll_loops_oscar_nc_OsmCompleter
 * Method:    clusteredComplete
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_de_funroll_1loops_oscar_nc_OsmCompleter_clusteredComplete
  (JNIEnv *, jobject, jlong, jstring, jboolean);

#ifdef __cplusplus
}
#endif
#endif

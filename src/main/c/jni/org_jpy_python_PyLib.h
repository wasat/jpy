/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jpy_python_PyLib */

#ifndef _Included_org_jpy_python_PyLib
#define _Included_org_jpy_python_PyLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jpy_python_PyLib
 * Method:    isInitialized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jpy_python_PyLib_isInitialized
  (JNIEnv *, jclass);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    initialize
 * Signature: ([Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jpy_python_PyLib_initialize
  (JNIEnv *, jclass, jobjectArray, jboolean);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jpy_python_PyLib_destroy
  (JNIEnv *, jclass);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    decref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jpy_python_PyLib_decref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    importModule
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_python_PyLib_importModule
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    getAttributeValue
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jpy_python_PyLib_getAttributeValue
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    setAttributeValue
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_jpy_python_PyLib_setAttributeValue
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    execScript
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jpy_python_PyLib_execScript
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    call
 * Signature: (JZLjava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_jpy_python_PyLib_call
  (JNIEnv *, jclass, jlong, jboolean, jstring, jobjectArray);

/*
 * Class:     org_jpy_python_PyLib
 * Method:    callWithTypeInfo
 * Signature: (JZLjava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_jpy_python_PyLib_callWithTypeInfo
  (JNIEnv *, jclass, jlong, jboolean, jstring, jobjectArray, jclass, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif

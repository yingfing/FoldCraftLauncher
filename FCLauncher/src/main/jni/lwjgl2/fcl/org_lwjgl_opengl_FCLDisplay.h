/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_FCLDisplay */

#ifndef _Included_org_lwjgl_opengl_FCLDisplay
#define _Included_org_lwjgl_opengl_FCLDisplay
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_FCLDisplay_GrabSuccess
#define org_lwjgl_opengl_FCLDisplay_GrabSuccess 0L
#undef org_lwjgl_opengl_FCLDisplay_FULLSCREEN_LEGACY
#define org_lwjgl_opengl_FCLDisplay_FULLSCREEN_LEGACY 1L
#undef org_lwjgl_opengl_FCLDisplay_WINDOWED
#define org_lwjgl_opengl_FCLDisplay_WINDOWED 3L
/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    openDisplay
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_FCLDisplay_openDisplay
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    closeDisplay
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLDisplay_closeDisplay
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGrabPointer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGrabPointer
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nUngrabPointer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nUngrabPointer
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nCreateWindow
 * Signature: (JLjava/nio/ByteBuffer;Lorg/lwjgl/opengl/DisplayMode;IIIZ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_FCLDisplay_nCreateWindow
  (JNIEnv *, jclass, jlong, jobject, jobject, jint, jint, jint, jboolean);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetY
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nDestroyWindow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLDisplay_nDestroyWindow
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetAvailableDisplayModes
 * Signature: ()[Lorg/lwjgl/opengl/DisplayMode;
 */
JNIEXPORT jobjectArray JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetAvailableDisplayModes
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetNativeCursorCapabilities
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetNativeCursorCapabilities
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_FCLDisplay
 * Method:    nGetPbufferCapabilities
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_FCLDisplay_nGetPbufferCapabilities
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
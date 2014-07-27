#include "com_example_hellojnimy_JniClient.h"

#include <stdlib.h>
#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_example_hellojnimy_JniClient_HelloWorld(
		JNIEnv *env, jclass arg) {
	jstring str = env->NewStringUTF("HelloWorld from JNI !");
	return str;
}

#ifdef __cplusplus
}
#endif

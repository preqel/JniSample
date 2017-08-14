#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_service_example_com_testcmake_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    int a = 1;
    return env->NewStringUTF(hello.c_str());
}

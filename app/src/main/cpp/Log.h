

#ifndef LOG_H_
#define LOG_H_

#include <android/log.h>

#define LOG_TAG "LeakTracer"
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__ ))
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

#endif
/* LOG_H_ */

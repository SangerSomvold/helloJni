LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := HelloJniMy
LOCAL_SRC_FILES := com_example_hellojnimy_JniClient.cpp

include $(BUILD_SHARED_LIBRARY)

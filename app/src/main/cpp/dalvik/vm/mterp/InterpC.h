#pragma once

#include <jni.h>
#include "YcFile.h"

/**
 * �ֽ����������
 * @param[in] Separator ���ݡ�
 * @param[in] env JNI������
 * @param[in] thiz ��ǰ����
 * @param[in] ... �ɱ�������������Java�����Ĳ�����
 * @return 
 */
jvalue BWdvmInterpretPortable(const SeparatorData* separatorData, JNIEnv* env, jobject thiz, ...);

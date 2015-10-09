/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jovision_Jni */

#ifndef _Included_com_jovision_Jni
#define _Included_com_jovision_Jni
#ifdef __cplusplus
extern "C" {
#endif


#include "revision.h"

/*
 * Class:     com_jovision_Jni
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jovision_Jni_getVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    foo
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_jovision_Jni_foo
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_jovision_Jni
 * Method:    setStat
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_setStat
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    startAudioRecord
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_startAudioRecord
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    stopAudioRecord
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_stopAudioRecord
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    setRecordVolume
 * Signature: (F)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setRecordVolume
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_jovision_Jni
 * Method:    init
 * Signature: (Ljava/lang/Object;ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_init
  (JNIEnv *, jclass, jobject, jint, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    deinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_deinit
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    connect
 * Signature: (IILjava/lang/String;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;ZIZILjava/lang/Object;ZZZZLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_connect
  (JNIEnv *, jclass, jint, jint, jstring, jint, jstring, jstring, jint, jstring, jboolean, jint, jboolean, jint, jobject, jboolean, jboolean, jboolean, jboolean, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    connectRTMP
 * Signature: (ILjava/lang/String;Ljava/lang/Object;ZLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_connectRTMP
  (JNIEnv *, jclass, jint, jstring, jobject, jboolean, jstring,jint nTimeout);

/*
 * Class:     com_jovision_Jni
 * Method:    clearCache
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_clearCache
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    resumeAudio
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_resumeAudio
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    pauseAudio
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_pauseAudio
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    pause
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_pause
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    resume
 * Signature: (ILjava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_resume
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jovision_Jni
 * Method:    disconnect
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_disconnect
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    shutdownRTMP
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_shutdownRTMP
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendBytes
 * Signature: (IB[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendBytes
  (JNIEnv *, jclass, jint, jbyte, jbyteArray, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendSuperBytes
 * Signature: (IBZIIIII[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendSuperBytes
  (JNIEnv *, jclass, jint, jbyte, jboolean, jint, jint, jint, jint, jint, jbyteArray, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendPrimaryBytes
 * Signature: (IBIIIIII[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendPrimaryBytes
  (JNIEnv *, jclass, jint, jbyte, jint, jint, jint, jint, jint, jint, jbyteArray, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendInteger
 * Signature: (IBI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendInteger
  (JNIEnv *, jclass, jint, jbyte, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    enableLog
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_enableLog
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    deleteLog
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_deleteLog
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    enablePlayback
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_enablePlayback
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    isPlayback
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_isPlayback
  (JNIEnv *, jclass, jint);

#ifndef CASTRATE

/*
 * Class:     com_jovision_Jni
 * Method:    searchLanServer
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_searchLanServer
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    stopSearchLanServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_stopSearchLanServer
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    getChannelCount
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_getChannelCount
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    searchLanDevice
 * Signature: (Ljava/lang/String;IIILjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_searchLanDevice
  (JNIEnv *, jclass, jstring, jint, jint, jint, jstring, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    enableLinkHelper
 * Signature: (ZII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_enableLinkHelper
  (JNIEnv *, jclass, jboolean, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    setLinkHelper
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setLinkHelper
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    getAllDeviceStatus
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jovision_Jni_getAllDeviceStatus
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    isDeviceOnline
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_isDeviceOnline
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    setAudioVolume
 * Signature: (IF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setAudioVolume
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_jovision_Jni
 * Method:    setOmx
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setOmx
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    setColor
 * Signature: (IFFFF)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setColor
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_jovision_Jni
 * Method:    fastForward
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_fastForward
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    startRecord
 * Signature: (ILjava/lang/String;ZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_startRecord
  (JNIEnv *, jclass, jint, jstring, jboolean, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    checkRecord
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_checkRecord
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    stopRecord
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_stopRecord
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    screenshot
 * Signature: (ILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_screenshot
  (JNIEnv *, jclass, jint, jstring, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    clearBuffer
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_clearBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    clearBuffer
 * Signature: (Ljava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_queryDevice
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendAudioData
 * Signature: (IB[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendAudioData
  (JNIEnv *, jclass, jint, jbyte, jbyteArray, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendString
 * Signature: (IBZILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendString
  (JNIEnv *, jclass, jint, jbyte, jboolean, jint, jint, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    sendTextData
 * Signature: (IBII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_sendTextData
  (JNIEnv *, jclass, jint, jbyte, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    sendCmd
 * Signature: (IB[BI)I
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_sendCmd
  (JNIEnv *, jclass, jint, jbyte, jbyteArray, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    setWifi
 * Signature: (IBLjava/lang/String;Ljava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setWifi
  (JNIEnv *, jclass, jint, jbyte, jstring, jstring, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    saveWifi
 * Signature: (IBLjava/lang/String;Ljava/lang/String;IILjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_saveWifi
  (JNIEnv *, jclass, jint, jbyte, jstring, jstring, jint, jint, jstring, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    setAccessPoint
 * Signature: (IBLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setAccessPoint
  (JNIEnv *, jclass, jint, jbyte, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    setDhcp
 * Signature: (IBILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setDhcp
  (JNIEnv *, jclass, jint, jbyte, jint, jstring, jstring, jstring, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    changeStream
 * Signature: (IBLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_changeStream
  (JNIEnv *, jclass, jint, jbyte, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    setDeviceName
 * Signature: (IBLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setDeviceName
  (JNIEnv *, jclass, jint, jbyte, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    cancelDownload
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_cancelDownload
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    setDownloadFileName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_setDownloadFileName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    getDownloadFileName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jovision_Jni_getDownloadFileName
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    setStorage
 * Signature: (IBLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setStorage
  (JNIEnv *, jclass, jint, jbyte, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    rotateVideo
 * Signature: (IBLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_rotateVideo
  (JNIEnv *, jclass, jint, jbyte, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    updateDevice
 * Signature: (IB)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_updateDevice
  (JNIEnv *, jclass, jint, jbyte);

/*
 * Class:     com_jovision_Jni
 * Method:    setLanguage
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_setLanguage
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    changeDomain
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_changeDomain
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_jovision_Jni
 * Method:    enablePlayAudio
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_enablePlayAudio
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_jovision_Jni
 * Method:    isPlayAudio
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_isPlayAudio
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    setFrameCounts
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setFrameCounts
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    setViewPort
 * Signature: (IIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_setViewPort
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    initAudioEncoder
 * Signature: (IIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_initAudioEncoder
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    encodeAudio
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_jovision_Jni_encodeAudio
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_jovision_Jni
 * Method:    deinitAudioEncoder
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_deinitAudioEncoder
  (JNIEnv *, jclass);

/*
 * Class:     com_jovision_Jni
 * Method:    setThumb
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_setThumb
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_jovision_Jni
 * Method:    genVoice
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_genVoice
  (JNIEnv *, jclass, jstring, jint);


/*
 * gen_sound_config 声波配置新的接口
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_genSoundConfig(JNIEnv* env, jclass clazz,
		jstring data, jint times);

/*
 *
 * Class:     com_jovision_Jni
 * Method:    tcpConnect
 * Signature: (IILjava/lang/String;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;ZII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_tcpConnect
  (JNIEnv *, jclass, jint, jint, jstring, jint, jstring, jstring, jint, jstring, jboolean, jint, jint);


JNIEXPORT jstring JNICALL Java_com_jovision_Jni_getBatchChannelCount(JNIEnv *env,
		jclass clazz, jint jtimeouts, jstring jreqjson);

/**
 * success:1
 * failed:0
 */

JNIEXPORT jint JNICALL Java_com_jovision_Jni_SetMTU(JNIEnv *env,
		jclass clazz,jint nMtu);//JVC_SetMTU(int nMtu);



/**
 * [METHOD] HelperRemove
 * [IN] pGroup 编组号，编组号+nYSTNO可确定唯一设备
 * [IN] NYST 搜索具有某云视通号码的设备，>0有效
 * [RETURN] no
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_HelperRemove(JNIEnv *env,
		jclass clazz,jstring pGroup,jint nYST);

/**
 * [METHOD] HelpQuery
 * [IN] pGroup 编组号，编组号+nYSTNO可确定唯一设备
 * [IN] NYST 搜索具有某云视通号码的设备，>0有效
 * [RETURN] 助手的数量
 */

JNIEXPORT jint  JNICALL Java_com_jovision_Jni_HelpQuery(JNIEnv *env,
		jclass clazz,jstring pGroup,jint nYST,jint nCount);



/**
 * STOP lansearch
 */
JNIEXPORT jint  JNICALL Java_com_jovision_Jni_StopMobLansearch(JNIEnv *env,
		jclass clazz);
/**
 * stop littlehelp
 */

JNIEXPORT jint  JNICALL Java_com_jovision_Jni_StopHelp(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Init(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_SetMP4Uri(JNIEnv *env,
		jclass clazz,jstring juri);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Prepare(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Start(JNIEnv *env,
		jclass clazz, jobject jsurface);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Stop(JNIEnv *env,
		jclass clazz, int stop_seconds);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Release(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Pause(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4Resume(JNIEnv *env,
		jclass clazz);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_Mp4State(JNIEnv *env,
		jclass clazz);


JNIEXPORT void JNICALL Java_com_jovision_Jni_setAdjustVolume(JNIEnv* env,
		jclass clz,jfloat f);

// denoise function
/*
 * 初始化播放器
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_initDenoisePlayer(JNIEnv* env,
		jclass clz);

/*
 *
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_recordAndsendAudioData(JNIEnv* env,
		jclass clz,jint index);

/*
 *
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_resumeRecordAudio(JNIEnv* env,
		jclass clz);

/*
 *
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_pauseRecordAudio(JNIEnv* env,
		jclass clz);

/*
 *
 */
JNIEXPORT void JNICALL Java_com_jovision_Jni_stopDenoisePlayer(JNIEnv* env,
		jclass clz);

/*
 *
 */
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_playOn(JNIEnv* env,
		jclass clz);

//cloudstore
JNIEXPORT jboolean JNICALL Java_com_jovision_Jni_CloudStorePlay(JNIEnv *env,
		jclass clazz, jint window, jstring filepath, jstring url, jstring filename, jobject surface,
		jboolean isTryOmx, jstring thumbName, jstring authJson);

JNIEXPORT jint JNICALL Java_com_jovision_Jni_CloudStoreClose(JNIEnv *env,
		jclass clazz);

JNIEXPORT void JNICALL Java_com_jovision_Jni_NotifytoJni(JNIEnv *env,
		jclass clazz,jstring filename);


 /*
 设置本地的服务器
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_SetSelfServer(JNIEnv *env,
		jclass clazz,jstring pGroup,jstring pServer);


 /*
 向主控发送设置服务器命令
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_SendSetServer(JNIEnv *env,
		jclass clazz,jstring pGroup,jint nYst,jstring pServer,jint nLen,jint nTimeOut);

 /*
 向主控发送删除服务器命令
 */
JNIEXPORT jint JNICALL Java_com_jovision_Jni_SendRemoveServer(JNIEnv *env,
		jclass clazz,jstring pGroup,jint nYst,jstring pServer,jint nLen,jint nTimeOut);

/****************************************************************************
*名称  : JVC_StartBroadcastSelfServer
*功能  : 开启自定义广播服务
*参数  : [IN] nLPort      本地服务端口，<0时为默认9700
			[IN] nServerPort 设备端服务端口，<=0时为默认9108,建议统一用默认值与服务端匹配
			[IN] BCSelfData  自定义广播结果回调函数
*返回值: TRUE/FALSE
*其他  :
*****************************************************************************/
JNIEXPORT jint JNICALL Java_com_jovision_Jni_startBCSelfServer(JNIEnv *env,
		jclass clazz, jint localPort, jint serverPort);

/****************************************************************************
*名称  : JVC_StopBroadcastSelfServer
*功能  : 停止自定义广播服务
*参数  : 无
*返回值: 无
*其他  : 无
*****************************************************************************/
JNIEXPORT void JNICALL Java_com_jovision_Jni_stopBCSelfServer(JNIEnv *env,
		jclass clazz);

/****************************************************************************
*名称  : JVC_SendSelfDataOnceFromBC
*功能  : 从自定义广播套接字发送一次UDP消息
*参数  :
		 [IN] pBuffer     净载数据
		 [IN] nSize       净载数据长度
		 [IN] pchDeviceIP 目的IP地址
		 [IN] nLocalPort	  目的端口
*返回值: 无
*其他  :
*****************************************************************************/
JNIEXPORT void JNICALL Java_com_jovision_Jni_sendSelfDataOnceFromBC(JNIEnv *env,
		jclass clazz,jstring buffer,jint size,jstring ip,jint port);

#endif // CASTRATE

#ifdef __cplusplus
}
#endif
#endif

//
//  StarMain.h
//  StarEngine
//
//  Created by sungwoo choi on 8/25/12.
//  Copyright (c) 2012 SungLab. All rights reserved.
//

#ifndef StarEngine_Main_Header
#define StarEngine_Main_Header

#include "StarDefine.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Case IOS //////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef IOS
#include <iostream>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#import "GLView.h"
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Case ANDROID //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef ANDROID
#include <jni.h>
#include <android/log.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <stdlib.h>
#define  LOG_TAG    "StarEngine"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)


#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Can use both  //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "StarShader.h"
#include "StarFBO.h"
#include "StarTexture.h"
#include "./StarMath/StarMath.h"
#include "StarTimer.h"
//#include "StarSound.h"

#endif
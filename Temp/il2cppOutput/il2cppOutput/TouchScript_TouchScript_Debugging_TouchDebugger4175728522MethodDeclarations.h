#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TouchScript.Debugging.TouchDebugger
struct TouchDebugger_t4175728522;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// TouchScript.ITouch
struct ITouch_t3979129576;
// System.Object
struct Il2CppObject;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_Object4170816371.h"
#include "TouchScript_TouchScript_TouchEventArgs1706014890.h"

// System.Void TouchScript.Debugging.TouchDebugger::.ctor()
extern "C"  void TouchDebugger__ctor_m1591317139 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTouchId()
extern "C"  bool TouchDebugger_get_ShowTouchId_m1512501745 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTouchId(System.Boolean)
extern "C"  void TouchDebugger_set_ShowTouchId_m1111128584 (TouchDebugger_t4175728522 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_ShowTags()
extern "C"  bool TouchDebugger_get_ShowTags_m3707888612 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_ShowTags(System.Boolean)
extern "C"  void TouchDebugger_set_ShowTags_m3235170811 (TouchDebugger_t4175728522 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D TouchScript.Debugging.TouchDebugger::get_TouchTexture()
extern "C"  Texture2D_t3884108195 * TouchDebugger_get_TouchTexture_m3074303833 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchTexture(UnityEngine.Texture2D)
extern "C"  void TouchDebugger_set_TouchTexture_m1134299314 (TouchDebugger_t4175728522 * __this, Texture2D_t3884108195 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Debugging.TouchDebugger::get_UseDPI()
extern "C"  bool TouchDebugger_get_UseDPI_m2120730820 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_UseDPI(System.Boolean)
extern "C"  void TouchDebugger_set_UseDPI_m1036521179 (TouchDebugger_t4175728522 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Debugging.TouchDebugger::get_TouchSize()
extern "C"  float TouchDebugger_get_TouchSize_m2952627700 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_TouchSize(System.Single)
extern "C"  void TouchDebugger_set_TouchSize_m3655664375 (TouchDebugger_t4175728522 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TouchScript.Debugging.TouchDebugger::get_FontColor()
extern "C"  Color_t4194546905  TouchDebugger_get_FontColor_m2605334371 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::set_FontColor(UnityEngine.Color)
extern "C"  void TouchDebugger_set_FontColor_m4046854270 (TouchDebugger_t4175728522 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnEnable()
extern "C"  void TouchDebugger_OnEnable_m1151453203 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnDisable()
extern "C"  void TouchDebugger_OnDisable_m1776248186 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::OnGUI()
extern "C"  void TouchDebugger_OnGUI_m1086715789 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::checkDPI()
extern "C"  void TouchDebugger_checkDPI_m2791417382 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::update()
extern "C"  void TouchDebugger_update_m3748409018 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::computeConsts()
extern "C"  void TouchDebugger_computeConsts_m971665048 (TouchDebugger_t4175728522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::updateDummy(TouchScript.ITouch)
extern "C"  void TouchDebugger_updateDummy_m3724807894 (TouchDebugger_t4175728522 * __this, Il2CppObject * ___dummy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchDebugger_touchesBeganHandler_m303362637 (TouchDebugger_t4175728522 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchDebugger_touchesMovedHandler_m46880651 (TouchDebugger_t4175728522 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchDebugger_touchesEndedHandler_m1803146852 (TouchDebugger_t4175728522 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Debugging.TouchDebugger::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchDebugger_touchesCancelledHandler_m232537645 (TouchDebugger_t4175728522 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

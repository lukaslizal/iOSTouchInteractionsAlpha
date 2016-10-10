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

// TouchScript.Gestures.FlickGesture
struct FlickGesture_t153974456;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_FlickGesture_Gest1279899271.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.FlickGesture::.ctor()
extern "C"  void FlickGesture__ctor_m692833329 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::add_Flicked(System.EventHandler`1<System.EventArgs>)
extern "C"  void FlickGesture_add_Flicked_m2601447309 (FlickGesture_t153974456 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::remove_Flicked(System.EventHandler`1<System.EventArgs>)
extern "C"  void FlickGesture_remove_Flicked_m246650918 (FlickGesture_t153974456 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_FlickTime()
extern "C"  float FlickGesture_get_FlickTime_m567973930 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_FlickTime(System.Single)
extern "C"  void FlickGesture_set_FlickTime_m2932464513 (FlickGesture_t153974456 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_MinDistance()
extern "C"  float FlickGesture_get_MinDistance_m1969798937 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_MinDistance(System.Single)
extern "C"  void FlickGesture_set_MinDistance_m1066942706 (FlickGesture_t153974456 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_MovementThreshold()
extern "C"  float FlickGesture_get_MovementThreshold_m3853855022 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_MovementThreshold(System.Single)
extern "C"  void FlickGesture_set_MovementThreshold_m3699396861 (FlickGesture_t153974456 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::get_Direction()
extern "C"  int32_t FlickGesture_get_Direction_m3296036083 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_Direction(TouchScript.Gestures.FlickGesture/GestureDirection)
extern "C"  void FlickGesture_set_Direction_m2022315786 (FlickGesture_t153974456 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::get_ScreenFlickVector()
extern "C"  Vector2_t4282066565  FlickGesture_get_ScreenFlickVector_m2132518179 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickVector(UnityEngine.Vector2)
extern "C"  void FlickGesture_set_ScreenFlickVector_m3285484710 (FlickGesture_t153974456 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.FlickGesture::get_ScreenFlickTime()
extern "C"  float FlickGesture_get_ScreenFlickTime_m2857302878 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::set_ScreenFlickTime(System.Single)
extern "C"  void FlickGesture_set_ScreenFlickTime_m4023254221 (FlickGesture_t153974456 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::LateUpdate()
extern "C"  void FlickGesture_LateUpdate_m3601233090 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void FlickGesture_touchesBegan_m121455110 (FlickGesture_t153974456 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void FlickGesture_touchesMoved_m4244904712 (FlickGesture_t153974456 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void FlickGesture_touchesEnded_m4136297999 (FlickGesture_t153974456 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::onRecognized()
extern "C"  void FlickGesture_onRecognized_m1557250152 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.FlickGesture::reset()
extern "C"  void FlickGesture_reset_m969580286 (FlickGesture_t153974456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

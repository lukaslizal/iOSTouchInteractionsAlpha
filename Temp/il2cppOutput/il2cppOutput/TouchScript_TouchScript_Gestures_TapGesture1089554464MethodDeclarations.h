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

// TouchScript.Gestures.TapGesture
struct TapGesture_t1089554464;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// TouchScript.ITouch
struct ITouch_t3979129576;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"

// System.Void TouchScript.Gestures.TapGesture::.ctor()
extern "C"  void TapGesture__ctor_m2879163081 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::add_Tapped(System.EventHandler`1<System.EventArgs>)
extern "C"  void TapGesture_add_Tapped_m3957289251 (TapGesture_t1089554464 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::remove_Tapped(System.EventHandler`1<System.EventArgs>)
extern "C"  void TapGesture_remove_Tapped_m1059796282 (TapGesture_t1089554464 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.TapGesture::get_NumberOfTapsRequired()
extern "C"  int32_t TapGesture_get_NumberOfTapsRequired_m2347880685 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_NumberOfTapsRequired(System.Int32)
extern "C"  void TapGesture_set_NumberOfTapsRequired_m3507807224 (TapGesture_t1089554464 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TapGesture::get_TimeLimit()
extern "C"  float TapGesture_get_TimeLimit_m2799822776 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_TimeLimit(System.Single)
extern "C"  void TapGesture_set_TimeLimit_m3568936371 (TapGesture_t1089554464 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TapGesture::get_DistanceLimit()
extern "C"  float TapGesture_get_DistanceLimit_m1029555472 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::set_DistanceLimit(System.Single)
extern "C"  void TapGesture_set_DistanceLimit_m1776015195 (TapGesture_t1089554464 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::OnEnable()
extern "C"  void TapGesture_OnEnable_m427056157 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TapGesture_touchesBegan_m47680110 (TapGesture_t1089554464 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TapGesture_touchesMoved_m4171129712 (TapGesture_t1089554464 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TapGesture_touchesEnded_m4062522999 (TapGesture_t1089554464 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::onRecognized()
extern "C"  void TapGesture_onRecognized_m1837229776 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TapGesture::reset()
extern "C"  void TapGesture_reset_m3155910038 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.TapGesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern "C"  bool TapGesture_shouldCacheTouchPosition_m1195229550 (TapGesture_t1089554464 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.Gestures.TapGesture::wait()
extern "C"  Il2CppObject * TapGesture_wait_m912848176 (TapGesture_t1089554464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

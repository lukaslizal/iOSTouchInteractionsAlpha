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

// TouchScript.Gestures.ScaleGesture
struct ScaleGesture_t1442702489;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.ScaleGesture::.ctor()
extern "C"  void ScaleGesture__ctor_m1077046128 (ScaleGesture_t1442702489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.ScaleGesture::get_MinPointsDistance()
extern "C"  float ScaleGesture_get_MinPointsDistance_m3002098523 (ScaleGesture_t1442702489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::set_MinPointsDistance(System.Single)
extern "C"  void ScaleGesture_set_MinPointsDistance_m2597308400 (ScaleGesture_t1442702489 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::OnEnable()
extern "C"  void ScaleGesture_OnEnable_m652109334 (ScaleGesture_t1442702489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void ScaleGesture_touchesBegan_m1019771687 (ScaleGesture_t1442702489 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void ScaleGesture_touchesMoved_m848253993 (ScaleGesture_t1442702489 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void ScaleGesture_touchesEnded_m739647280 (ScaleGesture_t1442702489 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void ScaleGesture_touchesCancelled_m2853976519 (ScaleGesture_t1442702489 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScaleGesture::reset()
extern "C"  void ScaleGesture_reset_m1353793085 (ScaleGesture_t1442702489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ScaleGesture::gotEnoughTouches()
extern "C"  bool ScaleGesture_gotEnoughTouches_m1790971193 (ScaleGesture_t1442702489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ScaleGesture::relevantTouches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  bool ScaleGesture_relevantTouches_m1032395865 (ScaleGesture_t1442702489 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointScreenPosition(System.Int32)
extern "C"  Vector2_t4282066565  ScaleGesture_getPointScreenPosition_m816527481 (ScaleGesture_t1442702489 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.ScaleGesture::getPointPreviousScreenPosition(System.Int32)
extern "C"  Vector2_t4282066565  ScaleGesture_getPointPreviousScreenPosition_m1650961680 (ScaleGesture_t1442702489 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

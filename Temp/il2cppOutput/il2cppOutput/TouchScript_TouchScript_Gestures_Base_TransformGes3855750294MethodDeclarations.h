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

// TouchScript.Gestures.Base.TransformGestureBase
struct TransformGestureBase_t3855750294;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_Base_TransformGest989833314.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.Base.TransformGestureBase::.ctor()
extern "C"  void TransformGestureBase__ctor_m1221401580 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::add_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_add_TransformStarted_m2409412925 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::remove_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_remove_TransformStarted_m2648755182 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::add_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_add_Transformed_m3743178545 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::remove_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_remove_Transformed_m678535648 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::add_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_add_TransformCompleted_m4260117747 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::remove_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGestureBase_remove_TransformCompleted_m2339792740 (TransformGestureBase_t3855750294 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Base.TransformGestureBase/TransformType TouchScript.Gestures.Base.TransformGestureBase::get_Type()
extern "C"  int32_t TransformGestureBase_get_Type_m3006302574 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::set_Type(TouchScript.Gestures.Base.TransformGestureBase/TransformType)
extern "C"  void TransformGestureBase_set_Type_m2763103853 (TransformGestureBase_t3855750294 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::get_MinScreenPointsDistance()
extern "C"  float TransformGestureBase_get_MinScreenPointsDistance_m3453877707 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::set_MinScreenPointsDistance(System.Single)
extern "C"  void TransformGestureBase_set_MinScreenPointsDistance_m2411564648 (TransformGestureBase_t3855750294 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::get_ScreenTransformThreshold()
extern "C"  float TransformGestureBase_get_ScreenTransformThreshold_m402179416 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::set_ScreenTransformThreshold(System.Single)
extern "C"  void TransformGestureBase_set_ScreenTransformThreshold_m2376742827 (TransformGestureBase_t3855750294 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Base.TransformGestureBase::get_DeltaPosition()
extern "C"  Vector3_t4282066566  TransformGestureBase_get_DeltaPosition_m784276904 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::get_DeltaRotation()
extern "C"  float TransformGestureBase_get_DeltaRotation_m3837730603 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::get_DeltaScale()
extern "C"  float TransformGestureBase_get_DeltaScale_m4251910431 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::get_ScreenPosition()
extern "C"  Vector2_t4282066565  TransformGestureBase_get_ScreenPosition_m3432334769 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::get_PreviousScreenPosition()
extern "C"  Vector2_t4282066565  TransformGestureBase_get_PreviousScreenPosition_m2711358408 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::OnEnable()
extern "C"  void TransformGestureBase_OnEnable_m1883116570 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TransformGestureBase_touchesBegan_m359259179 (TransformGestureBase_t3855750294 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TransformGestureBase_touchesMoved_m187741485 (TransformGestureBase_t3855750294 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TransformGestureBase_touchesEnded_m79134772 (TransformGestureBase_t3855750294 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::onBegan()
extern "C"  void TransformGestureBase_onBegan_m4286239612 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::onChanged()
extern "C"  void TransformGestureBase_onChanged_m2961141567 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::onRecognized()
extern "C"  void TransformGestureBase_onRecognized_m1485133901 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::reset()
extern "C"  void TransformGestureBase_reset_m1498148537 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float TransformGestureBase_doRotation_m4053969993 (TransformGestureBase_t3855750294 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Base.TransformGestureBase::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float TransformGestureBase_doScaling_m2220712188 (TransformGestureBase_t3855750294 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Base.TransformGestureBase::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TransformGestureBase_doOnePointTranslation_m2417858114 (TransformGestureBase_t3855750294 * __this, Vector2_t4282066565  ___oldScreenPos0, Vector2_t4282066565  ___newScreenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Base.TransformGestureBase::doTwoPointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector3_t4282066566  TransformGestureBase_doTwoPointTranslation_m1796282638 (TransformGestureBase_t3855750294 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, float ___dR4, float ___dS5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.Base.TransformGestureBase::getNumPoints()
extern "C"  int32_t TransformGestureBase_getNumPoints_m3114478033 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Base.TransformGestureBase::relevantTouches1(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  bool TransformGestureBase_relevantTouches1_m3619138100 (TransformGestureBase_t3855750294 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Base.TransformGestureBase::relevantTouches2(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  bool TransformGestureBase_relevantTouches2_m4249596725 (TransformGestureBase_t3855750294 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::getPointScreenPosition(System.Int32)
extern "C"  Vector2_t4282066565  TransformGestureBase_getPointScreenPosition_m3608726803 (TransformGestureBase_t3855750294 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::getPointPreviousScreenPosition(System.Int32)
extern "C"  Vector2_t4282066565  TransformGestureBase_getPointPreviousScreenPosition_m220989354 (TransformGestureBase_t3855750294 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::updateMinScreenPointsDistance()
extern "C"  void TransformGestureBase_updateMinScreenPointsDistance_m2783206103 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Base.TransformGestureBase::updateScreenTransformThreshold()
extern "C"  void TransformGestureBase_updateScreenTransformThreshold_m1086196172 (TransformGestureBase_t3855750294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

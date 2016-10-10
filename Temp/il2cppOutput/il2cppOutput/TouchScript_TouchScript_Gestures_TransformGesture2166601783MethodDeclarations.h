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

// TouchScript.Gestures.TransformGesture
struct TransformGesture_t2166601783;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_TransformGesture_1963075931.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.TransformGesture::.ctor()
extern "C"  void TransformGesture__ctor_m2891912082 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.TransformGesture/ProjectionType TouchScript.Gestures.TransformGesture::get_Projection()
extern "C"  int32_t TransformGesture_get_Projection_m1919678864 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::set_Projection(TouchScript.Gestures.TransformGesture/ProjectionType)
extern "C"  void TransformGesture_set_Projection_m1925420803 (TransformGesture_t2166601783 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::get_ProjectionPlaneNormal()
extern "C"  Vector3_t4282066566  TransformGesture_get_ProjectionPlaneNormal_m4015192021 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::set_ProjectionPlaneNormal(UnityEngine.Vector3)
extern "C"  void TransformGesture_set_ProjectionPlaneNormal_m3054004882 (TransformGesture_t2166601783 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane TouchScript.Gestures.TransformGesture::get_TransformPlane()
extern "C"  Plane_t4206452690  TransformGesture_get_TransformPlane_m1580274589 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::get_LocalDeltaPosition()
extern "C"  Vector3_t4282066566  TransformGesture_get_LocalDeltaPosition_m3046437783 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::get_RotationAxis()
extern "C"  Vector3_t4282066566  TransformGesture_get_RotationAxis_m3076846144 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::ApplyTransform(UnityEngine.Transform)
extern "C"  void TransformGesture_ApplyTransform_m2584676077 (TransformGesture_t2166601783 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::Awake()
extern "C"  void TransformGesture_Awake_m3129517301 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::OnEnable()
extern "C"  void TransformGesture_OnEnable_m2275422900 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TransformGesture_touchesBegan_m698852933 (TransformGesture_t2166601783 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TransformGesture::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float TransformGesture_doRotation_m1785819399 (TransformGesture_t2166601783 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.TransformGesture::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float TransformGesture_doScaling_m207883390 (TransformGesture_t2166601783 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TransformGesture_doOnePointTranslation_m2998665896 (TransformGesture_t2166601783 * __this, Vector2_t4282066565  ___oldScreenPos0, Vector2_t4282066565  ___newScreenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::doTwoPointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector3_t4282066566  TransformGesture_doTwoPointTranslation_m2914562676 (TransformGesture_t2166601783 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, float ___dR4, float ___dS5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::projectScaledRotated(UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector3_t4282066566  TransformGesture_projectScaledRotated_m1988048214 (TransformGesture_t2166601783 * __this, Vector2_t4282066565  ___point0, float ___dR1, float ___dS2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::updateProjectionPlane()
extern "C"  void TransformGesture_updateProjectionPlane_m958205716 (TransformGesture_t2166601783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformStarted_m629553725 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformStarted_m234597102 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.add_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_add_Transformed_m730218033 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.remove_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_remove_Transformed_m2093441760 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformCompleted_m3212410355 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.TransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void TransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformCompleted_m1616217700 (TransformGesture_t2166601783 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

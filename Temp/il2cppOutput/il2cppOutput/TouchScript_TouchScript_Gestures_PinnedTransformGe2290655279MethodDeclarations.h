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

// TouchScript.Gestures.PinnedTransformGesture
struct PinnedTransformGesture_t2290655279;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_PinnedTransformGe1570853475.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.PinnedTransformGesture::.ctor()
extern "C"  void PinnedTransformGesture__ctor_m913977754 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.PinnedTransformGesture/ProjectionType TouchScript.Gestures.PinnedTransformGesture::get_Projection()
extern "C"  int32_t PinnedTransformGesture_get_Projection_m898027472 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::set_Projection(TouchScript.Gestures.PinnedTransformGesture/ProjectionType)
extern "C"  void PinnedTransformGesture_set_Projection_m3068256307 (PinnedTransformGesture_t2290655279 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.PinnedTransformGesture::get_ProjectionPlaneNormal()
extern "C"  Vector3_t4282066566  PinnedTransformGesture_get_ProjectionPlaneNormal_m4129889885 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::set_ProjectionPlaneNormal(UnityEngine.Vector3)
extern "C"  void PinnedTransformGesture_set_ProjectionPlaneNormal_m2394362762 (PinnedTransformGesture_t2290655279 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane TouchScript.Gestures.PinnedTransformGesture::get_TransformPlane()
extern "C"  Plane_t4206452690  PinnedTransformGesture_get_TransformPlane_m2039602453 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.PinnedTransformGesture::get_RotationAxis()
extern "C"  Vector3_t4282066566  PinnedTransformGesture_get_RotationAxis_m2184696504 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::ApplyTransform(UnityEngine.Transform)
extern "C"  void PinnedTransformGesture_ApplyTransform_m2980570869 (PinnedTransformGesture_t2290655279 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::Awake()
extern "C"  void PinnedTransformGesture_Awake_m1151582973 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::OnEnable()
extern "C"  void PinnedTransformGesture_OnEnable_m290191276 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void PinnedTransformGesture_touchesBegan_m2557789501 (PinnedTransformGesture_t2290655279 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void PinnedTransformGesture_touchesMoved_m2386271807 (PinnedTransformGesture_t2290655279 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.PinnedTransformGesture::doRotation(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float PinnedTransformGesture_doRotation_m2565610810 (PinnedTransformGesture_t2290655279 * __this, Vector3_t4282066566  ___center0, Vector2_t4282066565  ___oldScreenPos1, Vector2_t4282066565  ___newScreenPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.PinnedTransformGesture::doScaling(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float PinnedTransformGesture_doScaling_m2605313825 (PinnedTransformGesture_t2290655279 * __this, Vector3_t4282066566  ___center0, Vector2_t4282066565  ___oldScreenPos1, Vector2_t4282066565  ___newScreenPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::updateProjectionPlane()
extern "C"  void PinnedTransformGesture_updateProjectionPlane_m2592808220 (PinnedTransformGesture_t2290655279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformStarted_m1364818229 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformStarted_m166226166 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.add_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_add_Transformed_m2918548537 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.remove_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_remove_Transformed_m1338900440 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformCompleted_m1131994859 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PinnedTransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void PinnedTransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformCompleted_m336257644 (PinnedTransformGesture_t2290655279 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

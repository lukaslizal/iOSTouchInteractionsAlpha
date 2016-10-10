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

// TouchScript.Gestures.ScreenTransformGesture
struct ScreenTransformGesture_t1521525955;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void TouchScript.Gestures.ScreenTransformGesture::.ctor()
extern "C"  void ScreenTransformGesture__ctor_m2978747270 (ScreenTransformGesture_t1521525955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::ApplyTransform(UnityEngine.Transform)
extern "C"  void ScreenTransformGesture_ApplyTransform_m395486177 (ScreenTransformGesture_t1521525955 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.ScreenTransformGesture::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float ScreenTransformGesture_doRotation_m804685307 (ScreenTransformGesture_t1521525955 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.ScreenTransformGesture::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float ScreenTransformGesture_doScaling_m3224275210 (ScreenTransformGesture_t1521525955 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.ScreenTransformGesture::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  ScreenTransformGesture_doOnePointTranslation_m3000202164 (ScreenTransformGesture_t1521525955 * __this, Vector2_t4282066565  ___oldScreenPos0, Vector2_t4282066565  ___newScreenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.ScreenTransformGesture::doTwoPointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector3_t4282066566  ScreenTransformGesture_doTwoPointTranslation_m3799670144 (ScreenTransformGesture_t1521525955 * __this, Vector2_t4282066565  ___oldScreenPos10, Vector2_t4282066565  ___oldScreenPos21, Vector2_t4282066565  ___newScreenPos12, Vector2_t4282066565  ___newScreenPos23, float ___dR4, float ___dS5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.ScreenTransformGesture::scaleAndRotate(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t4282066565  ScreenTransformGesture_scaleAndRotate_m4137989453 (ScreenTransformGesture_t1521525955 * __this, Vector2_t4282066565  ___point0, Vector2_t4282066565  ___center1, float ___dR2, float ___dS3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformStarted_m2524368585 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformStarted_m4203887330 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.add_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_add_Transformed_m3847619109 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.remove_Transformed(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_remove_Transformed_m2511055468 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.add_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_add_TransformCompleted_m3063357311 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ScreenTransformGesture::TouchScript.Gestures.ITransformGesture.remove_TransformCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void ScreenTransformGesture_TouchScript_Gestures_ITransformGesture_remove_TransformCompleted_m2173167960 (ScreenTransformGesture_t1521525955 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

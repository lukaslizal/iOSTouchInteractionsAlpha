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

// TouchScript.TouchPoint
struct TouchPoint_t2891357731;
// UnityEngine.Transform
struct Transform_t1659122786;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;
// TouchScript.Tags
struct Tags_t4162305963;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;
// System.Object
struct Il2CppObject;
// TouchScript.ITouch
struct ITouch_t3979129576;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Layers_TouchLayer334681980.h"
#include "TouchScript_TouchScript_Tags4162305963.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void TouchScript.TouchPoint::.ctor()
extern "C"  void TouchPoint__ctor_m3991558306 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.TouchPoint::get_Id()
extern "C"  int32_t TouchPoint_get_Id_m229620940 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Id(System.Int32)
extern "C"  void TouchPoint_set_Id_m1064587 (TouchPoint_t2891357731 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TouchScript.TouchPoint::get_Target()
extern "C"  Transform_t1659122786 * TouchPoint_get_Target_m2699021338 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Target(UnityEngine.Transform)
extern "C"  void TouchPoint_set_Target_m3660496141 (TouchPoint_t2891357731 * __this, Transform_t1659122786 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.TouchPoint::get_Position()
extern "C"  Vector2_t4282066565  TouchPoint_get_Position_m2948846575 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.TouchPoint::get_PreviousPosition()
extern "C"  Vector2_t4282066565  TouchPoint_get_PreviousPosition_m338398534 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_PreviousPosition(UnityEngine.Vector2)
extern "C"  void TouchPoint_set_PreviousPosition_m3377697467 (TouchPoint_t2891357731 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.ITouchHit TouchScript.TouchPoint::get_Hit()
extern "C"  Il2CppObject * TouchPoint_get_Hit_m1082033301 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Hit(TouchScript.Hit.ITouchHit)
extern "C"  void TouchPoint_set_Hit_m3140067742 (TouchPoint_t2891357731 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::get_Layer()
extern "C"  TouchLayer_t334681980 * TouchPoint_get_Layer_m3214628111 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Layer(TouchScript.Layers.TouchLayer)
extern "C"  void TouchPoint_set_Layer_m2525044132 (TouchPoint_t2891357731 * __this, TouchLayer_t334681980 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Tags TouchScript.TouchPoint::get_Tags()
extern "C"  Tags_t4162305963 * TouchPoint_get_Tags_m2715091004 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::set_Tags(TouchScript.Tags)
extern "C"  void TouchPoint_set_Tags_m1038767867 (TouchPoint_t2891357731 * __this, Tags_t4162305963 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> TouchScript.TouchPoint::get_Properties()
extern "C"  Il2CppObject* TouchPoint_get_Properties_m391996059 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchPoint::Equals(System.Object)
extern "C"  bool TouchPoint_Equals_m3432122855 (TouchPoint_t2891357731 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.TouchPoint::GetHashCode()
extern "C"  int32_t TouchPoint_GetHashCode_m4173097099 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchPoint::Equals(TouchScript.ITouch)
extern "C"  bool TouchPoint_Equals_m3723584755 (TouchPoint_t2891357731 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::INTERNAL_Reset()
extern "C"  void TouchPoint_INTERNAL_Reset_m1023040751 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::INTERNAL_Init(System.Int32,UnityEngine.Vector2,TouchScript.Tags)
extern "C"  void TouchPoint_INTERNAL_Init_m3116683282 (TouchPoint_t2891357731 * __this, int32_t ___id0, Vector2_t4282066565  ___position1, Tags_t4162305963 * ___tags2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::INTERNAL_ResetPosition()
extern "C"  void TouchPoint_INTERNAL_ResetPosition_m2239061496 (TouchPoint_t2891357731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchPoint::INTERNAL_SetPosition(UnityEngine.Vector2)
extern "C"  void TouchPoint_INTERNAL_SetPosition_m335509711 (TouchPoint_t2891357731 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

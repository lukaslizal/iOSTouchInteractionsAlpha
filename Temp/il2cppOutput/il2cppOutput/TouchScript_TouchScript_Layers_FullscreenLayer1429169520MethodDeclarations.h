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

// TouchScript.Layers.FullscreenLayer
struct FullscreenLayer_t1429169520;
// UnityEngine.Camera
struct Camera_t2727095145;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Layers_FullscreenLayer_Laye450685578.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHit3662477492.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

// System.Void TouchScript.Layers.FullscreenLayer::.ctor()
extern "C"  void FullscreenLayer__ctor_m379580617 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::get_Type()
extern "C"  int32_t FullscreenLayer_get_Type_m2439101129 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::set_Type(TouchScript.Layers.FullscreenLayer/LayerType)
extern "C"  void FullscreenLayer_set_Type_m453154504 (FullscreenLayer_t1429169520 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::get_Camera()
extern "C"  Camera_t2727095145 * FullscreenLayer_get_Camera_m3442419042 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::set_Camera(UnityEngine.Camera)
extern "C"  void FullscreenLayer_set_Camera_m58213473 (FullscreenLayer_t1429169520 * __this, Camera_t2727095145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::get_WorldProjectionNormal()
extern "C"  Vector3_t4282066566  FullscreenLayer_get_WorldProjectionNormal_m887846412 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.FullscreenLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t FullscreenLayer_Hit_m2937877085 (FullscreenLayer_t1429169520 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.FullscreenLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C"  Vector3_t4282066566  FullscreenLayer_ProjectTo_m163619776 (FullscreenLayer_t1429169520 * __this, Vector2_t4282066565  ___screenPosition0, Plane_t4206452690  ___projectionPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Layers.FullscreenLayer::ProjectFrom(UnityEngine.Vector3)
extern "C"  Vector2_t4282066565  FullscreenLayer_ProjectFrom_m1587510378 (FullscreenLayer_t1429169520 * __this, Vector3_t4282066566  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::Awake()
extern "C"  void FullscreenLayer_Awake_m617185836 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::OnEnable()
extern "C"  void FullscreenLayer_OnEnable_m1508849181 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::setName()
extern "C"  void FullscreenLayer_setName_m2071719764 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::updateCamera()
extern "C"  void FullscreenLayer_updateCamera_m1756203785 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.FullscreenLayer::cacheCameraTransform()
extern "C"  void FullscreenLayer_cacheCameraTransform_m3696873440 (FullscreenLayer_t1429169520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

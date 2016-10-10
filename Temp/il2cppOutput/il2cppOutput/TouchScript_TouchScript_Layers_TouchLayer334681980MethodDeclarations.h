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

// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t91064721;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// TouchScript.TouchPoint
struct TouchPoint_t2891357731;
// TouchScript.ITouch
struct ITouch_t3979129576;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHit3662477492.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "TouchScript_TouchScript_TouchPoint2891357731.h"

// System.Void TouchScript.Layers.TouchLayer::.ctor()
extern "C"  void TouchLayer__ctor_m4026288149 (TouchLayer_t334681980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::add_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
extern "C"  void TouchLayer_add_TouchBegan_m2361611022 (TouchLayer_t334681980 * __this, EventHandler_1_t91064721 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::remove_TouchBegan(System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>)
extern "C"  void TouchLayer_remove_TouchBegan_m2985442381 (TouchLayer_t334681980 * __this, EventHandler_1_t91064721 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::get_WorldProjectionNormal()
extern "C"  Vector3_t4282066566  TouchLayer_get_WorldProjectionNormal_m2914888972 (TouchLayer_t334681980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t TouchLayer_Hit_m2351668363 (TouchLayer_t334681980 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.TouchLayer::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C"  Vector3_t4282066566  TouchLayer_ProjectTo_m1665584320 (TouchLayer_t334681980 * __this, Vector2_t4282066565  ___screenPosition0, Plane_t4206452690  ___projectionPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Layers.TouchLayer::ProjectFrom(UnityEngine.Vector3)
extern "C"  Vector2_t4282066565  TouchLayer_ProjectFrom_m1589153288 (TouchLayer_t334681980 * __this, Vector3_t4282066566  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::Awake()
extern "C"  void TouchLayer_Awake_m4263893368 (TouchLayer_t334681980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::OnDestroy()
extern "C"  void TouchLayer_OnDestroy_m429001358 (TouchLayer_t334681980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Layers.TouchLayer::INTERNAL_BeginTouch(TouchScript.TouchPoint)
extern "C"  bool TouchLayer_INTERNAL_BeginTouch_m1472774210 (TouchLayer_t334681980 * __this, TouchPoint_t2891357731 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::INTERNAL_UpdateTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_INTERNAL_UpdateTouch_m2155855209 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::INTERNAL_EndTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_INTERNAL_EndTouch_m1890527359 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::INTERNAL_CancelTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_INTERNAL_CancelTouch_m771088600 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::setName()
extern "C"  void TouchLayer_setName_m1864344480 (TouchLayer_t334681980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.TouchLayer::beginTouch(TouchScript.ITouch,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t TouchLayer_beginTouch_m3708844596 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::updateTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_updateTouch_m2235926383 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::endTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_endTouch_m3272543289 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.TouchLayer::cancelTouch(TouchScript.ITouch)
extern "C"  void TouchLayer_cancelTouch_m851159774 (TouchLayer_t334681980 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

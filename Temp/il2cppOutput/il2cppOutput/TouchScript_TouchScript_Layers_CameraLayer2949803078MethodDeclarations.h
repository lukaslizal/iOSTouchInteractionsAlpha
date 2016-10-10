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

// TouchScript.Layers.CameraLayer
struct CameraLayer_t2949803078;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t528650843;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHit3662477492.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResult829736168.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

// System.Void TouchScript.Layers.CameraLayer::.ctor()
extern "C"  void CameraLayer__ctor_m2130003123 (CameraLayer_t2949803078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::Awake()
extern "C"  void CameraLayer_Awake_m2367608342 (CameraLayer_t2949803078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::OnEnable()
extern "C"  void CameraLayer_OnEnable_m3147784691 (CameraLayer_t2949803078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t CameraLayer_castRay_m2121634842 (CameraLayer_t2949803078 * __this, Ray_t3134616544  ___ray0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer::doHit(UnityEngine.RaycastHit,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t CameraLayer_doHit_m399575217 (CameraLayer_t2949803078 * __this, RaycastHit_t4003175726  ___raycastHit0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer::sortHits(UnityEngine.RaycastHit[])
extern "C"  void CameraLayer_sortHits_m1438151404 (CameraLayer_t2949803078 * __this, RaycastHitU5BU5D_t528650843* ___hits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

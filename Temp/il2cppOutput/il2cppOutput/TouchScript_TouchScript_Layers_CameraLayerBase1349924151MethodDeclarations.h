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

// TouchScript.Layers.CameraLayerBase
struct CameraLayerBase_t1349924151;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHit3662477492.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

// System.Void TouchScript.Layers.CameraLayerBase::.ctor()
extern "C"  void CameraLayerBase__ctor_m2980638946 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::get_LayerMask()
extern "C"  LayerMask_t3236759763  CameraLayerBase_get_LayerMask_m3571079687 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::set_LayerMask(UnityEngine.LayerMask)
extern "C"  void CameraLayerBase_set_LayerMask_m466118060 (CameraLayerBase_t1349924151 * __this, LayerMask_t3236759763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::get_WorldProjectionNormal()
extern "C"  Vector3_t4282066566  CameraLayerBase_get_WorldProjectionNormal_m744779685 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayerBase::Hit(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t CameraLayerBase_Hit_m3126358262 (CameraLayerBase_t1349924151 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Layers.CameraLayerBase::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
extern "C"  Vector3_t4282066566  CameraLayerBase_ProjectTo_m1706677191 (CameraLayerBase_t1349924151 * __this, Vector2_t4282066565  ___screenPosition0, Plane_t4206452690  ___projectionPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Layers.CameraLayerBase::ProjectFrom(UnityEngine.Vector3)
extern "C"  Vector2_t4282066565  CameraLayerBase_ProjectFrom_m1039112817 (CameraLayerBase_t1349924151 * __this, Vector3_t4282066566  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::Awake()
extern "C"  void CameraLayerBase_Awake_m3218244165 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::setName()
extern "C"  void CameraLayerBase_setName_m2017807661 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayerBase::updateCamera()
extern "C"  void CameraLayerBase_updateCamera_m646048976 (CameraLayerBase_t1349924151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

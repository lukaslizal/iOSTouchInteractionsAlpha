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

// TouchScript.Layers.CameraLayer2D
struct CameraLayer2D_t1890023832;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t889400257;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Layers_TouchLayer_LayerHit3662477492.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"
#include "TouchScript_TouchScript_Hit_HitTest_ObjectHitResult829736168.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"

// System.Void TouchScript.Layers.CameraLayer2D::.ctor()
extern "C"  void CameraLayer2D__ctor_m1063513761 (CameraLayer2D_t1890023832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer2D::OnEnable()
extern "C"  void CameraLayer2D_OnEnable_m1236289861 (CameraLayer2D_t1890023832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Layers.TouchLayer/LayerHitResult TouchScript.Layers.CameraLayer2D::castRay(UnityEngine.Ray,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t CameraLayer2D_castRay_m310621512 (CameraLayer2D_t1890023832 * __this, Ray_t3134616544  ___ray0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Hit.HitTest/ObjectHitResult TouchScript.Layers.CameraLayer2D::doHit(UnityEngine.RaycastHit2D,TouchScript.Hit.ITouchHit&)
extern "C"  int32_t CameraLayer2D_doHit_m2340195733 (CameraLayer2D_t1890023832 * __this, RaycastHit2D_t1374744384  ___raycastHit0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Layers.CameraLayer2D::sortHits(UnityEngine.RaycastHit2D[])
extern "C"  void CameraLayer2D_sortHits_m1665176300 (CameraLayer2D_t1890023832 * __this, RaycastHit2DU5BU5D_t889400257* ___hits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Layers.CameraLayer2D::<sortHits>m__A(UnityEngine.RaycastHit2D,UnityEngine.RaycastHit2D)
extern "C"  int32_t CameraLayer2D_U3CsortHitsU3Em__A_m3532587461 (CameraLayer2D_t1890023832 * __this, RaycastHit2D_t1374744384  ___a0, RaycastHit2D_t1374744384  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

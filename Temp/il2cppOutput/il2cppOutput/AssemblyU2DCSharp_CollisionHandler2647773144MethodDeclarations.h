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

// CollisionHandler
struct CollisionHandler_t2647773144;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "AssemblyU2DCSharp_PanOrientation1357260051.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void CollisionHandler::.ctor()
extern "C"  void CollisionHandler__ctor_m3323177411 (CollisionHandler_t2647773144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionHandler::Start()
extern "C"  void CollisionHandler_Start_m2270315203 (CollisionHandler_t2647773144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionHandler::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void CollisionHandler_OnTriggerEnter_m1564187797 (CollisionHandler_t2647773144 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionHandler::OnTriggerStay(UnityEngine.Collider)
extern "C"  void CollisionHandler_OnTriggerStay_m4119585128 (CollisionHandler_t2647773144 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollisionHandler::OnTriggerExit(UnityEngine.Collider)
extern "C"  void CollisionHandler_OnTriggerExit_m1501495917 (CollisionHandler_t2647773144 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CollisionHandler::IsCameraInFreeZone(PanOrientation)
extern "C"  bool CollisionHandler_IsCameraInFreeZone_m2851413486 (CollisionHandler_t2647773144 * __this, int32_t ___panOrientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CollisionHandler::IsCameraInCollider()
extern "C"  bool CollisionHandler_IsCameraInCollider_m720917341 (CollisionHandler_t2647773144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 CollisionHandler::GetPosition()
extern "C"  Vector3_t4282066566  CollisionHandler_GetPosition_m1471917318 (CollisionHandler_t2647773144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

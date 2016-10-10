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

// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::CameraToPlaneProjection(UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Plane)
extern "C"  Vector3_t4282066566  ProjectionUtils_CameraToPlaneProjection_m1041595336 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___position0, Camera_t2727095145 * ___camera1, Plane_t4206452690  ___projectionPlane2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Utils.ProjectionUtils::ScreenToPlaneProjection(UnityEngine.Vector2,UnityEngine.Plane)
extern "C"  Vector3_t4282066566  ProjectionUtils_ScreenToPlaneProjection_m749043735 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___position0, Plane_t4206452690  ___projectionPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

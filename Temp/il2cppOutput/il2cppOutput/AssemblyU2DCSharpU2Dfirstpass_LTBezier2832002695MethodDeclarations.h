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

// LTBezier
struct LTBezier_t2832002695;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void LTBezier::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void LTBezier__ctor_m219039823 (LTBezier_t2832002695 * __this, Vector3_t4282066566  ___a0, Vector3_t4282066566  ___b1, Vector3_t4282066566  ___c2, Vector3_t4282066566  ___d3, float ___precision4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTBezier::map(System.Single)
extern "C"  float LTBezier_map_m2454053173 (LTBezier_t2832002695 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezier::bezierPoint(System.Single)
extern "C"  Vector3_t4282066566  LTBezier_bezierPoint_m619768238 (LTBezier_t2832002695 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezier::point(System.Single)
extern "C"  Vector3_t4282066566  LTBezier_point_m3253868527 (LTBezier_t2832002695 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

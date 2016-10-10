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

// BezierSpline
struct BezierSpline_t326427568;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_BezierControlPointMode3723804565.h"

// System.Void BezierSpline::.ctor()
extern "C"  void BezierSpline__ctor_m681587947 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::Start()
extern "C"  void BezierSpline_Start_m3923693035 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::Update()
extern "C"  void BezierSpline_Update_m1381251970 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BezierSpline::FindTAt(System.Single)
extern "C"  float BezierSpline_FindTAt_m2231024128 (BezierSpline_t326427568 * __this, float ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::ToggleGraph()
extern "C"  void BezierSpline_ToggleGraph_m1476104163 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::CalcLengthTableInto()
extern "C"  void BezierSpline_CalcLengthTableInto_m2817452860 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BezierSpline::get_Loop()
extern "C"  bool BezierSpline_get_Loop_m1331520602 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::set_Loop(System.Boolean)
extern "C"  void BezierSpline_set_Loop_m1312677649 (BezierSpline_t326427568 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierSpline::get_ControlPointCount()
extern "C"  int32_t BezierSpline_get_ControlPointCount_m596704750 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierSpline::GetControlPoint(System.Int32)
extern "C"  Vector3_t4282066566  BezierSpline_GetControlPoint_m4240149257 (BezierSpline_t326427568 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::SetControlPoint(System.Int32,UnityEngine.Vector3)
extern "C"  void BezierSpline_SetControlPoint_m555615970 (BezierSpline_t326427568 * __this, int32_t ___index0, Vector3_t4282066566  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BezierControlPointMode BezierSpline::GetControlPointMode(System.Int32)
extern "C"  int32_t BezierSpline_GetControlPointMode_m1844625598 (BezierSpline_t326427568 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::SetControlPointMode(System.Int32,BezierControlPointMode)
extern "C"  void BezierSpline_SetControlPointMode_m1486675647 (BezierSpline_t326427568 * __this, int32_t ___index0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::EnforceMode(System.Int32)
extern "C"  void BezierSpline_EnforceMode_m571804607 (BezierSpline_t326427568 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BezierSpline::get_CurveCount()
extern "C"  int32_t BezierSpline_get_CurveCount_m2058091056 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierSpline::GetPoint(System.Single)
extern "C"  Vector3_t4282066566  BezierSpline_GetPoint_m4134326014 (BezierSpline_t326427568 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierSpline::GetVelocity(System.Single)
extern "C"  Vector3_t4282066566  BezierSpline_GetVelocity_m1705676041 (BezierSpline_t326427568 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BezierSpline::GetDirection(System.Single)
extern "C"  Vector3_t4282066566  BezierSpline_GetDirection_m1104633647 (BezierSpline_t326427568 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::AddCurve()
extern "C"  void BezierSpline_AddCurve_m3570846791 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BezierSpline::Reset()
extern "C"  void BezierSpline_Reset_m2622988184 (BezierSpline_t326427568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

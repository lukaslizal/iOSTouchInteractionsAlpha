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

// LTSpline
struct LTSpline_t3328440185;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void LTSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void LTSpline__ctor_m3398688897 (LTSpline_t3328440185 * __this, Vector3U5BU5D_t215400611* ___pts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::.cctor()
extern "C"  void LTSpline__cctor_m3638857847 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::map(System.Single)
extern "C"  Vector3_t4282066566  LTSpline_map_m3204291541 (LTSpline_t3328440185 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::interp(System.Single)
extern "C"  Vector3_t4282066566  LTSpline_interp_m3035429103 (LTSpline_t3328440185 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTSpline::ratioAtPoint(UnityEngine.Vector3)
extern "C"  float LTSpline_ratioAtPoint_m842838285 (LTSpline_t3328440185 * __this, Vector3_t4282066566  ___pt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTSpline::point(System.Single)
extern "C"  Vector3_t4282066566  LTSpline_point_m871759713 (LTSpline_t3328440185 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place2d(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_place2d_m519784021 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal2d(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_placeLocal2d_m2364520158 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_place_m1838597895 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::place(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTSpline_place_m363422490 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, Vector3_t4282066566  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal(UnityEngine.Transform,System.Single)
extern "C"  void LTSpline_placeLocal_m97502672 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::placeLocal(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTSpline_placeLocal_m160441187 (LTSpline_t3328440185 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, Vector3_t4282066566  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::gizmoDraw(System.Single)
extern "C"  void LTSpline_gizmoDraw_m2345114841 (LTSpline_t3328440185 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawGizmo(UnityEngine.Color)
extern "C"  void LTSpline_drawGizmo_m1654504092 (LTSpline_t3328440185 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawGizmo(UnityEngine.Transform[],UnityEngine.Color)
extern "C"  void LTSpline_drawGizmo_m2401722161 (Il2CppObject * __this /* static, unused */, TransformU5BU5D_t3792884695* ___arr0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTSpline::drawLine(UnityEngine.Transform[],System.Single,UnityEngine.Color)
extern "C"  void LTSpline_drawLine_m1117155098 (Il2CppObject * __this /* static, unused */, TransformU5BU5D_t3792884695* ___arr0, float ___width1, Color_t4194546905  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

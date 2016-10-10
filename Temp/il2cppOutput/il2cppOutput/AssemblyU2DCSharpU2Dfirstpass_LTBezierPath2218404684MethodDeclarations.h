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

// LTBezierPath
struct LTBezierPath_t2218404684;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void LTBezierPath::.ctor()
extern "C"  void LTBezierPath__ctor_m136093059 (LTBezierPath_t2218404684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::.ctor(UnityEngine.Vector3[])
extern "C"  void LTBezierPath__ctor_m328296212 (LTBezierPath_t2218404684 * __this, Vector3U5BU5D_t215400611* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::setPoints(UnityEngine.Vector3[])
extern "C"  void LTBezierPath_setPoints_m2021361425 (LTBezierPath_t2218404684 * __this, Vector3U5BU5D_t215400611* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezierPath::point(System.Single)
extern "C"  Vector3_t4282066566  LTBezierPath_point_m3042982900 (LTBezierPath_t2218404684 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place2d_m163006184 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal2d_m4069268011 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place_m711970906 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_place_m1648067821 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, Vector3_t4282066566  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal_m1373018205 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_placeLocal_m2151230832 (LTBezierPath_t2218404684 * __this, Transform_t1659122786 * ___transform0, float ___ratio1, Vector3_t4282066566  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTBezierPath::getRationInOneRange(System.Single)
extern "C"  float LTBezierPath_getRationInOneRange_m2156159329 (LTBezierPath_t2218404684 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::gizmoDraw(System.Single)
extern "C"  void LTBezierPath_gizmoDraw_m3822937324 (LTBezierPath_t2218404684 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

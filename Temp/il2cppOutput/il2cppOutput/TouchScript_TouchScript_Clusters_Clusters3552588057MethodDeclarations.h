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

// TouchScript.Clusters.Clusters
struct Clusters_t3552588057;
// TouchScript.ITouch
struct ITouch_t3979129576;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Clusters.Clusters::.ctor()
extern "C"  void Clusters__ctor_m1375656261 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Clusters.Clusters::get_PointsCount()
extern "C"  int32_t Clusters_get_PointsCount_m3753113772 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Clusters.Clusters::get_MinPointsDistance()
extern "C"  float Clusters_get_MinPointsDistance_m3097677104 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::set_MinPointsDistance(System.Single)
extern "C"  void Clusters_set_MinPointsDistance_m21055035 (Clusters_t3552588057 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Clusters.Clusters::get_HasClusters()
extern "C"  bool Clusters_get_HasClusters_m1744252185 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetCenterPosition(System.Int32)
extern "C"  Vector2_t4282066565  Clusters_GetCenterPosition_m3765192419 (Clusters_t3552588057 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Clusters.Clusters::GetPreviousCenterPosition(System.Int32)
extern "C"  Vector2_t4282066565  Clusters_GetPreviousCenterPosition_m3771853434 (Clusters_t3552588057 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::AddPoint(TouchScript.ITouch)
extern "C"  void Clusters_AddPoint_m3344600052 (Clusters_t3552588057 * __this, Il2CppObject * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::AddPoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Clusters_AddPoints_m3123354614 (Clusters_t3552588057 * __this, Il2CppObject* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemovePoint(TouchScript.ITouch)
extern "C"  void Clusters_RemovePoint_m2825551093 (Clusters_t3552588057 * __this, Il2CppObject * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemovePoints(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Clusters_RemovePoints_m3443517333 (Clusters_t3552588057 * __this, Il2CppObject* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::RemoveAllPoints()
extern "C"  void Clusters_RemoveAllPoints_m1342029219 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::Invalidate()
extern "C"  void Clusters_Invalidate_m1777149786 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::distributePoints()
extern "C"  void Clusters_distributePoints_m2819327843 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Clusters.Clusters::checkClusters()
extern "C"  bool Clusters_checkClusters_m3173834448 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::markDirty()
extern "C"  void Clusters_markDirty_m4263890248 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Clusters.Clusters::markClean()
extern "C"  void Clusters_markClean_m3449691647 (Clusters_t3552588057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

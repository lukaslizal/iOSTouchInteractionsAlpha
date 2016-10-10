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

// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Utils.ClusterUtils::.cctor()
extern "C"  void ClusterUtils__cctor_m2770840334 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::Get2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  Vector2_t4282066565  ClusterUtils_Get2DCenterPosition_m2026352503 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Utils.ClusterUtils::GetPrevious2DCenterPosition(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  Vector2_t4282066565  ClusterUtils_GetPrevious2DCenterPosition_m307554446 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Utils.ClusterUtils::GetPointsHash(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  String_t* ClusterUtils_GetPointsHash_m176523280 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

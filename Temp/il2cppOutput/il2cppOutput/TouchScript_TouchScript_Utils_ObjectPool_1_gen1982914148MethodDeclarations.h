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

// TouchScript.Utils.ObjectPool`1<System.Object>
struct ObjectPool_1_t1982914148;
// TouchScript.Utils.ObjectPool`1/UnityFunc`1<System.Object,System.Object>
struct UnityFunc_1_t1562019187;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4064996374;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void TouchScript.Utils.ObjectPool`1<System.Object>::.ctor(System.Int32,TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T>,UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C"  void ObjectPool_1__ctor_m2063200687_gshared (ObjectPool_1_t1982914148 * __this, int32_t ___capacity0, UnityFunc_1_t1562019187 * ___actionNew1, UnityAction_1_t4064996374 * ___actionOnGet2, UnityAction_1_t4064996374 * ___actionOnRelease3, const MethodInfo* method);
#define ObjectPool_1__ctor_m2063200687(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method) ((  void (*) (ObjectPool_1_t1982914148 *, int32_t, UnityFunc_1_t1562019187 *, UnityAction_1_t4064996374 *, UnityAction_1_t4064996374 *, const MethodInfo*))ObjectPool_1__ctor_m2063200687_gshared)(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Object>::get_CountAll()
extern "C"  int32_t ObjectPool_1_get_CountAll_m30749369_gshared (ObjectPool_1_t1982914148 * __this, const MethodInfo* method);
#define ObjectPool_1_get_CountAll_m30749369(__this, method) ((  int32_t (*) (ObjectPool_1_t1982914148 *, const MethodInfo*))ObjectPool_1_get_CountAll_m30749369_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Object>::set_CountAll(System.Int32)
extern "C"  void ObjectPool_1_set_CountAll_m1651451972_gshared (ObjectPool_1_t1982914148 * __this, int32_t ___value0, const MethodInfo* method);
#define ObjectPool_1_set_CountAll_m1651451972(__this, ___value0, method) ((  void (*) (ObjectPool_1_t1982914148 *, int32_t, const MethodInfo*))ObjectPool_1_set_CountAll_m1651451972_gshared)(__this, ___value0, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Object>::get_CountActive()
extern "C"  int32_t ObjectPool_1_get_CountActive_m2120273616_gshared (ObjectPool_1_t1982914148 * __this, const MethodInfo* method);
#define ObjectPool_1_get_CountActive_m2120273616(__this, method) ((  int32_t (*) (ObjectPool_1_t1982914148 *, const MethodInfo*))ObjectPool_1_get_CountActive_m2120273616_gshared)(__this, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Object>::get_CountInactive()
extern "C"  int32_t ObjectPool_1_get_CountInactive_m1954281653_gshared (ObjectPool_1_t1982914148 * __this, const MethodInfo* method);
#define ObjectPool_1_get_CountInactive_m1954281653(__this, method) ((  int32_t (*) (ObjectPool_1_t1982914148 *, const MethodInfo*))ObjectPool_1_get_CountInactive_m1954281653_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Object>::WarmUp(System.Int32)
extern "C"  void ObjectPool_1_WarmUp_m2950152053_gshared (ObjectPool_1_t1982914148 * __this, int32_t ___count0, const MethodInfo* method);
#define ObjectPool_1_WarmUp_m2950152053(__this, ___count0, method) ((  void (*) (ObjectPool_1_t1982914148 *, int32_t, const MethodInfo*))ObjectPool_1_WarmUp_m2950152053_gshared)(__this, ___count0, method)
// T TouchScript.Utils.ObjectPool`1<System.Object>::Get()
extern "C"  Il2CppObject * ObjectPool_1_Get_m3439949203_gshared (ObjectPool_1_t1982914148 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m3439949203(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t1982914148 *, const MethodInfo*))ObjectPool_1_Get_m3439949203_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Object>::Release(T)
extern "C"  void ObjectPool_1_Release_m4105139577_gshared (ObjectPool_1_t1982914148 * __this, Il2CppObject * ___element0, const MethodInfo* method);
#define ObjectPool_1_Release_m4105139577(__this, ___element0, method) ((  void (*) (ObjectPool_1_t1982914148 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Release_m4105139577_gshared)(__this, ___element0, method)

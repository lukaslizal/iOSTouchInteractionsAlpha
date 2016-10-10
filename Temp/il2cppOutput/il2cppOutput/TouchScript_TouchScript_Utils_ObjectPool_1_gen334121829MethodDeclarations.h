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


#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Utils_ObjectPool_1_gen1982914148MethodDeclarations.h"

// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::.ctor(System.Int32,TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T>,UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m923551714(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method) ((  void (*) (ObjectPool_1_t334121829 *, int32_t, UnityFunc_1_t3462976591 *, UnityAction_1_t2416204055 *, UnityAction_1_t2416204055 *, const MethodInfo*))ObjectPool_1__ctor_m2063200687_gshared)(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::get_CountAll()
#define ObjectPool_1_get_CountAll_m566357286(__this, method) ((  int32_t (*) (ObjectPool_1_t334121829 *, const MethodInfo*))ObjectPool_1_get_CountAll_m30749369_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::set_CountAll(System.Int32)
#define ObjectPool_1_set_CountAll_m2218333617(__this, ___value0, method) ((  void (*) (ObjectPool_1_t334121829 *, int32_t, const MethodInfo*))ObjectPool_1_set_CountAll_m1651451972_gshared)(__this, ___value0, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::get_CountActive()
#define ObjectPool_1_get_CountActive_m2612224323(__this, method) ((  int32_t (*) (ObjectPool_1_t334121829 *, const MethodInfo*))ObjectPool_1_get_CountActive_m2120273616_gshared)(__this, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::get_CountInactive()
#define ObjectPool_1_get_CountInactive_m2272508520(__this, method) ((  int32_t (*) (ObjectPool_1_t334121829 *, const MethodInfo*))ObjectPool_1_get_CountInactive_m1954281653_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::WarmUp(System.Int32)
#define ObjectPool_1_WarmUp_m893878946(__this, ___count0, method) ((  void (*) (ObjectPool_1_t334121829 *, int32_t, const MethodInfo*))ObjectPool_1_WarmUp_m2950152053_gshared)(__this, ___count0, method)
// T TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::Get()
#define ObjectPool_1_Get_m3594706502(__this, method) ((  List_1_t2522024052 * (*) (ObjectPool_1_t334121829 *, const MethodInfo*))ObjectPool_1_Get_m3439949203_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>::Release(T)
#define ObjectPool_1_Release_m768859366(__this, ___element0, method) ((  void (*) (ObjectPool_1_t334121829 *, List_1_t2522024052 *, const MethodInfo*))ObjectPool_1_Release_m4105139577_gshared)(__this, ___element0, method)

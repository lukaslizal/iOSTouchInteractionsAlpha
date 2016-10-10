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

// System.Void TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::.ctor(System.Int32,TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T>,UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m3189044394(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method) ((  void (*) (ObjectPool_1_t1856983865 *, int32_t, UnityFunc_1_t1404548735 *, UnityAction_1_t3939066091 *, UnityAction_1_t3939066091 *, const MethodInfo*))ObjectPool_1__ctor_m2063200687_gshared)(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::get_CountAll()
#define ObjectPool_1_get_CountAll_m3660219434(__this, method) ((  int32_t (*) (ObjectPool_1_t1856983865 *, const MethodInfo*))ObjectPool_1_get_CountAll_m30749369_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::set_CountAll(System.Int32)
#define ObjectPool_1_set_CountAll_m1242808297(__this, ___value0, method) ((  void (*) (ObjectPool_1_t1856983865 *, int32_t, const MethodInfo*))ObjectPool_1_set_CountAll_m1651451972_gshared)(__this, ___value0, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::get_CountActive()
#define ObjectPool_1_get_CountActive_m1861303231(__this, method) ((  int32_t (*) (ObjectPool_1_t1856983865 *, const MethodInfo*))ObjectPool_1_get_CountActive_m2120273616_gshared)(__this, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::get_CountInactive()
#define ObjectPool_1_get_CountInactive_m2191844836(__this, method) ((  int32_t (*) (ObjectPool_1_t1856983865 *, const MethodInfo*))ObjectPool_1_get_CountInactive_m1954281653_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::WarmUp(System.Int32)
#define ObjectPool_1_WarmUp_m1981560538(__this, ___count0, method) ((  void (*) (ObjectPool_1_t1856983865 *, int32_t, const MethodInfo*))ObjectPool_1_WarmUp_m2950152053_gshared)(__this, ___count0, method)
// T TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::Get()
#define ObjectPool_1_Get_m3575577968(__this, method) ((  TouchHit_t4044886088 * (*) (ObjectPool_1_t1856983865 *, const MethodInfo*))ObjectPool_1_Get_m3439949203_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<TouchScript.Hit.TouchHit>::Release(T)
#define ObjectPool_1_Release_m435812126(__this, ___element0, method) ((  void (*) (ObjectPool_1_t1856983865 *, TouchHit_t4044886088 *, const MethodInfo*))ObjectPool_1_Release_m4105139577_gshared)(__this, ___element0, method)

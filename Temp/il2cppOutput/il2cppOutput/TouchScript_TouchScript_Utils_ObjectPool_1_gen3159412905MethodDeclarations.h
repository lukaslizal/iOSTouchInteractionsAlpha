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

// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::.ctor(System.Int32,TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T>,UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m381726007(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method) ((  void (*) (ObjectPool_1_t3159412905 *, int32_t, UnityFunc_1_t4215300799 *, UnityAction_1_t946527835 *, UnityAction_1_t946527835 *, const MethodInfo*))ObjectPool_1__ctor_m2063200687_gshared)(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::get_CountAll()
#define ObjectPool_1_get_CountAll_m2607228977(__this, method) ((  int32_t (*) (ObjectPool_1_t3159412905 *, const MethodInfo*))ObjectPool_1_get_CountAll_m30749369_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::set_CountAll(System.Int32)
#define ObjectPool_1_set_CountAll_m975727548(__this, ___value0, method) ((  void (*) (ObjectPool_1_t3159412905 *, int32_t, const MethodInfo*))ObjectPool_1_set_CountAll_m1651451972_gshared)(__this, ___value0, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::get_CountActive()
#define ObjectPool_1_get_CountActive_m2663728728(__this, method) ((  int32_t (*) (ObjectPool_1_t3159412905 *, const MethodInfo*))ObjectPool_1_get_CountActive_m2120273616_gshared)(__this, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::get_CountInactive()
#define ObjectPool_1_get_CountInactive_m228634173(__this, method) ((  int32_t (*) (ObjectPool_1_t3159412905 *, const MethodInfo*))ObjectPool_1_get_CountInactive_m1954281653_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::WarmUp(System.Int32)
#define ObjectPool_1_WarmUp_m247921901(__this, ___count0, method) ((  void (*) (ObjectPool_1_t3159412905 *, int32_t, const MethodInfo*))ObjectPool_1_WarmUp_m2950152053_gshared)(__this, ___count0, method)
// T TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::Get()
#define ObjectPool_1_Get_m431672347(__this, method) ((  List_1_t1052347832 * (*) (ObjectPool_1_t3159412905 *, const MethodInfo*))ObjectPool_1_Get_m3439949203_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.ITouch>>::Release(T)
#define ObjectPool_1_Release_m3280906481(__this, ___element0, method) ((  void (*) (ObjectPool_1_t3159412905 *, List_1_t1052347832 *, const MethodInfo*))ObjectPool_1_Release_m4105139577_gshared)(__this, ___element0, method)

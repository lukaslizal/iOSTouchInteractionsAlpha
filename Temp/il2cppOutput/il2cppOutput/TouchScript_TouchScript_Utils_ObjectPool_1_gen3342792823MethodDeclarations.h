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

// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::.ctor(System.Int32,TouchScript.Utils.ObjectPool`1/UnityFunc`1<T,T>,UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m3571548541(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method) ((  void (*) (ObjectPool_1_t3342792823 *, int32_t, UnityFunc_1_t2085024711 *, UnityAction_1_t1129907753 *, UnityAction_1_t1129907753 *, const MethodInfo*))ObjectPool_1__ctor_m2063200687_gshared)(__this, ___capacity0, ___actionNew1, ___actionOnGet2, ___actionOnRelease3, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::get_CountAll()
#define ObjectPool_1_get_CountAll_m173653751(__this, method) ((  int32_t (*) (ObjectPool_1_t3342792823 *, const MethodInfo*))ObjectPool_1_get_CountAll_m30749369_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::set_CountAll(System.Int32)
#define ObjectPool_1_set_CountAll_m2391892662(__this, ___value0, method) ((  void (*) (ObjectPool_1_t3342792823 *, int32_t, const MethodInfo*))ObjectPool_1_set_CountAll_m1651451972_gshared)(__this, ___value0, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::get_CountActive()
#define ObjectPool_1_get_CountActive_m3072127442(__this, method) ((  int32_t (*) (ObjectPool_1_t3342792823 *, const MethodInfo*))ObjectPool_1_get_CountActive_m2120273616_gshared)(__this, method)
// System.Int32 TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::get_CountInactive()
#define ObjectPool_1_get_CountInactive_m1857774391(__this, method) ((  int32_t (*) (ObjectPool_1_t3342792823 *, const MethodInfo*))ObjectPool_1_get_CountInactive_m1954281653_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::WarmUp(System.Int32)
#define ObjectPool_1_WarmUp_m1191917415(__this, ___count0, method) ((  void (*) (ObjectPool_1_t3342792823 *, int32_t, const MethodInfo*))ObjectPool_1_WarmUp_m2950152053_gshared)(__this, ___count0, method)
// T TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::Get()
#define ObjectPool_1_Get_m963680579(__this, method) ((  List_1_t1235727750 * (*) (ObjectPool_1_t3342792823 *, const MethodInfo*))ObjectPool_1_Get_m3439949203_gshared)(__this, method)
// System.Void TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>>::Release(T)
#define ObjectPool_1_Release_m3886601195(__this, ___element0, method) ((  void (*) (ObjectPool_1_t3342792823 *, List_1_t1235727750 *, const MethodInfo*))ObjectPool_1_Release_m4105139577_gshared)(__this, ___element0, method)

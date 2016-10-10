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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>
struct Transform_1_t335067599;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23600609693.h"
#include "TouchScript_TouchScript_InputSources_TouchState3704565748.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3739570034_gshared (Transform_1_t335067599 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3739570034(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t335067599 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3739570034_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3600609693  Transform_1_Invoke_m3322703046_gshared (Transform_1_t335067599 * __this, int32_t ___key0, TouchState_t3704565748  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3322703046(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3600609693  (*) (Transform_1_t335067599 *, int32_t, TouchState_t3704565748 , const MethodInfo*))Transform_1_Invoke_m3322703046_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1845158129_gshared (Transform_1_t335067599 * __this, int32_t ___key0, TouchState_t3704565748  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1845158129(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t335067599 *, int32_t, TouchState_t3704565748 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1845158129_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,System.Collections.Generic.KeyValuePair`2<System.Int32,TouchScript.InputSources.TouchState>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3600609693  Transform_1_EndInvoke_m709401604_gshared (Transform_1_t335067599 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m709401604(__this, ___result0, method) ((  KeyValuePair_2_t3600609693  (*) (Transform_1_t335067599 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m709401604_gshared)(__this, ___result0, method)

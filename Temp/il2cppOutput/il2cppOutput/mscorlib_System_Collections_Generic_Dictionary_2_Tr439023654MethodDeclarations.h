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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>
struct Transform_1_t439023654;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "TouchScript_TouchScript_InputSources_TouchState3704565748.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m335814978_gshared (Transform_1_t439023654 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m335814978(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t439023654 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m335814978_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::Invoke(TKey,TValue)
extern "C"  TouchState_t3704565748  Transform_1_Invoke_m3571091190_gshared (Transform_1_t439023654 * __this, int32_t ___key0, TouchState_t3704565748  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3571091190(__this, ___key0, ___value1, method) ((  TouchState_t3704565748  (*) (Transform_1_t439023654 *, int32_t, TouchState_t3704565748 , const MethodInfo*))Transform_1_Invoke_m3571091190_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1572672801_gshared (Transform_1_t439023654 * __this, int32_t ___key0, TouchState_t3704565748  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1572672801(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t439023654 *, int32_t, TouchState_t3704565748 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1572672801_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,TouchScript.InputSources.TouchState,TouchScript.InputSources.TouchState>::EndInvoke(System.IAsyncResult)
extern "C"  TouchState_t3704565748  Transform_1_EndInvoke_m3939845076_gshared (Transform_1_t439023654 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3939845076(__this, ___result0, method) ((  TouchState_t3704565748  (*) (Transform_1_t439023654 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3939845076_gshared)(__this, ___result0, method)

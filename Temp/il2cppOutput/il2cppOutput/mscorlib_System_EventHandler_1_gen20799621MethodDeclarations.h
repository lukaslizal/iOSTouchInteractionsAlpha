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

// System.EventHandler`1<System.Object>
struct EventHandler_1_t20799621;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m1337593804_gshared (EventHandler_1_t20799621 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define EventHandler_1__ctor_m1337593804(__this, ___object0, ___method1, method) ((  void (*) (EventHandler_1_t20799621 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m1337593804_gshared)(__this, ___object0, ___method1, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C"  void EventHandler_1_Invoke_m2623239957_gshared (EventHandler_1_t20799621 * __this, Il2CppObject * ___sender0, Il2CppObject * ___e1, const MethodInfo* method);
#define EventHandler_1_Invoke_m2623239957(__this, ___sender0, ___e1, method) ((  void (*) (EventHandler_1_t20799621 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))EventHandler_1_Invoke_m2623239957_gshared)(__this, ___sender0, ___e1, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_1_BeginInvoke_m996893970_gshared (EventHandler_1_t20799621 * __this, Il2CppObject * ___sender0, Il2CppObject * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m996893970(__this, ___sender0, ___e1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (EventHandler_1_t20799621 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))EventHandler_1_BeginInvoke_m996893970_gshared)(__this, ___sender0, ___e1, ___callback2, ___object3, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_1_EndInvoke_m2479179740_gshared (EventHandler_1_t20799621 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m2479179740(__this, ___result0, method) ((  void (*) (EventHandler_1_t20799621 *, Il2CppObject *, const MethodInfo*))EventHandler_1_EndInvoke_m2479179740_gshared)(__this, ___result0, method)

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

// TouchScript.Utils.TimedSequence`1<System.Object>
struct TimedSequence_1_t2998438119;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2570496278;
// System.Predicate`1<System.Object>
struct Predicate_1_t3781873254;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::.ctor()
extern "C"  void TimedSequence_1__ctor_m1321352643_gshared (TimedSequence_1_t2998438119 * __this, const MethodInfo* method);
#define TimedSequence_1__ctor_m1321352643(__this, method) ((  void (*) (TimedSequence_1_t2998438119 *, const MethodInfo*))TimedSequence_1__ctor_m1321352643_gshared)(__this, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Add(T)
extern "C"  void TimedSequence_1_Add_m1141145180_gshared (TimedSequence_1_t2998438119 * __this, Il2CppObject * ___element0, const MethodInfo* method);
#define TimedSequence_1_Add_m1141145180(__this, ___element0, method) ((  void (*) (TimedSequence_1_t2998438119 *, Il2CppObject *, const MethodInfo*))TimedSequence_1_Add_m1141145180_gshared)(__this, ___element0, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Add(T,System.Single)
extern "C"  void TimedSequence_1_Add_m866433089_gshared (TimedSequence_1_t2998438119 * __this, Il2CppObject * ___element0, float ___time1, const MethodInfo* method);
#define TimedSequence_1_Add_m866433089(__this, ___element0, ___time1, method) ((  void (*) (TimedSequence_1_t2998438119 *, Il2CppObject *, float, const MethodInfo*))TimedSequence_1_Add_m866433089_gshared)(__this, ___element0, ___time1, method)
// System.Void TouchScript.Utils.TimedSequence`1<System.Object>::Clear()
extern "C"  void TimedSequence_1_Clear_m3022453230_gshared (TimedSequence_1_t2998438119 * __this, const MethodInfo* method);
#define TimedSequence_1_Clear_m3022453230(__this, method) ((  void (*) (TimedSequence_1_t2998438119 *, const MethodInfo*))TimedSequence_1_Clear_m3022453230_gshared)(__this, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m195713827_gshared (TimedSequence_1_t2998438119 * __this, float ___time0, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m195713827(__this, ___time0, method) ((  Il2CppObject* (*) (TimedSequence_1_t2998438119 *, float, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m195713827_gshared)(__this, ___time0, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single,System.Single&)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m1304194052_gshared (TimedSequence_1_t2998438119 * __this, float ___time0, float* ___lastTime1, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m1304194052(__this, ___time0, ___lastTime1, method) ((  Il2CppObject* (*) (TimedSequence_1_t2998438119 *, float, float*, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m1304194052_gshared)(__this, ___time0, ___lastTime1, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<System.Object>::FindElementsLaterThan(System.Single,System.Predicate`1<T>)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m2276645362_gshared (TimedSequence_1_t2998438119 * __this, float ___time0, Predicate_1_t3781873254 * ___predicate1, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m2276645362(__this, ___time0, ___predicate1, method) ((  Il2CppObject* (*) (TimedSequence_1_t2998438119 *, float, Predicate_1_t3781873254 *, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m2276645362_gshared)(__this, ___time0, ___predicate1, method)

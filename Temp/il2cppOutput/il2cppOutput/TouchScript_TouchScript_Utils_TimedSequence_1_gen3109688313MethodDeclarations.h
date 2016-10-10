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

// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
struct TimedSequence_1_t3109688313;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t2681746472;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t3893123448;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::.ctor()
extern "C"  void TimedSequence_1__ctor_m3899842461_gshared (TimedSequence_1_t3109688313 * __this, const MethodInfo* method);
#define TimedSequence_1__ctor_m3899842461(__this, method) ((  void (*) (TimedSequence_1_t3109688313 *, const MethodInfo*))TimedSequence_1__ctor_m3899842461_gshared)(__this, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Add(T)
extern "C"  void TimedSequence_1_Add_m254490946_gshared (TimedSequence_1_t3109688313 * __this, Vector2_t4282066565  ___element0, const MethodInfo* method);
#define TimedSequence_1_Add_m254490946(__this, ___element0, method) ((  void (*) (TimedSequence_1_t3109688313 *, Vector2_t4282066565 , const MethodInfo*))TimedSequence_1_Add_m254490946_gshared)(__this, ___element0, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Add(T,System.Single)
extern "C"  void TimedSequence_1_Add_m2862573735_gshared (TimedSequence_1_t3109688313 * __this, Vector2_t4282066565  ___element0, float ___time1, const MethodInfo* method);
#define TimedSequence_1_Add_m2862573735(__this, ___element0, ___time1, method) ((  void (*) (TimedSequence_1_t3109688313 *, Vector2_t4282066565 , float, const MethodInfo*))TimedSequence_1_Add_m2862573735_gshared)(__this, ___element0, ___time1, method)
// System.Void TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::Clear()
extern "C"  void TimedSequence_1_Clear_m1305975752_gshared (TimedSequence_1_t3109688313 * __this, const MethodInfo* method);
#define TimedSequence_1_Clear_m1305975752(__this, method) ((  void (*) (TimedSequence_1_t3109688313 *, const MethodInfo*))TimedSequence_1_Clear_m1305975752_gshared)(__this, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m960503561_gshared (TimedSequence_1_t3109688313 * __this, float ___time0, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m960503561(__this, ___time0, method) ((  Il2CppObject* (*) (TimedSequence_1_t3109688313 *, float, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m960503561_gshared)(__this, ___time0, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single,System.Single&)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m1754636126_gshared (TimedSequence_1_t3109688313 * __this, float ___time0, float* ___lastTime1, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m1754636126(__this, ___time0, ___lastTime1, method) ((  Il2CppObject* (*) (TimedSequence_1_t3109688313 *, float, float*, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m1754636126_gshared)(__this, ___time0, ___lastTime1, method)
// System.Collections.Generic.IList`1<T> TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>::FindElementsLaterThan(System.Single,System.Predicate`1<T>)
extern "C"  Il2CppObject* TimedSequence_1_FindElementsLaterThan_m2547256664_gshared (TimedSequence_1_t3109688313 * __this, float ___time0, Predicate_1_t3893123448 * ___predicate1, const MethodInfo* method);
#define TimedSequence_1_FindElementsLaterThan_m2547256664(__this, ___time0, ___predicate1, method) ((  Il2CppObject* (*) (TimedSequence_1_t3109688313 *, float, Predicate_1_t3893123448 *, const MethodInfo*))TimedSequence_1_FindElementsLaterThan_m2547256664_gshared)(__this, ___time0, ___predicate1, method)

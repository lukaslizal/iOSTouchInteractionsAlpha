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

// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"

// System.Void TouchScript.TouchEventArgs::.ctor()
extern "C"  void TouchEventArgs__ctor_m3903986683 (TouchEventArgs_t1706014890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchEventArgs::get_Touches()
extern "C"  Il2CppObject* TouchEventArgs_get_Touches_m2528562105 (TouchEventArgs_t1706014890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchEventArgs::set_Touches(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void TouchEventArgs_set_Touches_m2746907032 (TouchEventArgs_t1706014890 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.TouchEventArgs TouchScript.TouchEventArgs::GetCachedEventArgs(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  TouchEventArgs_t1706014890 * TouchEventArgs_GetCachedEventArgs_m156782544 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

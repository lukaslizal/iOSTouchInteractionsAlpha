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

// Interval
struct Interval_t635062501;

#include "codegen/il2cpp-codegen.h"

// System.Void Interval::.ctor(System.Single,System.Single)
extern "C"  void Interval__ctor_m2610313274 (Interval_t635062501 * __this, float ___center0, float ___reach1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interval::getStart()
extern "C"  float Interval_getStart_m3196139270 (Interval_t635062501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interval::getEnd()
extern "C"  float Interval_getEnd_m1844964863 (Interval_t635062501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interval::getCenter()
extern "C"  float Interval_getCenter_m2421872211 (Interval_t635062501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interval::getReach()
extern "C"  float Interval_getReach_m1878739927 (Interval_t635062501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

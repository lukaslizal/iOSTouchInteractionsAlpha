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

// SplineWalker
struct SplineWalker_t2638870407;
// Interval
struct Interval_t635062501;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PositionState1854061768.h"

// System.Void SplineWalker::.ctor()
extern "C"  void SplineWalker__ctor_m2071888628 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplineWalker::Start()
extern "C"  void SplineWalker_Start_m1019026420 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplineWalker::Update()
extern "C"  void SplineWalker_Update_m1530900121 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplineWalker::SetProgress(System.Single)
extern "C"  void SplineWalker_SetProgress_m3015224074 (SplineWalker_t2638870407 * __this, float ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplineWalker::SetPositionState()
extern "C"  void SplineWalker_SetPositionState_m1835703158 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Interval SplineWalker::checkForAttractionPoint()
extern "C"  Interval_t635062501 * SplineWalker_checkForAttractionPoint_m112806402 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SplineWalker::ToTriggerBump()
extern "C"  bool SplineWalker_ToTriggerBump_m769882545 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PositionState SplineWalker::getState()
extern "C"  int32_t SplineWalker_getState_m2072919126 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PositionState SplineWalker::getPrevState()
extern "C"  int32_t SplineWalker_getPrevState_m2636824739 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineWalker::getProgress()
extern "C"  float SplineWalker_getProgress_m3453832713 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Interval SplineWalker::getActiveAttractionPoint()
extern "C"  Interval_t635062501 * SplineWalker_getActiveAttractionPoint_m34895925 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineWalker::getNormalizedDistanceToCenter()
extern "C"  float SplineWalker_getNormalizedDistanceToCenter_m83480120 (SplineWalker_t2638870407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SplineWalker::IsPassing(System.Single,System.Single)
extern "C"  bool SplineWalker_IsPassing_m4086284011 (SplineWalker_t2638870407 * __this, float ___magnitude0, float ___inertiaIntensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineWalker::GetEndFromMagnitude(System.Single,System.Single)
extern "C"  float SplineWalker_GetEndFromMagnitude_m2579693385 (SplineWalker_t2638870407 * __this, float ___magnitude0, float ___inertiaIntensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

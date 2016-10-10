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

// PanHandler
struct PanHandler_t3022430221;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "AssemblyU2DCSharp_GestureState2249240808.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void PanHandler::.ctor()
extern "C"  void PanHandler__ctor_m2161358638 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::Awake()
extern "C"  void PanHandler_Awake_m2398963857 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::Start()
extern "C"  void PanHandler_Start_m1108496430 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::OnEnable()
extern "C"  void PanHandler_OnEnable_m957061528 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::OnDisable()
extern "C"  void PanHandler_OnDisable_m45073557 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::panStartedHandler(System.Object,System.EventArgs)
extern "C"  void PanHandler_panStartedHandler_m2994769228 (PanHandler_t3022430221 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::panHandler(System.Object,System.EventArgs)
extern "C"  void PanHandler_panHandler_m1439279805 (PanHandler_t3022430221 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::panCompletedHandler(System.Object,System.EventArgs)
extern "C"  void PanHandler_panCompletedHandler_m3735617090 (PanHandler_t3022430221 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::Update()
extern "C"  void PanHandler_Update_m9503135 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::FreeMoveZoneInertia()
extern "C"  void PanHandler_FreeMoveZoneInertia_m1074498973 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SlowDown(UnityEngine.Collider)
extern "C"  void PanHandler_SlowDown_m2270236302 (PanHandler_t3022430221 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::Bump()
extern "C"  void PanHandler_Bump_m2736927756 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PanHandler::ToTriggerBump()
extern "C"  bool PanHandler_ToTriggerBump_m3806516971 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetOrientation()
extern "C"  void PanHandler_SetOrientation_m1290393252 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetDirection()
extern "C"  void PanHandler_SetDirection_m2079396179 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::Guide()
extern "C"  void PanHandler_Guide_m3378939976 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetGuideDestination()
extern "C"  void PanHandler_SetGuideDestination_m1216743424 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetNewGuideParams()
extern "C"  void PanHandler_SetNewGuideParams_m1920810416 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::ResetGuideDestination()
extern "C"  void PanHandler_ResetGuideDestination_m578883821 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureState PanHandler::GetGestureState()
extern "C"  int32_t PanHandler_GetGestureState_m1512095765 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PanHandler::GetDifference()
extern "C"  Vector3_t4282066566  PanHandler_GetDifference_m1397881861 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetDifference(UnityEngine.Vector3)
extern "C"  void PanHandler_SetDifference_m1979360558 (PanHandler_t3022430221 * __this, Vector3_t4282066566  ___difference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::SetCollider(UnityEngine.Collider)
extern "C"  void PanHandler_SetCollider_m1203998135 (PanHandler_t3022430221 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanHandler::setGestureDone()
extern "C"  void PanHandler_setGestureDone_m2288355935 (PanHandler_t3022430221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

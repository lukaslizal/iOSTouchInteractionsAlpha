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

// TouchScript.Behaviors.TouchScriptInputModule
struct TouchScriptInputModule_t1248396140;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// TouchScript.ITouch
struct ITouch_t3979129576;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// System.Object
struct Il2CppObject;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Object4170816371.h"
#include "TouchScript_TouchScript_TouchEventArgs1706014890.h"

// System.Void TouchScript.Behaviors.TouchScriptInputModule::.ctor()
extern "C"  void TouchScriptInputModule__ctor_m2130364250 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Behaviors.TouchScriptInputModule::get_HorizontalAxis()
extern "C"  String_t* TouchScriptInputModule_get_HorizontalAxis_m3253077435 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::set_HorizontalAxis(System.String)
extern "C"  void TouchScriptInputModule_set_HorizontalAxis_m4273364150 (TouchScriptInputModule_t1248396140 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Behaviors.TouchScriptInputModule::get_VerticalAxis()
extern "C"  String_t* TouchScriptInputModule_get_VerticalAxis_m2520947917 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::set_VerticalAxis(System.String)
extern "C"  void TouchScriptInputModule_set_VerticalAxis_m563014308 (TouchScriptInputModule_t1248396140 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Behaviors.TouchScriptInputModule::get_SubmitButton()
extern "C"  String_t* TouchScriptInputModule_get_SubmitButton_m3266241856 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::set_SubmitButton(System.String)
extern "C"  void TouchScriptInputModule_set_SubmitButton_m1543058705 (TouchScriptInputModule_t1248396140 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Behaviors.TouchScriptInputModule::get_CancelButton()
extern "C"  String_t* TouchScriptInputModule_get_CancelButton_m447828386 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::set_CancelButton(System.String)
extern "C"  void TouchScriptInputModule_set_CancelButton_m2670557167 (TouchScriptInputModule_t1248396140 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::IsModuleSupported()
extern "C"  bool TouchScriptInputModule_IsModuleSupported_m1438617060 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::ShouldActivateModule()
extern "C"  bool TouchScriptInputModule_ShouldActivateModule_m13491368 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool TouchScriptInputModule_IsPointerOverGameObject_m4008729141 (TouchScriptInputModule_t1248396140 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::ActivateModule()
extern "C"  void TouchScriptInputModule_ActivateModule_m265594089 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::DeactivateModule()
extern "C"  void TouchScriptInputModule_DeactivateModule_m3166411050 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::Process()
extern "C"  void TouchScriptInputModule_Process_m1428253031 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TouchScript.Behaviors.TouchScriptInputModule::ToString()
extern "C"  String_t* TouchScriptInputModule_ToString_m545886649 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::raycastPointer(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchScriptInputModule_raycastPointer_m3156942176 (TouchScriptInputModule_t1248396140 * __this, PointerEventData_t1848751023 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::processBegan(TouchScript.ITouch)
extern "C"  void TouchScriptInputModule_processBegan_m464040434 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::processMove(TouchScript.ITouch)
extern "C"  void TouchScriptInputModule_processMove_m3004785054 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::processEnded(TouchScript.ITouch)
extern "C"  void TouchScriptInputModule_processEnded_m1104160379 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::getPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
extern "C"  bool TouchScriptInputModule_getPointerData_m1351377857 (TouchScriptInputModule_t1248396140 * __this, int32_t ___id0, PointerEventData_t1848751023 ** ___data1, bool ___create2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::removePointerData(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchScriptInputModule_removePointerData_m3254892067 (TouchScriptInputModule_t1248396140 * __this, PointerEventData_t1848751023 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData TouchScript.Behaviors.TouchScriptInputModule::getLastPointerEventData(System.Int32)
extern "C"  PointerEventData_t1848751023 * TouchScriptInputModule_getLastPointerEventData_m2592391869 (TouchScriptInputModule_t1248396140 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::clearSelection()
extern "C"  void TouchScriptInputModule_clearSelection_m1427389769 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::deselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void TouchScriptInputModule_deselectIfSelectionChanged_m1142589372 (TouchScriptInputModule_t1248396140 * __this, GameObject_t3674682005 * ___currentOverGo0, BaseEventData_t2054899105 * ___pointerEvent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::allowMoveEventProcessing(System.Single)
extern "C"  bool TouchScriptInputModule_allowMoveEventProcessing_m855628066 (TouchScriptInputModule_t1248396140 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::shouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  bool TouchScriptInputModule_shouldStartDrag_m795136569 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___pressPos0, Vector2_t4282066565  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::sendSubmitEventToSelectedObject()
extern "C"  bool TouchScriptInputModule_sendSubmitEventToSelectedObject_m664746459 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Behaviors.TouchScriptInputModule::getRawMoveVector()
extern "C"  Vector2_t4282066565  TouchScriptInputModule_getRawMoveVector_m1179973611 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::sendMoveEventToSelectedObject()
extern "C"  bool TouchScriptInputModule_sendMoveEventToSelectedObject_m1300054722 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Behaviors.TouchScriptInputModule::sendUpdateEventToSelectedObject()
extern "C"  bool TouchScriptInputModule_sendUpdateEventToSelectedObject_m211290634 (TouchScriptInputModule_t1248396140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchScriptInputModule_touchesBeganHandler_m1901423572 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchScriptInputModule_touchesMovedHandler_m1644941586 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchScriptInputModule_touchesEndedHandler_m3401207787 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Behaviors.TouchScriptInputModule::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchScriptInputModule_touchesCancelledHandler_m2108070964 (TouchScriptInputModule_t1248396140 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

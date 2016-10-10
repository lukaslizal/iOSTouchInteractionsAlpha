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

// TouchScript.TouchManager
struct TouchManager_t3931142912;
// TouchScript.ITouchManager
struct ITouchManager_t3852293377;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t1943414159;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Object
struct Il2CppObject;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;
// System.EventArgs
struct EventArgs_t2540831021;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_TouchManager_MessageType1717756772.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Object4170816371.h"
#include "TouchScript_TouchScript_TouchEventArgs1706014890.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void TouchScript.TouchManager::.ctor()
extern "C"  void TouchManager__ctor_m2920841061 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::.cctor()
extern "C"  void TouchManager__cctor_m4164630760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouchManager TouchScript.TouchManager::get_Instance()
extern "C"  Il2CppObject * TouchManager_get_Instance_m2802248349 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManager::get_DisplayDevice()
extern "C"  Il2CppObject * TouchManager_get_DisplayDevice_m2152412589 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
extern "C"  void TouchManager_set_DisplayDevice_m556916334 (TouchManager_t3931142912 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManager::get_ShouldCreateCameraLayer()
extern "C"  bool TouchManager_get_ShouldCreateCameraLayer_m4166428427 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_ShouldCreateCameraLayer(System.Boolean)
extern "C"  void TouchManager_set_ShouldCreateCameraLayer_m3240288122 (TouchManager_t3931142912 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManager::get_UseSendMessage()
extern "C"  bool TouchManager_get_UseSendMessage_m4135519116 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_UseSendMessage(System.Boolean)
extern "C"  void TouchManager_set_UseSendMessage_m3131474635 (TouchManager_t3931142912 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.TouchManager/MessageType TouchScript.TouchManager::get_SendMessageEvents()
extern "C"  int32_t TouchManager_get_SendMessageEvents_m2714301505 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_SendMessageEvents(TouchScript.TouchManager/MessageType)
extern "C"  void TouchManager_set_SendMessageEvents_m1534716698 (TouchManager_t3931142912 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TouchScript.TouchManager::get_SendMessageTarget()
extern "C"  GameObject_t3674682005 * TouchManager_get_SendMessageTarget_m493843165 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::set_SendMessageTarget(UnityEngine.GameObject)
extern "C"  void TouchManager_set_SendMessageTarget_m2881990126 (TouchManager_t3931142912 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManager::IsInvalidPosition(UnityEngine.Vector2)
extern "C"  bool TouchManager_IsInvalidPosition_m1627484685 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::Awake()
extern "C"  void TouchManager_Awake_m3158446280 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::OnEnable()
extern "C"  void TouchManager_OnEnable_m810209793 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::OnDisable()
extern "C"  void TouchManager_OnDisable_m4082604364 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::updateSubscription()
extern "C"  void TouchManager_updateSubscription_m903981989 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::removeSubscriptions()
extern "C"  void TouchManager_removeSubscriptions_m148985205 (TouchManager_t3931142912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchManager_touchesBeganHandler_m1821953439 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchManager_touchesMovedHandler_m1565471453 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchManager_touchesEndedHandler_m3321737654 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::touchesCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void TouchManager_touchesCancelledHandler_m2172526719 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::frameStartedhandler(System.Object,System.EventArgs)
extern "C"  void TouchManager_frameStartedhandler_m1382307123 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManager::frameFinishedHandler(System.Object,System.EventArgs)
extern "C"  void TouchManager_frameFinishedHandler_m2932573956 (TouchManager_t3931142912 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

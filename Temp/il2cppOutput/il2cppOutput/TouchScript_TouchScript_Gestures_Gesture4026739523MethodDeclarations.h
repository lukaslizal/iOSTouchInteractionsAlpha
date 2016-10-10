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

// TouchScript.Gestures.Gesture
struct Gesture_t4026739523;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t3672855019;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t288588759;
// TouchScript.IGestureManager
struct IGestureManager_t1365031543;
// TouchScript.ITouchManager
struct ITouchManager_t3852293377;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// TouchScript.ITouch
struct ITouch_t3979129576;
// System.Object
struct Il2CppObject;
// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t3527904473;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "TouchScript_TouchScript_Gestures_Gesture_GestureSt1286634734.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Gestures_Gesture_TouchesNu2411368978.h"
#include "mscorlib_System_Object4170816371.h"
#include "TouchScript_TouchScript_Gestures_GestureStateChang3527904473.h"

// System.Void TouchScript.Gestures.Gesture::.ctor()
extern "C"  void Gesture__ctor_m40889646 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::add_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
extern "C"  void Gesture_add_StateChanged_m1332499544 (Gesture_t4026739523 * __this, EventHandler_1_t3672855019 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::remove_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
extern "C"  void Gesture_remove_StateChanged_m1488759493 (Gesture_t4026739523 * __this, EventHandler_1_t3672855019 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::add_Cancelled(System.EventHandler`1<System.EventArgs>)
extern "C"  void Gesture_add_Cancelled_m1715653993 (Gesture_t4026739523 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::remove_Cancelled(System.EventHandler`1<System.EventArgs>)
extern "C"  void Gesture_remove_Cancelled_m870212124 (Gesture_t4026739523 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.Gesture::get_MinTouches()
extern "C"  int32_t Gesture_get_MinTouches_m2957360544 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_MinTouches(System.Int32)
extern "C"  void Gesture_set_MinTouches_m823259103 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.Gesture::get_MaxTouches()
extern "C"  int32_t Gesture_get_MaxTouches_m2482934478 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_MaxTouches(System.Int32)
extern "C"  void Gesture_set_MaxTouches_m549351437 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::get_RequireGestureToFail()
extern "C"  Gesture_t4026739523 * Gesture_get_RequireGestureToFail_m1886221608 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_RequireGestureToFail(TouchScript.Gestures.Gesture)
extern "C"  void Gesture_set_RequireGestureToFail_m1370808551 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_CombineTouches()
extern "C"  bool Gesture_get_CombineTouches_m3076286329 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_CombineTouches(System.Boolean)
extern "C"  void Gesture_set_CombineTouches_m401947128 (Gesture_t4026739523 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Gesture::get_CombineTouchesInterval()
extern "C"  float Gesture_get_CombineTouchesInterval_m679885374 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_CombineTouchesInterval(System.Single)
extern "C"  void Gesture_set_CombineTouchesInterval_m1914362245 (Gesture_t4026739523 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_UseSendMessage()
extern "C"  bool Gesture_get_UseSendMessage_m1943293539 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_UseSendMessage(System.Boolean)
extern "C"  void Gesture_set_UseSendMessage_m2083635042 (Gesture_t4026739523 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::get_SendStateChangeMessages()
extern "C"  bool Gesture_get_SendStateChangeMessages_m468723292 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_SendStateChangeMessages(System.Boolean)
extern "C"  void Gesture_set_SendStateChangeMessages_m438454027 (Gesture_t4026739523 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TouchScript.Gestures.Gesture::get_SendMessageTarget()
extern "C"  GameObject_t3674682005 * Gesture_get_SendMessageTarget_m3221847334 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_SendMessageTarget(UnityEngine.GameObject)
extern "C"  void Gesture_set_SendMessageTarget_m1105689847 (Gesture_t4026739523 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_State()
extern "C"  int32_t Gesture_get_State_m165337775 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_State(TouchScript.Gestures.Gesture/GestureState)
extern "C"  void Gesture_set_State_m402504900 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_PreviousState()
extern "C"  int32_t Gesture_get_PreviousState_m3721926328 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_PreviousState(TouchScript.Gestures.Gesture/GestureState)
extern "C"  void Gesture_set_PreviousState_m1485168603 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition()
extern "C"  Vector2_t4282066565  Gesture_get_ScreenPosition_m1302061167 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousScreenPosition()
extern "C"  Vector2_t4282066565  Gesture_get_PreviousScreenPosition_m4063430790 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_NormalizedScreenPosition()
extern "C"  Vector2_t4282066565  Gesture_get_NormalizedScreenPosition_m816985670 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_PreviousNormalizedScreenPosition()
extern "C"  Vector2_t4282066565  Gesture_get_PreviousNormalizedScreenPosition_m1627614621 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.Gestures.Gesture::get_ActiveTouches()
extern "C"  Il2CppObject* Gesture_get_ActiveTouches_m1541547206 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.Gestures.Gesture::get_NumTouches()
extern "C"  int32_t Gesture_get_NumTouches_m3194376940 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::get_Delegate()
extern "C"  Il2CppObject * Gesture_get_Delegate_m1308849008 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_Delegate(TouchScript.IGestureDelegate)
extern "C"  void Gesture_set_Delegate_m3023126319 (Gesture_t4026739523 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureManager TouchScript.Gestures.Gesture::get_gestureManager()
extern "C"  Il2CppObject * Gesture_get_gestureManager_m3364005613 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouchManager TouchScript.Gestures.Gesture::get_touchManager()
extern "C"  Il2CppObject * Gesture_get_touchManager_m265828909 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_touchManager(TouchScript.ITouchManager)
extern "C"  void Gesture_set_touchManager_m806281566 (Gesture_t4026739523 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/TouchesNumState TouchScript.Gestures.Gesture::get_touchesNumState()
extern "C"  int32_t Gesture_get_touchesNumState_m360122424 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::set_touchesNumState(TouchScript.Gestures.Gesture/TouchesNumState)
extern "C"  void Gesture_set_touchesNumState_m1447550389 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::AddFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C"  void Gesture_AddFriendlyGesture_m2695700330 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::IsFriendly(TouchScript.Gestures.Gesture)
extern "C"  bool Gesture_IsFriendly_m536907470 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult()
extern "C"  bool Gesture_GetTargetHitResult_m3864724939 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(TouchScript.Hit.ITouchHit&)
extern "C"  bool Gesture_GetTargetHitResult_m3504469187 (Gesture_t4026739523 * __this, Il2CppObject ** ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2)
extern "C"  bool Gesture_GetTargetHitResult_m899745807 (Gesture_t4026739523 * __this, Vector2_t4282066565  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::GetTargetHitResult(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C"  bool Gesture_GetTargetHitResult_m1616056911 (Gesture_t4026739523 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::HasTouch(TouchScript.ITouch)
extern "C"  bool Gesture_HasTouch_m369487277 (Gesture_t4026739523 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C"  bool Gesture_CanPreventGesture_m3165019000 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C"  bool Gesture_CanBePreventedByGesture_m1494692613 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C"  bool Gesture_ShouldReceiveTouch_m3581571607 (Gesture_t4026739523 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::ShouldBegin()
extern "C"  bool Gesture_ShouldBegin_m4141875990 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::Cancel(System.Boolean,System.Boolean)
extern "C"  void Gesture_Cancel_m58565142 (Gesture_t4026739523 * __this, bool ___cancelTouches0, bool ___redispatchTouches1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::Cancel()
extern "C"  void Gesture_Cancel_m1548671248 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::Awake()
extern "C"  void Gesture_Awake_m278494865 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnEnable()
extern "C"  void Gesture_OnEnable_m444310424 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnDisable()
extern "C"  void Gesture_OnDisable_m1329658517 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::OnDestroy()
extern "C"  void Gesture_OnDestroy_m3507190567 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_SetState(TouchScript.Gestures.Gesture/GestureState)
extern "C"  void Gesture_INTERNAL_SetState_m2134440263 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_ResetGesture()
extern "C"  void Gesture_INTERNAL_ResetGesture_m2515980488 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_TouchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_INTERNAL_TouchesBegan_m3186251073 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_TouchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_INTERNAL_TouchesMoved_m3014733379 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_TouchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_INTERNAL_TouchesEnded_m2906126666 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_TouchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_INTERNAL_TouchesCancelled_m3023009505 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::INTERNAL_RemoveFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C"  void Gesture_INTERNAL_RemoveFriendlyGesture_m1416518693 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::shouldCacheTouchPosition(TouchScript.ITouch)
extern "C"  bool Gesture_shouldCacheTouchPosition_m1592370433 (Gesture_t4026739523 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.Gesture::setState(TouchScript.Gestures.Gesture/GestureState)
extern "C"  bool Gesture_setState_m1391669299 (Gesture_t4026739523 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_touchesBegan_m3493949993 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_touchesMoved_m3322432299 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_touchesEnded_m3213825586 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::touchesCancelled(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void Gesture_touchesCancelled_m1516101577 (Gesture_t4026739523 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::reset()
extern "C"  void Gesture_reset_m317636603 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onPossible()
extern "C"  void Gesture_onPossible_m1069034214 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onBegan()
extern "C"  void Gesture_onBegan_m3685637182 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onChanged()
extern "C"  void Gesture_onChanged_m1307824001 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onRecognized()
extern "C"  void Gesture_onRecognized_m2186475723 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onFailed()
extern "C"  void Gesture_onFailed_m1779068850 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::onCancelled()
extern "C"  void Gesture_onCancelled_m2780520414 (Gesture_t4026739523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::registerFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C"  void Gesture_registerFriendlyGesture_m1586975678 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::unregisterFriendlyGesture(TouchScript.Gestures.Gesture)
extern "C"  void Gesture_unregisterFriendlyGesture_m1086247941 (Gesture_t4026739523 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Gesture::requiredToFailGestureStateChangedHandler(System.Object,TouchScript.Gestures.GestureStateChangeEventArgs)
extern "C"  void Gesture_requiredToFailGestureStateChangedHandler_m225843807 (Gesture_t4026739523 * __this, Il2CppObject * ___sender0, GestureStateChangeEventArgs_t3527904473 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

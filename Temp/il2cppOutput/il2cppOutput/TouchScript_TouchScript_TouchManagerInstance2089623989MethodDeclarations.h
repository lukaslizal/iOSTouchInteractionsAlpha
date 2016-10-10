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

// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t2089623989;
// System.EventHandler
struct EventHandler_t2463957060;
// System.EventHandler`1<TouchScript.TouchEventArgs>
struct EventHandler_1_t1850965436;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t1943414159;
// System.Collections.Generic.IList`1<TouchScript.Layers.TouchLayer>
struct IList_1_t3029329183;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;
// UnityEngine.Transform
struct Transform_t1659122786;
// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// TouchScript.ITouch
struct ITouch_t3979129576;
// TouchScript.Tags
struct Tags_t4162305963;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t4259543283;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>
struct List_1_t1235727750;
// TouchScript.TouchPoint
struct TouchPoint_t2891357731;
// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t1052347832;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "TouchScript_TouchScript_Layers_TouchLayer334681980.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Tags4162305963.h"
#include "TouchScript_TouchScript_TouchPoint2891357731.h"

// System.Void TouchScript.TouchManagerInstance::.ctor()
extern "C"  void TouchManagerInstance__ctor_m2663350352 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::.cctor()
extern "C"  void TouchManagerInstance__cctor_m477386077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_FrameStarted(System.EventHandler)
extern "C"  void TouchManagerInstance_add_FrameStarted_m3463109437 (TouchManagerInstance_t2089623989 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_FrameStarted(System.EventHandler)
extern "C"  void TouchManagerInstance_remove_FrameStarted_m2616314790 (TouchManagerInstance_t2089623989 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_FrameFinished(System.EventHandler)
extern "C"  void TouchManagerInstance_add_FrameFinished_m1368848436 (TouchManagerInstance_t2089623989 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_FrameFinished(System.EventHandler)
extern "C"  void TouchManagerInstance_remove_FrameFinished_m888018155 (TouchManagerInstance_t2089623989 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_add_TouchesBegan_m3609356662 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesBegan(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_remove_TouchesBegan_m2237627423 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_add_TouchesMoved_m1943303988 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesMoved(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_remove_TouchesMoved_m571574749 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_add_TouchesEnded_m1792975821 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesEnded(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_remove_TouchesEnded_m421246582 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::add_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_add_TouchesCancelled_m1257629142 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::remove_TouchesCancelled(System.EventHandler`1<TouchScript.TouchEventArgs>)
extern "C"  void TouchManagerInstance_remove_TouchesCancelled_m2577890303 (TouchManagerInstance_t2089623989 * __this, EventHandler_1_t1850965436 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::get_Instance()
extern "C"  TouchManagerInstance_t2089623989 * TouchManagerInstance_get_Instance_m4218317952 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::get_DisplayDevice()
extern "C"  Il2CppObject * TouchManagerInstance_get_DisplayDevice_m2935857944 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::set_DisplayDevice(TouchScript.Devices.Display.IDisplayDevice)
extern "C"  void TouchManagerInstance_set_DisplayDevice_m2667782425 (TouchManagerInstance_t2089623989 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.TouchManagerInstance::get_DPI()
extern "C"  float TouchManagerInstance_get_DPI_m1446707926 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::get_ShouldCreateCameraLayer()
extern "C"  bool TouchManagerInstance_get_ShouldCreateCameraLayer_m597705142 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::set_ShouldCreateCameraLayer(System.Boolean)
extern "C"  void TouchManagerInstance_set_ShouldCreateCameraLayer_m3042510565 (TouchManagerInstance_t2089623989 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::get_Layers()
extern "C"  Il2CppObject* TouchManagerInstance_get_Layers_m4204907515 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.TouchManagerInstance::get_DotsPerCentimeter()
extern "C"  float TouchManagerInstance_get_DotsPerCentimeter_m1460121908 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TouchScript.TouchManagerInstance::get_NumberOfTouches()
extern "C"  int32_t TouchManagerInstance_get_NumberOfTouches_m1642323468 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<TouchScript.ITouch> TouchScript.TouchManagerInstance::get_ActiveTouches()
extern "C"  Il2CppObject* TouchManagerInstance_get_ActiveTouches_m3090155240 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer)
extern "C"  bool TouchManagerInstance_AddLayer_m212864584 (TouchManagerInstance_t2089623989 * __this, TouchLayer_t334681980 * ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::AddLayer(TouchScript.Layers.TouchLayer,System.Int32)
extern "C"  bool TouchManagerInstance_AddLayer_m2816115599 (TouchManagerInstance_t2089623989 * __this, TouchLayer_t334681980 * ___layer0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::RemoveLayer(TouchScript.Layers.TouchLayer)
extern "C"  bool TouchManagerInstance_RemoveLayer_m1055244937 (TouchManagerInstance_t2089623989 * __this, TouchLayer_t334681980 * ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::ChangeLayerIndex(System.Int32,System.Int32)
extern "C"  void TouchManagerInstance_ChangeLayerIndex_m604336833 (TouchManagerInstance_t2089623989 * __this, int32_t ___at0, int32_t ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2)
extern "C"  Transform_t1659122786 * TouchManagerInstance_GetHitTarget_m2421591962 (TouchManagerInstance_t2089623989 * __this, Vector2_t4282066565  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&)
extern "C"  bool TouchManagerInstance_GetHitTarget_m3721828530 (TouchManagerInstance_t2089623989 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::GetHitTarget(UnityEngine.Vector2,TouchScript.Hit.ITouchHit&,TouchScript.Layers.TouchLayer&)
extern "C"  bool TouchManagerInstance_GetHitTarget_m2085658696 (TouchManagerInstance_t2089623989 * __this, Vector2_t4282066565  ___position0, Il2CppObject ** ___hit1, TouchLayer_t334681980 ** ___layer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::CancelTouch(System.Int32,System.Boolean)
extern "C"  void TouchManagerInstance_CancelTouch_m2588409561 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, bool ___redispatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::CancelTouch(System.Int32)
extern "C"  void TouchManagerInstance_CancelTouch_m807045156 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.TouchManagerInstance::INTERNAL_BeginTouch(UnityEngine.Vector2)
extern "C"  Il2CppObject * TouchManagerInstance_INTERNAL_BeginTouch_m2542707727 (TouchManagerInstance_t2089623989 * __this, Vector2_t4282066565  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.ITouch TouchScript.TouchManagerInstance::INTERNAL_BeginTouch(UnityEngine.Vector2,TouchScript.Tags)
extern "C"  Il2CppObject * TouchManagerInstance_INTERNAL_BeginTouch_m4236601114 (TouchManagerInstance_t2089623989 * __this, Vector2_t4282066565  ___position0, Tags_t4162305963 * ___tags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::INTERNAL_UpdateTouch(System.Int32)
extern "C"  void TouchManagerInstance_INTERNAL_UpdateTouch_m4233919097 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::INTERNAL_MoveTouch(System.Int32,UnityEngine.Vector2)
extern "C"  void TouchManagerInstance_INTERNAL_MoveTouch_m4144940453 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, Vector2_t4282066565  ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::INTERNAL_EndTouch(System.Int32)
extern "C"  void TouchManagerInstance_INTERNAL_EndTouch_m3883788901 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::INTERNAL_CancelTouch(System.Int32)
extern "C"  void TouchManagerInstance_INTERNAL_CancelTouch_m2018614568 (TouchManagerInstance_t2089623989 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::Awake()
extern "C"  void TouchManagerInstance_Awake_m2900955571 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::OnLevelWasLoaded(System.Int32)
extern "C"  void TouchManagerInstance_OnLevelWasLoaded_m2948079342 (TouchManagerInstance_t2089623989 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TouchScript.TouchManagerInstance::lateAwake()
extern "C"  Il2CppObject * TouchManagerInstance_lateAwake_m1680551309 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::Update()
extern "C"  void TouchManagerInstance_Update_m2686344381 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::OnApplicationQuit()
extern "C"  void TouchManagerInstance_OnApplicationQuit_m1903818190 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateDPI()
extern "C"  void TouchManagerInstance_updateDPI_m3414018530 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateLayers()
extern "C"  void TouchManagerInstance_updateLayers_m2598552703 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::createCameraLayer()
extern "C"  void TouchManagerInstance_createCameraLayer_m3227623582 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::createTouchInput()
extern "C"  void TouchManagerInstance_createTouchInput_m48471675 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateBegan(System.Collections.Generic.List`1<TouchScript.TouchPoint>)
extern "C"  void TouchManagerInstance_updateBegan_m2372722321 (TouchManagerInstance_t2089623989 * __this, List_1_t4259543283 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateUpdated(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void TouchManagerInstance_updateUpdated_m2214452033 (TouchManagerInstance_t2089623989 * __this, List_1_t2522024052 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateEnded(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void TouchManagerInstance_updateEnded_m3688696354 (TouchManagerInstance_t2089623989 * __this, List_1_t2522024052 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateCancelled(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void TouchManagerInstance_updateCancelled_m2662673003 (TouchManagerInstance_t2089623989 * __this, List_1_t2522024052 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateManuallyCancelled(System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>)
extern "C"  void TouchManagerInstance_updateManuallyCancelled_m3990012861 (TouchManagerInstance_t2089623989 * __this, List_1_t1235727750 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::updateTouches()
extern "C"  void TouchManagerInstance_updateTouches_m978643634 (TouchManagerInstance_t2089623989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::<touchPointPool>m__B(TouchScript.TouchPoint)
extern "C"  void TouchManagerInstance_U3CtouchPointPoolU3Em__B_m1322395913 (Il2CppObject * __this /* static, unused */, TouchPoint_t2891357731 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.TouchManagerInstance::<touchListPool>m__C()
extern "C"  List_1_t1052347832 * TouchManagerInstance_U3CtouchListPoolU3Em__C_m1830681592 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::<touchListPool>m__D(System.Collections.Generic.List`1<TouchScript.ITouch>)
extern "C"  void TouchManagerInstance_U3CtouchListPoolU3Em__D_m1823501638 (Il2CppObject * __this /* static, unused */, List_1_t1052347832 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::<touchPointListPool>m__E()
extern "C"  List_1_t4259543283 * TouchManagerInstance_U3CtouchPointListPoolU3Em__E_m527445867 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::<touchPointListPool>m__F(System.Collections.Generic.List`1<TouchScript.TouchPoint>)
extern "C"  void TouchManagerInstance_U3CtouchPointListPoolU3Em__F_m4264099459 (Il2CppObject * __this /* static, unused */, List_1_t4259543283 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> TouchScript.TouchManagerInstance::<intListPool>m__10()
extern "C"  List_1_t2522024052 * TouchManagerInstance_U3CintListPoolU3Em__10_m1244293841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::<intListPool>m__11(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void TouchManagerInstance_U3CintListPoolU3Em__11_m3945812113 (Il2CppObject * __this /* static, unused */, List_1_t2522024052 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch> TouchScript.TouchManagerInstance::<cancelledListPool>m__12()
extern "C"  List_1_t1235727750 * TouchManagerInstance_U3CcancelledListPoolU3Em__12_m1055860866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.TouchManagerInstance::<cancelledListPool>m__13(System.Collections.Generic.List`1<TouchScript.TouchManagerInstance/CancelledTouch>)
extern "C"  void TouchManagerInstance_U3CcancelledListPoolU3Em__13_m3416397198 (Il2CppObject * __this /* static, unused */, List_1_t1235727750 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.TouchManagerInstance::<updateLayers>m__16(TouchScript.Layers.TouchLayer)
extern "C"  bool TouchManagerInstance_U3CupdateLayersU3Em__16_m3539149307 (Il2CppObject * __this /* static, unused */, TouchLayer_t334681980 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

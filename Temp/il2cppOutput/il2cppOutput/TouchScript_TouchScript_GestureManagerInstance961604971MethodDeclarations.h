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

// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t961604971;
// TouchScript.IGestureManager
struct IGestureManager_t1365031543;
// TouchScript.Gestures.Gesture
struct Gesture_t4026739523;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t2054938922;
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>
struct Action_2_t981648151;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t1099957779;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t1706014890;
// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t1052347832;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_Gesture_GestureSt1286634734.h"
#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "TouchScript_TouchScript_TouchEventArgs1706014890.h"

// System.Void TouchScript.GestureManagerInstance::.ctor()
extern "C"  void GestureManagerInstance__ctor_m2170199130 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::.cctor()
extern "C"  void GestureManagerInstance__cctor_m2369567379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.IGestureManager TouchScript.GestureManagerInstance::get_Instance()
extern "C"  Il2CppObject * GestureManagerInstance_get_Instance_m1052571410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::Awake()
extern "C"  void GestureManagerInstance_Awake_m2407804349 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnEnable()
extern "C"  void GestureManagerInstance_OnEnable_m2331153644 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnDisable()
extern "C"  void GestureManagerInstance_OnDisable_m3987223489 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::OnApplicationQuit()
extern "C"  void GestureManagerInstance_OnApplicationQuit_m3915993816 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TouchScript.Gestures.Gesture/GestureState TouchScript.GestureManagerInstance::INTERNAL_GestureChangeState(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture/GestureState)
extern "C"  int32_t GestureManagerInstance_INTERNAL_GestureChangeState_m4163183106 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, int32_t ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::doUpdateBegan(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void GestureManagerInstance_doUpdateBegan_m3343891305 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, Il2CppObject* ___touchPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::doUpdateMoved(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void GestureManagerInstance_doUpdateMoved_m236771751 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, Il2CppObject* ___touchPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::doUpdateEnded(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void GestureManagerInstance_doUpdateEnded_m2066128896 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, Il2CppObject* ___touchPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::doUpdateCancelled(TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void GestureManagerInstance_doUpdateCancelled_m1039554377 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, Il2CppObject* ___touchPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::update(System.Collections.Generic.IList`1<TouchScript.ITouch>,System.Action`1<UnityEngine.Transform>,System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.ITouch>>)
extern "C"  void GestureManagerInstance_update_m1703437762 (GestureManagerInstance_t961604971 * __this, Il2CppObject* ___updatedTouches0, Action_1_t2054938922 * ___process1, Action_2_t981648151 * ___dispatch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::processTarget(UnityEngine.Transform)
extern "C"  void GestureManagerInstance_processTarget_m911168197 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::processTargetBegan(UnityEngine.Transform)
extern "C"  void GestureManagerInstance_processTargetBegan_m3172779490 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::resetGestures()
extern "C"  void GestureManagerInstance_resetGestures_m2968332049 (GestureManagerInstance_t961604971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::getHierarchyEndingWith(UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>)
extern "C"  void GestureManagerInstance_getHierarchyEndingWith_m1168136892 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, List_1_t1099957779 * ___outputList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::getHierarchyBeginningWith(UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>,System.Boolean)
extern "C"  void GestureManagerInstance_getHierarchyBeginningWith_m3477152167 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, List_1_t1099957779 * ___outputList1, bool ___includeSelf2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::getHierarchyContaining(UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>)
extern "C"  void GestureManagerInstance_getHierarchyContaining_m2425779611 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, List_1_t1099957779 * ___outputList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::getEnabledGesturesOnTarget(UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>)
extern "C"  void GestureManagerInstance_getEnabledGesturesOnTarget_m368944803 (GestureManagerInstance_t961604971 * __this, Transform_t1659122786 * ___target0, List_1_t1099957779 * ___outputList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.GestureManagerInstance::gestureIsActive(TouchScript.Gestures.Gesture)
extern "C"  bool GestureManagerInstance_gestureIsActive_m2008564092 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.GestureManagerInstance::recognizeGestureIfNotPrevented(TouchScript.Gestures.Gesture)
extern "C"  bool GestureManagerInstance_recognizeGestureIfNotPrevented_m1263956905 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::failGesture(TouchScript.Gestures.Gesture)
extern "C"  void GestureManagerInstance_failGesture_m2409799610 (GestureManagerInstance_t961604971 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::frameFinishedHandler(System.Object,System.EventArgs)
extern "C"  void GestureManagerInstance_frameFinishedHandler_m3518067759 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___eventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::frameStartedHandler(System.Object,System.EventArgs)
extern "C"  void GestureManagerInstance_frameStartedHandler_m1000844936 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___eventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchBeganHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void GestureManagerInstance_touchBeganHandler_m1685745702 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchMovedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void GestureManagerInstance_touchMovedHandler_m1429263716 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchEndedHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void GestureManagerInstance_touchEndedHandler_m3185529917 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::touchCancelledHandler(System.Object,TouchScript.TouchEventArgs)
extern "C"  void GestureManagerInstance_touchCancelledHandler_m2469209990 (GestureManagerInstance_t961604971 * __this, Il2CppObject * ___sender0, TouchEventArgs_t1706014890 * ___touchEventArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::<gestureListPool>m__0()
extern "C"  List_1_t1099957779 * GestureManagerInstance_U3CgestureListPoolU3Em__0_m3896755734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<gestureListPool>m__1(System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>)
extern "C"  void GestureManagerInstance_U3CgestureListPoolU3Em__1_m1762707880 (Il2CppObject * __this /* static, unused */, List_1_t1099957779 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.GestureManagerInstance::<touchListPool>m__2()
extern "C"  List_1_t1052347832 * GestureManagerInstance_U3CtouchListPoolU3Em__2_m868498929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<touchListPool>m__3(System.Collections.Generic.List`1<TouchScript.ITouch>)
extern "C"  void GestureManagerInstance_U3CtouchListPoolU3Em__3_m662711341 (Il2CppObject * __this /* static, unused */, List_1_t1052347832 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> TouchScript.GestureManagerInstance::<transformListPool>m__4()
extern "C"  List_1_t3027308338 * GestureManagerInstance_U3CtransformListPoolU3Em__4_m13541733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.GestureManagerInstance::<transformListPool>m__5(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C"  void GestureManagerInstance_U3CtransformListPoolU3Em__5_m1405017037 (Il2CppObject * __this /* static, unused */, List_1_t3027308338 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// TouchScript.Gestures.ReleaseGesture
struct ReleaseGesture_t47048508;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// TouchScript.ITouch
struct ITouch_t3979129576;
// TouchScript.Gestures.Gesture
struct Gesture_t4026739523;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"

// System.Void TouchScript.Gestures.ReleaseGesture::.ctor()
extern "C"  void ReleaseGesture__ctor_m1920398637 (ReleaseGesture_t47048508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::add_Released(System.EventHandler`1<System.EventArgs>)
extern "C"  void ReleaseGesture_add_Released_m2875205366 (ReleaseGesture_t47048508 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::remove_Released(System.EventHandler`1<System.EventArgs>)
extern "C"  void ReleaseGesture_remove_Released_m525803525 (ReleaseGesture_t47048508 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::get_IgnoreChildren()
extern "C"  bool ReleaseGesture_get_IgnoreChildren_m3239674949 (ReleaseGesture_t47048508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::set_IgnoreChildren(System.Boolean)
extern "C"  void ReleaseGesture_set_IgnoreChildren_m2307224732 (ReleaseGesture_t47048508 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C"  bool ReleaseGesture_ShouldReceiveTouch_m896263008 (ReleaseGesture_t47048508 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C"  bool ReleaseGesture_CanPreventGesture_m3484765263 (ReleaseGesture_t47048508 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.ReleaseGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C"  bool ReleaseGesture_CanBePreventedByGesture_m2928535196 (ReleaseGesture_t47048508 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::touchesEnded(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void ReleaseGesture_touchesEnded_m3156647571 (ReleaseGesture_t47048508 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.ReleaseGesture::onRecognized()
extern "C"  void ReleaseGesture_onRecognized_m3992044524 (ReleaseGesture_t47048508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

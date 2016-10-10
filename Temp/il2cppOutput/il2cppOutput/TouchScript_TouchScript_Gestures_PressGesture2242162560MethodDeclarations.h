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

// TouchScript.Gestures.PressGesture
struct PressGesture_t2242162560;
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

// System.Void TouchScript.Gestures.PressGesture::.ctor()
extern "C"  void PressGesture__ctor_m2899571817 (PressGesture_t2242162560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::add_Pressed(System.EventHandler`1<System.EventArgs>)
extern "C"  void PressGesture_add_Pressed_m1395078941 (PressGesture_t2242162560 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::remove_Pressed(System.EventHandler`1<System.EventArgs>)
extern "C"  void PressGesture_remove_Pressed_m2797462822 (PressGesture_t2242162560 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::get_IgnoreChildren()
extern "C"  bool PressGesture_get_IgnoreChildren_m330779529 (PressGesture_t2242162560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::set_IgnoreChildren(System.Boolean)
extern "C"  void PressGesture_set_IgnoreChildren_m1560203232 (PressGesture_t2242162560 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::ShouldReceiveTouch(TouchScript.ITouch)
extern "C"  bool PressGesture_ShouldReceiveTouch_m235397540 (PressGesture_t2242162560 * __this, Il2CppObject * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::CanPreventGesture(TouchScript.Gestures.Gesture)
extern "C"  bool PressGesture_CanPreventGesture_m926489227 (PressGesture_t2242162560 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchScript.Gestures.PressGesture::CanBePreventedByGesture(TouchScript.Gestures.Gesture)
extern "C"  bool PressGesture_CanBePreventedByGesture_m3514111960 (PressGesture_t2242162560 * __this, Gesture_t4026739523 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::touchesBegan(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void PressGesture_touchesBegan_m3754853582 (PressGesture_t2242162560 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.PressGesture::onRecognized()
extern "C"  void PressGesture_onRecognized_m948857136 (PressGesture_t2242162560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

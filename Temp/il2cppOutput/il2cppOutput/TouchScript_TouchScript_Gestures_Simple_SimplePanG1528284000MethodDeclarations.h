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

// TouchScript.Gestures.Simple.SimplePanGesture
struct SimplePanGesture_t1528284000;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;
// System.Collections.Generic.IList`1<TouchScript.ITouch>
struct IList_1_t2378809483;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TouchScript.Gestures.Simple.SimplePanGesture::.ctor()
extern "C"  void SimplePanGesture__ctor_m1642711933 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_add_PanStarted_m3726597695 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_remove_PanStarted_m2669084910 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_Panned(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_add_Panned_m2069005075 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_Panned(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_remove_Panned_m858576194 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::add_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_add_PanCompleted_m3059329397 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::remove_PanCompleted(System.EventHandler`1<System.EventArgs>)
extern "C"  void SimplePanGesture_remove_PanCompleted_m401824868 (SimplePanGesture_t1528284000 * __this, EventHandler_1_t2685781567 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TouchScript.Gestures.Simple.SimplePanGesture::get_MovementThreshold()
extern "C"  float SimplePanGesture_get_MovementThreshold_m2987921250 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_MovementThreshold(System.Single)
extern "C"  void SimplePanGesture_set_MovementThreshold_m389653809 (SimplePanGesture_t1528284000 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_WorldDeltaPosition()
extern "C"  Vector3_t4282066566  SimplePanGesture_get_WorldDeltaPosition_m2523174585 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::set_WorldDeltaPosition(UnityEngine.Vector3)
extern "C"  void SimplePanGesture_set_WorldDeltaPosition_m406870470 (SimplePanGesture_t1528284000 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::get_LocalDeltaPosition()
extern "C"  Vector3_t4282066566  SimplePanGesture_get_LocalDeltaPosition_m3005646272 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_ScreenPosition()
extern "C"  Vector2_t4282066565  SimplePanGesture_get_ScreenPosition_m316499072 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::get_PreviousScreenPosition()
extern "C"  Vector2_t4282066565  SimplePanGesture_get_PreviousScreenPosition_m138144663 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::touchesMoved(System.Collections.Generic.IList`1<TouchScript.ITouch>)
extern "C"  void SimplePanGesture_touchesMoved_m1832886076 (SimplePanGesture_t1528284000 * __this, Il2CppObject* ___touches0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onBegan()
extern "C"  void SimplePanGesture_onBegan_m1143595725 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onChanged()
extern "C"  void SimplePanGesture_onChanged_m2242375248 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::onRecognized()
extern "C"  void SimplePanGesture_onRecognized_m3424662428 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchScript.Gestures.Simple.SimplePanGesture::reset()
extern "C"  void SimplePanGesture_reset_m1919458890 (SimplePanGesture_t1528284000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

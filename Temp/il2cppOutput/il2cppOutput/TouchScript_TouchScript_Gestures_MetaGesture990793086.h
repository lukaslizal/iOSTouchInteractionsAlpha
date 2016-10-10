#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
struct EventHandler_1_t1436226687;

#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.MetaGesture
struct  MetaGesture_t990793086  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchBeganInvoker
	EventHandler_1_t1436226687 * ___touchBeganInvoker_35;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchMovedInvoker
	EventHandler_1_t1436226687 * ___touchMovedInvoker_36;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchEndedInvoker
	EventHandler_1_t1436226687 * ___touchEndedInvoker_37;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::touchCancelledInvoker
	EventHandler_1_t1436226687 * ___touchCancelledInvoker_38;

public:
	inline static int32_t get_offset_of_touchBeganInvoker_35() { return static_cast<int32_t>(offsetof(MetaGesture_t990793086, ___touchBeganInvoker_35)); }
	inline EventHandler_1_t1436226687 * get_touchBeganInvoker_35() const { return ___touchBeganInvoker_35; }
	inline EventHandler_1_t1436226687 ** get_address_of_touchBeganInvoker_35() { return &___touchBeganInvoker_35; }
	inline void set_touchBeganInvoker_35(EventHandler_1_t1436226687 * value)
	{
		___touchBeganInvoker_35 = value;
		Il2CppCodeGenWriteBarrier(&___touchBeganInvoker_35, value);
	}

	inline static int32_t get_offset_of_touchMovedInvoker_36() { return static_cast<int32_t>(offsetof(MetaGesture_t990793086, ___touchMovedInvoker_36)); }
	inline EventHandler_1_t1436226687 * get_touchMovedInvoker_36() const { return ___touchMovedInvoker_36; }
	inline EventHandler_1_t1436226687 ** get_address_of_touchMovedInvoker_36() { return &___touchMovedInvoker_36; }
	inline void set_touchMovedInvoker_36(EventHandler_1_t1436226687 * value)
	{
		___touchMovedInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___touchMovedInvoker_36, value);
	}

	inline static int32_t get_offset_of_touchEndedInvoker_37() { return static_cast<int32_t>(offsetof(MetaGesture_t990793086, ___touchEndedInvoker_37)); }
	inline EventHandler_1_t1436226687 * get_touchEndedInvoker_37() const { return ___touchEndedInvoker_37; }
	inline EventHandler_1_t1436226687 ** get_address_of_touchEndedInvoker_37() { return &___touchEndedInvoker_37; }
	inline void set_touchEndedInvoker_37(EventHandler_1_t1436226687 * value)
	{
		___touchEndedInvoker_37 = value;
		Il2CppCodeGenWriteBarrier(&___touchEndedInvoker_37, value);
	}

	inline static int32_t get_offset_of_touchCancelledInvoker_38() { return static_cast<int32_t>(offsetof(MetaGesture_t990793086, ___touchCancelledInvoker_38)); }
	inline EventHandler_1_t1436226687 * get_touchCancelledInvoker_38() const { return ___touchCancelledInvoker_38; }
	inline EventHandler_1_t1436226687 ** get_address_of_touchCancelledInvoker_38() { return &___touchCancelledInvoker_38; }
	inline void set_touchCancelledInvoker_38(EventHandler_1_t1436226687 * value)
	{
		___touchCancelledInvoker_38 = value;
		Il2CppCodeGenWriteBarrier(&___touchCancelledInvoker_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

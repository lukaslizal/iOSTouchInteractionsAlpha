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
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t2685781567;

#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.PressGesture
struct  PressGesture_t2242162560  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.PressGesture::pressedInvoker
	EventHandler_1_t2685781567 * ___pressedInvoker_32;
	// System.Boolean TouchScript.Gestures.PressGesture::ignoreChildren
	bool ___ignoreChildren_33;

public:
	inline static int32_t get_offset_of_pressedInvoker_32() { return static_cast<int32_t>(offsetof(PressGesture_t2242162560, ___pressedInvoker_32)); }
	inline EventHandler_1_t2685781567 * get_pressedInvoker_32() const { return ___pressedInvoker_32; }
	inline EventHandler_1_t2685781567 ** get_address_of_pressedInvoker_32() { return &___pressedInvoker_32; }
	inline void set_pressedInvoker_32(EventHandler_1_t2685781567 * value)
	{
		___pressedInvoker_32 = value;
		Il2CppCodeGenWriteBarrier(&___pressedInvoker_32, value);
	}

	inline static int32_t get_offset_of_ignoreChildren_33() { return static_cast<int32_t>(offsetof(PressGesture_t2242162560, ___ignoreChildren_33)); }
	inline bool get_ignoreChildren_33() const { return ___ignoreChildren_33; }
	inline bool* get_address_of_ignoreChildren_33() { return &___ignoreChildren_33; }
	inline void set_ignoreChildren_33(bool value)
	{
		___ignoreChildren_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

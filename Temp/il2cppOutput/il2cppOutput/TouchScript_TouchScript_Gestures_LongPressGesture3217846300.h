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
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.LongPressGesture
struct  LongPressGesture_t3217846300  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.LongPressGesture::longPressedInvoker
	EventHandler_1_t2685781567 * ___longPressedInvoker_32;
	// System.Single TouchScript.Gestures.LongPressGesture::timeToPress
	float ___timeToPress_33;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimit
	float ___distanceLimit_34;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_35;
	// UnityEngine.Vector2 TouchScript.Gestures.LongPressGesture::totalMovement
	Vector2_t4282066565  ___totalMovement_36;

public:
	inline static int32_t get_offset_of_longPressedInvoker_32() { return static_cast<int32_t>(offsetof(LongPressGesture_t3217846300, ___longPressedInvoker_32)); }
	inline EventHandler_1_t2685781567 * get_longPressedInvoker_32() const { return ___longPressedInvoker_32; }
	inline EventHandler_1_t2685781567 ** get_address_of_longPressedInvoker_32() { return &___longPressedInvoker_32; }
	inline void set_longPressedInvoker_32(EventHandler_1_t2685781567 * value)
	{
		___longPressedInvoker_32 = value;
		Il2CppCodeGenWriteBarrier(&___longPressedInvoker_32, value);
	}

	inline static int32_t get_offset_of_timeToPress_33() { return static_cast<int32_t>(offsetof(LongPressGesture_t3217846300, ___timeToPress_33)); }
	inline float get_timeToPress_33() const { return ___timeToPress_33; }
	inline float* get_address_of_timeToPress_33() { return &___timeToPress_33; }
	inline void set_timeToPress_33(float value)
	{
		___timeToPress_33 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_34() { return static_cast<int32_t>(offsetof(LongPressGesture_t3217846300, ___distanceLimit_34)); }
	inline float get_distanceLimit_34() const { return ___distanceLimit_34; }
	inline float* get_address_of_distanceLimit_34() { return &___distanceLimit_34; }
	inline void set_distanceLimit_34(float value)
	{
		___distanceLimit_34 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_35() { return static_cast<int32_t>(offsetof(LongPressGesture_t3217846300, ___distanceLimitInPixelsSquared_35)); }
	inline float get_distanceLimitInPixelsSquared_35() const { return ___distanceLimitInPixelsSquared_35; }
	inline float* get_address_of_distanceLimitInPixelsSquared_35() { return &___distanceLimitInPixelsSquared_35; }
	inline void set_distanceLimitInPixelsSquared_35(float value)
	{
		___distanceLimitInPixelsSquared_35 = value;
	}

	inline static int32_t get_offset_of_totalMovement_36() { return static_cast<int32_t>(offsetof(LongPressGesture_t3217846300, ___totalMovement_36)); }
	inline Vector2_t4282066565  get_totalMovement_36() const { return ___totalMovement_36; }
	inline Vector2_t4282066565 * get_address_of_totalMovement_36() { return &___totalMovement_36; }
	inline void set_totalMovement_36(Vector2_t4282066565  value)
	{
		___totalMovement_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

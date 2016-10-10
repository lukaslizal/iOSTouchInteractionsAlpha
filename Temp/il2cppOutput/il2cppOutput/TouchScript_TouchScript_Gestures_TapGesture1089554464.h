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

// TouchScript.Gestures.TapGesture
struct  TapGesture_t1089554464  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TapGesture::tappedInvoker
	EventHandler_1_t2685781567 * ___tappedInvoker_32;
	// System.Int32 TouchScript.Gestures.TapGesture::numberOfTapsRequired
	int32_t ___numberOfTapsRequired_33;
	// System.Single TouchScript.Gestures.TapGesture::timeLimit
	float ___timeLimit_34;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimit
	float ___distanceLimit_35;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_36;
	// System.Boolean TouchScript.Gestures.TapGesture::isActive
	bool ___isActive_37;
	// System.Int32 TouchScript.Gestures.TapGesture::tapsDone
	int32_t ___tapsDone_38;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::startPosition
	Vector2_t4282066565  ___startPosition_39;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::totalMovement
	Vector2_t4282066565  ___totalMovement_40;

public:
	inline static int32_t get_offset_of_tappedInvoker_32() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___tappedInvoker_32)); }
	inline EventHandler_1_t2685781567 * get_tappedInvoker_32() const { return ___tappedInvoker_32; }
	inline EventHandler_1_t2685781567 ** get_address_of_tappedInvoker_32() { return &___tappedInvoker_32; }
	inline void set_tappedInvoker_32(EventHandler_1_t2685781567 * value)
	{
		___tappedInvoker_32 = value;
		Il2CppCodeGenWriteBarrier(&___tappedInvoker_32, value);
	}

	inline static int32_t get_offset_of_numberOfTapsRequired_33() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___numberOfTapsRequired_33)); }
	inline int32_t get_numberOfTapsRequired_33() const { return ___numberOfTapsRequired_33; }
	inline int32_t* get_address_of_numberOfTapsRequired_33() { return &___numberOfTapsRequired_33; }
	inline void set_numberOfTapsRequired_33(int32_t value)
	{
		___numberOfTapsRequired_33 = value;
	}

	inline static int32_t get_offset_of_timeLimit_34() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___timeLimit_34)); }
	inline float get_timeLimit_34() const { return ___timeLimit_34; }
	inline float* get_address_of_timeLimit_34() { return &___timeLimit_34; }
	inline void set_timeLimit_34(float value)
	{
		___timeLimit_34 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_35() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___distanceLimit_35)); }
	inline float get_distanceLimit_35() const { return ___distanceLimit_35; }
	inline float* get_address_of_distanceLimit_35() { return &___distanceLimit_35; }
	inline void set_distanceLimit_35(float value)
	{
		___distanceLimit_35 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_36() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___distanceLimitInPixelsSquared_36)); }
	inline float get_distanceLimitInPixelsSquared_36() const { return ___distanceLimitInPixelsSquared_36; }
	inline float* get_address_of_distanceLimitInPixelsSquared_36() { return &___distanceLimitInPixelsSquared_36; }
	inline void set_distanceLimitInPixelsSquared_36(float value)
	{
		___distanceLimitInPixelsSquared_36 = value;
	}

	inline static int32_t get_offset_of_isActive_37() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___isActive_37)); }
	inline bool get_isActive_37() const { return ___isActive_37; }
	inline bool* get_address_of_isActive_37() { return &___isActive_37; }
	inline void set_isActive_37(bool value)
	{
		___isActive_37 = value;
	}

	inline static int32_t get_offset_of_tapsDone_38() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___tapsDone_38)); }
	inline int32_t get_tapsDone_38() const { return ___tapsDone_38; }
	inline int32_t* get_address_of_tapsDone_38() { return &___tapsDone_38; }
	inline void set_tapsDone_38(int32_t value)
	{
		___tapsDone_38 = value;
	}

	inline static int32_t get_offset_of_startPosition_39() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___startPosition_39)); }
	inline Vector2_t4282066565  get_startPosition_39() const { return ___startPosition_39; }
	inline Vector2_t4282066565 * get_address_of_startPosition_39() { return &___startPosition_39; }
	inline void set_startPosition_39(Vector2_t4282066565  value)
	{
		___startPosition_39 = value;
	}

	inline static int32_t get_offset_of_totalMovement_40() { return static_cast<int32_t>(offsetof(TapGesture_t1089554464, ___totalMovement_40)); }
	inline Vector2_t4282066565  get_totalMovement_40() const { return ___totalMovement_40; }
	inline Vector2_t4282066565 * get_address_of_totalMovement_40() { return &___totalMovement_40; }
	inline void set_totalMovement_40(Vector2_t4282066565  value)
	{
		___totalMovement_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

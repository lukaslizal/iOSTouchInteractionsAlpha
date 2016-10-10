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
// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2>
struct TimedSequence_1_t3109688313;

#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"
#include "TouchScript_TouchScript_Gestures_FlickGesture_Gest1279899271.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.FlickGesture
struct  FlickGesture_t153974456  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.FlickGesture::flickedInvoker
	EventHandler_1_t2685781567 * ___flickedInvoker_32;
	// System.Single TouchScript.Gestures.FlickGesture::flickTime
	float ___flickTime_33;
	// System.Single TouchScript.Gestures.FlickGesture::minDistance
	float ___minDistance_34;
	// System.Single TouchScript.Gestures.FlickGesture::movementThreshold
	float ___movementThreshold_35;
	// TouchScript.Gestures.FlickGesture/GestureDirection TouchScript.Gestures.FlickGesture::direction
	int32_t ___direction_36;
	// System.Boolean TouchScript.Gestures.FlickGesture::moving
	bool ___moving_37;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::movementBuffer
	Vector2_t4282066565  ___movementBuffer_38;
	// System.Boolean TouchScript.Gestures.FlickGesture::isActive
	bool ___isActive_39;
	// TouchScript.Utils.TimedSequence`1<UnityEngine.Vector2> TouchScript.Gestures.FlickGesture::deltaSequence
	TimedSequence_1_t3109688313 * ___deltaSequence_40;
	// UnityEngine.Vector2 TouchScript.Gestures.FlickGesture::<ScreenFlickVector>k__BackingField
	Vector2_t4282066565  ___U3CScreenFlickVectorU3Ek__BackingField_41;
	// System.Single TouchScript.Gestures.FlickGesture::<ScreenFlickTime>k__BackingField
	float ___U3CScreenFlickTimeU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_flickedInvoker_32() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___flickedInvoker_32)); }
	inline EventHandler_1_t2685781567 * get_flickedInvoker_32() const { return ___flickedInvoker_32; }
	inline EventHandler_1_t2685781567 ** get_address_of_flickedInvoker_32() { return &___flickedInvoker_32; }
	inline void set_flickedInvoker_32(EventHandler_1_t2685781567 * value)
	{
		___flickedInvoker_32 = value;
		Il2CppCodeGenWriteBarrier(&___flickedInvoker_32, value);
	}

	inline static int32_t get_offset_of_flickTime_33() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___flickTime_33)); }
	inline float get_flickTime_33() const { return ___flickTime_33; }
	inline float* get_address_of_flickTime_33() { return &___flickTime_33; }
	inline void set_flickTime_33(float value)
	{
		___flickTime_33 = value;
	}

	inline static int32_t get_offset_of_minDistance_34() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___minDistance_34)); }
	inline float get_minDistance_34() const { return ___minDistance_34; }
	inline float* get_address_of_minDistance_34() { return &___minDistance_34; }
	inline void set_minDistance_34(float value)
	{
		___minDistance_34 = value;
	}

	inline static int32_t get_offset_of_movementThreshold_35() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___movementThreshold_35)); }
	inline float get_movementThreshold_35() const { return ___movementThreshold_35; }
	inline float* get_address_of_movementThreshold_35() { return &___movementThreshold_35; }
	inline void set_movementThreshold_35(float value)
	{
		___movementThreshold_35 = value;
	}

	inline static int32_t get_offset_of_direction_36() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___direction_36)); }
	inline int32_t get_direction_36() const { return ___direction_36; }
	inline int32_t* get_address_of_direction_36() { return &___direction_36; }
	inline void set_direction_36(int32_t value)
	{
		___direction_36 = value;
	}

	inline static int32_t get_offset_of_moving_37() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___moving_37)); }
	inline bool get_moving_37() const { return ___moving_37; }
	inline bool* get_address_of_moving_37() { return &___moving_37; }
	inline void set_moving_37(bool value)
	{
		___moving_37 = value;
	}

	inline static int32_t get_offset_of_movementBuffer_38() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___movementBuffer_38)); }
	inline Vector2_t4282066565  get_movementBuffer_38() const { return ___movementBuffer_38; }
	inline Vector2_t4282066565 * get_address_of_movementBuffer_38() { return &___movementBuffer_38; }
	inline void set_movementBuffer_38(Vector2_t4282066565  value)
	{
		___movementBuffer_38 = value;
	}

	inline static int32_t get_offset_of_isActive_39() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___isActive_39)); }
	inline bool get_isActive_39() const { return ___isActive_39; }
	inline bool* get_address_of_isActive_39() { return &___isActive_39; }
	inline void set_isActive_39(bool value)
	{
		___isActive_39 = value;
	}

	inline static int32_t get_offset_of_deltaSequence_40() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___deltaSequence_40)); }
	inline TimedSequence_1_t3109688313 * get_deltaSequence_40() const { return ___deltaSequence_40; }
	inline TimedSequence_1_t3109688313 ** get_address_of_deltaSequence_40() { return &___deltaSequence_40; }
	inline void set_deltaSequence_40(TimedSequence_1_t3109688313 * value)
	{
		___deltaSequence_40 = value;
		Il2CppCodeGenWriteBarrier(&___deltaSequence_40, value);
	}

	inline static int32_t get_offset_of_U3CScreenFlickVectorU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___U3CScreenFlickVectorU3Ek__BackingField_41)); }
	inline Vector2_t4282066565  get_U3CScreenFlickVectorU3Ek__BackingField_41() const { return ___U3CScreenFlickVectorU3Ek__BackingField_41; }
	inline Vector2_t4282066565 * get_address_of_U3CScreenFlickVectorU3Ek__BackingField_41() { return &___U3CScreenFlickVectorU3Ek__BackingField_41; }
	inline void set_U3CScreenFlickVectorU3Ek__BackingField_41(Vector2_t4282066565  value)
	{
		___U3CScreenFlickVectorU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CScreenFlickTimeU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(FlickGesture_t153974456, ___U3CScreenFlickTimeU3Ek__BackingField_42)); }
	inline float get_U3CScreenFlickTimeU3Ek__BackingField_42() const { return ___U3CScreenFlickTimeU3Ek__BackingField_42; }
	inline float* get_address_of_U3CScreenFlickTimeU3Ek__BackingField_42() { return &___U3CScreenFlickTimeU3Ek__BackingField_42; }
	inline void set_U3CScreenFlickTimeU3Ek__BackingField_42(float value)
	{
		___U3CScreenFlickTimeU3Ek__BackingField_42 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

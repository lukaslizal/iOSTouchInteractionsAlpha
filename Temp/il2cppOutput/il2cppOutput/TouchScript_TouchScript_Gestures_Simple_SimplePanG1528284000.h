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

#include "TouchScript_TouchScript_Gestures_Simple_Transform22122184510.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Simple.SimplePanGesture
struct  SimplePanGesture_t1528284000  : public Transform2DGestureBase_t2122184510
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::panStartedInvoker
	EventHandler_1_t2685781567 * ___panStartedInvoker_41;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::pannedInvoker
	EventHandler_1_t2685781567 * ___pannedInvoker_42;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimplePanGesture::panCompletedInvoker
	EventHandler_1_t2685781567 * ___panCompletedInvoker_43;
	// System.Single TouchScript.Gestures.Simple.SimplePanGesture::movementThreshold
	float ___movementThreshold_44;
	// UnityEngine.Vector2 TouchScript.Gestures.Simple.SimplePanGesture::movementBuffer
	Vector2_t4282066565  ___movementBuffer_45;
	// System.Boolean TouchScript.Gestures.Simple.SimplePanGesture::isMoving
	bool ___isMoving_46;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.SimplePanGesture::<WorldDeltaPosition>k__BackingField
	Vector3_t4282066566  ___U3CWorldDeltaPositionU3Ek__BackingField_47;

public:
	inline static int32_t get_offset_of_panStartedInvoker_41() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___panStartedInvoker_41)); }
	inline EventHandler_1_t2685781567 * get_panStartedInvoker_41() const { return ___panStartedInvoker_41; }
	inline EventHandler_1_t2685781567 ** get_address_of_panStartedInvoker_41() { return &___panStartedInvoker_41; }
	inline void set_panStartedInvoker_41(EventHandler_1_t2685781567 * value)
	{
		___panStartedInvoker_41 = value;
		Il2CppCodeGenWriteBarrier(&___panStartedInvoker_41, value);
	}

	inline static int32_t get_offset_of_pannedInvoker_42() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___pannedInvoker_42)); }
	inline EventHandler_1_t2685781567 * get_pannedInvoker_42() const { return ___pannedInvoker_42; }
	inline EventHandler_1_t2685781567 ** get_address_of_pannedInvoker_42() { return &___pannedInvoker_42; }
	inline void set_pannedInvoker_42(EventHandler_1_t2685781567 * value)
	{
		___pannedInvoker_42 = value;
		Il2CppCodeGenWriteBarrier(&___pannedInvoker_42, value);
	}

	inline static int32_t get_offset_of_panCompletedInvoker_43() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___panCompletedInvoker_43)); }
	inline EventHandler_1_t2685781567 * get_panCompletedInvoker_43() const { return ___panCompletedInvoker_43; }
	inline EventHandler_1_t2685781567 ** get_address_of_panCompletedInvoker_43() { return &___panCompletedInvoker_43; }
	inline void set_panCompletedInvoker_43(EventHandler_1_t2685781567 * value)
	{
		___panCompletedInvoker_43 = value;
		Il2CppCodeGenWriteBarrier(&___panCompletedInvoker_43, value);
	}

	inline static int32_t get_offset_of_movementThreshold_44() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___movementThreshold_44)); }
	inline float get_movementThreshold_44() const { return ___movementThreshold_44; }
	inline float* get_address_of_movementThreshold_44() { return &___movementThreshold_44; }
	inline void set_movementThreshold_44(float value)
	{
		___movementThreshold_44 = value;
	}

	inline static int32_t get_offset_of_movementBuffer_45() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___movementBuffer_45)); }
	inline Vector2_t4282066565  get_movementBuffer_45() const { return ___movementBuffer_45; }
	inline Vector2_t4282066565 * get_address_of_movementBuffer_45() { return &___movementBuffer_45; }
	inline void set_movementBuffer_45(Vector2_t4282066565  value)
	{
		___movementBuffer_45 = value;
	}

	inline static int32_t get_offset_of_isMoving_46() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___isMoving_46)); }
	inline bool get_isMoving_46() const { return ___isMoving_46; }
	inline bool* get_address_of_isMoving_46() { return &___isMoving_46; }
	inline void set_isMoving_46(bool value)
	{
		___isMoving_46 = value;
	}

	inline static int32_t get_offset_of_U3CWorldDeltaPositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(SimplePanGesture_t1528284000, ___U3CWorldDeltaPositionU3Ek__BackingField_47)); }
	inline Vector3_t4282066566  get_U3CWorldDeltaPositionU3Ek__BackingField_47() const { return ___U3CWorldDeltaPositionU3Ek__BackingField_47; }
	inline Vector3_t4282066566 * get_address_of_U3CWorldDeltaPositionU3Ek__BackingField_47() { return &___U3CWorldDeltaPositionU3Ek__BackingField_47; }
	inline void set_U3CWorldDeltaPositionU3Ek__BackingField_47(Vector3_t4282066566  value)
	{
		___U3CWorldDeltaPositionU3Ek__BackingField_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

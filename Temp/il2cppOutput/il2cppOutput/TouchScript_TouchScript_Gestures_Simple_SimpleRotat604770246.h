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

#include "TouchScript_TouchScript_Gestures_Simple_TwoPointTra570156802.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Simple.SimpleRotateGesture
struct  SimpleRotateGesture_t604770246  : public TwoPointTransform2DGestureBase_t570156802
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotateStartedInvoker
	EventHandler_1_t2685781567 * ___rotateStartedInvoker_46;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotatedInvoker
	EventHandler_1_t2685781567 * ___rotatedInvoker_47;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleRotateGesture::rotateCompletedInvoker
	EventHandler_1_t2685781567 * ___rotateCompletedInvoker_48;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::rotationThreshold
	float ___rotationThreshold_49;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::rotationBuffer
	float ___rotationBuffer_50;
	// System.Boolean TouchScript.Gestures.Simple.SimpleRotateGesture::isRotating
	bool ___isRotating_51;
	// System.Single TouchScript.Gestures.Simple.SimpleRotateGesture::<DeltaRotation>k__BackingField
	float ___U3CDeltaRotationU3Ek__BackingField_52;

public:
	inline static int32_t get_offset_of_rotateStartedInvoker_46() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___rotateStartedInvoker_46)); }
	inline EventHandler_1_t2685781567 * get_rotateStartedInvoker_46() const { return ___rotateStartedInvoker_46; }
	inline EventHandler_1_t2685781567 ** get_address_of_rotateStartedInvoker_46() { return &___rotateStartedInvoker_46; }
	inline void set_rotateStartedInvoker_46(EventHandler_1_t2685781567 * value)
	{
		___rotateStartedInvoker_46 = value;
		Il2CppCodeGenWriteBarrier(&___rotateStartedInvoker_46, value);
	}

	inline static int32_t get_offset_of_rotatedInvoker_47() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___rotatedInvoker_47)); }
	inline EventHandler_1_t2685781567 * get_rotatedInvoker_47() const { return ___rotatedInvoker_47; }
	inline EventHandler_1_t2685781567 ** get_address_of_rotatedInvoker_47() { return &___rotatedInvoker_47; }
	inline void set_rotatedInvoker_47(EventHandler_1_t2685781567 * value)
	{
		___rotatedInvoker_47 = value;
		Il2CppCodeGenWriteBarrier(&___rotatedInvoker_47, value);
	}

	inline static int32_t get_offset_of_rotateCompletedInvoker_48() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___rotateCompletedInvoker_48)); }
	inline EventHandler_1_t2685781567 * get_rotateCompletedInvoker_48() const { return ___rotateCompletedInvoker_48; }
	inline EventHandler_1_t2685781567 ** get_address_of_rotateCompletedInvoker_48() { return &___rotateCompletedInvoker_48; }
	inline void set_rotateCompletedInvoker_48(EventHandler_1_t2685781567 * value)
	{
		___rotateCompletedInvoker_48 = value;
		Il2CppCodeGenWriteBarrier(&___rotateCompletedInvoker_48, value);
	}

	inline static int32_t get_offset_of_rotationThreshold_49() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___rotationThreshold_49)); }
	inline float get_rotationThreshold_49() const { return ___rotationThreshold_49; }
	inline float* get_address_of_rotationThreshold_49() { return &___rotationThreshold_49; }
	inline void set_rotationThreshold_49(float value)
	{
		___rotationThreshold_49 = value;
	}

	inline static int32_t get_offset_of_rotationBuffer_50() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___rotationBuffer_50)); }
	inline float get_rotationBuffer_50() const { return ___rotationBuffer_50; }
	inline float* get_address_of_rotationBuffer_50() { return &___rotationBuffer_50; }
	inline void set_rotationBuffer_50(float value)
	{
		___rotationBuffer_50 = value;
	}

	inline static int32_t get_offset_of_isRotating_51() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___isRotating_51)); }
	inline bool get_isRotating_51() const { return ___isRotating_51; }
	inline bool* get_address_of_isRotating_51() { return &___isRotating_51; }
	inline void set_isRotating_51(bool value)
	{
		___isRotating_51 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaRotationU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(SimpleRotateGesture_t604770246, ___U3CDeltaRotationU3Ek__BackingField_52)); }
	inline float get_U3CDeltaRotationU3Ek__BackingField_52() const { return ___U3CDeltaRotationU3Ek__BackingField_52; }
	inline float* get_address_of_U3CDeltaRotationU3Ek__BackingField_52() { return &___U3CDeltaRotationU3Ek__BackingField_52; }
	inline void set_U3CDeltaRotationU3Ek__BackingField_52(float value)
	{
		___U3CDeltaRotationU3Ek__BackingField_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

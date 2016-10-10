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

// TouchScript.Gestures.Simple.SimpleScaleGesture
struct  SimpleScaleGesture_t393194131  : public TwoPointTransform2DGestureBase_t570156802
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaleStartedInvoker
	EventHandler_1_t2685781567 * ___scaleStartedInvoker_46;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaledInvoker
	EventHandler_1_t2685781567 * ___scaledInvoker_47;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Simple.SimpleScaleGesture::scaleCompletedInvoker
	EventHandler_1_t2685781567 * ___scaleCompletedInvoker_48;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::scalingThreshold
	float ___scalingThreshold_49;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::scalingBuffer
	float ___scalingBuffer_50;
	// System.Boolean TouchScript.Gestures.Simple.SimpleScaleGesture::isScaling
	bool ___isScaling_51;
	// System.Single TouchScript.Gestures.Simple.SimpleScaleGesture::<LocalDeltaScale>k__BackingField
	float ___U3CLocalDeltaScaleU3Ek__BackingField_52;

public:
	inline static int32_t get_offset_of_scaleStartedInvoker_46() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___scaleStartedInvoker_46)); }
	inline EventHandler_1_t2685781567 * get_scaleStartedInvoker_46() const { return ___scaleStartedInvoker_46; }
	inline EventHandler_1_t2685781567 ** get_address_of_scaleStartedInvoker_46() { return &___scaleStartedInvoker_46; }
	inline void set_scaleStartedInvoker_46(EventHandler_1_t2685781567 * value)
	{
		___scaleStartedInvoker_46 = value;
		Il2CppCodeGenWriteBarrier(&___scaleStartedInvoker_46, value);
	}

	inline static int32_t get_offset_of_scaledInvoker_47() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___scaledInvoker_47)); }
	inline EventHandler_1_t2685781567 * get_scaledInvoker_47() const { return ___scaledInvoker_47; }
	inline EventHandler_1_t2685781567 ** get_address_of_scaledInvoker_47() { return &___scaledInvoker_47; }
	inline void set_scaledInvoker_47(EventHandler_1_t2685781567 * value)
	{
		___scaledInvoker_47 = value;
		Il2CppCodeGenWriteBarrier(&___scaledInvoker_47, value);
	}

	inline static int32_t get_offset_of_scaleCompletedInvoker_48() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___scaleCompletedInvoker_48)); }
	inline EventHandler_1_t2685781567 * get_scaleCompletedInvoker_48() const { return ___scaleCompletedInvoker_48; }
	inline EventHandler_1_t2685781567 ** get_address_of_scaleCompletedInvoker_48() { return &___scaleCompletedInvoker_48; }
	inline void set_scaleCompletedInvoker_48(EventHandler_1_t2685781567 * value)
	{
		___scaleCompletedInvoker_48 = value;
		Il2CppCodeGenWriteBarrier(&___scaleCompletedInvoker_48, value);
	}

	inline static int32_t get_offset_of_scalingThreshold_49() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___scalingThreshold_49)); }
	inline float get_scalingThreshold_49() const { return ___scalingThreshold_49; }
	inline float* get_address_of_scalingThreshold_49() { return &___scalingThreshold_49; }
	inline void set_scalingThreshold_49(float value)
	{
		___scalingThreshold_49 = value;
	}

	inline static int32_t get_offset_of_scalingBuffer_50() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___scalingBuffer_50)); }
	inline float get_scalingBuffer_50() const { return ___scalingBuffer_50; }
	inline float* get_address_of_scalingBuffer_50() { return &___scalingBuffer_50; }
	inline void set_scalingBuffer_50(float value)
	{
		___scalingBuffer_50 = value;
	}

	inline static int32_t get_offset_of_isScaling_51() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___isScaling_51)); }
	inline bool get_isScaling_51() const { return ___isScaling_51; }
	inline bool* get_address_of_isScaling_51() { return &___isScaling_51; }
	inline void set_isScaling_51(bool value)
	{
		___isScaling_51 = value;
	}

	inline static int32_t get_offset_of_U3CLocalDeltaScaleU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(SimpleScaleGesture_t393194131, ___U3CLocalDeltaScaleU3Ek__BackingField_52)); }
	inline float get_U3CLocalDeltaScaleU3Ek__BackingField_52() const { return ___U3CLocalDeltaScaleU3Ek__BackingField_52; }
	inline float* get_address_of_U3CLocalDeltaScaleU3Ek__BackingField_52() { return &___U3CLocalDeltaScaleU3Ek__BackingField_52; }
	inline void set_U3CLocalDeltaScaleU3Ek__BackingField_52(float value)
	{
		___U3CLocalDeltaScaleU3Ek__BackingField_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

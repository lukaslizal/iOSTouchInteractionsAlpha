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
// UnityEngine.Collider
struct Collider_t2939674232;

#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Gestures_Base_PinnedTrasfo2191736648.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Base.PinnedTrasformGestureBase
struct  PinnedTrasformGestureBase_t3210679804  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformStartedInvoker
	EventHandler_1_t2685781567 * ___transformStartedInvoker_34;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformedInvoker
	EventHandler_1_t2685781567 * ___transformedInvoker_35;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformCompletedInvoker
	EventHandler_1_t2685781567 * ___transformCompletedInvoker_36;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_37;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_38;
	// UnityEngine.Collider TouchScript.Gestures.Base.PinnedTrasformGestureBase::cachedCollider
	Collider_t2939674232 * ___cachedCollider_39;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::deltaRotation
	float ___deltaRotation_40;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::deltaScale
	float ___deltaScale_41;
	// UnityEngine.Vector2 TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelTranslationBuffer
	Vector2_t4282066565  ___screenPixelTranslationBuffer_42;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_43;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::angleBuffer
	float ___angleBuffer_44;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_45;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::scaleBuffer
	float ___scaleBuffer_46;
	// System.Boolean TouchScript.Gestures.Base.PinnedTrasformGestureBase::isTransforming
	bool ___isTransforming_47;
	// TouchScript.Gestures.Base.PinnedTrasformGestureBase/TransformType TouchScript.Gestures.Base.PinnedTrasformGestureBase::type
	int32_t ___type_48;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_49;

public:
	inline static int32_t get_offset_of_transformStartedInvoker_34() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___transformStartedInvoker_34)); }
	inline EventHandler_1_t2685781567 * get_transformStartedInvoker_34() const { return ___transformStartedInvoker_34; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformStartedInvoker_34() { return &___transformStartedInvoker_34; }
	inline void set_transformStartedInvoker_34(EventHandler_1_t2685781567 * value)
	{
		___transformStartedInvoker_34 = value;
		Il2CppCodeGenWriteBarrier(&___transformStartedInvoker_34, value);
	}

	inline static int32_t get_offset_of_transformedInvoker_35() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___transformedInvoker_35)); }
	inline EventHandler_1_t2685781567 * get_transformedInvoker_35() const { return ___transformedInvoker_35; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformedInvoker_35() { return &___transformedInvoker_35; }
	inline void set_transformedInvoker_35(EventHandler_1_t2685781567 * value)
	{
		___transformedInvoker_35 = value;
		Il2CppCodeGenWriteBarrier(&___transformedInvoker_35, value);
	}

	inline static int32_t get_offset_of_transformCompletedInvoker_36() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___transformCompletedInvoker_36)); }
	inline EventHandler_1_t2685781567 * get_transformCompletedInvoker_36() const { return ___transformCompletedInvoker_36; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformCompletedInvoker_36() { return &___transformCompletedInvoker_36; }
	inline void set_transformCompletedInvoker_36(EventHandler_1_t2685781567 * value)
	{
		___transformCompletedInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___transformCompletedInvoker_36, value);
	}

	inline static int32_t get_offset_of_screenTransformPixelThreshold_37() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenTransformPixelThreshold_37)); }
	inline float get_screenTransformPixelThreshold_37() const { return ___screenTransformPixelThreshold_37; }
	inline float* get_address_of_screenTransformPixelThreshold_37() { return &___screenTransformPixelThreshold_37; }
	inline void set_screenTransformPixelThreshold_37(float value)
	{
		___screenTransformPixelThreshold_37 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThresholdSquared_38() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenTransformPixelThresholdSquared_38)); }
	inline float get_screenTransformPixelThresholdSquared_38() const { return ___screenTransformPixelThresholdSquared_38; }
	inline float* get_address_of_screenTransformPixelThresholdSquared_38() { return &___screenTransformPixelThresholdSquared_38; }
	inline void set_screenTransformPixelThresholdSquared_38(float value)
	{
		___screenTransformPixelThresholdSquared_38 = value;
	}

	inline static int32_t get_offset_of_cachedCollider_39() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___cachedCollider_39)); }
	inline Collider_t2939674232 * get_cachedCollider_39() const { return ___cachedCollider_39; }
	inline Collider_t2939674232 ** get_address_of_cachedCollider_39() { return &___cachedCollider_39; }
	inline void set_cachedCollider_39(Collider_t2939674232 * value)
	{
		___cachedCollider_39 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCollider_39, value);
	}

	inline static int32_t get_offset_of_deltaRotation_40() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___deltaRotation_40)); }
	inline float get_deltaRotation_40() const { return ___deltaRotation_40; }
	inline float* get_address_of_deltaRotation_40() { return &___deltaRotation_40; }
	inline void set_deltaRotation_40(float value)
	{
		___deltaRotation_40 = value;
	}

	inline static int32_t get_offset_of_deltaScale_41() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___deltaScale_41)); }
	inline float get_deltaScale_41() const { return ___deltaScale_41; }
	inline float* get_address_of_deltaScale_41() { return &___deltaScale_41; }
	inline void set_deltaScale_41(float value)
	{
		___deltaScale_41 = value;
	}

	inline static int32_t get_offset_of_screenPixelTranslationBuffer_42() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenPixelTranslationBuffer_42)); }
	inline Vector2_t4282066565  get_screenPixelTranslationBuffer_42() const { return ___screenPixelTranslationBuffer_42; }
	inline Vector2_t4282066565 * get_address_of_screenPixelTranslationBuffer_42() { return &___screenPixelTranslationBuffer_42; }
	inline void set_screenPixelTranslationBuffer_42(Vector2_t4282066565  value)
	{
		___screenPixelTranslationBuffer_42 = value;
	}

	inline static int32_t get_offset_of_screenPixelRotationBuffer_43() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenPixelRotationBuffer_43)); }
	inline float get_screenPixelRotationBuffer_43() const { return ___screenPixelRotationBuffer_43; }
	inline float* get_address_of_screenPixelRotationBuffer_43() { return &___screenPixelRotationBuffer_43; }
	inline void set_screenPixelRotationBuffer_43(float value)
	{
		___screenPixelRotationBuffer_43 = value;
	}

	inline static int32_t get_offset_of_angleBuffer_44() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___angleBuffer_44)); }
	inline float get_angleBuffer_44() const { return ___angleBuffer_44; }
	inline float* get_address_of_angleBuffer_44() { return &___angleBuffer_44; }
	inline void set_angleBuffer_44(float value)
	{
		___angleBuffer_44 = value;
	}

	inline static int32_t get_offset_of_screenPixelScalingBuffer_45() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenPixelScalingBuffer_45)); }
	inline float get_screenPixelScalingBuffer_45() const { return ___screenPixelScalingBuffer_45; }
	inline float* get_address_of_screenPixelScalingBuffer_45() { return &___screenPixelScalingBuffer_45; }
	inline void set_screenPixelScalingBuffer_45(float value)
	{
		___screenPixelScalingBuffer_45 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_46() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___scaleBuffer_46)); }
	inline float get_scaleBuffer_46() const { return ___scaleBuffer_46; }
	inline float* get_address_of_scaleBuffer_46() { return &___scaleBuffer_46; }
	inline void set_scaleBuffer_46(float value)
	{
		___scaleBuffer_46 = value;
	}

	inline static int32_t get_offset_of_isTransforming_47() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___isTransforming_47)); }
	inline bool get_isTransforming_47() const { return ___isTransforming_47; }
	inline bool* get_address_of_isTransforming_47() { return &___isTransforming_47; }
	inline void set_isTransforming_47(bool value)
	{
		___isTransforming_47 = value;
	}

	inline static int32_t get_offset_of_type_48() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___type_48)); }
	inline int32_t get_type_48() const { return ___type_48; }
	inline int32_t* get_address_of_type_48() { return &___type_48; }
	inline void set_type_48(int32_t value)
	{
		___type_48 = value;
	}

	inline static int32_t get_offset_of_screenTransformThreshold_49() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3210679804, ___screenTransformThreshold_49)); }
	inline float get_screenTransformThreshold_49() const { return ___screenTransformThreshold_49; }
	inline float* get_address_of_screenTransformThreshold_49() { return &___screenTransformThreshold_49; }
	inline void set_screenTransformThreshold_49(float value)
	{
		___screenTransformThreshold_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

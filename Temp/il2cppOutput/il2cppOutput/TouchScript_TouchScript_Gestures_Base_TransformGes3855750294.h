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
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "TouchScript_TouchScript_Gestures_Base_TransformGest989833314.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Base.TransformGestureBase
struct  TransformGestureBase_t3855750294  : public Gesture_t4026739523
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformStartedInvoker
	EventHandler_1_t2685781567 * ___transformStartedInvoker_34;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformedInvoker
	EventHandler_1_t2685781567 * ___transformedInvoker_35;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformCompletedInvoker
	EventHandler_1_t2685781567 * ___transformCompletedInvoker_36;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsPixelDistance
	float ___minScreenPointsPixelDistance_37;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsPixelDistanceSquared
	float ___minScreenPointsPixelDistanceSquared_38;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_39;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_40;
	// UnityEngine.Vector3 TouchScript.Gestures.Base.TransformGestureBase::deltaPosition
	Vector3_t4282066566  ___deltaPosition_41;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::deltaRotation
	float ___deltaRotation_42;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::deltaScale
	float ___deltaScale_43;
	// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::screenPixelTranslationBuffer
	Vector2_t4282066565  ___screenPixelTranslationBuffer_44;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_45;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::angleBuffer
	float ___angleBuffer_46;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_47;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::scaleBuffer
	float ___scaleBuffer_48;
	// System.Boolean TouchScript.Gestures.Base.TransformGestureBase::isTransforming
	bool ___isTransforming_49;
	// TouchScript.Gestures.Base.TransformGestureBase/TransformType TouchScript.Gestures.Base.TransformGestureBase::type
	int32_t ___type_50;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsDistance
	float ___minScreenPointsDistance_51;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_52;

public:
	inline static int32_t get_offset_of_transformStartedInvoker_34() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___transformStartedInvoker_34)); }
	inline EventHandler_1_t2685781567 * get_transformStartedInvoker_34() const { return ___transformStartedInvoker_34; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformStartedInvoker_34() { return &___transformStartedInvoker_34; }
	inline void set_transformStartedInvoker_34(EventHandler_1_t2685781567 * value)
	{
		___transformStartedInvoker_34 = value;
		Il2CppCodeGenWriteBarrier(&___transformStartedInvoker_34, value);
	}

	inline static int32_t get_offset_of_transformedInvoker_35() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___transformedInvoker_35)); }
	inline EventHandler_1_t2685781567 * get_transformedInvoker_35() const { return ___transformedInvoker_35; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformedInvoker_35() { return &___transformedInvoker_35; }
	inline void set_transformedInvoker_35(EventHandler_1_t2685781567 * value)
	{
		___transformedInvoker_35 = value;
		Il2CppCodeGenWriteBarrier(&___transformedInvoker_35, value);
	}

	inline static int32_t get_offset_of_transformCompletedInvoker_36() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___transformCompletedInvoker_36)); }
	inline EventHandler_1_t2685781567 * get_transformCompletedInvoker_36() const { return ___transformCompletedInvoker_36; }
	inline EventHandler_1_t2685781567 ** get_address_of_transformCompletedInvoker_36() { return &___transformCompletedInvoker_36; }
	inline void set_transformCompletedInvoker_36(EventHandler_1_t2685781567 * value)
	{
		___transformCompletedInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___transformCompletedInvoker_36, value);
	}

	inline static int32_t get_offset_of_minScreenPointsPixelDistance_37() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___minScreenPointsPixelDistance_37)); }
	inline float get_minScreenPointsPixelDistance_37() const { return ___minScreenPointsPixelDistance_37; }
	inline float* get_address_of_minScreenPointsPixelDistance_37() { return &___minScreenPointsPixelDistance_37; }
	inline void set_minScreenPointsPixelDistance_37(float value)
	{
		___minScreenPointsPixelDistance_37 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsPixelDistanceSquared_38() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___minScreenPointsPixelDistanceSquared_38)); }
	inline float get_minScreenPointsPixelDistanceSquared_38() const { return ___minScreenPointsPixelDistanceSquared_38; }
	inline float* get_address_of_minScreenPointsPixelDistanceSquared_38() { return &___minScreenPointsPixelDistanceSquared_38; }
	inline void set_minScreenPointsPixelDistanceSquared_38(float value)
	{
		___minScreenPointsPixelDistanceSquared_38 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThreshold_39() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenTransformPixelThreshold_39)); }
	inline float get_screenTransformPixelThreshold_39() const { return ___screenTransformPixelThreshold_39; }
	inline float* get_address_of_screenTransformPixelThreshold_39() { return &___screenTransformPixelThreshold_39; }
	inline void set_screenTransformPixelThreshold_39(float value)
	{
		___screenTransformPixelThreshold_39 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThresholdSquared_40() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenTransformPixelThresholdSquared_40)); }
	inline float get_screenTransformPixelThresholdSquared_40() const { return ___screenTransformPixelThresholdSquared_40; }
	inline float* get_address_of_screenTransformPixelThresholdSquared_40() { return &___screenTransformPixelThresholdSquared_40; }
	inline void set_screenTransformPixelThresholdSquared_40(float value)
	{
		___screenTransformPixelThresholdSquared_40 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_41() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___deltaPosition_41)); }
	inline Vector3_t4282066566  get_deltaPosition_41() const { return ___deltaPosition_41; }
	inline Vector3_t4282066566 * get_address_of_deltaPosition_41() { return &___deltaPosition_41; }
	inline void set_deltaPosition_41(Vector3_t4282066566  value)
	{
		___deltaPosition_41 = value;
	}

	inline static int32_t get_offset_of_deltaRotation_42() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___deltaRotation_42)); }
	inline float get_deltaRotation_42() const { return ___deltaRotation_42; }
	inline float* get_address_of_deltaRotation_42() { return &___deltaRotation_42; }
	inline void set_deltaRotation_42(float value)
	{
		___deltaRotation_42 = value;
	}

	inline static int32_t get_offset_of_deltaScale_43() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___deltaScale_43)); }
	inline float get_deltaScale_43() const { return ___deltaScale_43; }
	inline float* get_address_of_deltaScale_43() { return &___deltaScale_43; }
	inline void set_deltaScale_43(float value)
	{
		___deltaScale_43 = value;
	}

	inline static int32_t get_offset_of_screenPixelTranslationBuffer_44() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenPixelTranslationBuffer_44)); }
	inline Vector2_t4282066565  get_screenPixelTranslationBuffer_44() const { return ___screenPixelTranslationBuffer_44; }
	inline Vector2_t4282066565 * get_address_of_screenPixelTranslationBuffer_44() { return &___screenPixelTranslationBuffer_44; }
	inline void set_screenPixelTranslationBuffer_44(Vector2_t4282066565  value)
	{
		___screenPixelTranslationBuffer_44 = value;
	}

	inline static int32_t get_offset_of_screenPixelRotationBuffer_45() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenPixelRotationBuffer_45)); }
	inline float get_screenPixelRotationBuffer_45() const { return ___screenPixelRotationBuffer_45; }
	inline float* get_address_of_screenPixelRotationBuffer_45() { return &___screenPixelRotationBuffer_45; }
	inline void set_screenPixelRotationBuffer_45(float value)
	{
		___screenPixelRotationBuffer_45 = value;
	}

	inline static int32_t get_offset_of_angleBuffer_46() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___angleBuffer_46)); }
	inline float get_angleBuffer_46() const { return ___angleBuffer_46; }
	inline float* get_address_of_angleBuffer_46() { return &___angleBuffer_46; }
	inline void set_angleBuffer_46(float value)
	{
		___angleBuffer_46 = value;
	}

	inline static int32_t get_offset_of_screenPixelScalingBuffer_47() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenPixelScalingBuffer_47)); }
	inline float get_screenPixelScalingBuffer_47() const { return ___screenPixelScalingBuffer_47; }
	inline float* get_address_of_screenPixelScalingBuffer_47() { return &___screenPixelScalingBuffer_47; }
	inline void set_screenPixelScalingBuffer_47(float value)
	{
		___screenPixelScalingBuffer_47 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_48() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___scaleBuffer_48)); }
	inline float get_scaleBuffer_48() const { return ___scaleBuffer_48; }
	inline float* get_address_of_scaleBuffer_48() { return &___scaleBuffer_48; }
	inline void set_scaleBuffer_48(float value)
	{
		___scaleBuffer_48 = value;
	}

	inline static int32_t get_offset_of_isTransforming_49() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___isTransforming_49)); }
	inline bool get_isTransforming_49() const { return ___isTransforming_49; }
	inline bool* get_address_of_isTransforming_49() { return &___isTransforming_49; }
	inline void set_isTransforming_49(bool value)
	{
		___isTransforming_49 = value;
	}

	inline static int32_t get_offset_of_type_50() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___type_50)); }
	inline int32_t get_type_50() const { return ___type_50; }
	inline int32_t* get_address_of_type_50() { return &___type_50; }
	inline void set_type_50(int32_t value)
	{
		___type_50 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsDistance_51() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___minScreenPointsDistance_51)); }
	inline float get_minScreenPointsDistance_51() const { return ___minScreenPointsDistance_51; }
	inline float* get_address_of_minScreenPointsDistance_51() { return &___minScreenPointsDistance_51; }
	inline void set_minScreenPointsDistance_51(float value)
	{
		___minScreenPointsDistance_51 = value;
	}

	inline static int32_t get_offset_of_screenTransformThreshold_52() { return static_cast<int32_t>(offsetof(TransformGestureBase_t3855750294, ___screenTransformThreshold_52)); }
	inline float get_screenTransformThreshold_52() const { return ___screenTransformThreshold_52; }
	inline float* get_address_of_screenTransformThreshold_52() { return &___screenTransformThreshold_52; }
	inline void set_screenTransformThreshold_52(float value)
	{
		___screenTransformThreshold_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "TouchScript_TouchScript_Gestures_Simple_Transform22122184510.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase
struct  TwoPointTransform2DGestureBase_t570156802  : public Transform2DGestureBase_t2122184510
{
public:
	// System.Single TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::minPointsDistance
	float ___minPointsDistance_38;
	// System.Single TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::minPixelDistance
	float ___minPixelDistance_39;
	// System.Single TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::minPixelDistanceSquared
	float ___minPixelDistanceSquared_40;
	// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::screenPosition
	Vector2_t4282066565  ___screenPosition_41;
	// UnityEngine.Vector2 TouchScript.Gestures.Simple.TwoPointTransform2DGestureBase::previousScreenPosition
	Vector2_t4282066565  ___previousScreenPosition_42;

public:
	inline static int32_t get_offset_of_minPointsDistance_38() { return static_cast<int32_t>(offsetof(TwoPointTransform2DGestureBase_t570156802, ___minPointsDistance_38)); }
	inline float get_minPointsDistance_38() const { return ___minPointsDistance_38; }
	inline float* get_address_of_minPointsDistance_38() { return &___minPointsDistance_38; }
	inline void set_minPointsDistance_38(float value)
	{
		___minPointsDistance_38 = value;
	}

	inline static int32_t get_offset_of_minPixelDistance_39() { return static_cast<int32_t>(offsetof(TwoPointTransform2DGestureBase_t570156802, ___minPixelDistance_39)); }
	inline float get_minPixelDistance_39() const { return ___minPixelDistance_39; }
	inline float* get_address_of_minPixelDistance_39() { return &___minPixelDistance_39; }
	inline void set_minPixelDistance_39(float value)
	{
		___minPixelDistance_39 = value;
	}

	inline static int32_t get_offset_of_minPixelDistanceSquared_40() { return static_cast<int32_t>(offsetof(TwoPointTransform2DGestureBase_t570156802, ___minPixelDistanceSquared_40)); }
	inline float get_minPixelDistanceSquared_40() const { return ___minPixelDistanceSquared_40; }
	inline float* get_address_of_minPixelDistanceSquared_40() { return &___minPixelDistanceSquared_40; }
	inline void set_minPixelDistanceSquared_40(float value)
	{
		___minPixelDistanceSquared_40 = value;
	}

	inline static int32_t get_offset_of_screenPosition_41() { return static_cast<int32_t>(offsetof(TwoPointTransform2DGestureBase_t570156802, ___screenPosition_41)); }
	inline Vector2_t4282066565  get_screenPosition_41() const { return ___screenPosition_41; }
	inline Vector2_t4282066565 * get_address_of_screenPosition_41() { return &___screenPosition_41; }
	inline void set_screenPosition_41(Vector2_t4282066565  value)
	{
		___screenPosition_41 = value;
	}

	inline static int32_t get_offset_of_previousScreenPosition_42() { return static_cast<int32_t>(offsetof(TwoPointTransform2DGestureBase_t570156802, ___previousScreenPosition_42)); }
	inline Vector2_t4282066565  get_previousScreenPosition_42() const { return ___previousScreenPosition_42; }
	inline Vector2_t4282066565 * get_address_of_previousScreenPosition_42() { return &___previousScreenPosition_42; }
	inline void set_previousScreenPosition_42(Vector2_t4282066565  value)
	{
		___previousScreenPosition_42 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

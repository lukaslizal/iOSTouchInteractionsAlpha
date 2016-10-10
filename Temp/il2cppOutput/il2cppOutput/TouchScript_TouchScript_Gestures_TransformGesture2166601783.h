#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;

#include "TouchScript_TouchScript_Gestures_Base_TransformGes3855750294.h"
#include "TouchScript_TouchScript_Gestures_TransformGesture_1963075931.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.TransformGesture
struct  TransformGesture_t2166601783  : public TransformGestureBase_t3855750294
{
public:
	// TouchScript.Gestures.TransformGesture/ProjectionType TouchScript.Gestures.TransformGesture::projection
	int32_t ___projection_53;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::projectionPlaneNormal
	Vector3_t4282066566  ___projectionPlaneNormal_54;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.TransformGesture::projectionLayer
	TouchLayer_t334681980 * ___projectionLayer_55;
	// UnityEngine.Plane TouchScript.Gestures.TransformGesture::transformPlane
	Plane_t4206452690  ___transformPlane_56;

public:
	inline static int32_t get_offset_of_projection_53() { return static_cast<int32_t>(offsetof(TransformGesture_t2166601783, ___projection_53)); }
	inline int32_t get_projection_53() const { return ___projection_53; }
	inline int32_t* get_address_of_projection_53() { return &___projection_53; }
	inline void set_projection_53(int32_t value)
	{
		___projection_53 = value;
	}

	inline static int32_t get_offset_of_projectionPlaneNormal_54() { return static_cast<int32_t>(offsetof(TransformGesture_t2166601783, ___projectionPlaneNormal_54)); }
	inline Vector3_t4282066566  get_projectionPlaneNormal_54() const { return ___projectionPlaneNormal_54; }
	inline Vector3_t4282066566 * get_address_of_projectionPlaneNormal_54() { return &___projectionPlaneNormal_54; }
	inline void set_projectionPlaneNormal_54(Vector3_t4282066566  value)
	{
		___projectionPlaneNormal_54 = value;
	}

	inline static int32_t get_offset_of_projectionLayer_55() { return static_cast<int32_t>(offsetof(TransformGesture_t2166601783, ___projectionLayer_55)); }
	inline TouchLayer_t334681980 * get_projectionLayer_55() const { return ___projectionLayer_55; }
	inline TouchLayer_t334681980 ** get_address_of_projectionLayer_55() { return &___projectionLayer_55; }
	inline void set_projectionLayer_55(TouchLayer_t334681980 * value)
	{
		___projectionLayer_55 = value;
		Il2CppCodeGenWriteBarrier(&___projectionLayer_55, value);
	}

	inline static int32_t get_offset_of_transformPlane_56() { return static_cast<int32_t>(offsetof(TransformGesture_t2166601783, ___transformPlane_56)); }
	inline Plane_t4206452690  get_transformPlane_56() const { return ___transformPlane_56; }
	inline Plane_t4206452690 * get_address_of_transformPlane_56() { return &___transformPlane_56; }
	inline void set_transformPlane_56(Plane_t4206452690  value)
	{
		___transformPlane_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

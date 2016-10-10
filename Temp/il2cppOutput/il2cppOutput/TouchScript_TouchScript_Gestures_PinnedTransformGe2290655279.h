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

#include "TouchScript_TouchScript_Gestures_Base_PinnedTrasfo3210679804.h"
#include "TouchScript_TouchScript_Gestures_PinnedTransformGe1570853475.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.PinnedTransformGesture
struct  PinnedTransformGesture_t2290655279  : public PinnedTrasformGestureBase_t3210679804
{
public:
	// TouchScript.Gestures.PinnedTransformGesture/ProjectionType TouchScript.Gestures.PinnedTransformGesture::projection
	int32_t ___projection_50;
	// UnityEngine.Vector3 TouchScript.Gestures.PinnedTransformGesture::projectionPlaneNormal
	Vector3_t4282066566  ___projectionPlaneNormal_51;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.PinnedTransformGesture::projectionLayer
	TouchLayer_t334681980 * ___projectionLayer_52;
	// UnityEngine.Plane TouchScript.Gestures.PinnedTransformGesture::transformPlane
	Plane_t4206452690  ___transformPlane_53;

public:
	inline static int32_t get_offset_of_projection_50() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2290655279, ___projection_50)); }
	inline int32_t get_projection_50() const { return ___projection_50; }
	inline int32_t* get_address_of_projection_50() { return &___projection_50; }
	inline void set_projection_50(int32_t value)
	{
		___projection_50 = value;
	}

	inline static int32_t get_offset_of_projectionPlaneNormal_51() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2290655279, ___projectionPlaneNormal_51)); }
	inline Vector3_t4282066566  get_projectionPlaneNormal_51() const { return ___projectionPlaneNormal_51; }
	inline Vector3_t4282066566 * get_address_of_projectionPlaneNormal_51() { return &___projectionPlaneNormal_51; }
	inline void set_projectionPlaneNormal_51(Vector3_t4282066566  value)
	{
		___projectionPlaneNormal_51 = value;
	}

	inline static int32_t get_offset_of_projectionLayer_52() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2290655279, ___projectionLayer_52)); }
	inline TouchLayer_t334681980 * get_projectionLayer_52() const { return ___projectionLayer_52; }
	inline TouchLayer_t334681980 ** get_address_of_projectionLayer_52() { return &___projectionLayer_52; }
	inline void set_projectionLayer_52(TouchLayer_t334681980 * value)
	{
		___projectionLayer_52 = value;
		Il2CppCodeGenWriteBarrier(&___projectionLayer_52, value);
	}

	inline static int32_t get_offset_of_transformPlane_53() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2290655279, ___transformPlane_53)); }
	inline Plane_t4206452690  get_transformPlane_53() const { return ___transformPlane_53; }
	inline Plane_t4206452690 * get_address_of_transformPlane_53() { return &___transformPlane_53; }
	inline void set_transformPlane_53(Plane_t4206452690  value)
	{
		___transformPlane_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t2939674232;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;

#include "TouchScript_TouchScript_Gestures_Gesture4026739523.h"
#include "TouchScript_TouchScript_Gestures_Simple_Transform21876582464.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Simple.Transform2DGestureBase
struct  Transform2DGestureBase_t2122184510  : public Gesture_t4026739523
{
public:
	// TouchScript.Gestures.Simple.Transform2DGestureBase/ProjectionType TouchScript.Gestures.Simple.Transform2DGestureBase::projection
	int32_t ___projection_31;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::projectionNormal
	Vector3_t4282066566  ___projectionNormal_32;
	// UnityEngine.Collider TouchScript.Gestures.Simple.Transform2DGestureBase::cachedCollider
	Collider_t2939674232 * ___cachedCollider_33;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.Simple.Transform2DGestureBase::projectionLayer
	TouchLayer_t334681980 * ___projectionLayer_34;
	// UnityEngine.Plane TouchScript.Gestures.Simple.Transform2DGestureBase::worldTransformPlane
	Plane_t4206452690  ___worldTransformPlane_35;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::<PreviousWorldTransformCenter>k__BackingField
	Vector3_t4282066566  ___U3CPreviousWorldTransformCenterU3Ek__BackingField_36;
	// UnityEngine.Vector3 TouchScript.Gestures.Simple.Transform2DGestureBase::<WorldTransformCenter>k__BackingField
	Vector3_t4282066566  ___U3CWorldTransformCenterU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_projection_31() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___projection_31)); }
	inline int32_t get_projection_31() const { return ___projection_31; }
	inline int32_t* get_address_of_projection_31() { return &___projection_31; }
	inline void set_projection_31(int32_t value)
	{
		___projection_31 = value;
	}

	inline static int32_t get_offset_of_projectionNormal_32() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___projectionNormal_32)); }
	inline Vector3_t4282066566  get_projectionNormal_32() const { return ___projectionNormal_32; }
	inline Vector3_t4282066566 * get_address_of_projectionNormal_32() { return &___projectionNormal_32; }
	inline void set_projectionNormal_32(Vector3_t4282066566  value)
	{
		___projectionNormal_32 = value;
	}

	inline static int32_t get_offset_of_cachedCollider_33() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___cachedCollider_33)); }
	inline Collider_t2939674232 * get_cachedCollider_33() const { return ___cachedCollider_33; }
	inline Collider_t2939674232 ** get_address_of_cachedCollider_33() { return &___cachedCollider_33; }
	inline void set_cachedCollider_33(Collider_t2939674232 * value)
	{
		___cachedCollider_33 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCollider_33, value);
	}

	inline static int32_t get_offset_of_projectionLayer_34() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___projectionLayer_34)); }
	inline TouchLayer_t334681980 * get_projectionLayer_34() const { return ___projectionLayer_34; }
	inline TouchLayer_t334681980 ** get_address_of_projectionLayer_34() { return &___projectionLayer_34; }
	inline void set_projectionLayer_34(TouchLayer_t334681980 * value)
	{
		___projectionLayer_34 = value;
		Il2CppCodeGenWriteBarrier(&___projectionLayer_34, value);
	}

	inline static int32_t get_offset_of_worldTransformPlane_35() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___worldTransformPlane_35)); }
	inline Plane_t4206452690  get_worldTransformPlane_35() const { return ___worldTransformPlane_35; }
	inline Plane_t4206452690 * get_address_of_worldTransformPlane_35() { return &___worldTransformPlane_35; }
	inline void set_worldTransformPlane_35(Plane_t4206452690  value)
	{
		___worldTransformPlane_35 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousWorldTransformCenterU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___U3CPreviousWorldTransformCenterU3Ek__BackingField_36)); }
	inline Vector3_t4282066566  get_U3CPreviousWorldTransformCenterU3Ek__BackingField_36() const { return ___U3CPreviousWorldTransformCenterU3Ek__BackingField_36; }
	inline Vector3_t4282066566 * get_address_of_U3CPreviousWorldTransformCenterU3Ek__BackingField_36() { return &___U3CPreviousWorldTransformCenterU3Ek__BackingField_36; }
	inline void set_U3CPreviousWorldTransformCenterU3Ek__BackingField_36(Vector3_t4282066566  value)
	{
		___U3CPreviousWorldTransformCenterU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CWorldTransformCenterU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Transform2DGestureBase_t2122184510, ___U3CWorldTransformCenterU3Ek__BackingField_37)); }
	inline Vector3_t4282066566  get_U3CWorldTransformCenterU3Ek__BackingField_37() const { return ___U3CWorldTransformCenterU3Ek__BackingField_37; }
	inline Vector3_t4282066566 * get_address_of_U3CWorldTransformCenterU3Ek__BackingField_37() { return &___U3CWorldTransformCenterU3Ek__BackingField_37; }
	inline void set_U3CWorldTransformCenterU3Ek__BackingField_37(Vector3_t4282066566  value)
	{
		___U3CWorldTransformCenterU3Ek__BackingField_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

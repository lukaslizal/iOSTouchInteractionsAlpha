#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.Transformer2D
struct  Transformer2D_t3213006793  : public MonoBehaviour_t667441552
{
public:
	// System.Single TouchScript.Behaviors.Transformer2D::Speed
	float ___Speed_2;
	// System.Single TouchScript.Behaviors.Transformer2D::PanMultiplier
	float ___PanMultiplier_3;
	// System.Boolean TouchScript.Behaviors.Transformer2D::AllowChangingFromOutside
	bool ___AllowChangingFromOutside_4;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::localPositionToGo
	Vector3_t4282066566  ___localPositionToGo_5;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::localScaleToGo
	Vector3_t4282066566  ___localScaleToGo_6;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer2D::localRotationToGo
	Quaternion_t1553702882  ___localRotationToGo_7;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::lastLocalPosition
	Vector3_t4282066566  ___lastLocalPosition_8;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer2D::lastLocalScale
	Vector3_t4282066566  ___lastLocalScale_9;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer2D::lastLocalRotation
	Quaternion_t1553702882  ___lastLocalRotation_10;

public:
	inline static int32_t get_offset_of_Speed_2() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___Speed_2)); }
	inline float get_Speed_2() const { return ___Speed_2; }
	inline float* get_address_of_Speed_2() { return &___Speed_2; }
	inline void set_Speed_2(float value)
	{
		___Speed_2 = value;
	}

	inline static int32_t get_offset_of_PanMultiplier_3() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___PanMultiplier_3)); }
	inline float get_PanMultiplier_3() const { return ___PanMultiplier_3; }
	inline float* get_address_of_PanMultiplier_3() { return &___PanMultiplier_3; }
	inline void set_PanMultiplier_3(float value)
	{
		___PanMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_AllowChangingFromOutside_4() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___AllowChangingFromOutside_4)); }
	inline bool get_AllowChangingFromOutside_4() const { return ___AllowChangingFromOutside_4; }
	inline bool* get_address_of_AllowChangingFromOutside_4() { return &___AllowChangingFromOutside_4; }
	inline void set_AllowChangingFromOutside_4(bool value)
	{
		___AllowChangingFromOutside_4 = value;
	}

	inline static int32_t get_offset_of_localPositionToGo_5() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___localPositionToGo_5)); }
	inline Vector3_t4282066566  get_localPositionToGo_5() const { return ___localPositionToGo_5; }
	inline Vector3_t4282066566 * get_address_of_localPositionToGo_5() { return &___localPositionToGo_5; }
	inline void set_localPositionToGo_5(Vector3_t4282066566  value)
	{
		___localPositionToGo_5 = value;
	}

	inline static int32_t get_offset_of_localScaleToGo_6() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___localScaleToGo_6)); }
	inline Vector3_t4282066566  get_localScaleToGo_6() const { return ___localScaleToGo_6; }
	inline Vector3_t4282066566 * get_address_of_localScaleToGo_6() { return &___localScaleToGo_6; }
	inline void set_localScaleToGo_6(Vector3_t4282066566  value)
	{
		___localScaleToGo_6 = value;
	}

	inline static int32_t get_offset_of_localRotationToGo_7() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___localRotationToGo_7)); }
	inline Quaternion_t1553702882  get_localRotationToGo_7() const { return ___localRotationToGo_7; }
	inline Quaternion_t1553702882 * get_address_of_localRotationToGo_7() { return &___localRotationToGo_7; }
	inline void set_localRotationToGo_7(Quaternion_t1553702882  value)
	{
		___localRotationToGo_7 = value;
	}

	inline static int32_t get_offset_of_lastLocalPosition_8() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___lastLocalPosition_8)); }
	inline Vector3_t4282066566  get_lastLocalPosition_8() const { return ___lastLocalPosition_8; }
	inline Vector3_t4282066566 * get_address_of_lastLocalPosition_8() { return &___lastLocalPosition_8; }
	inline void set_lastLocalPosition_8(Vector3_t4282066566  value)
	{
		___lastLocalPosition_8 = value;
	}

	inline static int32_t get_offset_of_lastLocalScale_9() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___lastLocalScale_9)); }
	inline Vector3_t4282066566  get_lastLocalScale_9() const { return ___lastLocalScale_9; }
	inline Vector3_t4282066566 * get_address_of_lastLocalScale_9() { return &___lastLocalScale_9; }
	inline void set_lastLocalScale_9(Vector3_t4282066566  value)
	{
		___lastLocalScale_9 = value;
	}

	inline static int32_t get_offset_of_lastLocalRotation_10() { return static_cast<int32_t>(offsetof(Transformer2D_t3213006793, ___lastLocalRotation_10)); }
	inline Quaternion_t1553702882  get_lastLocalRotation_10() const { return ___lastLocalRotation_10; }
	inline Quaternion_t1553702882 * get_address_of_lastLocalRotation_10() { return &___lastLocalRotation_10; }
	inline void set_lastLocalRotation_10(Quaternion_t1553702882  value)
	{
		___lastLocalRotation_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

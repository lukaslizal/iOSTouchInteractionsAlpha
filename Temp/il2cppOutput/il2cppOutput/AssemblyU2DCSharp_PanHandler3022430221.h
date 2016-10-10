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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_GestureState2249240808.h"
#include "AssemblyU2DCSharp_PanOrientation1357260051.h"
#include "AssemblyU2DCSharp_PanDirection130820994.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanHandler
struct  PanHandler_t3022430221  : public MonoBehaviour_t667441552
{
public:
	// GestureState PanHandler::gestureState
	int32_t ___gestureState_2;
	// PanOrientation PanHandler::panOrientation
	int32_t ___panOrientation_3;
	// PanDirection PanHandler::panDirection
	int32_t ___panDirection_4;
	// System.Single PanHandler::inertiaIntensity
	float ___inertiaIntensity_5;
	// System.Single PanHandler::maxInertia
	float ___maxInertia_6;
	// System.Single PanHandler::minInertia
	float ___minInertia_7;
	// System.Single PanHandler::maxDifference
	float ___maxDifference_8;
	// UnityEngine.Vector3 PanHandler::difference
	Vector3_t4282066566  ___difference_9;
	// UnityEngine.Vector3 PanHandler::guideDestination
	Vector3_t4282066566  ___guideDestination_10;
	// UnityEngine.Vector3 PanHandler::guideStart
	Vector3_t4282066566  ___guideStart_11;
	// System.Single PanHandler::guideDistance
	float ___guideDistance_12;
	// UnityEngine.Collider PanHandler::guideStartNode
	Collider_t2939674232 * ___guideStartNode_13;
	// System.Boolean PanHandler::triggerCenter
	bool ___triggerCenter_14;
	// UnityEngine.Collider PanHandler::col
	Collider_t2939674232 * ___col_15;
	// UnityEngine.Vector3 PanHandler::colPrevPosition
	Vector3_t4282066566  ___colPrevPosition_16;

public:
	inline static int32_t get_offset_of_gestureState_2() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___gestureState_2)); }
	inline int32_t get_gestureState_2() const { return ___gestureState_2; }
	inline int32_t* get_address_of_gestureState_2() { return &___gestureState_2; }
	inline void set_gestureState_2(int32_t value)
	{
		___gestureState_2 = value;
	}

	inline static int32_t get_offset_of_panOrientation_3() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___panOrientation_3)); }
	inline int32_t get_panOrientation_3() const { return ___panOrientation_3; }
	inline int32_t* get_address_of_panOrientation_3() { return &___panOrientation_3; }
	inline void set_panOrientation_3(int32_t value)
	{
		___panOrientation_3 = value;
	}

	inline static int32_t get_offset_of_panDirection_4() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___panDirection_4)); }
	inline int32_t get_panDirection_4() const { return ___panDirection_4; }
	inline int32_t* get_address_of_panDirection_4() { return &___panDirection_4; }
	inline void set_panDirection_4(int32_t value)
	{
		___panDirection_4 = value;
	}

	inline static int32_t get_offset_of_inertiaIntensity_5() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___inertiaIntensity_5)); }
	inline float get_inertiaIntensity_5() const { return ___inertiaIntensity_5; }
	inline float* get_address_of_inertiaIntensity_5() { return &___inertiaIntensity_5; }
	inline void set_inertiaIntensity_5(float value)
	{
		___inertiaIntensity_5 = value;
	}

	inline static int32_t get_offset_of_maxInertia_6() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___maxInertia_6)); }
	inline float get_maxInertia_6() const { return ___maxInertia_6; }
	inline float* get_address_of_maxInertia_6() { return &___maxInertia_6; }
	inline void set_maxInertia_6(float value)
	{
		___maxInertia_6 = value;
	}

	inline static int32_t get_offset_of_minInertia_7() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___minInertia_7)); }
	inline float get_minInertia_7() const { return ___minInertia_7; }
	inline float* get_address_of_minInertia_7() { return &___minInertia_7; }
	inline void set_minInertia_7(float value)
	{
		___minInertia_7 = value;
	}

	inline static int32_t get_offset_of_maxDifference_8() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___maxDifference_8)); }
	inline float get_maxDifference_8() const { return ___maxDifference_8; }
	inline float* get_address_of_maxDifference_8() { return &___maxDifference_8; }
	inline void set_maxDifference_8(float value)
	{
		___maxDifference_8 = value;
	}

	inline static int32_t get_offset_of_difference_9() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___difference_9)); }
	inline Vector3_t4282066566  get_difference_9() const { return ___difference_9; }
	inline Vector3_t4282066566 * get_address_of_difference_9() { return &___difference_9; }
	inline void set_difference_9(Vector3_t4282066566  value)
	{
		___difference_9 = value;
	}

	inline static int32_t get_offset_of_guideDestination_10() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___guideDestination_10)); }
	inline Vector3_t4282066566  get_guideDestination_10() const { return ___guideDestination_10; }
	inline Vector3_t4282066566 * get_address_of_guideDestination_10() { return &___guideDestination_10; }
	inline void set_guideDestination_10(Vector3_t4282066566  value)
	{
		___guideDestination_10 = value;
	}

	inline static int32_t get_offset_of_guideStart_11() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___guideStart_11)); }
	inline Vector3_t4282066566  get_guideStart_11() const { return ___guideStart_11; }
	inline Vector3_t4282066566 * get_address_of_guideStart_11() { return &___guideStart_11; }
	inline void set_guideStart_11(Vector3_t4282066566  value)
	{
		___guideStart_11 = value;
	}

	inline static int32_t get_offset_of_guideDistance_12() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___guideDistance_12)); }
	inline float get_guideDistance_12() const { return ___guideDistance_12; }
	inline float* get_address_of_guideDistance_12() { return &___guideDistance_12; }
	inline void set_guideDistance_12(float value)
	{
		___guideDistance_12 = value;
	}

	inline static int32_t get_offset_of_guideStartNode_13() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___guideStartNode_13)); }
	inline Collider_t2939674232 * get_guideStartNode_13() const { return ___guideStartNode_13; }
	inline Collider_t2939674232 ** get_address_of_guideStartNode_13() { return &___guideStartNode_13; }
	inline void set_guideStartNode_13(Collider_t2939674232 * value)
	{
		___guideStartNode_13 = value;
		Il2CppCodeGenWriteBarrier(&___guideStartNode_13, value);
	}

	inline static int32_t get_offset_of_triggerCenter_14() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___triggerCenter_14)); }
	inline bool get_triggerCenter_14() const { return ___triggerCenter_14; }
	inline bool* get_address_of_triggerCenter_14() { return &___triggerCenter_14; }
	inline void set_triggerCenter_14(bool value)
	{
		___triggerCenter_14 = value;
	}

	inline static int32_t get_offset_of_col_15() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___col_15)); }
	inline Collider_t2939674232 * get_col_15() const { return ___col_15; }
	inline Collider_t2939674232 ** get_address_of_col_15() { return &___col_15; }
	inline void set_col_15(Collider_t2939674232 * value)
	{
		___col_15 = value;
		Il2CppCodeGenWriteBarrier(&___col_15, value);
	}

	inline static int32_t get_offset_of_colPrevPosition_16() { return static_cast<int32_t>(offsetof(PanHandler_t3022430221, ___colPrevPosition_16)); }
	inline Vector3_t4282066566  get_colPrevPosition_16() const { return ___colPrevPosition_16; }
	inline Vector3_t4282066566 * get_address_of_colPrevPosition_16() { return &___colPrevPosition_16; }
	inline void set_colPrevPosition_16(Vector3_t4282066566  value)
	{
		___colPrevPosition_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

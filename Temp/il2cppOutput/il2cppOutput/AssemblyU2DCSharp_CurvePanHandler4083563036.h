#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SplineWalker
struct SplineWalker_t2638870407;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_GestureState2249240808.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurvePanHandler
struct  CurvePanHandler_t4083563036  : public MonoBehaviour_t667441552
{
public:
	// SplineWalker CurvePanHandler::walker
	SplineWalker_t2638870407 * ___walker_2;
	// UnityEngine.Vector3 CurvePanHandler::difference
	Vector3_t4282066566  ___difference_3;
	// System.Single CurvePanHandler::magnitude
	float ___magnitude_4;
	// UnityEngine.Vector3 CurvePanHandler::direction
	Vector3_t4282066566  ___direction_5;
	// System.Single CurvePanHandler::progress
	float ___progress_6;
	// System.Single CurvePanHandler::dampProgress
	float ___dampProgress_7;
	// System.Boolean CurvePanHandler::passing
	bool ___passing_8;
	// System.Boolean CurvePanHandler::panCompletedInAttractor
	bool ___panCompletedInAttractor_9;
	// System.Single CurvePanHandler::distanceFromEdge
	float ___distanceFromEdge_10;
	// System.Single CurvePanHandler::normalizedDistance
	float ___normalizedDistance_11;
	// GestureState CurvePanHandler::gestureState
	int32_t ___gestureState_12;
	// System.Single CurvePanHandler::inertiaIntensity
	float ___inertiaIntensity_13;
	// System.Single CurvePanHandler::maxMagnitude
	float ___maxMagnitude_14;

public:
	inline static int32_t get_offset_of_walker_2() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___walker_2)); }
	inline SplineWalker_t2638870407 * get_walker_2() const { return ___walker_2; }
	inline SplineWalker_t2638870407 ** get_address_of_walker_2() { return &___walker_2; }
	inline void set_walker_2(SplineWalker_t2638870407 * value)
	{
		___walker_2 = value;
		Il2CppCodeGenWriteBarrier(&___walker_2, value);
	}

	inline static int32_t get_offset_of_difference_3() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___difference_3)); }
	inline Vector3_t4282066566  get_difference_3() const { return ___difference_3; }
	inline Vector3_t4282066566 * get_address_of_difference_3() { return &___difference_3; }
	inline void set_difference_3(Vector3_t4282066566  value)
	{
		___difference_3 = value;
	}

	inline static int32_t get_offset_of_magnitude_4() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___magnitude_4)); }
	inline float get_magnitude_4() const { return ___magnitude_4; }
	inline float* get_address_of_magnitude_4() { return &___magnitude_4; }
	inline void set_magnitude_4(float value)
	{
		___magnitude_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___direction_5)); }
	inline Vector3_t4282066566  get_direction_5() const { return ___direction_5; }
	inline Vector3_t4282066566 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t4282066566  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_progress_6() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___progress_6)); }
	inline float get_progress_6() const { return ___progress_6; }
	inline float* get_address_of_progress_6() { return &___progress_6; }
	inline void set_progress_6(float value)
	{
		___progress_6 = value;
	}

	inline static int32_t get_offset_of_dampProgress_7() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___dampProgress_7)); }
	inline float get_dampProgress_7() const { return ___dampProgress_7; }
	inline float* get_address_of_dampProgress_7() { return &___dampProgress_7; }
	inline void set_dampProgress_7(float value)
	{
		___dampProgress_7 = value;
	}

	inline static int32_t get_offset_of_passing_8() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___passing_8)); }
	inline bool get_passing_8() const { return ___passing_8; }
	inline bool* get_address_of_passing_8() { return &___passing_8; }
	inline void set_passing_8(bool value)
	{
		___passing_8 = value;
	}

	inline static int32_t get_offset_of_panCompletedInAttractor_9() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___panCompletedInAttractor_9)); }
	inline bool get_panCompletedInAttractor_9() const { return ___panCompletedInAttractor_9; }
	inline bool* get_address_of_panCompletedInAttractor_9() { return &___panCompletedInAttractor_9; }
	inline void set_panCompletedInAttractor_9(bool value)
	{
		___panCompletedInAttractor_9 = value;
	}

	inline static int32_t get_offset_of_distanceFromEdge_10() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___distanceFromEdge_10)); }
	inline float get_distanceFromEdge_10() const { return ___distanceFromEdge_10; }
	inline float* get_address_of_distanceFromEdge_10() { return &___distanceFromEdge_10; }
	inline void set_distanceFromEdge_10(float value)
	{
		___distanceFromEdge_10 = value;
	}

	inline static int32_t get_offset_of_normalizedDistance_11() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___normalizedDistance_11)); }
	inline float get_normalizedDistance_11() const { return ___normalizedDistance_11; }
	inline float* get_address_of_normalizedDistance_11() { return &___normalizedDistance_11; }
	inline void set_normalizedDistance_11(float value)
	{
		___normalizedDistance_11 = value;
	}

	inline static int32_t get_offset_of_gestureState_12() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___gestureState_12)); }
	inline int32_t get_gestureState_12() const { return ___gestureState_12; }
	inline int32_t* get_address_of_gestureState_12() { return &___gestureState_12; }
	inline void set_gestureState_12(int32_t value)
	{
		___gestureState_12 = value;
	}

	inline static int32_t get_offset_of_inertiaIntensity_13() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___inertiaIntensity_13)); }
	inline float get_inertiaIntensity_13() const { return ___inertiaIntensity_13; }
	inline float* get_address_of_inertiaIntensity_13() { return &___inertiaIntensity_13; }
	inline void set_inertiaIntensity_13(float value)
	{
		___inertiaIntensity_13 = value;
	}

	inline static int32_t get_offset_of_maxMagnitude_14() { return static_cast<int32_t>(offsetof(CurvePanHandler_t4083563036, ___maxMagnitude_14)); }
	inline float get_maxMagnitude_14() const { return ___maxMagnitude_14; }
	inline float* get_address_of_maxMagnitude_14() { return &___maxMagnitude_14; }
	inline void set_maxMagnitude_14(float value)
	{
		___maxMagnitude_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

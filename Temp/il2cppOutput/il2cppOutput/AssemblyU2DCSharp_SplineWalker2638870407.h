#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// BezierSpline
struct BezierSpline_t326427568;
// Interval[]
struct IntervalU5BU5D_t3212789224;
// Interval
struct Interval_t635062501;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_PositionState1854061768.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplineWalker
struct  SplineWalker_t2638870407  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SplineWalker::plane
	GameObject_t3674682005 * ___plane_2;
	// PositionState SplineWalker::state
	int32_t ___state_3;
	// PositionState SplineWalker::prevState
	int32_t ___prevState_4;
	// BezierSpline SplineWalker::spline
	BezierSpline_t326427568 * ___spline_5;
	// Interval[] SplineWalker::attractionPoints
	IntervalU5BU5D_t3212789224* ___attractionPoints_6;
	// Interval SplineWalker::activeAtrractionPoint
	Interval_t635062501 * ___activeAtrractionPoint_7;
	// System.Single SplineWalker::bumpOffset
	float ___bumpOffset_8;
	// System.Boolean SplineWalker::lookForward
	bool ___lookForward_9;
	// System.Single SplineWalker::progress
	float ___progress_10;
	// System.Single SplineWalker::t
	float ___t_11;
	// UnityEngine.GameObject SplineWalker::pointPrefab
	GameObject_t3674682005 * ___pointPrefab_12;
	// UnityEngine.GameObject SplineWalker::borderPrefab
	GameObject_t3674682005 * ___borderPrefab_13;

public:
	inline static int32_t get_offset_of_plane_2() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___plane_2)); }
	inline GameObject_t3674682005 * get_plane_2() const { return ___plane_2; }
	inline GameObject_t3674682005 ** get_address_of_plane_2() { return &___plane_2; }
	inline void set_plane_2(GameObject_t3674682005 * value)
	{
		___plane_2 = value;
		Il2CppCodeGenWriteBarrier(&___plane_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_prevState_4() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___prevState_4)); }
	inline int32_t get_prevState_4() const { return ___prevState_4; }
	inline int32_t* get_address_of_prevState_4() { return &___prevState_4; }
	inline void set_prevState_4(int32_t value)
	{
		___prevState_4 = value;
	}

	inline static int32_t get_offset_of_spline_5() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___spline_5)); }
	inline BezierSpline_t326427568 * get_spline_5() const { return ___spline_5; }
	inline BezierSpline_t326427568 ** get_address_of_spline_5() { return &___spline_5; }
	inline void set_spline_5(BezierSpline_t326427568 * value)
	{
		___spline_5 = value;
		Il2CppCodeGenWriteBarrier(&___spline_5, value);
	}

	inline static int32_t get_offset_of_attractionPoints_6() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___attractionPoints_6)); }
	inline IntervalU5BU5D_t3212789224* get_attractionPoints_6() const { return ___attractionPoints_6; }
	inline IntervalU5BU5D_t3212789224** get_address_of_attractionPoints_6() { return &___attractionPoints_6; }
	inline void set_attractionPoints_6(IntervalU5BU5D_t3212789224* value)
	{
		___attractionPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___attractionPoints_6, value);
	}

	inline static int32_t get_offset_of_activeAtrractionPoint_7() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___activeAtrractionPoint_7)); }
	inline Interval_t635062501 * get_activeAtrractionPoint_7() const { return ___activeAtrractionPoint_7; }
	inline Interval_t635062501 ** get_address_of_activeAtrractionPoint_7() { return &___activeAtrractionPoint_7; }
	inline void set_activeAtrractionPoint_7(Interval_t635062501 * value)
	{
		___activeAtrractionPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeAtrractionPoint_7, value);
	}

	inline static int32_t get_offset_of_bumpOffset_8() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___bumpOffset_8)); }
	inline float get_bumpOffset_8() const { return ___bumpOffset_8; }
	inline float* get_address_of_bumpOffset_8() { return &___bumpOffset_8; }
	inline void set_bumpOffset_8(float value)
	{
		___bumpOffset_8 = value;
	}

	inline static int32_t get_offset_of_lookForward_9() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___lookForward_9)); }
	inline bool get_lookForward_9() const { return ___lookForward_9; }
	inline bool* get_address_of_lookForward_9() { return &___lookForward_9; }
	inline void set_lookForward_9(bool value)
	{
		___lookForward_9 = value;
	}

	inline static int32_t get_offset_of_progress_10() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___progress_10)); }
	inline float get_progress_10() const { return ___progress_10; }
	inline float* get_address_of_progress_10() { return &___progress_10; }
	inline void set_progress_10(float value)
	{
		___progress_10 = value;
	}

	inline static int32_t get_offset_of_t_11() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___t_11)); }
	inline float get_t_11() const { return ___t_11; }
	inline float* get_address_of_t_11() { return &___t_11; }
	inline void set_t_11(float value)
	{
		___t_11 = value;
	}

	inline static int32_t get_offset_of_pointPrefab_12() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___pointPrefab_12)); }
	inline GameObject_t3674682005 * get_pointPrefab_12() const { return ___pointPrefab_12; }
	inline GameObject_t3674682005 ** get_address_of_pointPrefab_12() { return &___pointPrefab_12; }
	inline void set_pointPrefab_12(GameObject_t3674682005 * value)
	{
		___pointPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___pointPrefab_12, value);
	}

	inline static int32_t get_offset_of_borderPrefab_13() { return static_cast<int32_t>(offsetof(SplineWalker_t2638870407, ___borderPrefab_13)); }
	inline GameObject_t3674682005 * get_borderPrefab_13() const { return ___borderPrefab_13; }
	inline GameObject_t3674682005 ** get_address_of_borderPrefab_13() { return &___borderPrefab_13; }
	inline void set_borderPrefab_13(GameObject_t3674682005 * value)
	{
		___borderPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___borderPrefab_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

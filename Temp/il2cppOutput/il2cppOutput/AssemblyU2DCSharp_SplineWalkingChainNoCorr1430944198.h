#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BezierSpline
struct BezierSpline_t326427568;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_SplineWalkerMode1896450506.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplineWalkingChainNoCorr
struct  SplineWalkingChainNoCorr_t1430944198  : public MonoBehaviour_t667441552
{
public:
	// BezierSpline SplineWalkingChainNoCorr::spline
	BezierSpline_t326427568 * ___spline_2;
	// System.Single SplineWalkingChainNoCorr::duration
	float ___duration_3;
	// System.Single SplineWalkingChainNoCorr::speed
	float ___speed_4;
	// System.Boolean SplineWalkingChainNoCorr::lookForward
	bool ___lookForward_5;
	// SplineWalkerMode SplineWalkingChainNoCorr::mode
	int32_t ___mode_6;
	// System.Single SplineWalkingChainNoCorr::progress
	float ___progress_7;
	// System.Int32 SplineWalkingChainNoCorr::objectCount
	int32_t ___objectCount_8;
	// System.Single SplineWalkingChainNoCorr::offset
	float ___offset_9;
	// UnityEngine.GameObject SplineWalkingChainNoCorr::parent
	GameObject_t3674682005 * ___parent_10;
	// UnityEngine.GameObject SplineWalkingChainNoCorr::prefab
	GameObject_t3674682005 * ___prefab_11;
	// UnityEngine.GameObject[] SplineWalkingChainNoCorr::prefabObjects
	GameObjectU5BU5D_t2662109048* ___prefabObjects_12;

public:
	inline static int32_t get_offset_of_spline_2() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___spline_2)); }
	inline BezierSpline_t326427568 * get_spline_2() const { return ___spline_2; }
	inline BezierSpline_t326427568 ** get_address_of_spline_2() { return &___spline_2; }
	inline void set_spline_2(BezierSpline_t326427568 * value)
	{
		___spline_2 = value;
		Il2CppCodeGenWriteBarrier(&___spline_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_lookForward_5() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___lookForward_5)); }
	inline bool get_lookForward_5() const { return ___lookForward_5; }
	inline bool* get_address_of_lookForward_5() { return &___lookForward_5; }
	inline void set_lookForward_5(bool value)
	{
		___lookForward_5 = value;
	}

	inline static int32_t get_offset_of_mode_6() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___mode_6)); }
	inline int32_t get_mode_6() const { return ___mode_6; }
	inline int32_t* get_address_of_mode_6() { return &___mode_6; }
	inline void set_mode_6(int32_t value)
	{
		___mode_6 = value;
	}

	inline static int32_t get_offset_of_progress_7() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___progress_7)); }
	inline float get_progress_7() const { return ___progress_7; }
	inline float* get_address_of_progress_7() { return &___progress_7; }
	inline void set_progress_7(float value)
	{
		___progress_7 = value;
	}

	inline static int32_t get_offset_of_objectCount_8() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___objectCount_8)); }
	inline int32_t get_objectCount_8() const { return ___objectCount_8; }
	inline int32_t* get_address_of_objectCount_8() { return &___objectCount_8; }
	inline void set_objectCount_8(int32_t value)
	{
		___objectCount_8 = value;
	}

	inline static int32_t get_offset_of_offset_9() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___offset_9)); }
	inline float get_offset_9() const { return ___offset_9; }
	inline float* get_address_of_offset_9() { return &___offset_9; }
	inline void set_offset_9(float value)
	{
		___offset_9 = value;
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___parent_10)); }
	inline GameObject_t3674682005 * get_parent_10() const { return ___parent_10; }
	inline GameObject_t3674682005 ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(GameObject_t3674682005 * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier(&___parent_10, value);
	}

	inline static int32_t get_offset_of_prefab_11() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___prefab_11)); }
	inline GameObject_t3674682005 * get_prefab_11() const { return ___prefab_11; }
	inline GameObject_t3674682005 ** get_address_of_prefab_11() { return &___prefab_11; }
	inline void set_prefab_11(GameObject_t3674682005 * value)
	{
		___prefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_11, value);
	}

	inline static int32_t get_offset_of_prefabObjects_12() { return static_cast<int32_t>(offsetof(SplineWalkingChainNoCorr_t1430944198, ___prefabObjects_12)); }
	inline GameObjectU5BU5D_t2662109048* get_prefabObjects_12() const { return ___prefabObjects_12; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_prefabObjects_12() { return &___prefabObjects_12; }
	inline void set_prefabObjects_12(GameObjectU5BU5D_t2662109048* value)
	{
		___prefabObjects_12 = value;
		Il2CppCodeGenWriteBarrier(&___prefabObjects_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

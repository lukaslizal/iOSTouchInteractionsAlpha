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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplineDecorator
struct  SplineDecorator_t2893611850  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 SplineDecorator::maxObjectCount
	int32_t ___maxObjectCount_2;
	// System.Single SplineDecorator::offset
	float ___offset_3;
	// UnityEngine.GameObject SplineDecorator::dotPrefab
	GameObject_t3674682005 * ___dotPrefab_4;
	// UnityEngine.GameObject SplineDecorator::endPrefab
	GameObject_t3674682005 * ___endPrefab_5;
	// BezierSpline SplineDecorator::spline
	BezierSpline_t326427568 * ___spline_6;
	// UnityEngine.GameObject[] SplineDecorator::dots
	GameObjectU5BU5D_t2662109048* ___dots_7;

public:
	inline static int32_t get_offset_of_maxObjectCount_2() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___maxObjectCount_2)); }
	inline int32_t get_maxObjectCount_2() const { return ___maxObjectCount_2; }
	inline int32_t* get_address_of_maxObjectCount_2() { return &___maxObjectCount_2; }
	inline void set_maxObjectCount_2(int32_t value)
	{
		___maxObjectCount_2 = value;
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___offset_3)); }
	inline float get_offset_3() const { return ___offset_3; }
	inline float* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(float value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_dotPrefab_4() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___dotPrefab_4)); }
	inline GameObject_t3674682005 * get_dotPrefab_4() const { return ___dotPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_dotPrefab_4() { return &___dotPrefab_4; }
	inline void set_dotPrefab_4(GameObject_t3674682005 * value)
	{
		___dotPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___dotPrefab_4, value);
	}

	inline static int32_t get_offset_of_endPrefab_5() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___endPrefab_5)); }
	inline GameObject_t3674682005 * get_endPrefab_5() const { return ___endPrefab_5; }
	inline GameObject_t3674682005 ** get_address_of_endPrefab_5() { return &___endPrefab_5; }
	inline void set_endPrefab_5(GameObject_t3674682005 * value)
	{
		___endPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___endPrefab_5, value);
	}

	inline static int32_t get_offset_of_spline_6() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___spline_6)); }
	inline BezierSpline_t326427568 * get_spline_6() const { return ___spline_6; }
	inline BezierSpline_t326427568 ** get_address_of_spline_6() { return &___spline_6; }
	inline void set_spline_6(BezierSpline_t326427568 * value)
	{
		___spline_6 = value;
		Il2CppCodeGenWriteBarrier(&___spline_6, value);
	}

	inline static int32_t get_offset_of_dots_7() { return static_cast<int32_t>(offsetof(SplineDecorator_t2893611850, ___dots_7)); }
	inline GameObjectU5BU5D_t2662109048* get_dots_7() const { return ___dots_7; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_dots_7() { return &___dots_7; }
	inline void set_dots_7(GameObjectU5BU5D_t2662109048* value)
	{
		___dots_7 = value;
		Il2CppCodeGenWriteBarrier(&___dots_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

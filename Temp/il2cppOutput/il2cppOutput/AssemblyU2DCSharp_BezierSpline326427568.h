#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// BezierControlPointMode[]
struct BezierControlPointModeU5BU5D_t622734968;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BezierSpline
struct  BezierSpline_t326427568  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean BezierSpline::showGraph
	bool ___showGraph_2;
	// System.Single[] BezierSpline::arr
	SingleU5BU5D_t2316563989* ___arr_3;
	// UnityEngine.GameObject[] BezierSpline::arrGraph
	GameObjectU5BU5D_t2662109048* ___arrGraph_4;
	// UnityEngine.Vector3[] BezierSpline::points
	Vector3U5BU5D_t215400611* ___points_5;
	// BezierControlPointMode[] BezierSpline::modes
	BezierControlPointModeU5BU5D_t622734968* ___modes_6;
	// System.Boolean BezierSpline::loop
	bool ___loop_7;

public:
	inline static int32_t get_offset_of_showGraph_2() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___showGraph_2)); }
	inline bool get_showGraph_2() const { return ___showGraph_2; }
	inline bool* get_address_of_showGraph_2() { return &___showGraph_2; }
	inline void set_showGraph_2(bool value)
	{
		___showGraph_2 = value;
	}

	inline static int32_t get_offset_of_arr_3() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___arr_3)); }
	inline SingleU5BU5D_t2316563989* get_arr_3() const { return ___arr_3; }
	inline SingleU5BU5D_t2316563989** get_address_of_arr_3() { return &___arr_3; }
	inline void set_arr_3(SingleU5BU5D_t2316563989* value)
	{
		___arr_3 = value;
		Il2CppCodeGenWriteBarrier(&___arr_3, value);
	}

	inline static int32_t get_offset_of_arrGraph_4() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___arrGraph_4)); }
	inline GameObjectU5BU5D_t2662109048* get_arrGraph_4() const { return ___arrGraph_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_arrGraph_4() { return &___arrGraph_4; }
	inline void set_arrGraph_4(GameObjectU5BU5D_t2662109048* value)
	{
		___arrGraph_4 = value;
		Il2CppCodeGenWriteBarrier(&___arrGraph_4, value);
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___points_5)); }
	inline Vector3U5BU5D_t215400611* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t215400611** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t215400611* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier(&___points_5, value);
	}

	inline static int32_t get_offset_of_modes_6() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___modes_6)); }
	inline BezierControlPointModeU5BU5D_t622734968* get_modes_6() const { return ___modes_6; }
	inline BezierControlPointModeU5BU5D_t622734968** get_address_of_modes_6() { return &___modes_6; }
	inline void set_modes_6(BezierControlPointModeU5BU5D_t622734968* value)
	{
		___modes_6 = value;
		Il2CppCodeGenWriteBarrier(&___modes_6, value);
	}

	inline static int32_t get_offset_of_loop_7() { return static_cast<int32_t>(offsetof(BezierSpline_t326427568, ___loop_7)); }
	inline bool get_loop_7() const { return ___loop_7; }
	inline bool* get_address_of_loop_7() { return &___loop_7; }
	inline void set_loop_7(bool value)
	{
		___loop_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

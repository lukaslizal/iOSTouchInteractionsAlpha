#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTSpline
struct  LTSpline_t3328440185  : public Il2CppObject
{
public:
	// System.Single LTSpline::distance
	float ___distance_2;
	// UnityEngine.Vector3[] LTSpline::pts
	Vector3U5BU5D_t215400611* ___pts_3;
	// UnityEngine.Vector3[] LTSpline::ptsAdj
	Vector3U5BU5D_t215400611* ___ptsAdj_4;
	// System.Int32 LTSpline::ptsAdjLength
	int32_t ___ptsAdjLength_5;
	// System.Boolean LTSpline::orientToPath
	bool ___orientToPath_6;
	// System.Boolean LTSpline::orientToPath2d
	bool ___orientToPath2d_7;
	// System.Int32 LTSpline::numSections
	int32_t ___numSections_8;
	// System.Int32 LTSpline::currPt
	int32_t ___currPt_9;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_pts_3() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___pts_3)); }
	inline Vector3U5BU5D_t215400611* get_pts_3() const { return ___pts_3; }
	inline Vector3U5BU5D_t215400611** get_address_of_pts_3() { return &___pts_3; }
	inline void set_pts_3(Vector3U5BU5D_t215400611* value)
	{
		___pts_3 = value;
		Il2CppCodeGenWriteBarrier(&___pts_3, value);
	}

	inline static int32_t get_offset_of_ptsAdj_4() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___ptsAdj_4)); }
	inline Vector3U5BU5D_t215400611* get_ptsAdj_4() const { return ___ptsAdj_4; }
	inline Vector3U5BU5D_t215400611** get_address_of_ptsAdj_4() { return &___ptsAdj_4; }
	inline void set_ptsAdj_4(Vector3U5BU5D_t215400611* value)
	{
		___ptsAdj_4 = value;
		Il2CppCodeGenWriteBarrier(&___ptsAdj_4, value);
	}

	inline static int32_t get_offset_of_ptsAdjLength_5() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___ptsAdjLength_5)); }
	inline int32_t get_ptsAdjLength_5() const { return ___ptsAdjLength_5; }
	inline int32_t* get_address_of_ptsAdjLength_5() { return &___ptsAdjLength_5; }
	inline void set_ptsAdjLength_5(int32_t value)
	{
		___ptsAdjLength_5 = value;
	}

	inline static int32_t get_offset_of_orientToPath_6() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___orientToPath_6)); }
	inline bool get_orientToPath_6() const { return ___orientToPath_6; }
	inline bool* get_address_of_orientToPath_6() { return &___orientToPath_6; }
	inline void set_orientToPath_6(bool value)
	{
		___orientToPath_6 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_7() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___orientToPath2d_7)); }
	inline bool get_orientToPath2d_7() const { return ___orientToPath2d_7; }
	inline bool* get_address_of_orientToPath2d_7() { return &___orientToPath2d_7; }
	inline void set_orientToPath2d_7(bool value)
	{
		___orientToPath2d_7 = value;
	}

	inline static int32_t get_offset_of_numSections_8() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___numSections_8)); }
	inline int32_t get_numSections_8() const { return ___numSections_8; }
	inline int32_t* get_address_of_numSections_8() { return &___numSections_8; }
	inline void set_numSections_8(int32_t value)
	{
		___numSections_8 = value;
	}

	inline static int32_t get_offset_of_currPt_9() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185, ___currPt_9)); }
	inline int32_t get_currPt_9() const { return ___currPt_9; }
	inline int32_t* get_address_of_currPt_9() { return &___currPt_9; }
	inline void set_currPt_9(int32_t value)
	{
		___currPt_9 = value;
	}
};

struct LTSpline_t3328440185_StaticFields
{
public:
	// System.Int32 LTSpline::DISTANCE_COUNT
	int32_t ___DISTANCE_COUNT_0;
	// System.Int32 LTSpline::SUBLINE_COUNT
	int32_t ___SUBLINE_COUNT_1;

public:
	inline static int32_t get_offset_of_DISTANCE_COUNT_0() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185_StaticFields, ___DISTANCE_COUNT_0)); }
	inline int32_t get_DISTANCE_COUNT_0() const { return ___DISTANCE_COUNT_0; }
	inline int32_t* get_address_of_DISTANCE_COUNT_0() { return &___DISTANCE_COUNT_0; }
	inline void set_DISTANCE_COUNT_0(int32_t value)
	{
		___DISTANCE_COUNT_0 = value;
	}

	inline static int32_t get_offset_of_SUBLINE_COUNT_1() { return static_cast<int32_t>(offsetof(LTSpline_t3328440185_StaticFields, ___SUBLINE_COUNT_1)); }
	inline int32_t get_SUBLINE_COUNT_1() const { return ___SUBLINE_COUNT_1; }
	inline int32_t* get_address_of_SUBLINE_COUNT_1() { return &___SUBLINE_COUNT_1; }
	inline void set_SUBLINE_COUNT_1(int32_t value)
	{
		___SUBLINE_COUNT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

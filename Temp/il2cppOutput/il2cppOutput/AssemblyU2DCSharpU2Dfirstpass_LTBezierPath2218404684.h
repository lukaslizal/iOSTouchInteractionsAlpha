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
// LTBezier[]
struct LTBezierU5BU5D_t3390536574;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTBezierPath
struct  LTBezierPath_t2218404684  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] LTBezierPath::pts
	Vector3U5BU5D_t215400611* ___pts_0;
	// System.Single LTBezierPath::length
	float ___length_1;
	// System.Boolean LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LTBezier[] LTBezierPath::beziers
	LTBezierU5BU5D_t3390536574* ___beziers_4;
	// System.Single[] LTBezierPath::lengthRatio
	SingleU5BU5D_t2316563989* ___lengthRatio_5;
	// System.Int32 LTBezierPath::currentBezier
	int32_t ___currentBezier_6;
	// System.Int32 LTBezierPath::previousBezier
	int32_t ___previousBezier_7;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___pts_0)); }
	inline Vector3U5BU5D_t215400611* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t215400611** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t215400611* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier(&___pts_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___length_1)); }
	inline float get_length_1() const { return ___length_1; }
	inline float* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(float value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_orientToPath_2() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___orientToPath_2)); }
	inline bool get_orientToPath_2() const { return ___orientToPath_2; }
	inline bool* get_address_of_orientToPath_2() { return &___orientToPath_2; }
	inline void set_orientToPath_2(bool value)
	{
		___orientToPath_2 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_3() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___orientToPath2d_3)); }
	inline bool get_orientToPath2d_3() const { return ___orientToPath2d_3; }
	inline bool* get_address_of_orientToPath2d_3() { return &___orientToPath2d_3; }
	inline void set_orientToPath2d_3(bool value)
	{
		___orientToPath2d_3 = value;
	}

	inline static int32_t get_offset_of_beziers_4() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___beziers_4)); }
	inline LTBezierU5BU5D_t3390536574* get_beziers_4() const { return ___beziers_4; }
	inline LTBezierU5BU5D_t3390536574** get_address_of_beziers_4() { return &___beziers_4; }
	inline void set_beziers_4(LTBezierU5BU5D_t3390536574* value)
	{
		___beziers_4 = value;
		Il2CppCodeGenWriteBarrier(&___beziers_4, value);
	}

	inline static int32_t get_offset_of_lengthRatio_5() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___lengthRatio_5)); }
	inline SingleU5BU5D_t2316563989* get_lengthRatio_5() const { return ___lengthRatio_5; }
	inline SingleU5BU5D_t2316563989** get_address_of_lengthRatio_5() { return &___lengthRatio_5; }
	inline void set_lengthRatio_5(SingleU5BU5D_t2316563989* value)
	{
		___lengthRatio_5 = value;
		Il2CppCodeGenWriteBarrier(&___lengthRatio_5, value);
	}

	inline static int32_t get_offset_of_currentBezier_6() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___currentBezier_6)); }
	inline int32_t get_currentBezier_6() const { return ___currentBezier_6; }
	inline int32_t* get_address_of_currentBezier_6() { return &___currentBezier_6; }
	inline void set_currentBezier_6(int32_t value)
	{
		___currentBezier_6 = value;
	}

	inline static int32_t get_offset_of_previousBezier_7() { return static_cast<int32_t>(offsetof(LTBezierPath_t2218404684, ___previousBezier_7)); }
	inline int32_t get_previousBezier_7() const { return ___previousBezier_7; }
	inline int32_t* get_address_of_previousBezier_7() { return &___previousBezier_7; }
	inline void set_previousBezier_7(int32_t value)
	{
		___previousBezier_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

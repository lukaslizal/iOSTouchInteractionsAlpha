#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TouchScript.ITouch>
struct List_1_t1052347832;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Clusters.Clusters
struct  Clusters_t3552588057  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::points
	List_1_t1052347832 * ___points_2;
	// System.Boolean TouchScript.Clusters.Clusters::dirty
	bool ___dirty_3;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::cluster1
	List_1_t1052347832 * ___cluster1_4;
	// System.Collections.Generic.List`1<TouchScript.ITouch> TouchScript.Clusters.Clusters::cluster2
	List_1_t1052347832 * ___cluster2_5;
	// System.Single TouchScript.Clusters.Clusters::minPointDistance
	float ___minPointDistance_6;
	// System.Single TouchScript.Clusters.Clusters::minPointDistanceSqr
	float ___minPointDistanceSqr_7;
	// System.Boolean TouchScript.Clusters.Clusters::hasClusters
	bool ___hasClusters_8;

public:
	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___points_2)); }
	inline List_1_t1052347832 * get_points_2() const { return ___points_2; }
	inline List_1_t1052347832 ** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(List_1_t1052347832 * value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier(&___points_2, value);
	}

	inline static int32_t get_offset_of_dirty_3() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___dirty_3)); }
	inline bool get_dirty_3() const { return ___dirty_3; }
	inline bool* get_address_of_dirty_3() { return &___dirty_3; }
	inline void set_dirty_3(bool value)
	{
		___dirty_3 = value;
	}

	inline static int32_t get_offset_of_cluster1_4() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___cluster1_4)); }
	inline List_1_t1052347832 * get_cluster1_4() const { return ___cluster1_4; }
	inline List_1_t1052347832 ** get_address_of_cluster1_4() { return &___cluster1_4; }
	inline void set_cluster1_4(List_1_t1052347832 * value)
	{
		___cluster1_4 = value;
		Il2CppCodeGenWriteBarrier(&___cluster1_4, value);
	}

	inline static int32_t get_offset_of_cluster2_5() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___cluster2_5)); }
	inline List_1_t1052347832 * get_cluster2_5() const { return ___cluster2_5; }
	inline List_1_t1052347832 ** get_address_of_cluster2_5() { return &___cluster2_5; }
	inline void set_cluster2_5(List_1_t1052347832 * value)
	{
		___cluster2_5 = value;
		Il2CppCodeGenWriteBarrier(&___cluster2_5, value);
	}

	inline static int32_t get_offset_of_minPointDistance_6() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___minPointDistance_6)); }
	inline float get_minPointDistance_6() const { return ___minPointDistance_6; }
	inline float* get_address_of_minPointDistance_6() { return &___minPointDistance_6; }
	inline void set_minPointDistance_6(float value)
	{
		___minPointDistance_6 = value;
	}

	inline static int32_t get_offset_of_minPointDistanceSqr_7() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___minPointDistanceSqr_7)); }
	inline float get_minPointDistanceSqr_7() const { return ___minPointDistanceSqr_7; }
	inline float* get_address_of_minPointDistanceSqr_7() { return &___minPointDistanceSqr_7; }
	inline void set_minPointDistanceSqr_7(float value)
	{
		___minPointDistanceSqr_7 = value;
	}

	inline static int32_t get_offset_of_hasClusters_8() { return static_cast<int32_t>(offsetof(Clusters_t3552588057, ___hasClusters_8)); }
	inline bool get_hasClusters_8() const { return ___hasClusters_8; }
	inline bool* get_address_of_hasClusters_8() { return &___hasClusters_8; }
	inline void set_hasClusters_8(bool value)
	{
		___hasClusters_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

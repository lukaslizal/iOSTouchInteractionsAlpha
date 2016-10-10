#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapSpawner
struct  TapSpawner_t3017634917  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TapSpawner::CubePrefab
	Transform_t1659122786 * ___CubePrefab_2;
	// UnityEngine.Transform TapSpawner::Container
	Transform_t1659122786 * ___Container_3;
	// System.Single TapSpawner::Scale
	float ___Scale_4;

public:
	inline static int32_t get_offset_of_CubePrefab_2() { return static_cast<int32_t>(offsetof(TapSpawner_t3017634917, ___CubePrefab_2)); }
	inline Transform_t1659122786 * get_CubePrefab_2() const { return ___CubePrefab_2; }
	inline Transform_t1659122786 ** get_address_of_CubePrefab_2() { return &___CubePrefab_2; }
	inline void set_CubePrefab_2(Transform_t1659122786 * value)
	{
		___CubePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___CubePrefab_2, value);
	}

	inline static int32_t get_offset_of_Container_3() { return static_cast<int32_t>(offsetof(TapSpawner_t3017634917, ___Container_3)); }
	inline Transform_t1659122786 * get_Container_3() const { return ___Container_3; }
	inline Transform_t1659122786 ** get_address_of_Container_3() { return &___Container_3; }
	inline void set_Container_3(Transform_t1659122786 * value)
	{
		___Container_3 = value;
		Il2CppCodeGenWriteBarrier(&___Container_3, value);
	}

	inline static int32_t get_offset_of_Scale_4() { return static_cast<int32_t>(offsetof(TapSpawner_t3017634917, ___Scale_4)); }
	inline float get_Scale_4() const { return ___Scale_4; }
	inline float* get_address_of_Scale_4() { return &___Scale_4; }
	inline void set_Scale_4(float value)
	{
		___Scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

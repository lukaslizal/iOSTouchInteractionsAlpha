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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaceAssets
struct  PlaceAssets_t1153482570  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PlaceAssets::dotPrefab
	GameObject_t3674682005 * ___dotPrefab_2;
	// UnityEngine.GameObject PlaceAssets::endPrefab
	GameObject_t3674682005 * ___endPrefab_3;
	// UnityEngine.GameObject PlaceAssets::snapPrefab
	GameObject_t3674682005 * ___snapPrefab_4;
	// System.Int32 PlaceAssets::length
	int32_t ___length_5;
	// System.Int32 PlaceAssets::snapPoints
	int32_t ___snapPoints_6;

public:
	inline static int32_t get_offset_of_dotPrefab_2() { return static_cast<int32_t>(offsetof(PlaceAssets_t1153482570, ___dotPrefab_2)); }
	inline GameObject_t3674682005 * get_dotPrefab_2() const { return ___dotPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_dotPrefab_2() { return &___dotPrefab_2; }
	inline void set_dotPrefab_2(GameObject_t3674682005 * value)
	{
		___dotPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___dotPrefab_2, value);
	}

	inline static int32_t get_offset_of_endPrefab_3() { return static_cast<int32_t>(offsetof(PlaceAssets_t1153482570, ___endPrefab_3)); }
	inline GameObject_t3674682005 * get_endPrefab_3() const { return ___endPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_endPrefab_3() { return &___endPrefab_3; }
	inline void set_endPrefab_3(GameObject_t3674682005 * value)
	{
		___endPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___endPrefab_3, value);
	}

	inline static int32_t get_offset_of_snapPrefab_4() { return static_cast<int32_t>(offsetof(PlaceAssets_t1153482570, ___snapPrefab_4)); }
	inline GameObject_t3674682005 * get_snapPrefab_4() const { return ___snapPrefab_4; }
	inline GameObject_t3674682005 ** get_address_of_snapPrefab_4() { return &___snapPrefab_4; }
	inline void set_snapPrefab_4(GameObject_t3674682005 * value)
	{
		___snapPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___snapPrefab_4, value);
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(PlaceAssets_t1153482570, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}

	inline static int32_t get_offset_of_snapPoints_6() { return static_cast<int32_t>(offsetof(PlaceAssets_t1153482570, ___snapPoints_6)); }
	inline int32_t get_snapPoints_6() const { return ___snapPoints_6; }
	inline int32_t* get_address_of_snapPoints_6() { return &___snapPoints_6; }
	inline void set_snapPoints_6(int32_t value)
	{
		___snapPoints_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

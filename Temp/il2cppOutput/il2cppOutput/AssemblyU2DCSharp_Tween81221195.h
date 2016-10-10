﻿#pragma once

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
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tween
struct  Tween_t81221195  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Tween::cylinder
	GameObject_t3674682005 * ___cylinder_2;
	// UnityEngine.GameObject Tween::cube
	GameObject_t3674682005 * ___cube_3;
	// UnityEngine.Vector3 Tween::position
	Vector3_t4282066566  ___position_4;

public:
	inline static int32_t get_offset_of_cylinder_2() { return static_cast<int32_t>(offsetof(Tween_t81221195, ___cylinder_2)); }
	inline GameObject_t3674682005 * get_cylinder_2() const { return ___cylinder_2; }
	inline GameObject_t3674682005 ** get_address_of_cylinder_2() { return &___cylinder_2; }
	inline void set_cylinder_2(GameObject_t3674682005 * value)
	{
		___cylinder_2 = value;
		Il2CppCodeGenWriteBarrier(&___cylinder_2, value);
	}

	inline static int32_t get_offset_of_cube_3() { return static_cast<int32_t>(offsetof(Tween_t81221195, ___cube_3)); }
	inline GameObject_t3674682005 * get_cube_3() const { return ___cube_3; }
	inline GameObject_t3674682005 ** get_address_of_cube_3() { return &___cube_3; }
	inline void set_cube_3(GameObject_t3674682005 * value)
	{
		___cube_3 = value;
		Il2CppCodeGenWriteBarrier(&___cube_3, value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Tween_t81221195, ___position_4)); }
	inline Vector3_t4282066566  get_position_4() const { return ___position_4; }
	inline Vector3_t4282066566 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t4282066566  value)
	{
		___position_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

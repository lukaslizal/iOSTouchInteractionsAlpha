﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.Hit.TouchHit3D[]
struct TouchHit3DU5BU5D_t1692319236;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<TouchScript.Hit.TouchHit3D>
struct  Stack_1_t4051533717  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TouchHit3DU5BU5D_t1692319236* ____array_1;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Stack_1_t4051533717, ____array_1)); }
	inline TouchHit3DU5BU5D_t1692319236* get__array_1() const { return ____array_1; }
	inline TouchHit3DU5BU5D_t1692319236** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(TouchHit3DU5BU5D_t1692319236* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier(&____array_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Stack_1_t4051533717, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Stack_1_t4051533717, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Utils.ClusterUtils
struct  ClusterUtils_t531924503  : public Il2CppObject
{
public:

public:
};

struct ClusterUtils_t531924503_StaticFields
{
public:
	// System.Text.StringBuilder TouchScript.Utils.ClusterUtils::hashString
	StringBuilder_t243639308 * ___hashString_0;

public:
	inline static int32_t get_offset_of_hashString_0() { return static_cast<int32_t>(offsetof(ClusterUtils_t531924503_StaticFields, ___hashString_0)); }
	inline StringBuilder_t243639308 * get_hashString_0() const { return ___hashString_0; }
	inline StringBuilder_t243639308 ** get_address_of_hashString_0() { return &___hashString_0; }
	inline void set_hashString_0(StringBuilder_t243639308 * value)
	{
		___hashString_0 = value;
		Il2CppCodeGenWriteBarrier(&___hashString_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

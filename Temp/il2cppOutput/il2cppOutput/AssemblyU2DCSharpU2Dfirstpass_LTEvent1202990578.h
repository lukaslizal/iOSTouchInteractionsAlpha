#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTEvent
struct  LTEvent_t1202990578  : public Il2CppObject
{
public:
	// System.Int32 LTEvent::id
	int32_t ___id_0;
	// System.Object LTEvent::data
	Il2CppObject * ___data_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(LTEvent_t1202990578, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LTEvent_t1202990578, ___data_1)); }
	inline Il2CppObject * get_data_1() const { return ___data_1; }
	inline Il2CppObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Il2CppObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchManagerInstance/CancelledTouch
struct  CancelledTouch_t4162509494 
{
public:
	// System.Int32 TouchScript.TouchManagerInstance/CancelledTouch::Id
	int32_t ___Id_0;
	// System.Boolean TouchScript.TouchManagerInstance/CancelledTouch::Redispatch
	bool ___Redispatch_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(CancelledTouch_t4162509494, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Redispatch_1() { return static_cast<int32_t>(offsetof(CancelledTouch_t4162509494, ___Redispatch_1)); }
	inline bool get_Redispatch_1() const { return ___Redispatch_1; }
	inline bool* get_address_of_Redispatch_1() { return &___Redispatch_1; }
	inline void set_Redispatch_1(bool value)
	{
		___Redispatch_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TouchScript.TouchManagerInstance/CancelledTouch
struct CancelledTouch_t4162509494_marshaled_pinvoke
{
	int32_t ___Id_0;
	int32_t ___Redispatch_1;
};
// Native definition for marshalling of: TouchScript.TouchManagerInstance/CancelledTouch
struct CancelledTouch_t4162509494_marshaled_com
{
	int32_t ___Id_0;
	int32_t ___Redispatch_1;
};

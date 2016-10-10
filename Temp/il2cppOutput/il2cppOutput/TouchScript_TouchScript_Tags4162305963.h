#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Tags
struct  Tags_t4162305963  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> TouchScript.Tags::tagList
	List_1_t1375417109 * ___tagList_6;

public:
	inline static int32_t get_offset_of_tagList_6() { return static_cast<int32_t>(offsetof(Tags_t4162305963, ___tagList_6)); }
	inline List_1_t1375417109 * get_tagList_6() const { return ___tagList_6; }
	inline List_1_t1375417109 ** get_address_of_tagList_6() { return &___tagList_6; }
	inline void set_tagList_6(List_1_t1375417109 * value)
	{
		___tagList_6 = value;
		Il2CppCodeGenWriteBarrier(&___tagList_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

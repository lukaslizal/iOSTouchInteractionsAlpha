#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.Tags
struct Tags_t4162305963;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState>
struct Dictionary_2_t3701828987;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t308267276;

#include "TouchScript_TouchScript_InputSources_InputSource3009306351.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.MobileInput
struct  MobileInput_t1985552050  : public InputSource_t3009306351
{
public:
	// System.Boolean TouchScript.InputSources.MobileInput::DisableOnNonTouchPlatforms
	bool ___DisableOnNonTouchPlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MobileInput::Tags
	Tags_t4162305963 * ___Tags_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.InputSources.TouchState> TouchScript.InputSources.MobileInput::touchStates
	Dictionary_2_t3701828987 * ___touchStates_7;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.InputSources.MobileInput::touchIds
	HashSet_1_t308267276 * ___touchIds_8;

public:
	inline static int32_t get_offset_of_DisableOnNonTouchPlatforms_5() { return static_cast<int32_t>(offsetof(MobileInput_t1985552050, ___DisableOnNonTouchPlatforms_5)); }
	inline bool get_DisableOnNonTouchPlatforms_5() const { return ___DisableOnNonTouchPlatforms_5; }
	inline bool* get_address_of_DisableOnNonTouchPlatforms_5() { return &___DisableOnNonTouchPlatforms_5; }
	inline void set_DisableOnNonTouchPlatforms_5(bool value)
	{
		___DisableOnNonTouchPlatforms_5 = value;
	}

	inline static int32_t get_offset_of_Tags_6() { return static_cast<int32_t>(offsetof(MobileInput_t1985552050, ___Tags_6)); }
	inline Tags_t4162305963 * get_Tags_6() const { return ___Tags_6; }
	inline Tags_t4162305963 ** get_address_of_Tags_6() { return &___Tags_6; }
	inline void set_Tags_6(Tags_t4162305963 * value)
	{
		___Tags_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tags_6, value);
	}

	inline static int32_t get_offset_of_touchStates_7() { return static_cast<int32_t>(offsetof(MobileInput_t1985552050, ___touchStates_7)); }
	inline Dictionary_2_t3701828987 * get_touchStates_7() const { return ___touchStates_7; }
	inline Dictionary_2_t3701828987 ** get_address_of_touchStates_7() { return &___touchStates_7; }
	inline void set_touchStates_7(Dictionary_2_t3701828987 * value)
	{
		___touchStates_7 = value;
		Il2CppCodeGenWriteBarrier(&___touchStates_7, value);
	}

	inline static int32_t get_offset_of_touchIds_8() { return static_cast<int32_t>(offsetof(MobileInput_t1985552050, ___touchIds_8)); }
	inline HashSet_1_t308267276 * get_touchIds_8() const { return ___touchIds_8; }
	inline HashSet_1_t308267276 ** get_address_of_touchIds_8() { return &___touchIds_8; }
	inline void set_touchIds_8(HashSet_1_t308267276 * value)
	{
		___touchIds_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchIds_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

#include "TouchScript_TouchScript_InputSources_InputSource3009306351.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.MouseInput
struct  MouseInput_t2005063047  : public InputSource_t3009306351
{
public:
	// System.Boolean TouchScript.InputSources.MouseInput::DisableOnMobilePlatforms
	bool ___DisableOnMobilePlatforms_5;
	// TouchScript.Tags TouchScript.InputSources.MouseInput::Tags
	Tags_t4162305963 * ___Tags_6;
	// System.Int32 TouchScript.InputSources.MouseInput::mousePointId
	int32_t ___mousePointId_7;
	// System.Int32 TouchScript.InputSources.MouseInput::fakeMousePointId
	int32_t ___fakeMousePointId_8;
	// UnityEngine.Vector3 TouchScript.InputSources.MouseInput::mousePointPos
	Vector3_t4282066566  ___mousePointPos_9;

public:
	inline static int32_t get_offset_of_DisableOnMobilePlatforms_5() { return static_cast<int32_t>(offsetof(MouseInput_t2005063047, ___DisableOnMobilePlatforms_5)); }
	inline bool get_DisableOnMobilePlatforms_5() const { return ___DisableOnMobilePlatforms_5; }
	inline bool* get_address_of_DisableOnMobilePlatforms_5() { return &___DisableOnMobilePlatforms_5; }
	inline void set_DisableOnMobilePlatforms_5(bool value)
	{
		___DisableOnMobilePlatforms_5 = value;
	}

	inline static int32_t get_offset_of_Tags_6() { return static_cast<int32_t>(offsetof(MouseInput_t2005063047, ___Tags_6)); }
	inline Tags_t4162305963 * get_Tags_6() const { return ___Tags_6; }
	inline Tags_t4162305963 ** get_address_of_Tags_6() { return &___Tags_6; }
	inline void set_Tags_6(Tags_t4162305963 * value)
	{
		___Tags_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tags_6, value);
	}

	inline static int32_t get_offset_of_mousePointId_7() { return static_cast<int32_t>(offsetof(MouseInput_t2005063047, ___mousePointId_7)); }
	inline int32_t get_mousePointId_7() const { return ___mousePointId_7; }
	inline int32_t* get_address_of_mousePointId_7() { return &___mousePointId_7; }
	inline void set_mousePointId_7(int32_t value)
	{
		___mousePointId_7 = value;
	}

	inline static int32_t get_offset_of_fakeMousePointId_8() { return static_cast<int32_t>(offsetof(MouseInput_t2005063047, ___fakeMousePointId_8)); }
	inline int32_t get_fakeMousePointId_8() const { return ___fakeMousePointId_8; }
	inline int32_t* get_address_of_fakeMousePointId_8() { return &___fakeMousePointId_8; }
	inline void set_fakeMousePointId_8(int32_t value)
	{
		___fakeMousePointId_8 = value;
	}

	inline static int32_t get_offset_of_mousePointPos_9() { return static_cast<int32_t>(offsetof(MouseInput_t2005063047, ___mousePointPos_9)); }
	inline Vector3_t4282066566  get_mousePointPos_9() const { return ___mousePointPos_9; }
	inline Vector3_t4282066566 * get_address_of_mousePointPos_9() { return &___mousePointPos_9; }
	inline void set_mousePointPos_9(Vector3_t4282066566  value)
	{
		___mousePointPos_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

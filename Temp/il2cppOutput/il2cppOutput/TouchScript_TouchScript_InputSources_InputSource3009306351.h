#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t2089623989;
// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_t1801499272;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.InputSource
struct  InputSource_t3009306351  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean TouchScript.InputSources.InputSource::advancedProps
	bool ___advancedProps_2;
	// TouchScript.TouchManagerInstance TouchScript.InputSources.InputSource::manager
	TouchManagerInstance_t2089623989 * ___manager_3;
	// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::<CoordinatesRemapper>k__BackingField
	Il2CppObject * ___U3CCoordinatesRemapperU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_advancedProps_2() { return static_cast<int32_t>(offsetof(InputSource_t3009306351, ___advancedProps_2)); }
	inline bool get_advancedProps_2() const { return ___advancedProps_2; }
	inline bool* get_address_of_advancedProps_2() { return &___advancedProps_2; }
	inline void set_advancedProps_2(bool value)
	{
		___advancedProps_2 = value;
	}

	inline static int32_t get_offset_of_manager_3() { return static_cast<int32_t>(offsetof(InputSource_t3009306351, ___manager_3)); }
	inline TouchManagerInstance_t2089623989 * get_manager_3() const { return ___manager_3; }
	inline TouchManagerInstance_t2089623989 ** get_address_of_manager_3() { return &___manager_3; }
	inline void set_manager_3(TouchManagerInstance_t2089623989 * value)
	{
		___manager_3 = value;
		Il2CppCodeGenWriteBarrier(&___manager_3, value);
	}

	inline static int32_t get_offset_of_U3CCoordinatesRemapperU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputSource_t3009306351, ___U3CCoordinatesRemapperU3Ek__BackingField_4)); }
	inline Il2CppObject * get_U3CCoordinatesRemapperU3Ek__BackingField_4() const { return ___U3CCoordinatesRemapperU3Ek__BackingField_4; }
	inline Il2CppObject ** get_address_of_U3CCoordinatesRemapperU3Ek__BackingField_4() { return &___U3CCoordinatesRemapperU3Ek__BackingField_4; }
	inline void set_U3CCoordinatesRemapperU3Ek__BackingField_4(Il2CppObject * value)
	{
		___U3CCoordinatesRemapperU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCoordinatesRemapperU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

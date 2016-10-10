#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanObject
struct  PanObject_t4178032156  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Quaternion PanObject::targetRotation
	Quaternion_t1553702882  ___targetRotation_2;

public:
	inline static int32_t get_offset_of_targetRotation_2() { return static_cast<int32_t>(offsetof(PanObject_t4178032156, ___targetRotation_2)); }
	inline Quaternion_t1553702882  get_targetRotation_2() const { return ___targetRotation_2; }
	inline Quaternion_t1553702882 * get_address_of_targetRotation_2() { return &___targetRotation_2; }
	inline void set_targetRotation_2(Quaternion_t1553702882  value)
	{
		___targetRotation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

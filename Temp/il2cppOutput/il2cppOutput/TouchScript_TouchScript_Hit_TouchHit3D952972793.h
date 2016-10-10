#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "TouchScript_TouchScript_Hit_TouchHit4044886088.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Hit.TouchHit3D
struct  TouchHit3D_t952972793  : public TouchHit_t4044886088
{
public:
	// UnityEngine.RaycastHit TouchScript.Hit.TouchHit3D::hit
	RaycastHit_t4003175726  ___hit_1;

public:
	inline static int32_t get_offset_of_hit_1() { return static_cast<int32_t>(offsetof(TouchHit3D_t952972793, ___hit_1)); }
	inline RaycastHit_t4003175726  get_hit_1() const { return ___hit_1; }
	inline RaycastHit_t4003175726 * get_address_of_hit_1() { return &___hit_1; }
	inline void set_hit_1(RaycastHit_t4003175726  value)
	{
		___hit_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "TouchScript_TouchScript_Hit_HitTest741004699.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Hit.Untouchable
struct  Untouchable_t584584438  : public HitTest_t741004699
{
public:
	// System.Boolean TouchScript.Hit.Untouchable::DiscardTouch
	bool ___DiscardTouch_2;

public:
	inline static int32_t get_offset_of_DiscardTouch_2() { return static_cast<int32_t>(offsetof(Untouchable_t584584438, ___DiscardTouch_2)); }
	inline bool get_DiscardTouch_2() const { return ___DiscardTouch_2; }
	inline bool* get_address_of_DiscardTouch_2() { return &___DiscardTouch_2; }
	inline void set_DiscardTouch_2(bool value)
	{
		___DiscardTouch_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

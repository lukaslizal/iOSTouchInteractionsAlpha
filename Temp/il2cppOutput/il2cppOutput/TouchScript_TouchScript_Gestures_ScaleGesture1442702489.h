#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.Clusters.Clusters
struct Clusters_t3552588057;

#include "TouchScript_TouchScript_Gestures_Simple_SimpleScale393194131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.ScaleGesture
struct  ScaleGesture_t1442702489  : public SimpleScaleGesture_t393194131
{
public:
	// TouchScript.Clusters.Clusters TouchScript.Gestures.ScaleGesture::clusters
	Clusters_t3552588057 * ___clusters_53;

public:
	inline static int32_t get_offset_of_clusters_53() { return static_cast<int32_t>(offsetof(ScaleGesture_t1442702489, ___clusters_53)); }
	inline Clusters_t3552588057 * get_clusters_53() const { return ___clusters_53; }
	inline Clusters_t3552588057 ** get_address_of_clusters_53() { return &___clusters_53; }
	inline void set_clusters_53(Clusters_t3552588057 * value)
	{
		___clusters_53 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_53, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

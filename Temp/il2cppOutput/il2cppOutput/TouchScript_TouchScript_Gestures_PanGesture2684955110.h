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

#include "TouchScript_TouchScript_Gestures_Simple_SimplePanG1528284000.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.PanGesture
struct  PanGesture_t2684955110  : public SimplePanGesture_t1528284000
{
public:
	// TouchScript.Clusters.Clusters TouchScript.Gestures.PanGesture::clusters
	Clusters_t3552588057 * ___clusters_48;

public:
	inline static int32_t get_offset_of_clusters_48() { return static_cast<int32_t>(offsetof(PanGesture_t2684955110, ___clusters_48)); }
	inline Clusters_t3552588057 * get_clusters_48() const { return ___clusters_48; }
	inline Clusters_t3552588057 ** get_address_of_clusters_48() { return &___clusters_48; }
	inline void set_clusters_48(Clusters_t3552588057 * value)
	{
		___clusters_48 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

#include "TouchScript_TouchScript_Gestures_TransformGesture2166601783.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Clustered.ClusteredTransformGesture
struct  ClusteredTransformGesture_t3767111716  : public TransformGesture_t2166601783
{
public:
	// TouchScript.Clusters.Clusters TouchScript.Gestures.Clustered.ClusteredTransformGesture::clusters
	Clusters_t3552588057 * ___clusters_57;

public:
	inline static int32_t get_offset_of_clusters_57() { return static_cast<int32_t>(offsetof(ClusteredTransformGesture_t3767111716, ___clusters_57)); }
	inline Clusters_t3552588057 * get_clusters_57() const { return ___clusters_57; }
	inline Clusters_t3552588057 ** get_address_of_clusters_57() { return &___clusters_57; }
	inline void set_clusters_57(Clusters_t3552588057 * value)
	{
		___clusters_57 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_57, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

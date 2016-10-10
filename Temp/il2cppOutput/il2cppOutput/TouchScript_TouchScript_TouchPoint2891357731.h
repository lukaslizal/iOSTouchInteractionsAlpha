#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchScript.Hit.ITouchHit
struct ITouchHit_t952019443;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// UnityEngine.Transform
struct Transform_t1659122786;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t334681980;
// TouchScript.Tags
struct Tags_t4162305963;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchPoint
struct  TouchPoint_t2891357731  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 TouchScript.TouchPoint::position
	Vector2_t4282066565  ___position_0;
	// UnityEngine.Vector2 TouchScript.TouchPoint::newPosition
	Vector2_t4282066565  ___newPosition_1;
	// TouchScript.Hit.ITouchHit TouchScript.TouchPoint::hit
	Il2CppObject * ___hit_2;
	// System.Boolean TouchScript.TouchPoint::isDirty
	bool ___isDirty_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TouchScript.TouchPoint::properties
	Dictionary_2_t696267445 * ___properties_4;
	// System.Int32 TouchScript.TouchPoint::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// UnityEngine.Transform TouchScript.TouchPoint::<Target>k__BackingField
	Transform_t1659122786 * ___U3CTargetU3Ek__BackingField_6;
	// UnityEngine.Vector2 TouchScript.TouchPoint::<PreviousPosition>k__BackingField
	Vector2_t4282066565  ___U3CPreviousPositionU3Ek__BackingField_7;
	// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::<Layer>k__BackingField
	TouchLayer_t334681980 * ___U3CLayerU3Ek__BackingField_8;
	// TouchScript.Tags TouchScript.TouchPoint::<Tags>k__BackingField
	Tags_t4162305963 * ___U3CTagsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___position_0)); }
	inline Vector2_t4282066565  get_position_0() const { return ___position_0; }
	inline Vector2_t4282066565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector2_t4282066565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_newPosition_1() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___newPosition_1)); }
	inline Vector2_t4282066565  get_newPosition_1() const { return ___newPosition_1; }
	inline Vector2_t4282066565 * get_address_of_newPosition_1() { return &___newPosition_1; }
	inline void set_newPosition_1(Vector2_t4282066565  value)
	{
		___newPosition_1 = value;
	}

	inline static int32_t get_offset_of_hit_2() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___hit_2)); }
	inline Il2CppObject * get_hit_2() const { return ___hit_2; }
	inline Il2CppObject ** get_address_of_hit_2() { return &___hit_2; }
	inline void set_hit_2(Il2CppObject * value)
	{
		___hit_2 = value;
		Il2CppCodeGenWriteBarrier(&___hit_2, value);
	}

	inline static int32_t get_offset_of_isDirty_3() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___isDirty_3)); }
	inline bool get_isDirty_3() const { return ___isDirty_3; }
	inline bool* get_address_of_isDirty_3() { return &___isDirty_3; }
	inline void set_isDirty_3(bool value)
	{
		___isDirty_3 = value;
	}

	inline static int32_t get_offset_of_properties_4() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___properties_4)); }
	inline Dictionary_2_t696267445 * get_properties_4() const { return ___properties_4; }
	inline Dictionary_2_t696267445 ** get_address_of_properties_4() { return &___properties_4; }
	inline void set_properties_4(Dictionary_2_t696267445 * value)
	{
		___properties_4 = value;
		Il2CppCodeGenWriteBarrier(&___properties_4, value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___U3CTargetU3Ek__BackingField_6)); }
	inline Transform_t1659122786 * get_U3CTargetU3Ek__BackingField_6() const { return ___U3CTargetU3Ek__BackingField_6; }
	inline Transform_t1659122786 ** get_address_of_U3CTargetU3Ek__BackingField_6() { return &___U3CTargetU3Ek__BackingField_6; }
	inline void set_U3CTargetU3Ek__BackingField_6(Transform_t1659122786 * value)
	{
		___U3CTargetU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CPreviousPositionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___U3CPreviousPositionU3Ek__BackingField_7)); }
	inline Vector2_t4282066565  get_U3CPreviousPositionU3Ek__BackingField_7() const { return ___U3CPreviousPositionU3Ek__BackingField_7; }
	inline Vector2_t4282066565 * get_address_of_U3CPreviousPositionU3Ek__BackingField_7() { return &___U3CPreviousPositionU3Ek__BackingField_7; }
	inline void set_U3CPreviousPositionU3Ek__BackingField_7(Vector2_t4282066565  value)
	{
		___U3CPreviousPositionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLayerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___U3CLayerU3Ek__BackingField_8)); }
	inline TouchLayer_t334681980 * get_U3CLayerU3Ek__BackingField_8() const { return ___U3CLayerU3Ek__BackingField_8; }
	inline TouchLayer_t334681980 ** get_address_of_U3CLayerU3Ek__BackingField_8() { return &___U3CLayerU3Ek__BackingField_8; }
	inline void set_U3CLayerU3Ek__BackingField_8(TouchLayer_t334681980 * value)
	{
		___U3CLayerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLayerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CTagsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TouchPoint_t2891357731, ___U3CTagsU3Ek__BackingField_9)); }
	inline Tags_t4162305963 * get_U3CTagsU3Ek__BackingField_9() const { return ___U3CTagsU3Ek__BackingField_9; }
	inline Tags_t4162305963 ** get_address_of_U3CTagsU3Ek__BackingField_9() { return &___U3CTagsU3Ek__BackingField_9; }
	inline void set_U3CTagsU3Ek__BackingField_9(Tags_t4162305963 * value)
	{
		___U3CTagsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTagsU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

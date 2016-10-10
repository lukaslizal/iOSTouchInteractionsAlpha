#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTGUI_Element_Type1379559641.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTRect
struct  LTRect_t2255934348  : public Il2CppObject
{
public:
	// UnityEngine.Rect LTRect::_rect
	Rect_t4241904616  ____rect_0;
	// System.Single LTRect::alpha
	float ___alpha_1;
	// System.Single LTRect::rotation
	float ___rotation_2;
	// UnityEngine.Vector2 LTRect::pivot
	Vector2_t4282066565  ___pivot_3;
	// UnityEngine.Vector2 LTRect::margin
	Vector2_t4282066565  ___margin_4;
	// UnityEngine.Rect LTRect::relativeRect
	Rect_t4241904616  ___relativeRect_5;
	// System.Boolean LTRect::rotateEnabled
	bool ___rotateEnabled_6;
	// System.Boolean LTRect::rotateFinished
	bool ___rotateFinished_7;
	// System.Boolean LTRect::alphaEnabled
	bool ___alphaEnabled_8;
	// System.String LTRect::labelStr
	String_t* ___labelStr_9;
	// LTGUI/Element_Type LTRect::type
	int32_t ___type_10;
	// UnityEngine.GUIStyle LTRect::style
	GUIStyle_t2990928826 * ___style_11;
	// System.Boolean LTRect::useColor
	bool ___useColor_12;
	// UnityEngine.Color LTRect::color
	Color_t4194546905  ___color_13;
	// System.Boolean LTRect::fontScaleToFit
	bool ___fontScaleToFit_14;
	// System.Boolean LTRect::useSimpleScale
	bool ___useSimpleScale_15;
	// System.Boolean LTRect::sizeByHeight
	bool ___sizeByHeight_16;
	// UnityEngine.Texture LTRect::texture
	Texture_t2526458961 * ___texture_17;
	// System.Int32 LTRect::_id
	int32_t ____id_18;
	// System.Int32 LTRect::counter
	int32_t ___counter_19;

public:
	inline static int32_t get_offset_of__rect_0() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ____rect_0)); }
	inline Rect_t4241904616  get__rect_0() const { return ____rect_0; }
	inline Rect_t4241904616 * get_address_of__rect_0() { return &____rect_0; }
	inline void set__rect_0(Rect_t4241904616  value)
	{
		____rect_0 = value;
	}

	inline static int32_t get_offset_of_alpha_1() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___alpha_1)); }
	inline float get_alpha_1() const { return ___alpha_1; }
	inline float* get_address_of_alpha_1() { return &___alpha_1; }
	inline void set_alpha_1(float value)
	{
		___alpha_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___pivot_3)); }
	inline Vector2_t4282066565  get_pivot_3() const { return ___pivot_3; }
	inline Vector2_t4282066565 * get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(Vector2_t4282066565  value)
	{
		___pivot_3 = value;
	}

	inline static int32_t get_offset_of_margin_4() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___margin_4)); }
	inline Vector2_t4282066565  get_margin_4() const { return ___margin_4; }
	inline Vector2_t4282066565 * get_address_of_margin_4() { return &___margin_4; }
	inline void set_margin_4(Vector2_t4282066565  value)
	{
		___margin_4 = value;
	}

	inline static int32_t get_offset_of_relativeRect_5() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___relativeRect_5)); }
	inline Rect_t4241904616  get_relativeRect_5() const { return ___relativeRect_5; }
	inline Rect_t4241904616 * get_address_of_relativeRect_5() { return &___relativeRect_5; }
	inline void set_relativeRect_5(Rect_t4241904616  value)
	{
		___relativeRect_5 = value;
	}

	inline static int32_t get_offset_of_rotateEnabled_6() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___rotateEnabled_6)); }
	inline bool get_rotateEnabled_6() const { return ___rotateEnabled_6; }
	inline bool* get_address_of_rotateEnabled_6() { return &___rotateEnabled_6; }
	inline void set_rotateEnabled_6(bool value)
	{
		___rotateEnabled_6 = value;
	}

	inline static int32_t get_offset_of_rotateFinished_7() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___rotateFinished_7)); }
	inline bool get_rotateFinished_7() const { return ___rotateFinished_7; }
	inline bool* get_address_of_rotateFinished_7() { return &___rotateFinished_7; }
	inline void set_rotateFinished_7(bool value)
	{
		___rotateFinished_7 = value;
	}

	inline static int32_t get_offset_of_alphaEnabled_8() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___alphaEnabled_8)); }
	inline bool get_alphaEnabled_8() const { return ___alphaEnabled_8; }
	inline bool* get_address_of_alphaEnabled_8() { return &___alphaEnabled_8; }
	inline void set_alphaEnabled_8(bool value)
	{
		___alphaEnabled_8 = value;
	}

	inline static int32_t get_offset_of_labelStr_9() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___labelStr_9)); }
	inline String_t* get_labelStr_9() const { return ___labelStr_9; }
	inline String_t** get_address_of_labelStr_9() { return &___labelStr_9; }
	inline void set_labelStr_9(String_t* value)
	{
		___labelStr_9 = value;
		Il2CppCodeGenWriteBarrier(&___labelStr_9, value);
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___type_10)); }
	inline int32_t get_type_10() const { return ___type_10; }
	inline int32_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(int32_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_style_11() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___style_11)); }
	inline GUIStyle_t2990928826 * get_style_11() const { return ___style_11; }
	inline GUIStyle_t2990928826 ** get_address_of_style_11() { return &___style_11; }
	inline void set_style_11(GUIStyle_t2990928826 * value)
	{
		___style_11 = value;
		Il2CppCodeGenWriteBarrier(&___style_11, value);
	}

	inline static int32_t get_offset_of_useColor_12() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___useColor_12)); }
	inline bool get_useColor_12() const { return ___useColor_12; }
	inline bool* get_address_of_useColor_12() { return &___useColor_12; }
	inline void set_useColor_12(bool value)
	{
		___useColor_12 = value;
	}

	inline static int32_t get_offset_of_color_13() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___color_13)); }
	inline Color_t4194546905  get_color_13() const { return ___color_13; }
	inline Color_t4194546905 * get_address_of_color_13() { return &___color_13; }
	inline void set_color_13(Color_t4194546905  value)
	{
		___color_13 = value;
	}

	inline static int32_t get_offset_of_fontScaleToFit_14() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___fontScaleToFit_14)); }
	inline bool get_fontScaleToFit_14() const { return ___fontScaleToFit_14; }
	inline bool* get_address_of_fontScaleToFit_14() { return &___fontScaleToFit_14; }
	inline void set_fontScaleToFit_14(bool value)
	{
		___fontScaleToFit_14 = value;
	}

	inline static int32_t get_offset_of_useSimpleScale_15() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___useSimpleScale_15)); }
	inline bool get_useSimpleScale_15() const { return ___useSimpleScale_15; }
	inline bool* get_address_of_useSimpleScale_15() { return &___useSimpleScale_15; }
	inline void set_useSimpleScale_15(bool value)
	{
		___useSimpleScale_15 = value;
	}

	inline static int32_t get_offset_of_sizeByHeight_16() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___sizeByHeight_16)); }
	inline bool get_sizeByHeight_16() const { return ___sizeByHeight_16; }
	inline bool* get_address_of_sizeByHeight_16() { return &___sizeByHeight_16; }
	inline void set_sizeByHeight_16(bool value)
	{
		___sizeByHeight_16 = value;
	}

	inline static int32_t get_offset_of_texture_17() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___texture_17)); }
	inline Texture_t2526458961 * get_texture_17() const { return ___texture_17; }
	inline Texture_t2526458961 ** get_address_of_texture_17() { return &___texture_17; }
	inline void set_texture_17(Texture_t2526458961 * value)
	{
		___texture_17 = value;
		Il2CppCodeGenWriteBarrier(&___texture_17, value);
	}

	inline static int32_t get_offset_of__id_18() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ____id_18)); }
	inline int32_t get__id_18() const { return ____id_18; }
	inline int32_t* get_address_of__id_18() { return &____id_18; }
	inline void set__id_18(int32_t value)
	{
		____id_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTRect_t2255934348, ___counter_19)); }
	inline int32_t get_counter_19() const { return ___counter_19; }
	inline int32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(int32_t value)
	{
		___counter_19 = value;
	}
};

struct LTRect_t2255934348_StaticFields
{
public:
	// System.Boolean LTRect::colorTouched
	bool ___colorTouched_20;

public:
	inline static int32_t get_offset_of_colorTouched_20() { return static_cast<int32_t>(offsetof(LTRect_t2255934348_StaticFields, ___colorTouched_20)); }
	inline bool get_colorTouched_20() const { return ___colorTouched_20; }
	inline bool* get_address_of_colorTouched_20() { return &___colorTouched_20; }
	inline void set_colorTouched_20(bool value)
	{
		___colorTouched_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

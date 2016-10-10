#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch>
struct Dictionary_2_t3976392815;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4494796;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Debugging.TouchDebugger
struct  TouchDebugger_t4175728522  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean TouchScript.Debugging.TouchDebugger::showTouchId
	bool ___showTouchId_2;
	// System.Boolean TouchScript.Debugging.TouchDebugger::showTags
	bool ___showTags_3;
	// UnityEngine.Texture2D TouchScript.Debugging.TouchDebugger::texture
	Texture2D_t3884108195 * ___texture_4;
	// System.Boolean TouchScript.Debugging.TouchDebugger::useDPI
	bool ___useDPI_5;
	// System.Single TouchScript.Debugging.TouchDebugger::touchSize
	float ___touchSize_6;
	// UnityEngine.Color TouchScript.Debugging.TouchDebugger::fontColor
	Color_t4194546905  ___fontColor_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.ITouch> TouchScript.Debugging.TouchDebugger::dummies
	Dictionary_2_t3976392815 * ___dummies_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> TouchScript.Debugging.TouchDebugger::tags
	Dictionary_2_t4494796 * ___tags_9;
	// System.Single TouchScript.Debugging.TouchDebugger::textureDPI
	float ___textureDPI_10;
	// System.Single TouchScript.Debugging.TouchDebugger::scale
	float ___scale_11;
	// System.Single TouchScript.Debugging.TouchDebugger::dpi
	float ___dpi_12;
	// System.Single TouchScript.Debugging.TouchDebugger::shadowOffset
	float ___shadowOffset_13;
	// System.Int32 TouchScript.Debugging.TouchDebugger::textureWidth
	int32_t ___textureWidth_14;
	// System.Int32 TouchScript.Debugging.TouchDebugger::textureHeight
	int32_t ___textureHeight_15;
	// System.Int32 TouchScript.Debugging.TouchDebugger::halfTextureWidth
	int32_t ___halfTextureWidth_16;
	// System.Int32 TouchScript.Debugging.TouchDebugger::halfTextureHeight
	int32_t ___halfTextureHeight_17;
	// System.Int32 TouchScript.Debugging.TouchDebugger::xOffset
	int32_t ___xOffset_18;
	// System.Int32 TouchScript.Debugging.TouchDebugger::yOffset
	int32_t ___yOffset_19;
	// System.Int32 TouchScript.Debugging.TouchDebugger::labelWidth
	int32_t ___labelWidth_20;
	// System.Int32 TouchScript.Debugging.TouchDebugger::labelHeight
	int32_t ___labelHeight_21;
	// System.Int32 TouchScript.Debugging.TouchDebugger::fontSize
	int32_t ___fontSize_22;
	// UnityEngine.GUIStyle TouchScript.Debugging.TouchDebugger::style
	GUIStyle_t2990928826 * ___style_23;

public:
	inline static int32_t get_offset_of_showTouchId_2() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___showTouchId_2)); }
	inline bool get_showTouchId_2() const { return ___showTouchId_2; }
	inline bool* get_address_of_showTouchId_2() { return &___showTouchId_2; }
	inline void set_showTouchId_2(bool value)
	{
		___showTouchId_2 = value;
	}

	inline static int32_t get_offset_of_showTags_3() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___showTags_3)); }
	inline bool get_showTags_3() const { return ___showTags_3; }
	inline bool* get_address_of_showTags_3() { return &___showTags_3; }
	inline void set_showTags_3(bool value)
	{
		___showTags_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___texture_4)); }
	inline Texture2D_t3884108195 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t3884108195 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t3884108195 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}

	inline static int32_t get_offset_of_useDPI_5() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___useDPI_5)); }
	inline bool get_useDPI_5() const { return ___useDPI_5; }
	inline bool* get_address_of_useDPI_5() { return &___useDPI_5; }
	inline void set_useDPI_5(bool value)
	{
		___useDPI_5 = value;
	}

	inline static int32_t get_offset_of_touchSize_6() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___touchSize_6)); }
	inline float get_touchSize_6() const { return ___touchSize_6; }
	inline float* get_address_of_touchSize_6() { return &___touchSize_6; }
	inline void set_touchSize_6(float value)
	{
		___touchSize_6 = value;
	}

	inline static int32_t get_offset_of_fontColor_7() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___fontColor_7)); }
	inline Color_t4194546905  get_fontColor_7() const { return ___fontColor_7; }
	inline Color_t4194546905 * get_address_of_fontColor_7() { return &___fontColor_7; }
	inline void set_fontColor_7(Color_t4194546905  value)
	{
		___fontColor_7 = value;
	}

	inline static int32_t get_offset_of_dummies_8() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___dummies_8)); }
	inline Dictionary_2_t3976392815 * get_dummies_8() const { return ___dummies_8; }
	inline Dictionary_2_t3976392815 ** get_address_of_dummies_8() { return &___dummies_8; }
	inline void set_dummies_8(Dictionary_2_t3976392815 * value)
	{
		___dummies_8 = value;
		Il2CppCodeGenWriteBarrier(&___dummies_8, value);
	}

	inline static int32_t get_offset_of_tags_9() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___tags_9)); }
	inline Dictionary_2_t4494796 * get_tags_9() const { return ___tags_9; }
	inline Dictionary_2_t4494796 ** get_address_of_tags_9() { return &___tags_9; }
	inline void set_tags_9(Dictionary_2_t4494796 * value)
	{
		___tags_9 = value;
		Il2CppCodeGenWriteBarrier(&___tags_9, value);
	}

	inline static int32_t get_offset_of_textureDPI_10() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___textureDPI_10)); }
	inline float get_textureDPI_10() const { return ___textureDPI_10; }
	inline float* get_address_of_textureDPI_10() { return &___textureDPI_10; }
	inline void set_textureDPI_10(float value)
	{
		___textureDPI_10 = value;
	}

	inline static int32_t get_offset_of_scale_11() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___scale_11)); }
	inline float get_scale_11() const { return ___scale_11; }
	inline float* get_address_of_scale_11() { return &___scale_11; }
	inline void set_scale_11(float value)
	{
		___scale_11 = value;
	}

	inline static int32_t get_offset_of_dpi_12() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___dpi_12)); }
	inline float get_dpi_12() const { return ___dpi_12; }
	inline float* get_address_of_dpi_12() { return &___dpi_12; }
	inline void set_dpi_12(float value)
	{
		___dpi_12 = value;
	}

	inline static int32_t get_offset_of_shadowOffset_13() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___shadowOffset_13)); }
	inline float get_shadowOffset_13() const { return ___shadowOffset_13; }
	inline float* get_address_of_shadowOffset_13() { return &___shadowOffset_13; }
	inline void set_shadowOffset_13(float value)
	{
		___shadowOffset_13 = value;
	}

	inline static int32_t get_offset_of_textureWidth_14() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___textureWidth_14)); }
	inline int32_t get_textureWidth_14() const { return ___textureWidth_14; }
	inline int32_t* get_address_of_textureWidth_14() { return &___textureWidth_14; }
	inline void set_textureWidth_14(int32_t value)
	{
		___textureWidth_14 = value;
	}

	inline static int32_t get_offset_of_textureHeight_15() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___textureHeight_15)); }
	inline int32_t get_textureHeight_15() const { return ___textureHeight_15; }
	inline int32_t* get_address_of_textureHeight_15() { return &___textureHeight_15; }
	inline void set_textureHeight_15(int32_t value)
	{
		___textureHeight_15 = value;
	}

	inline static int32_t get_offset_of_halfTextureWidth_16() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___halfTextureWidth_16)); }
	inline int32_t get_halfTextureWidth_16() const { return ___halfTextureWidth_16; }
	inline int32_t* get_address_of_halfTextureWidth_16() { return &___halfTextureWidth_16; }
	inline void set_halfTextureWidth_16(int32_t value)
	{
		___halfTextureWidth_16 = value;
	}

	inline static int32_t get_offset_of_halfTextureHeight_17() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___halfTextureHeight_17)); }
	inline int32_t get_halfTextureHeight_17() const { return ___halfTextureHeight_17; }
	inline int32_t* get_address_of_halfTextureHeight_17() { return &___halfTextureHeight_17; }
	inline void set_halfTextureHeight_17(int32_t value)
	{
		___halfTextureHeight_17 = value;
	}

	inline static int32_t get_offset_of_xOffset_18() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___xOffset_18)); }
	inline int32_t get_xOffset_18() const { return ___xOffset_18; }
	inline int32_t* get_address_of_xOffset_18() { return &___xOffset_18; }
	inline void set_xOffset_18(int32_t value)
	{
		___xOffset_18 = value;
	}

	inline static int32_t get_offset_of_yOffset_19() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___yOffset_19)); }
	inline int32_t get_yOffset_19() const { return ___yOffset_19; }
	inline int32_t* get_address_of_yOffset_19() { return &___yOffset_19; }
	inline void set_yOffset_19(int32_t value)
	{
		___yOffset_19 = value;
	}

	inline static int32_t get_offset_of_labelWidth_20() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___labelWidth_20)); }
	inline int32_t get_labelWidth_20() const { return ___labelWidth_20; }
	inline int32_t* get_address_of_labelWidth_20() { return &___labelWidth_20; }
	inline void set_labelWidth_20(int32_t value)
	{
		___labelWidth_20 = value;
	}

	inline static int32_t get_offset_of_labelHeight_21() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___labelHeight_21)); }
	inline int32_t get_labelHeight_21() const { return ___labelHeight_21; }
	inline int32_t* get_address_of_labelHeight_21() { return &___labelHeight_21; }
	inline void set_labelHeight_21(int32_t value)
	{
		___labelHeight_21 = value;
	}

	inline static int32_t get_offset_of_fontSize_22() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___fontSize_22)); }
	inline int32_t get_fontSize_22() const { return ___fontSize_22; }
	inline int32_t* get_address_of_fontSize_22() { return &___fontSize_22; }
	inline void set_fontSize_22(int32_t value)
	{
		___fontSize_22 = value;
	}

	inline static int32_t get_offset_of_style_23() { return static_cast<int32_t>(offsetof(TouchDebugger_t4175728522, ___style_23)); }
	inline GUIStyle_t2990928826 * get_style_23() const { return ___style_23; }
	inline GUIStyle_t2990928826 ** get_address_of_style_23() { return &___style_23; }
	inline void set_style_23(GUIStyle_t2990928826 * value)
	{
		___style_23 = value;
		Il2CppCodeGenWriteBarrier(&___style_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

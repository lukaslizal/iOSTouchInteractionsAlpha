#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LTRect[]
struct LTRectU5BU5D_t540905669;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Rect[]
struct RectU5BU5D_t1023580025;
// LTRect
struct LTRect_t2255934348;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTGUI
struct  LTGUI_t72760979  : public Il2CppObject
{
public:

public:
};

struct LTGUI_t72760979_StaticFields
{
public:
	// System.Int32 LTGUI::RECT_LEVELS
	int32_t ___RECT_LEVELS_0;
	// System.Int32 LTGUI::RECTS_PER_LEVEL
	int32_t ___RECTS_PER_LEVEL_1;
	// System.Int32 LTGUI::BUTTONS_MAX
	int32_t ___BUTTONS_MAX_2;
	// LTRect[] LTGUI::levels
	LTRectU5BU5D_t540905669* ___levels_3;
	// System.Int32[] LTGUI::levelDepths
	Int32U5BU5D_t3230847821* ___levelDepths_4;
	// UnityEngine.Rect[] LTGUI::buttons
	RectU5BU5D_t1023580025* ___buttons_5;
	// System.Int32[] LTGUI::buttonLevels
	Int32U5BU5D_t3230847821* ___buttonLevels_6;
	// System.Int32[] LTGUI::buttonLastFrame
	Int32U5BU5D_t3230847821* ___buttonLastFrame_7;
	// LTRect LTGUI::r
	LTRect_t2255934348 * ___r_8;
	// UnityEngine.Color LTGUI::color
	Color_t4194546905  ___color_9;
	// System.Boolean LTGUI::isGUIEnabled
	bool ___isGUIEnabled_10;
	// System.Int32 LTGUI::global_counter
	int32_t ___global_counter_11;

public:
	inline static int32_t get_offset_of_RECT_LEVELS_0() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___RECT_LEVELS_0)); }
	inline int32_t get_RECT_LEVELS_0() const { return ___RECT_LEVELS_0; }
	inline int32_t* get_address_of_RECT_LEVELS_0() { return &___RECT_LEVELS_0; }
	inline void set_RECT_LEVELS_0(int32_t value)
	{
		___RECT_LEVELS_0 = value;
	}

	inline static int32_t get_offset_of_RECTS_PER_LEVEL_1() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___RECTS_PER_LEVEL_1)); }
	inline int32_t get_RECTS_PER_LEVEL_1() const { return ___RECTS_PER_LEVEL_1; }
	inline int32_t* get_address_of_RECTS_PER_LEVEL_1() { return &___RECTS_PER_LEVEL_1; }
	inline void set_RECTS_PER_LEVEL_1(int32_t value)
	{
		___RECTS_PER_LEVEL_1 = value;
	}

	inline static int32_t get_offset_of_BUTTONS_MAX_2() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___BUTTONS_MAX_2)); }
	inline int32_t get_BUTTONS_MAX_2() const { return ___BUTTONS_MAX_2; }
	inline int32_t* get_address_of_BUTTONS_MAX_2() { return &___BUTTONS_MAX_2; }
	inline void set_BUTTONS_MAX_2(int32_t value)
	{
		___BUTTONS_MAX_2 = value;
	}

	inline static int32_t get_offset_of_levels_3() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___levels_3)); }
	inline LTRectU5BU5D_t540905669* get_levels_3() const { return ___levels_3; }
	inline LTRectU5BU5D_t540905669** get_address_of_levels_3() { return &___levels_3; }
	inline void set_levels_3(LTRectU5BU5D_t540905669* value)
	{
		___levels_3 = value;
		Il2CppCodeGenWriteBarrier(&___levels_3, value);
	}

	inline static int32_t get_offset_of_levelDepths_4() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___levelDepths_4)); }
	inline Int32U5BU5D_t3230847821* get_levelDepths_4() const { return ___levelDepths_4; }
	inline Int32U5BU5D_t3230847821** get_address_of_levelDepths_4() { return &___levelDepths_4; }
	inline void set_levelDepths_4(Int32U5BU5D_t3230847821* value)
	{
		___levelDepths_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelDepths_4, value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___buttons_5)); }
	inline RectU5BU5D_t1023580025* get_buttons_5() const { return ___buttons_5; }
	inline RectU5BU5D_t1023580025** get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(RectU5BU5D_t1023580025* value)
	{
		___buttons_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_5, value);
	}

	inline static int32_t get_offset_of_buttonLevels_6() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___buttonLevels_6)); }
	inline Int32U5BU5D_t3230847821* get_buttonLevels_6() const { return ___buttonLevels_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_buttonLevels_6() { return &___buttonLevels_6; }
	inline void set_buttonLevels_6(Int32U5BU5D_t3230847821* value)
	{
		___buttonLevels_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonLevels_6, value);
	}

	inline static int32_t get_offset_of_buttonLastFrame_7() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___buttonLastFrame_7)); }
	inline Int32U5BU5D_t3230847821* get_buttonLastFrame_7() const { return ___buttonLastFrame_7; }
	inline Int32U5BU5D_t3230847821** get_address_of_buttonLastFrame_7() { return &___buttonLastFrame_7; }
	inline void set_buttonLastFrame_7(Int32U5BU5D_t3230847821* value)
	{
		___buttonLastFrame_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttonLastFrame_7, value);
	}

	inline static int32_t get_offset_of_r_8() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___r_8)); }
	inline LTRect_t2255934348 * get_r_8() const { return ___r_8; }
	inline LTRect_t2255934348 ** get_address_of_r_8() { return &___r_8; }
	inline void set_r_8(LTRect_t2255934348 * value)
	{
		___r_8 = value;
		Il2CppCodeGenWriteBarrier(&___r_8, value);
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___color_9)); }
	inline Color_t4194546905  get_color_9() const { return ___color_9; }
	inline Color_t4194546905 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t4194546905  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_isGUIEnabled_10() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___isGUIEnabled_10)); }
	inline bool get_isGUIEnabled_10() const { return ___isGUIEnabled_10; }
	inline bool* get_address_of_isGUIEnabled_10() { return &___isGUIEnabled_10; }
	inline void set_isGUIEnabled_10(bool value)
	{
		___isGUIEnabled_10 = value;
	}

	inline static int32_t get_offset_of_global_counter_11() { return static_cast<int32_t>(offsetof(LTGUI_t72760979_StaticFields, ___global_counter_11)); }
	inline int32_t get_global_counter_11() const { return ___global_counter_11; }
	inline int32_t* get_address_of_global_counter_11() { return &___global_counter_11; }
	inline void set_global_counter_11(int32_t value)
	{
		___global_counter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

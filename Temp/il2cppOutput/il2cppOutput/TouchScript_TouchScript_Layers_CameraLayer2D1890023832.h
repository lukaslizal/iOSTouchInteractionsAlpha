#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1151101739;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
struct List_1_t2742929936;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t2109190251;

#include "TouchScript_TouchScript_Layers_CameraLayerBase1349924151.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayer2D
struct  CameraLayer2D_t1890023832  : public CameraLayerBase_t1349924151
{
public:
	// System.Int32[] TouchScript.Layers.CameraLayer2D::layerIds
	Int32U5BU5D_t3230847821* ___layerIds_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TouchScript.Layers.CameraLayer2D::layerById
	Dictionary_2_t1151101739 * ___layerById_7;
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> TouchScript.Layers.CameraLayer2D::sortedHits
	List_1_t2742929936 * ___sortedHits_8;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.CameraLayer2D::tmpHitTestList
	List_1_t2109190251 * ___tmpHitTestList_9;

public:
	inline static int32_t get_offset_of_layerIds_6() { return static_cast<int32_t>(offsetof(CameraLayer2D_t1890023832, ___layerIds_6)); }
	inline Int32U5BU5D_t3230847821* get_layerIds_6() const { return ___layerIds_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_layerIds_6() { return &___layerIds_6; }
	inline void set_layerIds_6(Int32U5BU5D_t3230847821* value)
	{
		___layerIds_6 = value;
		Il2CppCodeGenWriteBarrier(&___layerIds_6, value);
	}

	inline static int32_t get_offset_of_layerById_7() { return static_cast<int32_t>(offsetof(CameraLayer2D_t1890023832, ___layerById_7)); }
	inline Dictionary_2_t1151101739 * get_layerById_7() const { return ___layerById_7; }
	inline Dictionary_2_t1151101739 ** get_address_of_layerById_7() { return &___layerById_7; }
	inline void set_layerById_7(Dictionary_2_t1151101739 * value)
	{
		___layerById_7 = value;
		Il2CppCodeGenWriteBarrier(&___layerById_7, value);
	}

	inline static int32_t get_offset_of_sortedHits_8() { return static_cast<int32_t>(offsetof(CameraLayer2D_t1890023832, ___sortedHits_8)); }
	inline List_1_t2742929936 * get_sortedHits_8() const { return ___sortedHits_8; }
	inline List_1_t2742929936 ** get_address_of_sortedHits_8() { return &___sortedHits_8; }
	inline void set_sortedHits_8(List_1_t2742929936 * value)
	{
		___sortedHits_8 = value;
		Il2CppCodeGenWriteBarrier(&___sortedHits_8, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_9() { return static_cast<int32_t>(offsetof(CameraLayer2D_t1890023832, ___tmpHitTestList_9)); }
	inline List_1_t2109190251 * get_tmpHitTestList_9() const { return ___tmpHitTestList_9; }
	inline List_1_t2109190251 ** get_address_of_tmpHitTestList_9() { return &___tmpHitTestList_9; }
	inline void set_tmpHitTestList_9(List_1_t2109190251 * value)
	{
		___tmpHitTestList_9 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionHandler
struct  CollisionHandler_t2647773144  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 CollisionHandler::Position
	Vector3_t4282066566  ___Position_2;
	// System.Boolean CollisionHandler::xPlus
	bool ___xPlus_3;
	// System.Boolean CollisionHandler::xMinus
	bool ___xMinus_4;
	// System.Boolean CollisionHandler::yPlus
	bool ___yPlus_5;
	// System.Boolean CollisionHandler::yMinus
	bool ___yMinus_6;
	// UnityEngine.GameObject CollisionHandler::xPlusNode
	GameObject_t3674682005 * ___xPlusNode_7;
	// UnityEngine.GameObject CollisionHandler::xMinusNode
	GameObject_t3674682005 * ___xMinusNode_8;
	// UnityEngine.GameObject CollisionHandler::yPlusNode
	GameObject_t3674682005 * ___yPlusNode_9;
	// UnityEngine.GameObject CollisionHandler::yMinusNode
	GameObject_t3674682005 * ___yMinusNode_10;

public:
	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___Position_2)); }
	inline Vector3_t4282066566  get_Position_2() const { return ___Position_2; }
	inline Vector3_t4282066566 * get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(Vector3_t4282066566  value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_xPlus_3() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___xPlus_3)); }
	inline bool get_xPlus_3() const { return ___xPlus_3; }
	inline bool* get_address_of_xPlus_3() { return &___xPlus_3; }
	inline void set_xPlus_3(bool value)
	{
		___xPlus_3 = value;
	}

	inline static int32_t get_offset_of_xMinus_4() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___xMinus_4)); }
	inline bool get_xMinus_4() const { return ___xMinus_4; }
	inline bool* get_address_of_xMinus_4() { return &___xMinus_4; }
	inline void set_xMinus_4(bool value)
	{
		___xMinus_4 = value;
	}

	inline static int32_t get_offset_of_yPlus_5() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___yPlus_5)); }
	inline bool get_yPlus_5() const { return ___yPlus_5; }
	inline bool* get_address_of_yPlus_5() { return &___yPlus_5; }
	inline void set_yPlus_5(bool value)
	{
		___yPlus_5 = value;
	}

	inline static int32_t get_offset_of_yMinus_6() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___yMinus_6)); }
	inline bool get_yMinus_6() const { return ___yMinus_6; }
	inline bool* get_address_of_yMinus_6() { return &___yMinus_6; }
	inline void set_yMinus_6(bool value)
	{
		___yMinus_6 = value;
	}

	inline static int32_t get_offset_of_xPlusNode_7() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___xPlusNode_7)); }
	inline GameObject_t3674682005 * get_xPlusNode_7() const { return ___xPlusNode_7; }
	inline GameObject_t3674682005 ** get_address_of_xPlusNode_7() { return &___xPlusNode_7; }
	inline void set_xPlusNode_7(GameObject_t3674682005 * value)
	{
		___xPlusNode_7 = value;
		Il2CppCodeGenWriteBarrier(&___xPlusNode_7, value);
	}

	inline static int32_t get_offset_of_xMinusNode_8() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___xMinusNode_8)); }
	inline GameObject_t3674682005 * get_xMinusNode_8() const { return ___xMinusNode_8; }
	inline GameObject_t3674682005 ** get_address_of_xMinusNode_8() { return &___xMinusNode_8; }
	inline void set_xMinusNode_8(GameObject_t3674682005 * value)
	{
		___xMinusNode_8 = value;
		Il2CppCodeGenWriteBarrier(&___xMinusNode_8, value);
	}

	inline static int32_t get_offset_of_yPlusNode_9() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___yPlusNode_9)); }
	inline GameObject_t3674682005 * get_yPlusNode_9() const { return ___yPlusNode_9; }
	inline GameObject_t3674682005 ** get_address_of_yPlusNode_9() { return &___yPlusNode_9; }
	inline void set_yPlusNode_9(GameObject_t3674682005 * value)
	{
		___yPlusNode_9 = value;
		Il2CppCodeGenWriteBarrier(&___yPlusNode_9, value);
	}

	inline static int32_t get_offset_of_yMinusNode_10() { return static_cast<int32_t>(offsetof(CollisionHandler_t2647773144, ___yMinusNode_10)); }
	inline GameObject_t3674682005 * get_yMinusNode_10() const { return ___yMinusNode_10; }
	inline GameObject_t3674682005 ** get_address_of_yMinusNode_10() { return &___yMinusNode_10; }
	inline void set_yMinusNode_10(GameObject_t3674682005 * value)
	{
		___yMinusNode_10 = value;
		Il2CppCodeGenWriteBarrier(&___yMinusNode_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

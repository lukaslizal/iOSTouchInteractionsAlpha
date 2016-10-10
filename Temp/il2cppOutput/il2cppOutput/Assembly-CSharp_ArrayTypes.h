#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Interval
struct Interval_t635062501;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_BezierControlPointMode3723804565.h"
#include "AssemblyU2DCSharp_Interval635062501.h"

#pragma once
// BezierControlPointMode[]
struct BezierControlPointModeU5BU5D_t622734968  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Interval[]
struct IntervalU5BU5D_t3212789224  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Interval_t635062501 * m_Items[1];

public:
	inline Interval_t635062501 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Interval_t635062501 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Interval_t635062501 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame>
struct Action_1_t4271497161;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.XR.ARBackgroundRenderer
struct ARBackgroundRenderer_t852496440;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern const RuntimeMethod* PoseData_get_rotation_m1034883957_RuntimeMethod_var;
extern const uint32_t PoseData_get_rotation_m1034883957_MetadataUsageId;
extern const RuntimeMethod* PoseData_get_position_m1980100049_RuntimeMethod_var;
extern const uint32_t PoseData_get_position_m1980100049_MetadataUsageId;
extern const RuntimeMethod* TangoDevice_get_baseCoordinateFrame_m1024580885_RuntimeMethod_var;
extern const uint32_t TangoDevice_get_baseCoordinateFrame_m1024580885_MetadataUsageId;
extern RuntimeClass* TangoDevice_t2970124841_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TangoDevice__cctor_m585081299_RuntimeMethod_var;
extern String_t* _stringLiteral757602046;
extern const uint32_t TangoDevice__cctor_m585081299_MetadataUsageId;
extern const RuntimeMethod* TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_RuntimeMethod_var;
extern const uint32_t TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_MetadataUsageId;
extern RuntimeClass* TangoInputTracking_t4005594645_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TangoInputTracking_TryGetPoseAtTime_m3134437062_RuntimeMethod_var;
extern const uint32_t TangoInputTracking_TryGetPoseAtTime_m3134437062_MetadataUsageId;
extern const RuntimeMethod* TangoInputTracking__cctor_m2382021019_RuntimeMethod_var;
extern const uint32_t TangoInputTracking__cctor_m2382021019_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745538_H
#define U3CMODULEU3E_T692745538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745538 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745538_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef TANGOINPUTTRACKING_T4005594645_H
#define TANGOINPUTTRACKING_T4005594645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.TangoInputTracking
struct  TangoInputTracking_t4005594645  : public RuntimeObject
{
public:

public:
};

struct TangoInputTracking_t4005594645_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame> UnityEngine.XR.Tango.TangoInputTracking::trackingAcquired
	Action_1_t4271497161 * ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame> UnityEngine.XR.Tango.TangoInputTracking::trackingLost
	Action_1_t4271497161 * ___trackingLost_1;

public:
	inline static int32_t get_offset_of_trackingAcquired_0() { return static_cast<int32_t>(offsetof(TangoInputTracking_t4005594645_StaticFields, ___trackingAcquired_0)); }
	inline Action_1_t4271497161 * get_trackingAcquired_0() const { return ___trackingAcquired_0; }
	inline Action_1_t4271497161 ** get_address_of_trackingAcquired_0() { return &___trackingAcquired_0; }
	inline void set_trackingAcquired_0(Action_1_t4271497161 * value)
	{
		___trackingAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((&___trackingAcquired_0), value);
	}

	inline static int32_t get_offset_of_trackingLost_1() { return static_cast<int32_t>(offsetof(TangoInputTracking_t4005594645_StaticFields, ___trackingLost_1)); }
	inline Action_1_t4271497161 * get_trackingLost_1() const { return ___trackingLost_1; }
	inline Action_1_t4271497161 ** get_address_of_trackingLost_1() { return &___trackingLost_1; }
	inline void set_trackingLost_1(Action_1_t4271497161 * value)
	{
		___trackingLost_1 = value;
		Il2CppCodeGenWriteBarrier((&___trackingLost_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TANGOINPUTTRACKING_T4005594645_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef TANGODEVICE_T2970124841_H
#define TANGODEVICE_T2970124841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.TangoDevice
struct  TangoDevice_t2970124841  : public RuntimeObject
{
public:

public:
};

struct TangoDevice_t2970124841_StaticFields
{
public:
	// UnityEngine.XR.ARBackgroundRenderer UnityEngine.XR.Tango.TangoDevice::m_BackgroundRenderer
	ARBackgroundRenderer_t852496440 * ___m_BackgroundRenderer_0;
	// System.String UnityEngine.XR.Tango.TangoDevice::m_AreaDescriptionUUID
	String_t* ___m_AreaDescriptionUUID_1;

public:
	inline static int32_t get_offset_of_m_BackgroundRenderer_0() { return static_cast<int32_t>(offsetof(TangoDevice_t2970124841_StaticFields, ___m_BackgroundRenderer_0)); }
	inline ARBackgroundRenderer_t852496440 * get_m_BackgroundRenderer_0() const { return ___m_BackgroundRenderer_0; }
	inline ARBackgroundRenderer_t852496440 ** get_address_of_m_BackgroundRenderer_0() { return &___m_BackgroundRenderer_0; }
	inline void set_m_BackgroundRenderer_0(ARBackgroundRenderer_t852496440 * value)
	{
		___m_BackgroundRenderer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BackgroundRenderer_0), value);
	}

	inline static int32_t get_offset_of_m_AreaDescriptionUUID_1() { return static_cast<int32_t>(offsetof(TangoDevice_t2970124841_StaticFields, ___m_AreaDescriptionUUID_1)); }
	inline String_t* get_m_AreaDescriptionUUID_1() const { return ___m_AreaDescriptionUUID_1; }
	inline String_t** get_address_of_m_AreaDescriptionUUID_1() { return &___m_AreaDescriptionUUID_1; }
	inline void set_m_AreaDescriptionUUID_1(String_t* value)
	{
		___m_AreaDescriptionUUID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AreaDescriptionUUID_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TANGODEVICE_T2970124841_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ARBACKGROUNDRENDERER_T852496440_H
#define ARBACKGROUNDRENDERER_T852496440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARBackgroundRenderer
struct  ARBackgroundRenderer_t852496440  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARBACKGROUNDRENDERER_T852496440_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef COORDINATEFRAME_T4099029566_H
#define COORDINATEFRAME_T4099029566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFrame
struct  CoordinateFrame_t4099029566 
{
public:
	// System.Int32 UnityEngine.XR.Tango.CoordinateFrame::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CoordinateFrame_t4099029566, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAME_T4099029566_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T1705519499_H
#ifndef POSESTATUS_T2577078539_H
#define POSESTATUS_T2577078539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_t2577078539 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PoseStatus_t2577078539, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSESTATUS_T2577078539_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COORDINATEFRAMEPAIR_T1560405616_H
#define COORDINATEFRAMEPAIR_T1560405616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.CoordinateFramePair
struct  CoordinateFramePair_t1560405616 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::baseFrame
					int32_t ___baseFrame_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___baseFrame_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___targetFrame_1_OffsetPadding[4];
					// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.CoordinateFramePair::targetFrame
					int32_t ___targetFrame_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___targetFrame_1_OffsetPadding_forAlignmentOnly[4];
					int32_t ___targetFrame_1_forAlignmentOnly;
				};
			};
		};
		uint8_t CoordinateFramePair_t1560405616__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseFrame_0() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___baseFrame_0)); }
	inline int32_t get_baseFrame_0() const { return ___baseFrame_0; }
	inline int32_t* get_address_of_baseFrame_0() { return &___baseFrame_0; }
	inline void set_baseFrame_0(int32_t value)
	{
		___baseFrame_0 = value;
	}

	inline static int32_t get_offset_of_targetFrame_1() { return static_cast<int32_t>(offsetof(CoordinateFramePair_t1560405616, ___targetFrame_1)); }
	inline int32_t get_targetFrame_1() const { return ___targetFrame_1; }
	inline int32_t* get_address_of_targetFrame_1() { return &___targetFrame_1; }
	inline void set_targetFrame_1(int32_t value)
	{
		___targetFrame_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATEFRAMEPAIR_T1560405616_H
#ifndef ACTION_1_T4271497161_H
#define ACTION_1_T4271497161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.Tango.CoordinateFrame>
struct  Action_1_t4271497161  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T4271497161_H
#ifndef POSEDATA_T3034736766_H
#define POSEDATA_T3034736766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseData
struct  PoseData_t3034736766 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt32 UnityEngine.XR.Tango.PoseData::version
					uint32_t ___version_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint32_t ___version_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___timestamp_1_OffsetPadding[8];
					// System.Double UnityEngine.XR.Tango.PoseData::timestamp
					double ___timestamp_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___timestamp_1_OffsetPadding_forAlignmentOnly[8];
					double ___timestamp_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_x_2_OffsetPadding[16];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
					double ___orientation_x_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_x_2_OffsetPadding_forAlignmentOnly[16];
					double ___orientation_x_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_y_3_OffsetPadding[24];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
					double ___orientation_y_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_y_3_OffsetPadding_forAlignmentOnly[24];
					double ___orientation_y_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_z_4_OffsetPadding[32];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
					double ___orientation_z_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_z_4_OffsetPadding_forAlignmentOnly[32];
					double ___orientation_z_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___orientation_w_5_OffsetPadding[40];
					// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
					double ___orientation_w_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___orientation_w_5_OffsetPadding_forAlignmentOnly[40];
					double ___orientation_w_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_x_6_OffsetPadding[48];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_x
					double ___translation_x_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_x_6_OffsetPadding_forAlignmentOnly[48];
					double ___translation_x_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_y_7_OffsetPadding[56];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_y
					double ___translation_y_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_y_7_OffsetPadding_forAlignmentOnly[56];
					double ___translation_y_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___translation_z_8_OffsetPadding[64];
					// System.Double UnityEngine.XR.Tango.PoseData::translation_z
					double ___translation_z_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___translation_z_8_OffsetPadding_forAlignmentOnly[64];
					double ___translation_z_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___statusCode_9_OffsetPadding[72];
					// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
					int32_t ___statusCode_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___statusCode_9_OffsetPadding_forAlignmentOnly[72];
					int32_t ___statusCode_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frame_10_OffsetPadding[76];
					// UnityEngine.XR.Tango.CoordinateFramePair UnityEngine.XR.Tango.PoseData::frame
					CoordinateFramePair_t1560405616  ___frame_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frame_10_OffsetPadding_forAlignmentOnly[76];
					CoordinateFramePair_t1560405616  ___frame_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___confidence_11_OffsetPadding[84];
					// System.UInt32 UnityEngine.XR.Tango.PoseData::confidence
					uint32_t ___confidence_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___confidence_11_OffsetPadding_forAlignmentOnly[84];
					uint32_t ___confidence_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___accuracy_12_OffsetPadding[88];
					// System.Single UnityEngine.XR.Tango.PoseData::accuracy
					float ___accuracy_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___accuracy_12_OffsetPadding_forAlignmentOnly[88];
					float ___accuracy_12_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseData_t3034736766__padding[92];
	};

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___timestamp_1)); }
	inline double get_timestamp_1() const { return ___timestamp_1; }
	inline double* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(double value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_orientation_x_2() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_x_2)); }
	inline double get_orientation_x_2() const { return ___orientation_x_2; }
	inline double* get_address_of_orientation_x_2() { return &___orientation_x_2; }
	inline void set_orientation_x_2(double value)
	{
		___orientation_x_2 = value;
	}

	inline static int32_t get_offset_of_orientation_y_3() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_y_3)); }
	inline double get_orientation_y_3() const { return ___orientation_y_3; }
	inline double* get_address_of_orientation_y_3() { return &___orientation_y_3; }
	inline void set_orientation_y_3(double value)
	{
		___orientation_y_3 = value;
	}

	inline static int32_t get_offset_of_orientation_z_4() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_z_4)); }
	inline double get_orientation_z_4() const { return ___orientation_z_4; }
	inline double* get_address_of_orientation_z_4() { return &___orientation_z_4; }
	inline void set_orientation_z_4(double value)
	{
		___orientation_z_4 = value;
	}

	inline static int32_t get_offset_of_orientation_w_5() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___orientation_w_5)); }
	inline double get_orientation_w_5() const { return ___orientation_w_5; }
	inline double* get_address_of_orientation_w_5() { return &___orientation_w_5; }
	inline void set_orientation_w_5(double value)
	{
		___orientation_w_5 = value;
	}

	inline static int32_t get_offset_of_translation_x_6() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_x_6)); }
	inline double get_translation_x_6() const { return ___translation_x_6; }
	inline double* get_address_of_translation_x_6() { return &___translation_x_6; }
	inline void set_translation_x_6(double value)
	{
		___translation_x_6 = value;
	}

	inline static int32_t get_offset_of_translation_y_7() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_y_7)); }
	inline double get_translation_y_7() const { return ___translation_y_7; }
	inline double* get_address_of_translation_y_7() { return &___translation_y_7; }
	inline void set_translation_y_7(double value)
	{
		___translation_y_7 = value;
	}

	inline static int32_t get_offset_of_translation_z_8() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___translation_z_8)); }
	inline double get_translation_z_8() const { return ___translation_z_8; }
	inline double* get_address_of_translation_z_8() { return &___translation_z_8; }
	inline void set_translation_z_8(double value)
	{
		___translation_z_8 = value;
	}

	inline static int32_t get_offset_of_statusCode_9() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___statusCode_9)); }
	inline int32_t get_statusCode_9() const { return ___statusCode_9; }
	inline int32_t* get_address_of_statusCode_9() { return &___statusCode_9; }
	inline void set_statusCode_9(int32_t value)
	{
		___statusCode_9 = value;
	}

	inline static int32_t get_offset_of_frame_10() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___frame_10)); }
	inline CoordinateFramePair_t1560405616  get_frame_10() const { return ___frame_10; }
	inline CoordinateFramePair_t1560405616 * get_address_of_frame_10() { return &___frame_10; }
	inline void set_frame_10(CoordinateFramePair_t1560405616  value)
	{
		___frame_10 = value;
	}

	inline static int32_t get_offset_of_confidence_11() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___confidence_11)); }
	inline uint32_t get_confidence_11() const { return ___confidence_11; }
	inline uint32_t* get_address_of_confidence_11() { return &___confidence_11; }
	inline void set_confidence_11(uint32_t value)
	{
		___confidence_11 = value;
	}

	inline static int32_t get_offset_of_accuracy_12() { return static_cast<int32_t>(offsetof(PoseData_t3034736766, ___accuracy_12)); }
	inline float get_accuracy_12() const { return ___accuracy_12; }
	inline float* get_address_of_accuracy_12() { return &___accuracy_12; }
	inline void set_accuracy_12(float value)
	{
		___accuracy_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3034736766_H



// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306 (RuntimeObject * __this /* static, unused */, double ___time0, int32_t ___screenOrientation1, int32_t ___baseFrame2, int32_t ___targetFrame3, PoseData_t3034736766 * ___pose4, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  PoseData_get_rotation_m1034883957 (PoseData_t3034736766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseData_get_rotation_m1034883957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(PoseData_get_rotation_m1034883957_RuntimeMethod_var);
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		double L_0 = __this->get_orientation_x_2();
		double L_1 = __this->get_orientation_y_3();
		double L_2 = __this->get_orientation_z_4();
		double L_3 = __this->get_orientation_w_5();
		Quaternion_t2301928331  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Quaternion__ctor_m435141806((&L_4), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)L_2))), (((float)((float)L_3))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		Quaternion_t2301928331  L_5 = V_0;
		return L_5;
	}
}
extern "C"  Quaternion_t2301928331  PoseData_get_rotation_m1034883957_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PoseData_t3034736766 * _thisAdjusted = reinterpret_cast<PoseData_t3034736766 *>(__this + 1);
	return PoseData_get_rotation_m1034883957(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  PoseData_get_position_m1980100049 (PoseData_t3034736766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseData_get_position_m1980100049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(PoseData_get_position_m1980100049_RuntimeMethod_var);
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		double L_0 = __this->get_translation_x_6();
		double L_1 = __this->get_translation_y_7();
		double L_2 = __this->get_translation_z_8();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
extern "C"  Vector3_t3722313464  PoseData_get_position_m1980100049_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PoseData_t3034736766 * _thisAdjusted = reinterpret_cast<PoseData_t3034736766 *>(__this + 1);
	return PoseData_get_position_m1980100049(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Tango.CoordinateFrame UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()
extern "C" IL2CPP_METHOD_ATTR int32_t TangoDevice_get_baseCoordinateFrame_m1024580885 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoDevice_get_baseCoordinateFrame_m1024580885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TangoDevice_get_baseCoordinateFrame_m1024580885_RuntimeMethod_var);
	typedef int32_t (*TangoDevice_get_baseCoordinateFrame_m1024580885_ftn) ();
	static TangoDevice_get_baseCoordinateFrame_m1024580885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TangoDevice_get_baseCoordinateFrame_m1024580885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Tango.TangoDevice::get_baseCoordinateFrame()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.Tango.TangoDevice::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TangoDevice__cctor_m585081299 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoDevice__cctor_m585081299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TangoDevice__cctor_m585081299_RuntimeMethod_var);
	{
		((TangoDevice_t2970124841_StaticFields*)il2cpp_codegen_static_fields_for(TangoDevice_t2970124841_il2cpp_TypeInfo_var))->set_m_BackgroundRenderer_0((ARBackgroundRenderer_t852496440 *)NULL);
		((TangoDevice_t2970124841_StaticFields*)il2cpp_codegen_static_fields_for(TangoDevice_t2970124841_il2cpp_TypeInfo_var))->set_m_AreaDescriptionUUID_1(_stringLiteral757602046);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306 (RuntimeObject * __this /* static, unused */, double ___time0, int32_t ___screenOrientation1, int32_t ___baseFrame2, int32_t ___targetFrame3, PoseData_t3034736766 * ___pose4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_RuntimeMethod_var);
	typedef bool (*TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn) (double, int32_t, int32_t, int32_t, PoseData_t3034736766 *);
	static TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(System.Double,UnityEngine.ScreenOrientation,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.PoseData&)");
	bool retVal = _il2cpp_icall_func(___time0, ___screenOrientation1, ___baseFrame2, ___targetFrame3, ___pose4);
	return retVal;
}
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&,UnityEngine.XR.Tango.CoordinateFrame,UnityEngine.XR.Tango.CoordinateFrame,System.Double)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m3134437062 (RuntimeObject * __this /* static, unused */, PoseData_t3034736766 * ___pose0, int32_t ___baseFrame1, int32_t ___targetFrame2, double ___time3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoInputTracking_TryGetPoseAtTime_m3134437062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TangoInputTracking_TryGetPoseAtTime_m3134437062_RuntimeMethod_var);
	bool V_0 = false;
	{
		double L_0 = ___time3;
		int32_t L_1 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = ___baseFrame1;
		int32_t L_3 = ___targetFrame2;
		PoseData_t3034736766 * L_4 = ___pose0;
		IL2CPP_RUNTIME_CLASS_INIT(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var);
		bool L_5 = TangoInputTracking_Internal_TryGetPoseAtTime_m2895214306(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (PoseData_t3034736766 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void UnityEngine.XR.Tango.TangoInputTracking::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TangoInputTracking__cctor_m2382021019 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TangoInputTracking__cctor_m2382021019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TangoInputTracking__cctor_m2382021019_RuntimeMethod_var);
	{
		((TangoInputTracking_t4005594645_StaticFields*)il2cpp_codegen_static_fields_for(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var))->set_trackingAcquired_0((Action_1_t4271497161 *)NULL);
		((TangoInputTracking_t4005594645_StaticFields*)il2cpp_codegen_static_fields_for(TangoInputTracking_t4005594645_il2cpp_TypeInfo_var))->set_trackingLost_1((Action_1_t4271497161 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

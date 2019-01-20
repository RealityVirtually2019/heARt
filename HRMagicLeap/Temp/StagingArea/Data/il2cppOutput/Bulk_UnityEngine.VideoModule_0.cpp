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

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t1683042537;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t3436254912;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t3848515759;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t3211687919;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t445758600;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;

extern const RuntimeMethod* VideoClipPlayable_GetHandle_m2166158330_RuntimeMethod_var;
extern const uint32_t VideoClipPlayable_GetHandle_m2166158330_MetadataUsageId;
extern const RuntimeMethod* VideoClipPlayable_Equals_m2063112376_RuntimeMethod_var;
extern const uint32_t VideoClipPlayable_Equals_m2063112376_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_url_m885080323_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_url_m885080323_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_get_targetTexture_m1245686814_RuntimeMethod_var;
extern const uint32_t VideoPlayer_get_targetTexture_m1245686814_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_targetTexture_m3026208934_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_targetTexture_m3026208934_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_waitForFirstFrame_m419213025_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_waitForFirstFrame_m419213025_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_playOnAwake_m1398368016_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_playOnAwake_m1398368016_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_Play_m1850501814_RuntimeMethod_var;
extern const uint32_t VideoPlayer_Play_m1850501814_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_INTERNAL_CALL_Play_m2561784367_RuntimeMethod_var;
extern const uint32_t VideoPlayer_INTERNAL_CALL_Play_m2561784367_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_Pause_m3396579194_RuntimeMethod_var;
extern const uint32_t VideoPlayer_Pause_m3396579194_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_INTERNAL_CALL_Pause_m392782036_RuntimeMethod_var;
extern const uint32_t VideoPlayer_INTERNAL_CALL_Pause_m392782036_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_Stop_m2798933067_RuntimeMethod_var;
extern const uint32_t VideoPlayer_Stop_m2798933067_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_INTERNAL_CALL_Stop_m3783550061_RuntimeMethod_var;
extern const uint32_t VideoPlayer_INTERNAL_CALL_Stop_m3783550061_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_get_time_m623957222_RuntimeMethod_var;
extern const uint32_t VideoPlayer_get_time_m623957222_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_time_m1040886277_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_time_m1040886277_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_isLooping_m2379489660_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_isLooping_m2379489660_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_get_frameCount_m1587673510_RuntimeMethod_var;
extern const uint32_t VideoPlayer_get_frameCount_m1587673510_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_get_frameRate_m508138000_RuntimeMethod_var;
extern const uint32_t VideoPlayer_get_frameRate_m508138000_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_EnableAudioTrack_m3940352556_RuntimeMethod_var;
extern const uint32_t VideoPlayer_EnableAudioTrack_m3940352556_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_RuntimeMethod_var;
extern const uint32_t VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_set_audioOutputMode_m1054936430_RuntimeMethod_var;
extern const uint32_t VideoPlayer_set_audioOutputMode_m1054936430_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_SetTargetAudioSource_m4040805661_RuntimeMethod_var;
extern const uint32_t VideoPlayer_SetTargetAudioSource_m4040805661_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_RuntimeMethod_var;
extern const uint32_t VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_MetadataUsageId;
extern RuntimeClass* EventHandler_t3436254912_il2cpp_TypeInfo_var;
extern const RuntimeMethod* VideoPlayer_add_prepareCompleted_m1550584085_RuntimeMethod_var;
extern const uint32_t VideoPlayer_add_prepareCompleted_m1550584085_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_remove_prepareCompleted_m1334838824_RuntimeMethod_var;
extern const uint32_t VideoPlayer_remove_prepareCompleted_m1334838824_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_add_loopPointReached_m2286553779_RuntimeMethod_var;
extern const uint32_t VideoPlayer_add_loopPointReached_m2286553779_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_remove_loopPointReached_m1306936878_RuntimeMethod_var;
extern const uint32_t VideoPlayer_remove_loopPointReached_m1306936878_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_add_seekCompleted_m3856154777_RuntimeMethod_var;
extern const uint32_t VideoPlayer_add_seekCompleted_m3856154777_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_remove_seekCompleted_m1693973157_RuntimeMethod_var;
extern const uint32_t VideoPlayer_remove_seekCompleted_m1693973157_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokePrepareCompletedCallback_Internal_m891859246_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokePrepareCompletedCallback_Internal_m891859246_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeFrameReadyCallback_Internal_m795190166_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeFrameReadyCallback_Internal_m795190166_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeLoopPointReachedCallback_Internal_m3470582081_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeLoopPointReachedCallback_Internal_m3470582081_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeStartedCallback_Internal_m3936194096_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeStartedCallback_Internal_m3936194096_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeFrameDroppedCallback_Internal_m984464440_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeFrameDroppedCallback_Internal_m984464440_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeErrorReceivedCallback_Internal_m3291790132_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeErrorReceivedCallback_Internal_m3291790132_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeSeekCompletedCallback_Internal_m716586074_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeSeekCompletedCallback_Internal_m716586074_MetadataUsageId;
extern const RuntimeMethod* VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m1660582043_RuntimeMethod_var;
extern const uint32_t VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m1660582043_MetadataUsageId;
extern const RuntimeMethod* ErrorEventHandler__ctor_m1187192887_RuntimeMethod_var;
extern const uint32_t ErrorEventHandler__ctor_m1187192887_MetadataUsageId;
extern const RuntimeMethod* ErrorEventHandler_Invoke_m2692795411_RuntimeMethod_var;
extern const uint32_t ErrorEventHandler_Invoke_m2692795411_MetadataUsageId;
extern const RuntimeMethod* ErrorEventHandler_BeginInvoke_m2704839404_RuntimeMethod_var;
extern const uint32_t ErrorEventHandler_BeginInvoke_m2704839404_MetadataUsageId;
extern const RuntimeMethod* ErrorEventHandler_EndInvoke_m2574503704_RuntimeMethod_var;
extern const uint32_t ErrorEventHandler_EndInvoke_m2574503704_MetadataUsageId;
extern const RuntimeMethod* EventHandler__ctor_m838423014_RuntimeMethod_var;
extern const uint32_t EventHandler__ctor_m838423014_MetadataUsageId;
extern const RuntimeMethod* EventHandler_Invoke_m264911794_RuntimeMethod_var;
extern const uint32_t EventHandler_Invoke_m264911794_MetadataUsageId;
extern const RuntimeMethod* EventHandler_BeginInvoke_m2714081538_RuntimeMethod_var;
extern const uint32_t EventHandler_BeginInvoke_m2714081538_MetadataUsageId;
extern const RuntimeMethod* EventHandler_EndInvoke_m1665908986_RuntimeMethod_var;
extern const uint32_t EventHandler_EndInvoke_m1665908986_MetadataUsageId;
extern const RuntimeMethod* FrameReadyEventHandler__ctor_m4117293896_RuntimeMethod_var;
extern const uint32_t FrameReadyEventHandler__ctor_m4117293896_MetadataUsageId;
extern const RuntimeMethod* FrameReadyEventHandler_Invoke_m4235069853_RuntimeMethod_var;
extern const uint32_t FrameReadyEventHandler_Invoke_m4235069853_MetadataUsageId;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern const RuntimeMethod* FrameReadyEventHandler_BeginInvoke_m3423367811_RuntimeMethod_var;
extern const uint32_t FrameReadyEventHandler_BeginInvoke_m3423367811_MetadataUsageId;
extern const RuntimeMethod* FrameReadyEventHandler_EndInvoke_m2202588656_RuntimeMethod_var;
extern const uint32_t FrameReadyEventHandler_EndInvoke_m2202588656_MetadataUsageId;
extern const RuntimeMethod* TimeEventHandler__ctor_m25310196_RuntimeMethod_var;
extern const uint32_t TimeEventHandler__ctor_m25310196_MetadataUsageId;
extern const RuntimeMethod* TimeEventHandler_Invoke_m2893540100_RuntimeMethod_var;
extern const uint32_t TimeEventHandler_Invoke_m2893540100_MetadataUsageId;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeEventHandler_BeginInvoke_m2542334896_RuntimeMethod_var;
extern const uint32_t TimeEventHandler_BeginInvoke_m2542334896_MetadataUsageId;
extern const RuntimeMethod* TimeEventHandler_EndInvoke_m2619486746_RuntimeMethod_var;
extern const uint32_t TimeEventHandler_EndInvoke_m2619486746_MetadataUsageId;



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
#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef VIDEOAUDIOOUTPUTMODE_T1271585647_H
#define VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_t1271585647 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t1271585647, ___value___1)); }
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
#endif // VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifndef VIDEOCLIPPLAYABLE_T2598186649_H
#define VIDEOCLIPPLAYABLE_T2598186649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Video.VideoClipPlayable
struct  VideoClipPlayable_t2598186649 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(VideoClipPlayable_t2598186649, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIPPLAYABLE_T2598186649_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
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
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef EVENTHANDLER_T3436254912_H
#define EVENTHANDLER_T3436254912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t3436254912  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3436254912_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef ERROREVENTHANDLER_T3211687919_H
#define ERROREVENTHANDLER_T3211687919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_t3211687919  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T3211687919_H
#ifndef FRAMEREADYEVENTHANDLER_T3848515759_H
#define FRAMEREADYEVENTHANDLER_T3848515759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct  FrameReadyEventHandler_t3848515759  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEREADYEVENTHANDLER_T3848515759_H
#ifndef TIMEEVENTHANDLER_T445758600_H
#define TIMEEVENTHANDLER_T445758600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct  TimeEventHandler_t445758600  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEEVENTHANDLER_T445758600_H
#ifndef VIDEOPLAYER_T1683042537_H
#define VIDEOPLAYER_T1683042537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t1683042537  : public Behaviour_t1437897464
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t3436254912 * ___prepareCompleted_2;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t3436254912 * ___loopPointReached_3;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t3436254912 * ___started_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t3436254912 * ___frameDropped_5;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t3211687919 * ___errorReceived_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t3436254912 * ___seekCompleted_7;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t445758600 * ___clockResyncOccurred_8;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t3848515759 * ___frameReady_9;

public:
	inline static int32_t get_offset_of_prepareCompleted_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___prepareCompleted_2)); }
	inline EventHandler_t3436254912 * get_prepareCompleted_2() const { return ___prepareCompleted_2; }
	inline EventHandler_t3436254912 ** get_address_of_prepareCompleted_2() { return &___prepareCompleted_2; }
	inline void set_prepareCompleted_2(EventHandler_t3436254912 * value)
	{
		___prepareCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_2), value);
	}

	inline static int32_t get_offset_of_loopPointReached_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___loopPointReached_3)); }
	inline EventHandler_t3436254912 * get_loopPointReached_3() const { return ___loopPointReached_3; }
	inline EventHandler_t3436254912 ** get_address_of_loopPointReached_3() { return &___loopPointReached_3; }
	inline void set_loopPointReached_3(EventHandler_t3436254912 * value)
	{
		___loopPointReached_3 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_3), value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___started_4)); }
	inline EventHandler_t3436254912 * get_started_4() const { return ___started_4; }
	inline EventHandler_t3436254912 ** get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(EventHandler_t3436254912 * value)
	{
		___started_4 = value;
		Il2CppCodeGenWriteBarrier((&___started_4), value);
	}

	inline static int32_t get_offset_of_frameDropped_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameDropped_5)); }
	inline EventHandler_t3436254912 * get_frameDropped_5() const { return ___frameDropped_5; }
	inline EventHandler_t3436254912 ** get_address_of_frameDropped_5() { return &___frameDropped_5; }
	inline void set_frameDropped_5(EventHandler_t3436254912 * value)
	{
		___frameDropped_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_5), value);
	}

	inline static int32_t get_offset_of_errorReceived_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___errorReceived_6)); }
	inline ErrorEventHandler_t3211687919 * get_errorReceived_6() const { return ___errorReceived_6; }
	inline ErrorEventHandler_t3211687919 ** get_address_of_errorReceived_6() { return &___errorReceived_6; }
	inline void set_errorReceived_6(ErrorEventHandler_t3211687919 * value)
	{
		___errorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_6), value);
	}

	inline static int32_t get_offset_of_seekCompleted_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___seekCompleted_7)); }
	inline EventHandler_t3436254912 * get_seekCompleted_7() const { return ___seekCompleted_7; }
	inline EventHandler_t3436254912 ** get_address_of_seekCompleted_7() { return &___seekCompleted_7; }
	inline void set_seekCompleted_7(EventHandler_t3436254912 * value)
	{
		___seekCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_7), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___clockResyncOccurred_8)); }
	inline TimeEventHandler_t445758600 * get_clockResyncOccurred_8() const { return ___clockResyncOccurred_8; }
	inline TimeEventHandler_t445758600 ** get_address_of_clockResyncOccurred_8() { return &___clockResyncOccurred_8; }
	inline void set_clockResyncOccurred_8(TimeEventHandler_t445758600 * value)
	{
		___clockResyncOccurred_8 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_8), value);
	}

	inline static int32_t get_offset_of_frameReady_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameReady_9)); }
	inline FrameReadyEventHandler_t3848515759 * get_frameReady_9() const { return ___frameReady_9; }
	inline FrameReadyEventHandler_t3848515759 ** get_address_of_frameReady_9() { return &___frameReady_9; }
	inline void set_frameReady_9(FrameReadyEventHandler_t3848515759 * value)
	{
		___frameReady_9 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T1683042537_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H



// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  VideoClipPlayable_GetHandle_m2166158330 (VideoClipPlayable_t2598186649 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m3344837515 (RuntimeObject * __this /* static, unused */, PlayableHandle_t1095853803  p0, PlayableHandle_t1095853803  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2063112376 (VideoClipPlayable_t2598186649 * __this, VideoClipPlayable_t2598186649  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Play_m2561784367 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Pause_m392782036 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Stop(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Stop_m3783550061 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_EnableAudioTrack(UnityEngine.Video.VideoPlayer,System.UInt16,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, uint16_t ___trackIndex1, bool ___enabled2, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_SetTargetAudioSource(UnityEngine.Video.VideoPlayer,System.UInt16,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, uint16_t ___trackIndex1, AudioSource_t3935305588 * ___source2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m264911794 (EventHandler_t3436254912 * __this, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m4235069853 (FrameReadyEventHandler_t3848515759 * __this, VideoPlayer_t1683042537 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m2692795411 (ErrorEventHandler_t3211687919 * __this, VideoPlayer_t1683042537 * ___source0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2893540100 (TimeEventHandler_t445758600 * __this, VideoPlayer_t1683042537 * ___source0, double ___seconds1, const RuntimeMethod* method);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t1095853803  VideoClipPlayable_GetHandle_m2166158330 (VideoClipPlayable_t2598186649 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClipPlayable_GetHandle_m2166158330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoClipPlayable_GetHandle_m2166158330_RuntimeMethod_var);
	PlayableHandle_t1095853803  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t1095853803  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t1095853803  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t1095853803  VideoClipPlayable_GetHandle_m2166158330_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	VideoClipPlayable_t2598186649 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t2598186649 *>(__this + 1);
	return VideoClipPlayable_GetHandle_m2166158330(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m2063112376 (VideoClipPlayable_t2598186649 * __this, VideoClipPlayable_t2598186649  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClipPlayable_Equals_m2063112376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoClipPlayable_Equals_m2063112376_RuntimeMethod_var);
	bool V_0 = false;
	{
		PlayableHandle_t1095853803  L_0 = VideoClipPlayable_GetHandle_m2166158330((VideoClipPlayable_t2598186649 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t1095853803  L_1 = VideoClipPlayable_GetHandle_m2166158330((VideoClipPlayable_t2598186649 *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = PlayableHandle_op_Equality_m3344837515(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool VideoClipPlayable_Equals_m2063112376_AdjustorThunk (RuntimeObject * __this, VideoClipPlayable_t2598186649  ___other0, const RuntimeMethod* method)
{
	VideoClipPlayable_t2598186649 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_t2598186649 *>(__this + 1);
	return VideoClipPlayable_Equals_m2063112376(_thisAdjusted, ___other0, method);
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
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m885080323 (VideoPlayer_t1683042537 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_url_m885080323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_url_m885080323_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_url_m885080323_ftn) (VideoPlayer_t1683042537 *, String_t*);
	static VideoPlayer_set_url_m885080323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_url_m885080323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_url(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * VideoPlayer_get_targetTexture_m1245686814 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_get_targetTexture_m1245686814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_get_targetTexture_m1245686814_RuntimeMethod_var);
	typedef RenderTexture_t2108887433 * (*VideoPlayer_get_targetTexture_m1245686814_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_get_targetTexture_m1245686814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetTexture_m1245686814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetTexture()");
	RenderTexture_t2108887433 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_targetTexture_m3026208934 (VideoPlayer_t1683042537 * __this, RenderTexture_t2108887433 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_targetTexture_m3026208934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_targetTexture_m3026208934_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_targetTexture_m3026208934_ftn) (VideoPlayer_t1683042537 *, RenderTexture_t2108887433 *);
	static VideoPlayer_set_targetTexture_m3026208934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetTexture_m3026208934_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m419213025 (VideoPlayer_t1683042537 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_waitForFirstFrame_m419213025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_waitForFirstFrame_m419213025_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_waitForFirstFrame_m419213025_ftn) (VideoPlayer_t1683042537 *, bool);
	static VideoPlayer_set_waitForFirstFrame_m419213025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_waitForFirstFrame_m419213025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m1398368016 (VideoPlayer_t1683042537 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_playOnAwake_m1398368016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_playOnAwake_m1398368016_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_playOnAwake_m1398368016_ftn) (VideoPlayer_t1683042537 *, bool);
	static VideoPlayer_set_playOnAwake_m1398368016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playOnAwake_m1398368016_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Play_m1850501814 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Play_m1850501814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_Play_m1850501814_RuntimeMethod_var);
	{
		VideoPlayer_INTERNAL_CALL_Play_m2561784367(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Play_m2561784367 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_INTERNAL_CALL_Play_m2561784367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_INTERNAL_CALL_Play_m2561784367_RuntimeMethod_var);
	typedef void (*VideoPlayer_INTERNAL_CALL_Play_m2561784367_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_INTERNAL_CALL_Play_m2561784367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_Play_m2561784367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m3396579194 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Pause_m3396579194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_Pause_m3396579194_RuntimeMethod_var);
	{
		VideoPlayer_INTERNAL_CALL_Pause_m392782036(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Pause_m392782036 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_INTERNAL_CALL_Pause_m392782036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_INTERNAL_CALL_Pause_m392782036_RuntimeMethod_var);
	typedef void (*VideoPlayer_INTERNAL_CALL_Pause_m392782036_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_INTERNAL_CALL_Pause_m392782036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_Pause_m392782036_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m2798933067 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Stop_m2798933067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_Stop_m2798933067_RuntimeMethod_var);
	{
		VideoPlayer_INTERNAL_CALL_Stop_m3783550061(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Stop(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_Stop_m3783550061 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_INTERNAL_CALL_Stop_m3783550061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_INTERNAL_CALL_Stop_m3783550061_RuntimeMethod_var);
	typedef void (*VideoPlayer_INTERNAL_CALL_Stop_m3783550061_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_INTERNAL_CALL_Stop_m3783550061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_Stop_m3783550061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Stop(UnityEngine.Video.VideoPlayer)");
	_il2cpp_icall_func(___self0);
}
// System.Double UnityEngine.Video.VideoPlayer::get_time()
extern "C" IL2CPP_METHOD_ATTR double VideoPlayer_get_time_m623957222 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_get_time_m623957222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_get_time_m623957222_RuntimeMethod_var);
	typedef double (*VideoPlayer_get_time_m623957222_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_get_time_m623957222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_time_m623957222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_time()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m1040886277 (VideoPlayer_t1683042537 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_time_m1040886277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_time_m1040886277_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_time_m1040886277_ftn) (VideoPlayer_t1683042537 *, double);
	static VideoPlayer_set_time_m1040886277_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_time_m1040886277_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_time(System.Double)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m2379489660 (VideoPlayer_t1683042537 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_isLooping_m2379489660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_isLooping_m2379489660_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_isLooping_m2379489660_ftn) (VideoPlayer_t1683042537 *, bool);
	static VideoPlayer_set_isLooping_m2379489660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_isLooping_m2379489660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_m1587673510 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_get_frameCount_m1587673510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_get_frameCount_m1587673510_RuntimeMethod_var);
	typedef uint64_t (*VideoPlayer_get_frameCount_m1587673510_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_get_frameCount_m1587673510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameCount_m1587673510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameCount()");
	uint64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR float VideoPlayer_get_frameRate_m508138000 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_get_frameRate_m508138000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_get_frameRate_m508138000_RuntimeMethod_var);
	typedef float (*VideoPlayer_get_frameRate_m508138000_ftn) (VideoPlayer_t1683042537 *);
	static VideoPlayer_get_frameRate_m508138000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameRate_m508138000_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameRate()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_EnableAudioTrack_m3940352556 (VideoPlayer_t1683042537 * __this, uint16_t ___trackIndex0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_EnableAudioTrack_m3940352556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_EnableAudioTrack_m3940352556_RuntimeMethod_var);
	{
		uint16_t L_0 = ___trackIndex0;
		bool L_1 = ___enabled1;
		VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_EnableAudioTrack(UnityEngine.Video.VideoPlayer,System.UInt16,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, uint16_t ___trackIndex1, bool ___enabled2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_RuntimeMethod_var);
	typedef void (*VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_ftn) (VideoPlayer_t1683042537 *, uint16_t, bool);
	static VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_EnableAudioTrack_m1970329113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_EnableAudioTrack(UnityEngine.Video.VideoPlayer,System.UInt16,System.Boolean)");
	_il2cpp_icall_func(___self0, ___trackIndex1, ___enabled2);
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_m1054936430 (VideoPlayer_t1683042537 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_audioOutputMode_m1054936430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_set_audioOutputMode_m1054936430_RuntimeMethod_var);
	typedef void (*VideoPlayer_set_audioOutputMode_m1054936430_ftn) (VideoPlayer_t1683042537 *, int32_t);
	static VideoPlayer_set_audioOutputMode_m1054936430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_audioOutputMode_m1054936430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_m4040805661 (VideoPlayer_t1683042537 * __this, uint16_t ___trackIndex0, AudioSource_t3935305588 * ___source1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_SetTargetAudioSource_m4040805661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_SetTargetAudioSource_m4040805661_RuntimeMethod_var);
	{
		uint16_t L_0 = ___trackIndex0;
		AudioSource_t3935305588 * L_1 = ___source1;
		VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_SetTargetAudioSource(UnityEngine.Video.VideoPlayer,System.UInt16,UnityEngine.AudioSource)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___self0, uint16_t ___trackIndex1, AudioSource_t3935305588 * ___source2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_RuntimeMethod_var);
	typedef void (*VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_ftn) (VideoPlayer_t1683042537 *, uint16_t, AudioSource_t3935305588 *);
	static VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_SetTargetAudioSource_m3086803637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_SetTargetAudioSource(UnityEngine.Video.VideoPlayer,System.UInt16,UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self0, ___trackIndex1, ___source2);
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m1550584085 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_prepareCompleted_m1550584085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_add_prepareCompleted_m1550584085_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_prepareCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_prepareCompleted_2();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_m1334838824 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_prepareCompleted_m1334838824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_remove_prepareCompleted_m1334838824_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_prepareCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_prepareCompleted_2();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m2286553779 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_loopPointReached_m2286553779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_add_loopPointReached_m2286553779_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_loopPointReached_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_loopPointReached_3();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_remove_loopPointReached_m1306936878 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_loopPointReached_m1306936878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_remove_loopPointReached_m1306936878_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_loopPointReached_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_loopPointReached_3();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_seekCompleted_m3856154777 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_seekCompleted_m3856154777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_add_seekCompleted_m3856154777_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_seekCompleted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_seekCompleted_7();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_remove_seekCompleted_m1693973157 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_seekCompleted_m1693973157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_remove_seekCompleted_m1693973157_RuntimeMethod_var);
	EventHandler_t3436254912 * V_0 = NULL;
	EventHandler_t3436254912 * V_1 = NULL;
	{
		EventHandler_t3436254912 * L_0 = __this->get_seekCompleted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t3436254912 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t3436254912 ** L_2 = __this->get_address_of_seekCompleted_7();
		EventHandler_t3436254912 * L_3 = V_1;
		EventHandler_t3436254912 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t3436254912 * L_6 = V_0;
		EventHandler_t3436254912 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t3436254912 *>((EventHandler_t3436254912 **)L_2, ((EventHandler_t3436254912 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t3436254912_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t3436254912 * L_8 = V_0;
		EventHandler_t3436254912 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t3436254912 *)L_8) == ((RuntimeObject*)(EventHandler_t3436254912 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_m891859246 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokePrepareCompletedCallback_Internal_m891859246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokePrepareCompletedCallback_Internal_m891859246_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t3436254912 * L_1 = L_0->get_prepareCompleted_2();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t3436254912 * L_3 = L_2->get_prepareCompleted_2();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m264911794(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_m795190166 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeFrameReadyCallback_Internal_m795190166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeFrameReadyCallback_Internal_m795190166_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t3848515759 * L_1 = L_0->get_frameReady_9();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		FrameReadyEventHandler_t3848515759 * L_3 = L_2->get_frameReady_9();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		int64_t L_5 = ___frameIdx1;
		NullCheck(L_3);
		FrameReadyEventHandler_Invoke_m4235069853(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m3470582081 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeLoopPointReachedCallback_Internal_m3470582081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeLoopPointReachedCallback_Internal_m3470582081_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t3436254912 * L_1 = L_0->get_loopPointReached_3();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t3436254912 * L_3 = L_2->get_loopPointReached_3();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m264911794(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_m3936194096 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeStartedCallback_Internal_m3936194096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeStartedCallback_Internal_m3936194096_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t3436254912 * L_1 = L_0->get_started_4();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t3436254912 * L_3 = L_2->get_started_4();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m264911794(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_m984464440 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeFrameDroppedCallback_Internal_m984464440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeFrameDroppedCallback_Internal_m984464440_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t3436254912 * L_1 = L_0->get_frameDropped_5();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t3436254912 * L_3 = L_2->get_frameDropped_5();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m264911794(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_m3291790132 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeErrorReceivedCallback_Internal_m3291790132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeErrorReceivedCallback_Internal_m3291790132_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_t3211687919 * L_1 = L_0->get_errorReceived_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		ErrorEventHandler_t3211687919 * L_3 = L_2->get_errorReceived_6();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		String_t* L_5 = ___errorStr1;
		NullCheck(L_3);
		ErrorEventHandler_Invoke_m2692795411(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_m716586074 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeSeekCompletedCallback_Internal_m716586074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeSeekCompletedCallback_Internal_m716586074_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t3436254912 * L_1 = L_0->get_seekCompleted_7();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t3436254912 * L_3 = L_2->get_seekCompleted_7();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m264911794(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m1660582043 (RuntimeObject * __this /* static, unused */, VideoPlayer_t1683042537 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m1660582043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m1660582043_RuntimeMethod_var);
	{
		VideoPlayer_t1683042537 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_t445758600 * L_1 = L_0->get_clockResyncOccurred_8();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t1683042537 * L_2 = ___source0;
		NullCheck(L_2);
		TimeEventHandler_t445758600 * L_3 = L_2->get_clockResyncOccurred_8();
		VideoPlayer_t1683042537 * L_4 = ___source0;
		double L_5 = ___seconds1;
		NullCheck(L_3);
		TimeEventHandler_Invoke_m2893540100(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
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
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m1187192887 (ErrorEventHandler_t3211687919 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventHandler__ctor_m1187192887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ErrorEventHandler__ctor_m1187192887_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m2692795411 (ErrorEventHandler_t3211687919 * __this, VideoPlayer_t1683042537 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventHandler_Invoke_m2692795411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ErrorEventHandler_Invoke_m2692795411_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		ErrorEventHandler_Invoke_m2692795411((ErrorEventHandler_t3211687919 *)__this->get_prev_9(), ___source0, ___message1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, VideoPlayer_t1683042537 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoPlayer_t1683042537 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___message1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_t1683042537 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t1683042537 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t1683042537 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___message1);
					else
						VirtActionInvoker2< VideoPlayer_t1683042537 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t1683042537 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___message1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t1683042537 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ErrorEventHandler_BeginInvoke_m2704839404 (ErrorEventHandler_t3211687919 * __this, VideoPlayer_t1683042537 * ___source0, String_t* ___message1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventHandler_BeginInvoke_m2704839404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ErrorEventHandler_BeginInvoke_m2704839404_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler_EndInvoke_m2574503704 (ErrorEventHandler_t3211687919 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ErrorEventHandler_EndInvoke_m2574503704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ErrorEventHandler_EndInvoke_m2574503704_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_m838423014 (EventHandler_t3436254912 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventHandler__ctor_m838423014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventHandler__ctor_m838423014_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m264911794 (EventHandler_t3436254912 * __this, VideoPlayer_t1683042537 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventHandler_Invoke_m264911794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventHandler_Invoke_m264911794_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		EventHandler_Invoke_m264911794((EventHandler_t3436254912 *)__this->get_prev_9(), ___source0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, VideoPlayer_t1683042537 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoPlayer_t1683042537 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< VideoPlayer_t1683042537 * >::Invoke(targetMethod, targetThis, ___source0);
					else
						GenericVirtActionInvoker1< VideoPlayer_t1683042537 * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoPlayer_t1683042537 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						VirtActionInvoker1< VideoPlayer_t1683042537 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t1683042537 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___source0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t1683042537 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_m2714081538 (EventHandler_t3436254912 * __this, VideoPlayer_t1683042537 * ___source0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventHandler_BeginInvoke_m2714081538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventHandler_BeginInvoke_m2714081538_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_m1665908986 (EventHandler_t3436254912 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventHandler_EndInvoke_m1665908986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventHandler_EndInvoke_m1665908986_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_m4117293896 (FrameReadyEventHandler_t3848515759 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler__ctor_m4117293896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(FrameReadyEventHandler__ctor_m4117293896_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m4235069853 (FrameReadyEventHandler_t3848515759 * __this, VideoPlayer_t1683042537 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_Invoke_m4235069853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(FrameReadyEventHandler_Invoke_m4235069853_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		FrameReadyEventHandler_Invoke_m4235069853((FrameReadyEventHandler_t3848515759 *)__this->get_prev_9(), ___source0, ___frameIdx1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, VideoPlayer_t1683042537 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___frameIdx1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoPlayer_t1683042537 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_t1683042537 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t1683042537 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t1683042537 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___frameIdx1);
					else
						VirtActionInvoker2< VideoPlayer_t1683042537 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___frameIdx1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t1683042537 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___frameIdx1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___frameIdx1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t1683042537 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FrameReadyEventHandler_BeginInvoke_m3423367811 (FrameReadyEventHandler_t3848515759 * __this, VideoPlayer_t1683042537 * ___source0, int64_t ___frameIdx1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_BeginInvoke_m3423367811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(FrameReadyEventHandler_BeginInvoke_m3423367811_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void FrameReadyEventHandler_EndInvoke_m2202588656 (FrameReadyEventHandler_t3848515759 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_EndInvoke_m2202588656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(FrameReadyEventHandler_EndInvoke_m2202588656_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_m25310196 (TimeEventHandler_t445758600 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler__ctor_m25310196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TimeEventHandler__ctor_m25310196_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2893540100 (TimeEventHandler_t445758600 * __this, VideoPlayer_t1683042537 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_Invoke_m2893540100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TimeEventHandler_Invoke_m2893540100_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		TimeEventHandler_Invoke_m2893540100((TimeEventHandler_t445758600 *)__this->get_prev_9(), ___source0, ___seconds1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, VideoPlayer_t1683042537 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___source0, ___seconds1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, VideoPlayer_t1683042537 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< VideoPlayer_t1683042537 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t1683042537 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t1683042537 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___seconds1);
					else
						VirtActionInvoker2< VideoPlayer_t1683042537 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___seconds1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t1683042537 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___seconds1);
					else
						VirtActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___seconds1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t1683042537 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TimeEventHandler_BeginInvoke_m2542334896 (TimeEventHandler_t445758600 * __this, VideoPlayer_t1683042537 * ___source0, double ___seconds1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_BeginInvoke_m2542334896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TimeEventHandler_BeginInvoke_m2542334896_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t594665363_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TimeEventHandler_EndInvoke_m2619486746 (TimeEventHandler_t445758600 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_EndInvoke_m2619486746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TimeEventHandler_EndInvoke_m2619486746_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>
struct MLPersistentFileStorage_1_t3733006835;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.IO.TextReader
struct TextReader_t283511965;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.StringBuilder
struct StringBuilder_t;

extern const RuntimeMethod* MLPersistentFileStorage_1__ctor_m2394374796_RuntimeMethod_var;
extern const uint32_t MLPersistentFileStorage_1__ctor_m2394374796_MetadataUsageId;
extern const RuntimeMethod* MLPersistentFileStorage_1_Finalize_m333891891_RuntimeMethod_var;
extern const uint32_t MLPersistentFileStorage_1_Finalize_m333891891_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentFileStorage_1_Load_m319393528_RuntimeMethod_var;
extern String_t* _stringLiteral3188869838;
extern String_t* _stringLiteral2966356403;
extern String_t* _stringLiteral3040431738;
extern String_t* _stringLiteral1728021927;
extern const uint32_t MLPersistentFileStorage_1_Load_m319393528_MetadataUsageId;
extern RuntimeClass* IOException_t4088381929_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentFileStorage_1_Save_m634271050_RuntimeMethod_var;
extern String_t* _stringLiteral420335538;
extern String_t* _stringLiteral1783015498;
extern String_t* _stringLiteral3873808529;
extern const uint32_t MLPersistentFileStorage_1_Save_m634271050_MetadataUsageId;
extern const RuntimeMethod* MLPersistentFileStorage_1_Dispose_m2467388675_RuntimeMethod_var;
extern const uint32_t MLPersistentFileStorage_1_Dispose_m2467388675_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
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
#ifndef MLPERSISTENTFILESTORAGE_1_T3733006835_H
#define MLPERSISTENTFILESTORAGE_1_T3733006835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>
struct  MLPersistentFileStorage_1_t3733006835  : public RuntimeObject
{
public:
	// MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1::_data
	RuntimeObject * ____data_0;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(MLPersistentFileStorage_1_t3733006835, ____data_0)); }
	inline RuntimeObject * get__data_0() const { return ____data_0; }
	inline RuntimeObject ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(RuntimeObject * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPERSISTENTFILESTORAGE_1_T3733006835_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_7)); }
	inline Encoding_t1523322056 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t1523322056 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_8)); }
	inline Decoder_t2204182725 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t2204182725 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t2204182725 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_9)); }
	inline Stream_t1273022909 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t1273022909 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t1273022909 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_11)); }
	inline StringBuilder_t * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_12)); }
	inline StreamReader_t4009935899 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4009935899 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4009935899 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
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
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::DebugFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_DebugFormat_m106165726 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m1616861391 (StreamReader_t4009935899 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TextReader_Dispose_m4253712522 (TextReader_t283511965 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Error(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Error_m2481084810 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m3644929270 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllText_m167356635 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentFileStorage_1__ctor_m2394374796_gshared (MLPersistentFileStorage_1_t3733006835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentFileStorage_1__ctor_m2394374796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentFileStorage_1__ctor_m2394374796_RuntimeMethod_var);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentFileStorage_1_Finalize_m333891891_gshared (MLPersistentFileStorage_1_t3733006835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentFileStorage_1_Finalize_m333891891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentFileStorage_1_Finalize_m333891891_RuntimeMethod_var);
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((MLPersistentFileStorage_1_t3733006835 *)__this);
		((  void (*) (MLPersistentFileStorage_1_t3733006835 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MLPersistentFileStorage_1_t3733006835 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_m3076187857((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MLPersistentFileStorage_1_Load_m319393528_gshared (MLPersistentFileStorage_1_t3733006835 * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentFileStorage_1_Load_m319393528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentFileStorage_1_Load_m319393528_RuntimeMethod_var);
	String_t* V_0 = NULL;
	StreamReader_t4009935899 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, (String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (String_t*)L_2;
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)L_3;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral3188869838, (ObjectU5BU5D_t2843939325*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8 = File_Exists_m3943585060(NULL /*static, unused*/, (String_t*)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_9 = V_0;
		StreamReader_t4009935899 * L_10 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1616861391(L_10, (String_t*)L_9, /*hidden argument*/NULL);
		V_1 = (StreamReader_t4009935899 *)L_10;
		StreamReader_t4009935899 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		StreamReader_t4009935899 * L_12 = V_1;
		NullCheck((StreamReader_t4009935899 *)L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.StreamReader::ReadToEnd() */, (StreamReader_t4009935899 *)L_12);
		V_2 = (String_t*)L_13;
		ObjectU5BU5D_t2843939325* L_14 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)L_14;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral2966356403, (ObjectU5BU5D_t2843939325*)L_15, /*hidden argument*/NULL);
		String_t* L_17 = V_2;
		RuntimeObject * L_18 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(NULL /*static, unused*/, (String_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__data_0(L_18);
		StreamReader_t4009935899 * L_19 = V_1;
		NullCheck((TextReader_t283511965 *)L_19);
		TextReader_Dispose_m4253712522((TextReader_t283511965 *)L_19, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0070:
	{
		MLPluginLog_Error_m2481084810(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral3040431738, /*hidden argument*/NULL);
	}

IL_007a:
	{
		goto IL_0093;
	}

IL_007f:
	{
		ObjectU5BU5D_t2843939325* L_20 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_21 = (ObjectU5BU5D_t2843939325*)L_20;
		String_t* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_22);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral1728021927, (ObjectU5BU5D_t2843939325*)L_21, /*hidden argument*/NULL);
	}

IL_0093:
	{
		RuntimeObject * L_23 = (RuntimeObject *)__this->get__data_0();
		return L_23;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Save(System.String,MLContentBindings)
extern "C" IL2CPP_METHOD_ATTR bool MLPersistentFileStorage_1_Save_m634271050_gshared (MLPersistentFileStorage_1_t3733006835 * __this, String_t* ___fileName0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentFileStorage_1_Save_m634271050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentFileStorage_1_Save_m634271050_RuntimeMethod_var);
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, (String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (String_t*)L_2;
		RuntimeObject * L_3 = ___data1;
		String_t* L_4 = JsonUtility_ToJson_m3644929270(NULL /*static, unused*/, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		V_1 = (String_t*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_5;
		String_t* L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)L_6;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral420335538, (ObjectU5BU5D_t2843939325*)L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		File_WriteAllText_m167356635(NULL /*static, unused*/, (String_t*)L_10, (String_t*)L_11, /*hidden argument*/NULL);
		goto IL_0056;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t4088381929_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003c;
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.IO.IOException)
		ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_13 = (ObjectU5BU5D_t2843939325*)L_12;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral1783015498, (ObjectU5BU5D_t2843939325*)L_13, /*hidden argument*/NULL);
		goto IL_0056;
	} // end catch (depth: 1)

IL_0056:
	{
		ObjectU5BU5D_t2843939325* L_15 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_16 = (ObjectU5BU5D_t2843939325*)L_15;
		String_t* L_17 = V_0;
		bool L_18 = File_Exists_m3943585060(NULL /*static, unused*/, (String_t*)L_17, /*hidden argument*/NULL);
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		MLPluginLog_DebugFormat_m106165726(NULL /*static, unused*/, (String_t*)_stringLiteral3873808529, (ObjectU5BU5D_t2843939325*)L_16, /*hidden argument*/NULL);
		String_t* L_21 = V_0;
		bool L_22 = File_Exists_m3943585060(NULL /*static, unused*/, (String_t*)L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentFileStorage_1_Dispose_m2467388675_gshared (MLPersistentFileStorage_1_t3733006835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentFileStorage_1_Dispose_m2467388675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentFileStorage_1_Dispose_m2467388675_RuntimeMethod_var);
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

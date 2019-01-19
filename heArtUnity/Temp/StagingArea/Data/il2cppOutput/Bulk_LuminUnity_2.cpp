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

template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// UnityEngine.XR.MagicLeap.MLPersistentCoordinateFrames/GetPCFPositionQuery
struct GetPCFPositionQuery_t4278136314;
// UnityEngine.XR.MagicLeap.MLPCF
struct MLPCF_t2390192560;
// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPCF>
struct Action_2_t1970191848;
// UnityEngine.XR.MagicLeap.MLPersistentStore
struct MLPersistentStore_t1692500085;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>
struct Dictionary_2_t567270095;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>
struct MLAPISingleton_1_t1485281829;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>
struct MLAPISingleton_1_t2872887908;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>
struct List_1_t2254088538;
// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings>
struct MLPersistentFileStorage_1_t1427508899;
// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>
struct MLPersistentFileStorage_1_t3733006835;
// UnityEngine.XR.MagicLeap.MLContentBindings
struct MLContentBindings_t774608228;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.XR.MagicLeap.MLContentBinding
struct MLContentBinding_t782013796;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.XR.MagicLeap.MLPrivileges
struct MLPrivileges_t1489932235;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct Dictionary_2_t644911818;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>
struct Dictionary_2_t918551439;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>
struct MLAPISingleton_1_t1282713979;
// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>
struct Func_2_t563276670;
// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.Object>
struct Func_2_t1795932145;
// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct Action_2_t1067572169;
// UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery
struct RequestPrivilegeQuery_t2806466543;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct KeyCollection_t834587289;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>
struct KeyCollection_t1108226910;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct List_1_t2959647623;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct IEnumerable_1_t467425770;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct List_1_t4278541285;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.XR.MagicLeap.MLThumb
struct MLThumb_t652336835;
// UnityEngine.XR.MagicLeap.MLKeyPoint
struct MLKeyPoint_t2457746220;
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>
struct List_1_t3929820962;
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
struct MLWorldPlaneBoundary_t1115739400;
// UnityEngine.XR.MagicLeap.MLWorldPolygon
struct MLWorldPolygon_t751043636;
// UnityEngine.XR.MagicLeap.MLWorldPlanes
struct MLWorldPlanes_t897167128;
// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct Dictionary_2_t2852916536;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3242901112;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>
struct MLAPISingleton_1_t689948872;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct ValueCollection_t273993558;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t663978134;
// UnityEngine.XR.MagicLeap.MLWorldPlanes/Query
struct Query_t2690121588;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct KeyCollection_t3042592007;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3432576583;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1311147538;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t3113892981;
// System.Type
struct Type_t;
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]
struct MLWorldPlaneBoundariesU5BU5D_t1821879535;
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[]
struct MLWorldPlaneBoundaryU5BU5D_t1423265241;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.XR.MagicLeap.MLWorldPolygon[]
struct MLWorldPolygonU5BU5D_t555778173;
// System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>
struct Action_3_t4204205301;
// UnityEngine.XR.MagicLeap.MLWorldPlane[]
struct MLWorldPlaneU5BU5D_t829094281;
// System.Action`3<UnityEngine.XR.MagicLeap.MLResult,System.Object,System.Object>
struct Action_3_t1256390787;
// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]>
struct Action_2_t409093569;
// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,System.Object>
struct Action_2_t2660105452;
// UnityEngine.XR.MagicLeap.MLWorldRays
struct MLWorldRays_t3718842835;
// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct Dictionary_2_t436580975;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>
struct MLAPISingleton_1_t3511624579;
// System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct Dictionary_2_t3595261788;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct KeyCollection_t626256446;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct KeyCollection_t3784937259;
// UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback
struct ResultCallback_t273786027;
// UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams
struct QueryParams_t2257812863;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.XR.MagicLeap.MLWrist
struct MLWrist_t4207073659;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.XR.MagicLeap.YUVBuffer
struct YUVBuffer_t1120549612;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// UnityEngine.XR.MagicLeap.MLPrivilegeId[]
struct MLPrivilegeIdU5BU5D_t3629945612;
// UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery[]
struct RequestPrivilegeQueryU5BU5D_t2565195638;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct IEqualityComparer_1_t3594904899;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery,System.Collections.DictionaryEntry>
struct Transform_1_t1319631626;
// UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback[]
struct ResultCallbackU5BU5D_t587863114;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t1946404814;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback,System.Collections.DictionaryEntry>
struct Transform_1_t6453041;
// UnityEngine.XR.MagicLeap.MLKeyPoint[]
struct MLKeyPointU5BU5D_t3429267109;
// UnityEngine.XR.MagicLeap.MLWorldPlanes/Query[]
struct QueryU5BU5D_t37154877;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.Collections.DictionaryEntry>
struct Transform_1_t3750712100;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult[]
struct MLRaycastResultU5BU5D_t1080960265;
// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult,System.Collections.DictionaryEntry>
struct Transform_1_t499550192;
// UnityEngine.XR.MagicLeap.MLContentBinding[]
struct MLContentBindingU5BU5D_t3391427725;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.XR.MagicLeap.MLContentBinding,System.Collections.DictionaryEntry>
struct Transform_1_t2241839441;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Action`1<UnityEngine.XR.MagicLeap.MLPCF>
struct Action_1_t2562660155;
// System.Action
struct Action_t1264377477;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.GameObject
struct GameObject_t1113636619;

extern const RuntimeMethod* GetPCFPositionQuery__ctor_m3111794024_RuntimeMethod_var;
extern const uint32_t GetPCFPositionQuery__ctor_m3111794024_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t567270095_il2cpp_TypeInfo_var;
extern RuntimeClass* MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentStore__ctor_m850784991_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3634040152_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1__ctor_m3472792385_RuntimeMethod_var;
extern String_t* _stringLiteral3610044383;
extern const uint32_t MLPersistentStore__ctor_m850784991_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_get_AllBindings_m3236505811_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_get_AllBindings_m3236505811_MetadataUsageId;
extern RuntimeClass* MLPersistentStore_t1692500085_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentStore_CreateInstance_m3652746897_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_IsValidInstance_m1441028858_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_CreateInstance_m3652746897_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_Start_m2084181192_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_BaseStart_m3102707757_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_Start_m2084181192_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_StartAPI_m1125451185_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_StartAPI_m1125451185_MetadataUsageId;
extern RuntimeClass* MLPersistentFileStorage_1_t1427508899_il2cpp_TypeInfo_var;
extern RuntimeClass* MLContentBindings_t774608228_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2254088538_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentStore_LoadBindings_m1577149611_RuntimeMethod_var;
extern const RuntimeMethod* MLPersistentFileStorage_1__ctor_m3597687518_RuntimeMethod_var;
extern const RuntimeMethod* MLPersistentFileStorage_1_Load_m1031024647_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2417779515_RuntimeMethod_var;
extern String_t* _stringLiteral3749140265;
extern const uint32_t MLPersistentStore_LoadBindings_m1577149611_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t4143332415_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentStore_CacheData_m1273779862_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3952526511_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4188341177_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m646611730_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1935860828_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m813455213_RuntimeMethod_var;
extern String_t* _stringLiteral1305129047;
extern const uint32_t MLPersistentStore_CacheData_m1273779862_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_Contains_m415070868_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_Contains_m415070868_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_ContainsInternal_m2925873846_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_ContainsInternal_m2925873846_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_Load_m2404750756_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_Load_m2404750756_MetadataUsageId;
extern RuntimeClass* MLContentBinding_t782013796_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MLResult_t265502022_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPersistentStore_LoadInternal_m1897615709_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m950280343_RuntimeMethod_var;
extern String_t* _stringLiteral297097126;
extern String_t* _stringLiteral253289519;
extern const uint32_t MLPersistentStore_LoadInternal_m1897615709_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_CleanupAPI_m1885124633_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_CleanupAPI_m1885124633_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_Update_m1283113470_RuntimeMethod_var;
extern const RuntimeMethod* MLPersistentFileStorage_1_Save_m1274139372_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_Update_m1283113470_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_Save_m476286943_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_Save_m476286943_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_InternalSave_m2663847312_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2172433515_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m401685647_RuntimeMethod_var;
extern String_t* _stringLiteral903157360;
extern const uint32_t MLPersistentStore_InternalSave_m2663847312_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_DeleteBinding_m3521712599_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_DeleteBinding_m3521712599_MetadataUsageId;
extern const RuntimeMethod* MLPersistentStore_InternalDeleteBinding_m3676039623_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m4126410017_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2935512818_RuntimeMethod_var;
extern const uint32_t MLPersistentStore_InternalDeleteBinding_m3676039623_MetadataUsageId;
extern RuntimeClass* MLVerbosity_t2291382169_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPluginLog_Debug_m2493769454_RuntimeMethod_var;
extern const uint32_t MLPluginLog_Debug_m2493769454_MetadataUsageId;
extern const RuntimeMethod* MLPluginLog_DebugFormat_m106165726_RuntimeMethod_var;
extern const uint32_t MLPluginLog_DebugFormat_m106165726_MetadataUsageId;
extern const RuntimeMethod* MLPluginLog_Warning_m456580735_RuntimeMethod_var;
extern String_t* _stringLiteral3395722776;
extern const uint32_t MLPluginLog_Warning_m456580735_MetadataUsageId;
extern const RuntimeMethod* MLPluginLog_WarningFormat_m3743858162_RuntimeMethod_var;
extern const uint32_t MLPluginLog_WarningFormat_m3743858162_MetadataUsageId;
extern const RuntimeMethod* MLPluginLog_Error_m2481084810_RuntimeMethod_var;
extern String_t* _stringLiteral1503557889;
extern const uint32_t MLPluginLog_Error_m2481084810_MetadataUsageId;
extern const RuntimeMethod* MLPluginLog_ErrorFormat_m663780805_RuntimeMethod_var;
extern const uint32_t MLPluginLog_ErrorFormat_m663780805_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t644911818_il2cpp_TypeInfo_var;
extern RuntimeClass* MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges__ctor_m3632535423_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1452536154_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1__ctor_m708467073_RuntimeMethod_var;
extern const uint32_t MLPrivileges__ctor_m3632535423_MetadataUsageId;
extern RuntimeClass* MLPrivileges_t1489932235_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges__cctor_m3710798674_RuntimeMethod_var;
extern String_t* _stringLiteral2115790382;
extern const uint32_t MLPrivileges__cctor_m3710798674_MetadataUsageId;
extern const RuntimeMethod* MLPrivileges_CreateInstance_m2669308799_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_IsValidInstance_m1089243868_RuntimeMethod_var;
extern const uint32_t MLPrivileges_CreateInstance_m2669308799_MetadataUsageId;
extern RuntimeClass* DllNotFoundException_t2721418633_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges_Start_m3573642168_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_BaseStart_m2260802994_RuntimeMethod_var;
extern const uint32_t MLPrivileges_Start_m3573642168_MetadataUsageId;
extern RuntimeClass* Func_2_t563276670_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges_StartAPI_m2005446506_RuntimeMethod_var;
extern const RuntimeMethod* MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2424052174_RuntimeMethod_var;
extern const uint32_t MLPrivileges_StartAPI_m2005446506_MetadataUsageId;
extern const RuntimeMethod* MLPrivileges_CleanupAPI_m1223685304_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_get_Instance_m1138459504_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m2062726206_RuntimeMethod_var;
extern String_t* _stringLiteral216773886;
extern const uint32_t MLPrivileges_CleanupAPI_m1223685304_MetadataUsageId;
extern const RuntimeMethod* MLPrivileges_Update_m1109306329_RuntimeMethod_var;
extern const uint32_t MLPrivileges_Update_m1109306329_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* RequestPrivilegeQuery_t2806466543_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges_RequestPrivilegeAsync_m1270271508_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1056690393_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1818062991_RuntimeMethod_var;
extern String_t* _stringLiteral3905049707;
extern const uint32_t MLPrivileges_RequestPrivilegeAsync_m1270271508_MetadataUsageId;
extern RuntimeClass* List_1_t2959647623_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4278541285_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t553924204_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges_ProcessPendingQueries_m1848275908_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2630551117_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2805305761_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m313014393_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m494563792_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m644941155_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1013546311_RuntimeMethod_var;
extern const uint32_t MLPrivileges_ProcessPendingQueries_m1848275908_MetadataUsageId;
extern RuntimeClass* Enumerator_t1872817866_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLPrivileges_ProcessCompletedQueries_m414769647_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m962900038_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1933130926_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m3294212910_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2604661306_RuntimeMethod_var;
extern const uint32_t MLPrivileges_ProcessCompletedQueries_m414769647_MetadataUsageId;
extern const RuntimeMethod* MLPrivileges_RequestPrivilegeStatus_m1688795195_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2186518206_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1383809553_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2761173242_RuntimeMethod_var;
extern String_t* _stringLiteral4237448329;
extern const uint32_t MLPrivileges_RequestPrivilegeStatus_m1688795195_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t MLPrivileges_GetResultString_m821970532_MetadataUsageId;
extern const RuntimeMethod* RequestPrivilegeQuery__ctor_m4198570648_RuntimeMethod_var;
extern const uint32_t RequestPrivilegeQuery__ctor_m4198570648_MetadataUsageId;
extern const uint32_t MLResult_t265502022_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t MLResult_t265502022_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLResult__ctor_m1759028860_RuntimeMethod_var;
extern String_t* _stringLiteral3960684345;
extern const uint32_t MLResult__ctor_m1759028860_MetadataUsageId;
extern const RuntimeMethod* MLResult__ctor_m899246048_RuntimeMethod_var;
extern const uint32_t MLResult__ctor_m899246048_MetadataUsageId;
extern const RuntimeMethod* MLResult__ctor_m18499570_RuntimeMethod_var;
extern const uint32_t MLResult__ctor_m18499570_MetadataUsageId;
extern const RuntimeMethod* MLResult__cctor_m446257078_RuntimeMethod_var;
extern const uint32_t MLResult__cctor_m446257078_MetadataUsageId;
extern const RuntimeMethod* MLResult_get_Code_m815222229_RuntimeMethod_var;
extern const uint32_t MLResult_get_Code_m815222229_MetadataUsageId;
extern const RuntimeMethod* MLResult_set_Code_m3511893626_RuntimeMethod_var;
extern const uint32_t MLResult_set_Code_m3511893626_MetadataUsageId;
extern const RuntimeMethod* MLResult_ToString_m2357201379_RuntimeMethod_var;
extern const RuntimeMethod* Func_2_Invoke_m484750874_RuntimeMethod_var;
extern const uint32_t MLResult_ToString_m2357201379_MetadataUsageId;
extern const RuntimeMethod* MLResult_get_IsOk_m578243083_RuntimeMethod_var;
extern const uint32_t MLResult_get_IsOk_m578243083_MetadataUsageId;
extern const RuntimeMethod* MLSnapshot_GetResultString_m3014783930_RuntimeMethod_var;
extern const uint32_t MLSnapshot_GetResultString_m3014783930_MetadataUsageId;
extern RuntimeClass* MLKeyPoint_t2457746220_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3929820962_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLThumb__ctor_m1321403752_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m977214386_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1804663636_RuntimeMethod_var;
extern const uint32_t MLThumb__ctor_m1321403752_MetadataUsageId;
extern const RuntimeMethod* MLThumb_get_Tip_m821651102_RuntimeMethod_var;
extern const uint32_t MLThumb_get_Tip_m821651102_MetadataUsageId;
extern const RuntimeMethod* MLThumb_set_Tip_m1451869089_RuntimeMethod_var;
extern const uint32_t MLThumb_set_Tip_m1451869089_MetadataUsageId;
extern const RuntimeMethod* MLThumb_get_IP_m1499952108_RuntimeMethod_var;
extern const uint32_t MLThumb_get_IP_m1499952108_MetadataUsageId;
extern const RuntimeMethod* MLThumb_set_IP_m2461086816_RuntimeMethod_var;
extern const uint32_t MLThumb_set_IP_m2461086816_MetadataUsageId;
extern const RuntimeMethod* MLThumb_get_MCP_m3239949728_RuntimeMethod_var;
extern const uint32_t MLThumb_get_MCP_m3239949728_MetadataUsageId;
extern const RuntimeMethod* MLThumb_set_MCP_m1189870082_RuntimeMethod_var;
extern const uint32_t MLThumb_set_MCP_m1189870082_MetadataUsageId;
extern const RuntimeMethod* MLThumb_get_CMC_m2035951506_RuntimeMethod_var;
extern const uint32_t MLThumb_get_CMC_m2035951506_MetadataUsageId;
extern const RuntimeMethod* MLThumb_set_CMC_m2281774863_RuntimeMethod_var;
extern const uint32_t MLThumb_set_CMC_m2281774863_MetadataUsageId;
extern const RuntimeMethod* MLThumb_get_KeyPoints_m1130332393_RuntimeMethod_var;
extern const uint32_t MLThumb_get_KeyPoints_m1130332393_MetadataUsageId;
extern const RuntimeMethod* MLThumb_set_KeyPoints_m3759159430_RuntimeMethod_var;
extern const uint32_t MLThumb_set_KeyPoints_m3759159430_MetadataUsageId;
extern const RuntimeMethod* MLThumb_Update_m1648285559_RuntimeMethod_var;
extern const uint32_t MLThumb_Update_m1648285559_MetadataUsageId;
extern const RuntimeMethod* MLVerbosity__cctor_m3960015354_RuntimeMethod_var;
extern const uint32_t MLVerbosity__cctor_m3960015354_MetadataUsageId;
struct MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke;
struct MLWorldPlaneBoundary_t1115739400;;
struct MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke;;
struct MLWorldPlaneBoundary_t1115739400_marshaled_com;
struct MLWorldPlaneBoundary_t1115739400_marshaled_com;;
struct MLWorldPolygon_t751043636_marshaled_pinvoke;
struct MLWorldPolygon_t751043636;;
struct MLWorldPolygon_t751043636_marshaled_pinvoke;;
struct MLWorldPolygon_t751043636_marshaled_com;
struct MLWorldPolygon_t751043636_marshaled_com;;
extern RuntimeClass* Dictionary_2_t2852916536_il2cpp_TypeInfo_var;
extern RuntimeClass* MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes__ctor_m512352524_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m531202632_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1__ctor_m3675945823_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes__ctor_m512352524_MetadataUsageId;
extern RuntimeClass* MLWorldPlanes_t897167128_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_CreateInstance_m495043801_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_IsValidInstance_m2107751717_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_CreateInstance_m495043801_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_Start_m568717041_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_BaseStart_m2003534722_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_Start_m568717041_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_StartAPI_m402532385_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_StartAPI_m402532385_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_CreatePlanesTracker_m2112856877_RuntimeMethod_var;
extern const RuntimeMethod* MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
extern String_t* _stringLiteral3010012664;
extern const uint32_t MLWorldPlanes_CreatePlanesTracker_m2112856877_MetadataUsageId;
extern RuntimeClass* Enumerator_t3421810193_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_CleanupAPI_m3573952776_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Values_m3202201288_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m3085029500_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3028051899_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4053677450_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3935512194_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_CleanupAPI_m3573952776_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_DestroyNativeTracker_m1786741380_RuntimeMethod_var;
extern String_t* _stringLiteral1650052322;
extern const uint32_t MLWorldPlanes_DestroyNativeTracker_m1786741380_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_Update_m2466396547_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_Update_m2466396547_MetadataUsageId;
extern RuntimeClass* List_1_t1311147538_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t3200391415_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_ProcessPendingQueries_m2055653149_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m4214368148_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m14275872_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1477228033_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3398180830_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3792233323_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1114585714_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_ProcessPendingQueries_m2055653149_MetadataUsageId;
extern const RuntimeType* MLPlaneBoundariesList_t215409676_0_0_0_var;
extern RuntimeClass* MLPlaneBoundariesList_t215409676_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_GetQueryResultForHandle_m1031431879_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m310089197_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m4117128284_RuntimeMethod_var;
extern String_t* _stringLiteral1785588440;
extern const uint32_t MLWorldPlanes_GetQueryResultForHandle_m1031431879_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380_MetadataUsageId;
extern const RuntimeType* MLPlane_t934005159_0_0_0_var;
extern RuntimeClass* MLWorldPlaneU5BU5D_t829094281_il2cpp_TypeInfo_var;
extern RuntimeClass* MLPlane_t934005159_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_ExtractRectangularPlanes_m467654221_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_ExtractRectangularPlanes_m467654221_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_ExtractPolygonalPlanes_m3848234297_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_ExtractPolygonalPlanes_m3848234297_MetadataUsageId;
extern const RuntimeType* MLPlaneBoundaries_t1512705746_0_0_0_var;
extern RuntimeClass* MLWorldPlaneBoundariesU5BU5D_t1821879535_il2cpp_TypeInfo_var;
extern RuntimeClass* MLPlaneBoundaries_t1512705746_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864_MetadataUsageId;
extern const RuntimeType* MLPlaneBoundary_t1075292213_0_0_0_var;
extern const RuntimeType* MLPolygon_t1612796882_0_0_0_var;
extern RuntimeClass* MLWorldPlaneBoundaryU5BU5D_t1423265241_il2cpp_TypeInfo_var;
extern RuntimeClass* MLPlaneBoundary_t1075292213_il2cpp_TypeInfo_var;
extern RuntimeClass* MLPolygon_t1612796882_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780_MetadataUsageId;
extern RuntimeClass* MLWorldPolygonU5BU5D_t555778173_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_GetMLWorldPolygonArray_m3447409925_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_GetMLWorldPolygonArray_m3447409925_MetadataUsageId;
extern const RuntimeType* MLVec3f_t486797299_0_0_0_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* MLVec3f_t486797299_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_GetVector3Array_m116043022_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_GetVector3Array_m116043022_MetadataUsageId;
extern RuntimeClass* Enumerator_t3035093520_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_ProcessCompletedQueries_m4273076203_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m343274962_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2460190571_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m1533210316_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m1171916642_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m682503810_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_ProcessCompletedQueries_m4273076203_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_GetPlanes_m891916505_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_get_Instance_m3771610727_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_GetPlanes_m891916505_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_GetPlanesInternal_m804000014_RuntimeMethod_var;
extern String_t* _stringLiteral1549374725;
extern const uint32_t MLWorldPlanes_GetPlanesInternal_m804000014_MetadataUsageId;
extern const RuntimeType* Action_3_t4204205301_0_0_0_var;
extern RuntimeClass* Action_3_t4204205301_il2cpp_TypeInfo_var;
extern RuntimeClass* Query_t2690121588_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t409093569_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_BeginPlaneQuery_m154042370_RuntimeMethod_var;
extern String_t* _stringLiteral1798214334;
extern const uint32_t MLWorldPlanes_BeginPlaneQuery_m154042370_MetadataUsageId;
extern const RuntimeMethod* MLWorldPlanes_IsRequestingBoundaries_m1506575629_RuntimeMethod_var;
extern const uint32_t MLWorldPlanes_IsRequestingBoundaries_m1506575629_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldPlanes_ValidateQueryParams_m1729142513_RuntimeMethod_var;
extern String_t* _stringLiteral711215277;
extern const uint32_t MLWorldPlanes_ValidateQueryParams_m1729142513_MetadataUsageId;
extern const RuntimeMethod* Query__ctor_m1371094385_RuntimeMethod_var;
extern const uint32_t Query__ctor_m1371094385_MetadataUsageId;
extern RuntimeClass* MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Query__ctor_m828612218_RuntimeMethod_var;
extern const uint32_t Query__ctor_m828612218_MetadataUsageId;
extern const RuntimeMethod* Query_get_CanRequestBoundaries_m1840087566_RuntimeMethod_var;
extern const uint32_t Query_get_CanRequestBoundaries_m1840087566_MetadataUsageId;
extern const RuntimeMethod* Query_set_CanRequestBoundaries_m3858444546_RuntimeMethod_var;
extern const uint32_t Query_set_CanRequestBoundaries_m3858444546_MetadataUsageId;
extern const RuntimeMethod* Query_get_IsRequestingBoundaries_m2588259630_RuntimeMethod_var;
extern const uint32_t Query_get_IsRequestingBoundaries_m2588259630_MetadataUsageId;
extern const RuntimeMethod* Query_set_IsRequestingBoundaries_m3869185173_RuntimeMethod_var;
extern const uint32_t Query_set_IsRequestingBoundaries_m3869185173_MetadataUsageId;
extern const RuntimeMethod* Query_Finalize_m1553610967_RuntimeMethod_var;
extern const uint32_t Query_Finalize_m1553610967_MetadataUsageId;
extern const RuntimeMethod* Query_Dispose_m3838602477_RuntimeMethod_var;
extern const uint32_t Query_Dispose_m3838602477_MetadataUsageId;
extern const RuntimeMethod* Query_Dispose_m831012807_RuntimeMethod_var;
extern const uint32_t Query_Dispose_m831012807_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t436580975_il2cpp_TypeInfo_var;
extern RuntimeClass* MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldRays__ctor_m110937502_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2115436320_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1__ctor_m389370787_RuntimeMethod_var;
extern const uint32_t MLWorldRays__ctor_m110937502_MetadataUsageId;
extern RuntimeClass* MLWorldRays_t3718842835_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldRays_CreateInstance_m2326537007_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_IsValidInstance_m37160189_RuntimeMethod_var;
extern const uint32_t MLWorldRays_CreateInstance_m2326537007_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_Start_m4201150463_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_BaseStart_m2346531178_RuntimeMethod_var;
extern const uint32_t MLWorldRays_Start_m4201150463_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_StartAPI_m308646717_RuntimeMethod_var;
extern const uint32_t MLWorldRays_StartAPI_m308646717_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_EnableRayCast_m2839752565_RuntimeMethod_var;
extern String_t* _stringLiteral3238931492;
extern const uint32_t MLWorldRays_EnableRayCast_m2839752565_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_CleanupAPI_m2095633278_RuntimeMethod_var;
extern const uint32_t MLWorldRays_CleanupAPI_m2095633278_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_DestroyNativeTracker_m65768388_RuntimeMethod_var;
extern String_t* _stringLiteral4264740623;
extern const uint32_t MLWorldRays_DestroyNativeTracker_m65768388_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_Clear_m2911191125_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m1912202939_RuntimeMethod_var;
extern const uint32_t MLWorldRays_Clear_m2911191125_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3595261788_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t618757959_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldRays_Update_m412987748_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3937881832_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2452223945_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m784870435_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1886482871_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m29744162_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3476970948_RuntimeMethod_var;
extern const uint32_t MLWorldRays_Update_m412987748_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t3777438772_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLWorldRays_PublishResults_m3834204153_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1812259646_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m2409833759_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2334559211_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m773252330_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2551690312_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1024048780_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m852263570_RuntimeMethod_var;
extern const uint32_t MLWorldRays_PublishResults_m3834204153_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_GetWorldRays_m2295408648_RuntimeMethod_var;
extern const RuntimeMethod* MLAPISingleton_1_get_Instance_m2552627568_RuntimeMethod_var;
extern const uint32_t MLWorldRays_GetWorldRays_m2295408648_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_GetWorldRaysInternal_m2427709051_RuntimeMethod_var;
extern String_t* _stringLiteral2643257692;
extern const uint32_t MLWorldRays_GetWorldRaysInternal_m2427709051_MetadataUsageId;
extern const RuntimeMethod* MLWorldRays_RequestRays_m3648928211_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3502265607_RuntimeMethod_var;
extern const uint32_t MLWorldRays_RequestRays_m3648928211_MetadataUsageId;
extern const RuntimeMethod* QueryParams__ctor_m2015436004_RuntimeMethod_var;
extern const uint32_t QueryParams__ctor_m2015436004_MetadataUsageId;
extern const RuntimeMethod* ResultCallback__ctor_m2686888811_RuntimeMethod_var;
extern const uint32_t ResultCallback__ctor_m2686888811_MetadataUsageId;
extern const RuntimeMethod* ResultCallback_Invoke_m3918620459_RuntimeMethod_var;
extern const uint32_t ResultCallback_Invoke_m3918620459_MetadataUsageId;
extern RuntimeClass* MLWorldRaycastResultState_t1995451677_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ResultCallback_BeginInvoke_m973713653_RuntimeMethod_var;
extern const uint32_t ResultCallback_BeginInvoke_m973713653_MetadataUsageId;
extern const RuntimeMethod* ResultCallback_EndInvoke_m3182151595_RuntimeMethod_var;
extern const uint32_t ResultCallback_EndInvoke_m3182151595_MetadataUsageId;
extern const RuntimeMethod* MLWrist__ctor_m739757203_RuntimeMethod_var;
extern const uint32_t MLWrist__ctor_m739757203_MetadataUsageId;
extern const RuntimeMethod* MLWrist_get_Center_m1680979287_RuntimeMethod_var;
extern const uint32_t MLWrist_get_Center_m1680979287_MetadataUsageId;
extern const RuntimeMethod* MLWrist_set_Center_m3540272568_RuntimeMethod_var;
extern const uint32_t MLWrist_set_Center_m3540272568_MetadataUsageId;
extern const RuntimeMethod* MLWrist_get_Ulnar_m2865653812_RuntimeMethod_var;
extern const uint32_t MLWrist_get_Ulnar_m2865653812_MetadataUsageId;
extern const RuntimeMethod* MLWrist_set_Ulnar_m3352492981_RuntimeMethod_var;
extern const uint32_t MLWrist_set_Ulnar_m3352492981_MetadataUsageId;
extern const RuntimeMethod* MLWrist_get_Radial_m3701760810_RuntimeMethod_var;
extern const uint32_t MLWrist_get_Radial_m3701760810_MetadataUsageId;
extern const RuntimeMethod* MLWrist_set_Radial_m1091520556_RuntimeMethod_var;
extern const uint32_t MLWrist_set_Radial_m1091520556_MetadataUsageId;
extern const RuntimeMethod* MLWrist_get_KeyPoints_m156169264_RuntimeMethod_var;
extern const uint32_t MLWrist_get_KeyPoints_m156169264_MetadataUsageId;
extern const RuntimeMethod* MLWrist_set_KeyPoints_m79121153_RuntimeMethod_var;
extern const uint32_t MLWrist_set_KeyPoints_m79121153_MetadataUsageId;
extern const RuntimeMethod* MLWrist_Update_m1395190252_RuntimeMethod_var;
extern const uint32_t MLWrist_Update_m1395190252_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t YUVBuffer_t1120549612_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t YUVBuffer_t1120549612_com_FromNativeMethodDefinition_MetadataUsageId;
extern const RuntimeMethod* YUVBuffer_CopyFromPlane_m3997292803_RuntimeMethod_var;
extern const uint32_t YUVBuffer_CopyFromPlane_m3997292803_MetadataUsageId;
struct YUVBuffer_t1120549612_marshaled_pinvoke;
struct YUVBuffer_t1120549612;;
struct YUVBuffer_t1120549612_marshaled_pinvoke;;
struct YUVBuffer_t1120549612_marshaled_com;
struct YUVBuffer_t1120549612_marshaled_com;;
struct Vector3_t3722313464 ;

struct ObjectU5BU5D_t2843939325;
struct MLWorldPlaneBoundaryU5BU5D_t1423265241;
struct MLWorldPolygonU5BU5D_t555778173;
struct MLWorldPlaneU5BU5D_t829094281;
struct MLWorldPlaneBoundariesU5BU5D_t1821879535;
struct Vector3U5BU5D_t1718750761;
struct ByteU5BU5D_t4116647657;


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
#ifndef LIST_1_T1311147538_H
#define LIST_1_T1311147538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.UInt64>
struct  List_1_t1311147538  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t1659327989* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____items_1)); }
	inline UInt64U5BU5D_t1659327989* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_t1659327989** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_t1659327989* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1311147538, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1311147538_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UInt64U5BU5D_t1659327989* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1311147538_StaticFields, ___EmptyArray_4)); }
	inline UInt64U5BU5D_t1659327989* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UInt64U5BU5D_t1659327989** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UInt64U5BU5D_t1659327989* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1311147538_H
#ifndef MLAPISINGLETON_1_T1282713979_H
#define MLAPISINGLETON_1_T1282713979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>
struct  MLAPISingleton_1_t1282713979  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_2;

public:
	inline static int32_t get_offset_of_DllNotFoundError_2() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1282713979, ___DllNotFoundError_2)); }
	inline String_t* get_DllNotFoundError_2() const { return ___DllNotFoundError_2; }
	inline String_t** get_address_of_DllNotFoundError_2() { return &___DllNotFoundError_2; }
	inline void set_DllNotFoundError_2(String_t* value)
	{
		___DllNotFoundError_2 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_2), value);
	}
};

struct MLAPISingleton_1_t1282713979_StaticFields
{
public:
	// T UnityEngine.XR.MagicLeap.MLAPISingleton`1::_instance
	MLPrivileges_t1489932235 * ____instance_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLAPISingleton`1::_startCount
	uint32_t ____startCount_1;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1282713979_StaticFields, ____instance_0)); }
	inline MLPrivileges_t1489932235 * get__instance_0() const { return ____instance_0; }
	inline MLPrivileges_t1489932235 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(MLPrivileges_t1489932235 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of__startCount_1() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1282713979_StaticFields, ____startCount_1)); }
	inline uint32_t get__startCount_1() const { return ____startCount_1; }
	inline uint32_t* get_address_of__startCount_1() { return &____startCount_1; }
	inline void set__startCount_1(uint32_t value)
	{
		____startCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLAPISINGLETON_1_T1282713979_H
#ifndef KEYCOLLECTION_T3042592007_H
#define KEYCOLLECTION_T3042592007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  KeyCollection_t3042592007  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2852916536 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3042592007, ___dictionary_0)); }
	inline Dictionary_2_t2852916536 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2852916536 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2852916536 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3042592007_H
#ifndef DICTIONARY_2_T644911818_H
#define DICTIONARY_2_T644911818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct  Dictionary_2_t644911818  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	MLPrivilegeIdU5BU5D_t3629945612* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	RequestPrivilegeQueryU5BU5D_t2565195638* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___keySlots_6)); }
	inline MLPrivilegeIdU5BU5D_t3629945612* get_keySlots_6() const { return ___keySlots_6; }
	inline MLPrivilegeIdU5BU5D_t3629945612** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(MLPrivilegeIdU5BU5D_t3629945612* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___valueSlots_7)); }
	inline RequestPrivilegeQueryU5BU5D_t2565195638* get_valueSlots_7() const { return ___valueSlots_7; }
	inline RequestPrivilegeQueryU5BU5D_t2565195638** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(RequestPrivilegeQueryU5BU5D_t2565195638* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t644911818_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1319631626 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t644911818_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1319631626 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1319631626 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1319631626 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T644911818_H
#ifndef DICTIONARY_2_T436580975_H
#define DICTIONARY_2_T436580975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct  Dictionary_2_t436580975  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	UInt64U5BU5D_t1659327989* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ResultCallbackU5BU5D_t587863114* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___keySlots_6)); }
	inline UInt64U5BU5D_t1659327989* get_keySlots_6() const { return ___keySlots_6; }
	inline UInt64U5BU5D_t1659327989** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(UInt64U5BU5D_t1659327989* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___valueSlots_7)); }
	inline ResultCallbackU5BU5D_t587863114* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ResultCallbackU5BU5D_t587863114** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ResultCallbackU5BU5D_t587863114* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t436580975_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t6453041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t436580975_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t6453041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t6453041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t6453041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T436580975_H
#ifndef MLAPISINGLETON_1_T3511624579_H
#define MLAPISINGLETON_1_T3511624579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>
struct  MLAPISingleton_1_t3511624579  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_2;

public:
	inline static int32_t get_offset_of_DllNotFoundError_2() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t3511624579, ___DllNotFoundError_2)); }
	inline String_t* get_DllNotFoundError_2() const { return ___DllNotFoundError_2; }
	inline String_t** get_address_of_DllNotFoundError_2() { return &___DllNotFoundError_2; }
	inline void set_DllNotFoundError_2(String_t* value)
	{
		___DllNotFoundError_2 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_2), value);
	}
};

struct MLAPISingleton_1_t3511624579_StaticFields
{
public:
	// T UnityEngine.XR.MagicLeap.MLAPISingleton`1::_instance
	MLWorldRays_t3718842835 * ____instance_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLAPISingleton`1::_startCount
	uint32_t ____startCount_1;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t3511624579_StaticFields, ____instance_0)); }
	inline MLWorldRays_t3718842835 * get__instance_0() const { return ____instance_0; }
	inline MLWorldRays_t3718842835 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(MLWorldRays_t3718842835 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of__startCount_1() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t3511624579_StaticFields, ____startCount_1)); }
	inline uint32_t get__startCount_1() const { return ____startCount_1; }
	inline uint32_t* get_address_of__startCount_1() { return &____startCount_1; }
	inline void set__startCount_1(uint32_t value)
	{
		____startCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLAPISINGLETON_1_T3511624579_H
#ifndef LIST_1_T3929820962_H
#define LIST_1_T3929820962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>
struct  List_1_t3929820962  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MLKeyPointU5BU5D_t3429267109* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3929820962, ____items_1)); }
	inline MLKeyPointU5BU5D_t3429267109* get__items_1() const { return ____items_1; }
	inline MLKeyPointU5BU5D_t3429267109** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MLKeyPointU5BU5D_t3429267109* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3929820962, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3929820962, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3929820962_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MLKeyPointU5BU5D_t3429267109* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3929820962_StaticFields, ___EmptyArray_4)); }
	inline MLKeyPointU5BU5D_t3429267109* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MLKeyPointU5BU5D_t3429267109** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MLKeyPointU5BU5D_t3429267109* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3929820962_H
#ifndef MLPLUGINLOG_T3589126825_H
#define MLPLUGINLOG_T3589126825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPluginLog
struct  MLPluginLog_t3589126825  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLUGINLOG_T3589126825_H
#ifndef MAGICLEAPNATIVEBINDINGS_T1217038470_H
#define MAGICLEAPNATIVEBINDINGS_T1217038470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.MagicLeapNativeBindings
struct  MagicLeapNativeBindings_t1217038470  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAGICLEAPNATIVEBINDINGS_T1217038470_H
#ifndef KEYCOLLECTION_T834587289_H
#define KEYCOLLECTION_T834587289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct  KeyCollection_t834587289  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t644911818 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t834587289, ___dictionary_0)); }
	inline Dictionary_2_t644911818 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t644911818 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t644911818 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T834587289_H
#ifndef DICTIONARY_2_T2852916536_H
#define DICTIONARY_2_T2852916536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  Dictionary_2_t2852916536  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	UInt64U5BU5D_t1659327989* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	QueryU5BU5D_t37154877* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___keySlots_6)); }
	inline UInt64U5BU5D_t1659327989* get_keySlots_6() const { return ___keySlots_6; }
	inline UInt64U5BU5D_t1659327989** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(UInt64U5BU5D_t1659327989* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___valueSlots_7)); }
	inline QueryU5BU5D_t37154877* get_valueSlots_7() const { return ___valueSlots_7; }
	inline QueryU5BU5D_t37154877** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(QueryU5BU5D_t37154877* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2852916536_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3750712100 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2852916536_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3750712100 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3750712100 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3750712100 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2852916536_H
#ifndef MLAPISINGLETON_1_T689948872_H
#define MLAPISINGLETON_1_T689948872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>
struct  MLAPISingleton_1_t689948872  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_2;

public:
	inline static int32_t get_offset_of_DllNotFoundError_2() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t689948872, ___DllNotFoundError_2)); }
	inline String_t* get_DllNotFoundError_2() const { return ___DllNotFoundError_2; }
	inline String_t** get_address_of_DllNotFoundError_2() { return &___DllNotFoundError_2; }
	inline void set_DllNotFoundError_2(String_t* value)
	{
		___DllNotFoundError_2 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_2), value);
	}
};

struct MLAPISingleton_1_t689948872_StaticFields
{
public:
	// T UnityEngine.XR.MagicLeap.MLAPISingleton`1::_instance
	MLWorldPlanes_t897167128 * ____instance_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLAPISingleton`1::_startCount
	uint32_t ____startCount_1;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t689948872_StaticFields, ____instance_0)); }
	inline MLWorldPlanes_t897167128 * get__instance_0() const { return ____instance_0; }
	inline MLWorldPlanes_t897167128 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(MLWorldPlanes_t897167128 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of__startCount_1() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t689948872_StaticFields, ____startCount_1)); }
	inline uint32_t get__startCount_1() const { return ____startCount_1; }
	inline uint32_t* get_address_of__startCount_1() { return &____startCount_1; }
	inline void set__startCount_1(uint32_t value)
	{
		____startCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLAPISINGLETON_1_T689948872_H
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
#ifndef VALUECOLLECTION_T273993558_H
#define VALUECOLLECTION_T273993558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  ValueCollection_t273993558  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2852916536 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t273993558, ___dictionary_0)); }
	inline Dictionary_2_t2852916536 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2852916536 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2852916536 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T273993558_H
#ifndef LIST_1_T4278541285_H
#define LIST_1_T4278541285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct  List_1_t4278541285  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RequestPrivilegeQueryU5BU5D_t2565195638* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4278541285, ____items_1)); }
	inline RequestPrivilegeQueryU5BU5D_t2565195638* get__items_1() const { return ____items_1; }
	inline RequestPrivilegeQueryU5BU5D_t2565195638** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RequestPrivilegeQueryU5BU5D_t2565195638* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4278541285, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4278541285, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4278541285_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RequestPrivilegeQueryU5BU5D_t2565195638* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4278541285_StaticFields, ___EmptyArray_4)); }
	inline RequestPrivilegeQueryU5BU5D_t2565195638* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RequestPrivilegeQueryU5BU5D_t2565195638** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RequestPrivilegeQueryU5BU5D_t2565195638* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4278541285_H
#ifndef LIST_1_T2959647623_H
#define LIST_1_T2959647623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct  List_1_t2959647623  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MLPrivilegeIdU5BU5D_t3629945612* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2959647623, ____items_1)); }
	inline MLPrivilegeIdU5BU5D_t3629945612* get__items_1() const { return ____items_1; }
	inline MLPrivilegeIdU5BU5D_t3629945612** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MLPrivilegeIdU5BU5D_t3629945612* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2959647623, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2959647623, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2959647623_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MLPrivilegeIdU5BU5D_t3629945612* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2959647623_StaticFields, ___EmptyArray_4)); }
	inline MLPrivilegeIdU5BU5D_t3629945612* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MLPrivilegeIdU5BU5D_t3629945612** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MLPrivilegeIdU5BU5D_t3629945612* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2959647623_H
#ifndef DICTIONARY_2_T3595261788_H
#define DICTIONARY_2_T3595261788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct  Dictionary_2_t3595261788  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	UInt64U5BU5D_t1659327989* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MLRaycastResultU5BU5D_t1080960265* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___keySlots_6)); }
	inline UInt64U5BU5D_t1659327989* get_keySlots_6() const { return ___keySlots_6; }
	inline UInt64U5BU5D_t1659327989** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(UInt64U5BU5D_t1659327989* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___valueSlots_7)); }
	inline MLRaycastResultU5BU5D_t1080960265* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MLRaycastResultU5BU5D_t1080960265** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MLRaycastResultU5BU5D_t1080960265* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3595261788_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t499550192 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3595261788_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t499550192 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t499550192 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t499550192 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3595261788_H
#ifndef LIST_1_T2254088538_H
#define LIST_1_T2254088538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>
struct  List_1_t2254088538  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MLContentBindingU5BU5D_t3391427725* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2254088538, ____items_1)); }
	inline MLContentBindingU5BU5D_t3391427725* get__items_1() const { return ____items_1; }
	inline MLContentBindingU5BU5D_t3391427725** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MLContentBindingU5BU5D_t3391427725* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2254088538, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2254088538, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2254088538_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MLContentBindingU5BU5D_t3391427725* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2254088538_StaticFields, ___EmptyArray_4)); }
	inline MLContentBindingU5BU5D_t3391427725* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MLContentBindingU5BU5D_t3391427725** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MLContentBindingU5BU5D_t3391427725* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2254088538_H
#ifndef MLAPISINGLETON_1_T1485281829_H
#define MLAPISINGLETON_1_T1485281829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>
struct  MLAPISingleton_1_t1485281829  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_2;

public:
	inline static int32_t get_offset_of_DllNotFoundError_2() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1485281829, ___DllNotFoundError_2)); }
	inline String_t* get_DllNotFoundError_2() const { return ___DllNotFoundError_2; }
	inline String_t** get_address_of_DllNotFoundError_2() { return &___DllNotFoundError_2; }
	inline void set_DllNotFoundError_2(String_t* value)
	{
		___DllNotFoundError_2 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_2), value);
	}
};

struct MLAPISingleton_1_t1485281829_StaticFields
{
public:
	// T UnityEngine.XR.MagicLeap.MLAPISingleton`1::_instance
	MLPersistentStore_t1692500085 * ____instance_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLAPISingleton`1::_startCount
	uint32_t ____startCount_1;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1485281829_StaticFields, ____instance_0)); }
	inline MLPersistentStore_t1692500085 * get__instance_0() const { return ____instance_0; }
	inline MLPersistentStore_t1692500085 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(MLPersistentStore_t1692500085 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of__startCount_1() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t1485281829_StaticFields, ____startCount_1)); }
	inline uint32_t get__startCount_1() const { return ____startCount_1; }
	inline uint32_t* get_address_of__startCount_1() { return &____startCount_1; }
	inline void set__startCount_1(uint32_t value)
	{
		____startCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLAPISINGLETON_1_T1485281829_H
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
#ifndef MLCONTENTBINDINGS_T774608228_H
#define MLCONTENTBINDINGS_T774608228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLContentBindings
struct  MLContentBindings_t774608228  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLContentBindings::Version
	String_t* ___Version_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding> UnityEngine.XR.MagicLeap.MLContentBindings::Bindings
	List_1_t2254088538 * ___Bindings_1;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(MLContentBindings_t774608228, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((&___Version_0), value);
	}

	inline static int32_t get_offset_of_Bindings_1() { return static_cast<int32_t>(offsetof(MLContentBindings_t774608228, ___Bindings_1)); }
	inline List_1_t2254088538 * get_Bindings_1() const { return ___Bindings_1; }
	inline List_1_t2254088538 ** get_address_of_Bindings_1() { return &___Bindings_1; }
	inline void set_Bindings_1(List_1_t2254088538 * value)
	{
		___Bindings_1 = value;
		Il2CppCodeGenWriteBarrier((&___Bindings_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLCONTENTBINDINGS_T774608228_H
#ifndef GETPCFPOSITIONQUERY_T4278136314_H
#define GETPCFPOSITIONQUERY_T4278136314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPersistentCoordinateFrames/GetPCFPositionQuery
struct  GetPCFPositionQuery_t4278136314  : public RuntimeObject
{
public:
	// UnityEngine.XR.MagicLeap.MLPCF UnityEngine.XR.MagicLeap.MLPersistentCoordinateFrames/GetPCFPositionQuery::PCF
	MLPCF_t2390192560 * ___PCF_0;
	// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPCF> UnityEngine.XR.MagicLeap.MLPersistentCoordinateFrames/GetPCFPositionQuery::CB
	Action_2_t1970191848 * ___CB_1;

public:
	inline static int32_t get_offset_of_PCF_0() { return static_cast<int32_t>(offsetof(GetPCFPositionQuery_t4278136314, ___PCF_0)); }
	inline MLPCF_t2390192560 * get_PCF_0() const { return ___PCF_0; }
	inline MLPCF_t2390192560 ** get_address_of_PCF_0() { return &___PCF_0; }
	inline void set_PCF_0(MLPCF_t2390192560 * value)
	{
		___PCF_0 = value;
		Il2CppCodeGenWriteBarrier((&___PCF_0), value);
	}

	inline static int32_t get_offset_of_CB_1() { return static_cast<int32_t>(offsetof(GetPCFPositionQuery_t4278136314, ___CB_1)); }
	inline Action_2_t1970191848 * get_CB_1() const { return ___CB_1; }
	inline Action_2_t1970191848 ** get_address_of_CB_1() { return &___CB_1; }
	inline void set_CB_1(Action_2_t1970191848 * value)
	{
		___CB_1 = value;
		Il2CppCodeGenWriteBarrier((&___CB_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETPCFPOSITIONQUERY_T4278136314_H
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
#ifndef DICTIONARY_2_T567270095_H
#define DICTIONARY_2_T567270095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>
struct  Dictionary_2_t567270095  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MLContentBindingU5BU5D_t3391427725* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___valueSlots_7)); }
	inline MLContentBindingU5BU5D_t3391427725* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MLContentBindingU5BU5D_t3391427725** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MLContentBindingU5BU5D_t3391427725* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t567270095_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2241839441 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t567270095_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2241839441 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2241839441 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2241839441 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T567270095_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef KEYCOLLECTION_T3784937259_H
#define KEYCOLLECTION_T3784937259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct  KeyCollection_t3784937259  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t3595261788 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3784937259, ___dictionary_0)); }
	inline Dictionary_2_t3595261788 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3595261788 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3595261788 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3784937259_H
#ifndef MLPERSISTENTFILESTORAGE_1_T1427508899_H
#define MLPERSISTENTFILESTORAGE_1_T1427508899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings>
struct  MLPersistentFileStorage_1_t1427508899  : public RuntimeObject
{
public:
	// MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1::_data
	MLContentBindings_t774608228 * ____data_0;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(MLPersistentFileStorage_1_t1427508899, ____data_0)); }
	inline MLContentBindings_t774608228 * get__data_0() const { return ____data_0; }
	inline MLContentBindings_t774608228 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(MLContentBindings_t774608228 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPERSISTENTFILESTORAGE_1_T1427508899_H
#ifndef KEYCOLLECTION_T626256446_H
#define KEYCOLLECTION_T626256446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct  KeyCollection_t626256446  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t436580975 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t626256446, ___dictionary_0)); }
	inline Dictionary_2_t436580975 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t436580975 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t436580975 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T626256446_H
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
#ifndef MLWORLDPLANEBOUNDARIES_T1565814570_H
#define MLWORLDPLANEBOUNDARIES_T1565814570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct  MLWorldPlaneBoundaries_t1565814570 
{
public:
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries::Id
	uint64_t ___Id_0;
	// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[] UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries::Boundaries
	MLWorldPlaneBoundaryU5BU5D_t1423265241* ___Boundaries_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundaries_t1565814570, ___Id_0)); }
	inline uint64_t get_Id_0() const { return ___Id_0; }
	inline uint64_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint64_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Boundaries_1() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundaries_t1565814570, ___Boundaries_1)); }
	inline MLWorldPlaneBoundaryU5BU5D_t1423265241* get_Boundaries_1() const { return ___Boundaries_1; }
	inline MLWorldPlaneBoundaryU5BU5D_t1423265241** get_address_of_Boundaries_1() { return &___Boundaries_1; }
	inline void set_Boundaries_1(MLWorldPlaneBoundaryU5BU5D_t1423265241* value)
	{
		___Boundaries_1 = value;
		Il2CppCodeGenWriteBarrier((&___Boundaries_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct MLWorldPlaneBoundaries_t1565814570_marshaled_pinvoke
{
	uint64_t ___Id_0;
	MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke* ___Boundaries_1;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
struct MLWorldPlaneBoundaries_t1565814570_marshaled_com
{
	uint64_t ___Id_0;
	MLWorldPlaneBoundary_t1115739400_marshaled_com* ___Boundaries_1;
};
#endif // MLWORLDPLANEBOUNDARIES_T1565814570_H
#ifndef MLWORLDPOLYGON_T751043636_H
#define MLWORLDPOLYGON_T751043636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPolygon
struct  MLWorldPolygon_t751043636 
{
public:
	// UnityEngine.Vector3[] UnityEngine.XR.MagicLeap.MLWorldPolygon::Vertices
	Vector3U5BU5D_t1718750761* ___Vertices_0;

public:
	inline static int32_t get_offset_of_Vertices_0() { return static_cast<int32_t>(offsetof(MLWorldPolygon_t751043636, ___Vertices_0)); }
	inline Vector3U5BU5D_t1718750761* get_Vertices_0() const { return ___Vertices_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_Vertices_0() { return &___Vertices_0; }
	inline void set_Vertices_0(Vector3U5BU5D_t1718750761* value)
	{
		___Vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___Vertices_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLWorldPolygon
struct MLWorldPolygon_t751043636_marshaled_pinvoke
{
	Vector3_t3722313464 * ___Vertices_0;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLWorldPolygon
struct MLWorldPolygon_t751043636_marshaled_com
{
	Vector3_t3722313464 * ___Vertices_0;
};
#endif // MLWORLDPOLYGON_T751043636_H
#ifndef MLVEC3F_T486797299_H
#define MLVEC3F_T486797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f
struct  MLVec3f_t486797299 
{
public:
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLVec3f::x
	float ___x_0;
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLVec3f::y
	float ___y_1;
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLVec3f::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(MLVec3f_t486797299, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(MLVec3f_t486797299, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(MLVec3f_t486797299, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLVEC3F_T486797299_H
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
#ifndef MLQUATERNIONF_T1293654839_H
#define MLQUATERNIONF_T1293654839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf
struct  MLQuaternionf_t1293654839 
{
public:
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf::x
	float ___x_0;
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf::y
	float ___y_1;
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf::z
	float ___z_2;
	// System.Single MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(MLQuaternionf_t1293654839, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(MLQuaternionf_t1293654839, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(MLQuaternionf_t1293654839, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(MLQuaternionf_t1293654839, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLQUATERNIONF_T1293654839_H
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
#ifndef MLRAYCASTSETTINGS_T1144099939_H
#define MLRAYCASTSETTINGS_T1144099939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastSettings
struct  MLRaycastSettings_t1144099939 
{
public:
	// System.Boolean MagicLeapInternal.RaycastApiNativeBindings/MLRaycastSettings::Enabled
	bool ___Enabled_0;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(MLRaycastSettings_t1144099939, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLRAYCASTSETTINGS_T1144099939_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef YUVBUFFER_T1120549612_H
#define YUVBUFFER_T1120549612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.YUVBuffer
struct  YUVBuffer_t1120549612 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.YUVBuffer::Width
	uint32_t ___Width_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.YUVBuffer::Height
	uint32_t ___Height_1;
	// System.UInt32 UnityEngine.XR.MagicLeap.YUVBuffer::Stride
	uint32_t ___Stride_2;
	// System.UInt32 UnityEngine.XR.MagicLeap.YUVBuffer::BytesPerPixel
	uint32_t ___BytesPerPixel_3;
	// System.Byte[] UnityEngine.XR.MagicLeap.YUVBuffer::Data
	ByteU5BU5D_t4116647657* ___Data_4;
	// System.UInt32 UnityEngine.XR.MagicLeap.YUVBuffer::Size
	uint32_t ___Size_5;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___Width_0)); }
	inline uint32_t get_Width_0() const { return ___Width_0; }
	inline uint32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(uint32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___Height_1)); }
	inline uint32_t get_Height_1() const { return ___Height_1; }
	inline uint32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(uint32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_Stride_2() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___Stride_2)); }
	inline uint32_t get_Stride_2() const { return ___Stride_2; }
	inline uint32_t* get_address_of_Stride_2() { return &___Stride_2; }
	inline void set_Stride_2(uint32_t value)
	{
		___Stride_2 = value;
	}

	inline static int32_t get_offset_of_BytesPerPixel_3() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___BytesPerPixel_3)); }
	inline uint32_t get_BytesPerPixel_3() const { return ___BytesPerPixel_3; }
	inline uint32_t* get_address_of_BytesPerPixel_3() { return &___BytesPerPixel_3; }
	inline void set_BytesPerPixel_3(uint32_t value)
	{
		___BytesPerPixel_3 = value;
	}

	inline static int32_t get_offset_of_Data_4() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___Data_4)); }
	inline ByteU5BU5D_t4116647657* get_Data_4() const { return ___Data_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Data_4() { return &___Data_4; }
	inline void set_Data_4(ByteU5BU5D_t4116647657* value)
	{
		___Data_4 = value;
		Il2CppCodeGenWriteBarrier((&___Data_4), value);
	}

	inline static int32_t get_offset_of_Size_5() { return static_cast<int32_t>(offsetof(YUVBuffer_t1120549612, ___Size_5)); }
	inline uint32_t get_Size_5() const { return ___Size_5; }
	inline uint32_t* get_address_of_Size_5() { return &___Size_5; }
	inline void set_Size_5(uint32_t value)
	{
		___Size_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.YUVBuffer
struct YUVBuffer_t1120549612_marshaled_pinvoke
{
	uint32_t ___Width_0;
	uint32_t ___Height_1;
	uint32_t ___Stride_2;
	uint32_t ___BytesPerPixel_3;
	uint8_t* ___Data_4;
	uint32_t ___Size_5;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.YUVBuffer
struct YUVBuffer_t1120549612_marshaled_com
{
	uint32_t ___Width_0;
	uint32_t ___Height_1;
	uint32_t ___Stride_2;
	uint32_t ___BytesPerPixel_3;
	uint8_t* ___Data_4;
	uint32_t ___Size_5;
};
#endif // YUVBUFFER_T1120549612_H
#ifndef ENUMERATOR_T3200391415_H
#define ENUMERATOR_T3200391415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.UInt64>
struct  Enumerator_t3200391415 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1311147538 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint64_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3200391415, ___l_0)); }
	inline List_1_t1311147538 * get_l_0() const { return ___l_0; }
	inline List_1_t1311147538 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1311147538 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3200391415, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3200391415, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3200391415, ___current_3)); }
	inline uint64_t get_current_3() const { return ___current_3; }
	inline uint64_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint64_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3200391415_H
#ifndef MLCOORDINATEFRAMEUID_T515144641_H
#define MLCOORDINATEFRAMEUID_T515144641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID
struct  MLCoordinateFrameUID_t515144641 
{
public:
	// System.UInt64 MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID::First
	uint64_t ___First_0;
	// System.UInt64 MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID::Second
	uint64_t ___Second_1;

public:
	inline static int32_t get_offset_of_First_0() { return static_cast<int32_t>(offsetof(MLCoordinateFrameUID_t515144641, ___First_0)); }
	inline uint64_t get_First_0() const { return ___First_0; }
	inline uint64_t* get_address_of_First_0() { return &___First_0; }
	inline void set_First_0(uint64_t value)
	{
		___First_0 = value;
	}

	inline static int32_t get_offset_of_Second_1() { return static_cast<int32_t>(offsetof(MLCoordinateFrameUID_t515144641, ___Second_1)); }
	inline uint64_t get_Second_1() const { return ___Second_1; }
	inline uint64_t* get_address_of_Second_1() { return &___Second_1; }
	inline void set_Second_1(uint64_t value)
	{
		___Second_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLCOORDINATEFRAMEUID_T515144641_H
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
#ifndef ENUMERATOR_T1872817866_H
#define ENUMERATOR_T1872817866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>
struct  Enumerator_t1872817866 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4278541285 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RequestPrivilegeQuery_t2806466543 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1872817866, ___l_0)); }
	inline List_1_t4278541285 * get_l_0() const { return ___l_0; }
	inline List_1_t4278541285 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4278541285 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1872817866, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1872817866, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1872817866, ___current_3)); }
	inline RequestPrivilegeQuery_t2806466543 * get_current_3() const { return ___current_3; }
	inline RequestPrivilegeQuery_t2806466543 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RequestPrivilegeQuery_t2806466543 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1872817866_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef MLPRIVILEGES_T1489932235_H
#define MLPRIVILEGES_T1489932235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPrivileges
struct  MLPrivileges_t1489932235  : public MLAPISingleton_1_t1282713979
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery> UnityEngine.XR.MagicLeap.MLPrivileges::_currentRequests
	Dictionary_2_t644911818 * ____currentRequests_4;

public:
	inline static int32_t get_offset_of__currentRequests_4() { return static_cast<int32_t>(offsetof(MLPrivileges_t1489932235, ____currentRequests_4)); }
	inline Dictionary_2_t644911818 * get__currentRequests_4() const { return ____currentRequests_4; }
	inline Dictionary_2_t644911818 ** get_address_of__currentRequests_4() { return &____currentRequests_4; }
	inline void set__currentRequests_4(Dictionary_2_t644911818 * value)
	{
		____currentRequests_4 = value;
		Il2CppCodeGenWriteBarrier((&____currentRequests_4), value);
	}
};

struct MLPrivileges_t1489932235_StaticFields
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLPrivileges::DllNotFoundError
	String_t* ___DllNotFoundError_3;

public:
	inline static int32_t get_offset_of_DllNotFoundError_3() { return static_cast<int32_t>(offsetof(MLPrivileges_t1489932235_StaticFields, ___DllNotFoundError_3)); }
	inline String_t* get_DllNotFoundError_3() const { return ___DllNotFoundError_3; }
	inline String_t** get_address_of_DllNotFoundError_3() { return &___DllNotFoundError_3; }
	inline void set_DllNotFoundError_3(String_t* value)
	{
		___DllNotFoundError_3 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPRIVILEGES_T1489932235_H
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
#ifndef KEYVALUEPAIR_2_T1345605983_H
#define KEYVALUEPAIR_2_T1345605983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
struct  KeyValuePair_2_t1345605983 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1345605983, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1345605983, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1345605983_H
#ifndef KEYVALUEPAIR_2_T2834253142_H
#define KEYVALUEPAIR_2_T2834253142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct  KeyValuePair_2_t2834253142 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ResultCallback_t273786027 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2834253142, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2834253142, ___value_1)); }
	inline ResultCallback_t273786027 * get_value_1() const { return ___value_1; }
	inline ResultCallback_t273786027 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ResultCallback_t273786027 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2834253142_H
#ifndef ENUMERATOR_T4143332415_H
#define ENUMERATOR_T4143332415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLContentBinding>
struct  Enumerator_t4143332415 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2254088538 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MLContentBinding_t782013796 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4143332415, ___l_0)); }
	inline List_1_t2254088538 * get_l_0() const { return ___l_0; }
	inline List_1_t2254088538 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2254088538 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4143332415, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4143332415, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4143332415, ___current_3)); }
	inline MLContentBinding_t782013796 * get_current_3() const { return ___current_3; }
	inline MLContentBinding_t782013796 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MLContentBinding_t782013796 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4143332415_H
#ifndef KEYVALUEPAIR_2_T955621407_H
#define KEYVALUEPAIR_2_T955621407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  KeyValuePair_2_t955621407 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Query_t2690121588 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t955621407, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t955621407, ___value_1)); }
	inline Query_t2690121588 * get_value_1() const { return ___value_1; }
	inline Query_t2690121588 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Query_t2690121588 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T955621407_H
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
#ifndef MLPERSISTENTSTORE_T1692500085_H
#define MLPERSISTENTSTORE_T1692500085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPersistentStore
struct  MLPersistentStore_t1692500085  : public MLAPISingleton_1_t1485281829
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLPersistentStore::_fileName
	String_t* ____fileName_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding> UnityEngine.XR.MagicLeap.MLPersistentStore::_virtualIdToBindings
	Dictionary_2_t567270095 * ____virtualIdToBindings_4;
	// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings> UnityEngine.XR.MagicLeap.MLPersistentStore::_persistentStore
	MLPersistentFileStorage_1_t1427508899 * ____persistentStore_5;
	// UnityEngine.XR.MagicLeap.MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentStore::_data
	MLContentBindings_t774608228 * ____data_6;
	// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentStore::_saveRequired
	bool ____saveRequired_7;

public:
	inline static int32_t get_offset_of__fileName_3() { return static_cast<int32_t>(offsetof(MLPersistentStore_t1692500085, ____fileName_3)); }
	inline String_t* get__fileName_3() const { return ____fileName_3; }
	inline String_t** get_address_of__fileName_3() { return &____fileName_3; }
	inline void set__fileName_3(String_t* value)
	{
		____fileName_3 = value;
		Il2CppCodeGenWriteBarrier((&____fileName_3), value);
	}

	inline static int32_t get_offset_of__virtualIdToBindings_4() { return static_cast<int32_t>(offsetof(MLPersistentStore_t1692500085, ____virtualIdToBindings_4)); }
	inline Dictionary_2_t567270095 * get__virtualIdToBindings_4() const { return ____virtualIdToBindings_4; }
	inline Dictionary_2_t567270095 ** get_address_of__virtualIdToBindings_4() { return &____virtualIdToBindings_4; }
	inline void set__virtualIdToBindings_4(Dictionary_2_t567270095 * value)
	{
		____virtualIdToBindings_4 = value;
		Il2CppCodeGenWriteBarrier((&____virtualIdToBindings_4), value);
	}

	inline static int32_t get_offset_of__persistentStore_5() { return static_cast<int32_t>(offsetof(MLPersistentStore_t1692500085, ____persistentStore_5)); }
	inline MLPersistentFileStorage_1_t1427508899 * get__persistentStore_5() const { return ____persistentStore_5; }
	inline MLPersistentFileStorage_1_t1427508899 ** get_address_of__persistentStore_5() { return &____persistentStore_5; }
	inline void set__persistentStore_5(MLPersistentFileStorage_1_t1427508899 * value)
	{
		____persistentStore_5 = value;
		Il2CppCodeGenWriteBarrier((&____persistentStore_5), value);
	}

	inline static int32_t get_offset_of__data_6() { return static_cast<int32_t>(offsetof(MLPersistentStore_t1692500085, ____data_6)); }
	inline MLContentBindings_t774608228 * get__data_6() const { return ____data_6; }
	inline MLContentBindings_t774608228 ** get_address_of__data_6() { return &____data_6; }
	inline void set__data_6(MLContentBindings_t774608228 * value)
	{
		____data_6 = value;
		Il2CppCodeGenWriteBarrier((&____data_6), value);
	}

	inline static int32_t get_offset_of__saveRequired_7() { return static_cast<int32_t>(offsetof(MLPersistentStore_t1692500085, ____saveRequired_7)); }
	inline bool get__saveRequired_7() const { return ____saveRequired_7; }
	inline bool* get_address_of__saveRequired_7() { return &____saveRequired_7; }
	inline void set__saveRequired_7(bool value)
	{
		____saveRequired_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPERSISTENTSTORE_T1692500085_H
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
#ifndef MLSNAPSHOT_T703499939_H
#define MLSNAPSHOT_T703499939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLSnapshot
struct  MLSnapshot_t703499939 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLSNAPSHOT_T703499939_H
#ifndef MLPLANEBOUNDARY_T1075292213_H
#define MLPLANEBOUNDARY_T1075292213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundary
struct  MLPlaneBoundary_t1075292213 
{
public:
	// System.IntPtr MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundary::Polygon
	intptr_t ___Polygon_0;
	// System.IntPtr MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundary::Holes
	intptr_t ___Holes_1;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundary::HolesCount
	uint32_t ___HolesCount_2;

public:
	inline static int32_t get_offset_of_Polygon_0() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t1075292213, ___Polygon_0)); }
	inline intptr_t get_Polygon_0() const { return ___Polygon_0; }
	inline intptr_t* get_address_of_Polygon_0() { return &___Polygon_0; }
	inline void set_Polygon_0(intptr_t value)
	{
		___Polygon_0 = value;
	}

	inline static int32_t get_offset_of_Holes_1() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t1075292213, ___Holes_1)); }
	inline intptr_t get_Holes_1() const { return ___Holes_1; }
	inline intptr_t* get_address_of_Holes_1() { return &___Holes_1; }
	inline void set_Holes_1(intptr_t value)
	{
		___Holes_1 = value;
	}

	inline static int32_t get_offset_of_HolesCount_2() { return static_cast<int32_t>(offsetof(MLPlaneBoundary_t1075292213, ___HolesCount_2)); }
	inline uint32_t get_HolesCount_2() const { return ___HolesCount_2; }
	inline uint32_t* get_address_of_HolesCount_2() { return &___HolesCount_2; }
	inline void set_HolesCount_2(uint32_t value)
	{
		___HolesCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLANEBOUNDARY_T1075292213_H
#ifndef MLPOLYGON_T1612796882_H
#define MLPOLYGON_T1612796882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPolygon
struct  MLPolygon_t1612796882 
{
public:
	// System.IntPtr MagicLeapInternal.PlanesApiNativeBindings/MLPolygon::Vertices
	intptr_t ___Vertices_0;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPolygon::VerticesCount
	uint32_t ___VerticesCount_1;

public:
	inline static int32_t get_offset_of_Vertices_0() { return static_cast<int32_t>(offsetof(MLPolygon_t1612796882, ___Vertices_0)); }
	inline intptr_t get_Vertices_0() const { return ___Vertices_0; }
	inline intptr_t* get_address_of_Vertices_0() { return &___Vertices_0; }
	inline void set_Vertices_0(intptr_t value)
	{
		___Vertices_0 = value;
	}

	inline static int32_t get_offset_of_VerticesCount_1() { return static_cast<int32_t>(offsetof(MLPolygon_t1612796882, ___VerticesCount_1)); }
	inline uint32_t get_VerticesCount_1() const { return ___VerticesCount_1; }
	inline uint32_t* get_address_of_VerticesCount_1() { return &___VerticesCount_1; }
	inline void set_VerticesCount_1(uint32_t value)
	{
		___VerticesCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPOLYGON_T1612796882_H
#ifndef ENUMERATOR_T512132015_H
#define ENUMERATOR_T512132015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  Enumerator_t512132015 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2852916536 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t955621407  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t512132015, ___dictionary_0)); }
	inline Dictionary_2_t2852916536 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2852916536 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2852916536 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t512132015, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t512132015, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t512132015, ___current_3)); }
	inline KeyValuePair_2_t955621407  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t955621407 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t955621407  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T512132015_H
#ifndef ENUMERATOR_T2390763750_H
#define ENUMERATOR_T2390763750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct  Enumerator_t2390763750 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t436580975 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2834253142  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2390763750, ___dictionary_0)); }
	inline Dictionary_2_t436580975 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t436580975 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t436580975 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2390763750, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2390763750, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2390763750, ___current_3)); }
	inline KeyValuePair_2_t2834253142  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2834253142 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2834253142  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2390763750_H
#ifndef MLPLANESQUERYFLAGS_T3790964798_H
#define MLPLANESQUERYFLAGS_T3790964798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQueryFlags
struct  MLPlanesQueryFlags_t3790964798 
{
public:
	// System.Int32 MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQueryFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLPlanesQueryFlags_t3790964798, ___value___1)); }
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
#endif // MLPLANESQUERYFLAGS_T3790964798_H
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
#ifndef MLRAYCASTQUERY_T3337934584_H
#define MLRAYCASTQUERY_T3337934584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery
struct  MLRaycastQuery_t3337934584 
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::Position
	MLVec3f_t486797299  ___Position_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::Direction
	MLVec3f_t486797299  ___Direction_1;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::UpVector
	MLVec3f_t486797299  ___UpVector_2;
	// System.UInt32 MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::Width
	uint32_t ___Width_3;
	// System.UInt32 MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::Height
	uint32_t ___Height_4;
	// System.Single MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::HorizontalFovDegrees
	float ___HorizontalFovDegrees_5;
	// System.Boolean MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery::CollideWithUnobserved
	bool ___CollideWithUnobserved_6;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___Position_0)); }
	inline MLVec3f_t486797299  get_Position_0() const { return ___Position_0; }
	inline MLVec3f_t486797299 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(MLVec3f_t486797299  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___Direction_1)); }
	inline MLVec3f_t486797299  get_Direction_1() const { return ___Direction_1; }
	inline MLVec3f_t486797299 * get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(MLVec3f_t486797299  value)
	{
		___Direction_1 = value;
	}

	inline static int32_t get_offset_of_UpVector_2() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___UpVector_2)); }
	inline MLVec3f_t486797299  get_UpVector_2() const { return ___UpVector_2; }
	inline MLVec3f_t486797299 * get_address_of_UpVector_2() { return &___UpVector_2; }
	inline void set_UpVector_2(MLVec3f_t486797299  value)
	{
		___UpVector_2 = value;
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___Width_3)); }
	inline uint32_t get_Width_3() const { return ___Width_3; }
	inline uint32_t* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(uint32_t value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___Height_4)); }
	inline uint32_t get_Height_4() const { return ___Height_4; }
	inline uint32_t* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(uint32_t value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_HorizontalFovDegrees_5() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___HorizontalFovDegrees_5)); }
	inline float get_HorizontalFovDegrees_5() const { return ___HorizontalFovDegrees_5; }
	inline float* get_address_of_HorizontalFovDegrees_5() { return &___HorizontalFovDegrees_5; }
	inline void set_HorizontalFovDegrees_5(float value)
	{
		___HorizontalFovDegrees_5 = value;
	}

	inline static int32_t get_offset_of_CollideWithUnobserved_6() { return static_cast<int32_t>(offsetof(MLRaycastQuery_t3337934584, ___CollideWithUnobserved_6)); }
	inline bool get_CollideWithUnobserved_6() const { return ___CollideWithUnobserved_6; }
	inline bool* get_address_of_CollideWithUnobserved_6() { return &___CollideWithUnobserved_6; }
	inline void set_CollideWithUnobserved_6(bool value)
	{
		___CollideWithUnobserved_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLRAYCASTQUERY_T3337934584_H
#ifndef MLCAMERAPLANEINFO_T532240353_H
#define MLCAMERAPLANEINFO_T532240353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLCameraPlaneInfo
struct  MLCameraPlaneInfo_t532240353 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::Width
	uint32_t ___Width_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::Height
	uint32_t ___Height_1;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::Stride
	uint32_t ___Stride_2;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::BytesPerPixel
	uint32_t ___BytesPerPixel_3;
	// System.IntPtr UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::Data
	intptr_t ___Data_4;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLCameraPlaneInfo::Size
	uint32_t ___Size_5;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___Width_0)); }
	inline uint32_t get_Width_0() const { return ___Width_0; }
	inline uint32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(uint32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___Height_1)); }
	inline uint32_t get_Height_1() const { return ___Height_1; }
	inline uint32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(uint32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_Stride_2() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___Stride_2)); }
	inline uint32_t get_Stride_2() const { return ___Stride_2; }
	inline uint32_t* get_address_of_Stride_2() { return &___Stride_2; }
	inline void set_Stride_2(uint32_t value)
	{
		___Stride_2 = value;
	}

	inline static int32_t get_offset_of_BytesPerPixel_3() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___BytesPerPixel_3)); }
	inline uint32_t get_BytesPerPixel_3() const { return ___BytesPerPixel_3; }
	inline uint32_t* get_address_of_BytesPerPixel_3() { return &___BytesPerPixel_3; }
	inline void set_BytesPerPixel_3(uint32_t value)
	{
		___BytesPerPixel_3 = value;
	}

	inline static int32_t get_offset_of_Data_4() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___Data_4)); }
	inline intptr_t get_Data_4() const { return ___Data_4; }
	inline intptr_t* get_address_of_Data_4() { return &___Data_4; }
	inline void set_Data_4(intptr_t value)
	{
		___Data_4 = value;
	}

	inline static int32_t get_offset_of_Size_5() { return static_cast<int32_t>(offsetof(MLCameraPlaneInfo_t532240353, ___Size_5)); }
	inline uint32_t get_Size_5() const { return ___Size_5; }
	inline uint32_t* get_address_of_Size_5() { return &___Size_5; }
	inline void set_Size_5(uint32_t value)
	{
		___Size_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLCAMERAPLANEINFO_T532240353_H
#ifndef ENUMERATOR_T902116591_H
#define ENUMERATOR_T902116591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct  Enumerator_t902116591 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3242901112 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1345605983  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t902116591, ___dictionary_0)); }
	inline Dictionary_2_t3242901112 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3242901112 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3242901112 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t902116591, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t902116591, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t902116591, ___current_3)); }
	inline KeyValuePair_2_t1345605983  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1345605983 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1345605983  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T902116591_H
#ifndef YUVFRAMEINFO_T3494447275_H
#define YUVFRAMEINFO_T3494447275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.YUVFrameInfo
struct  YUVFrameInfo_t3494447275 
{
public:
	// UnityEngine.XR.MagicLeap.YUVBuffer UnityEngine.XR.MagicLeap.YUVFrameInfo::Y
	YUVBuffer_t1120549612  ___Y_0;
	// UnityEngine.XR.MagicLeap.YUVBuffer UnityEngine.XR.MagicLeap.YUVFrameInfo::U
	YUVBuffer_t1120549612  ___U_1;
	// UnityEngine.XR.MagicLeap.YUVBuffer UnityEngine.XR.MagicLeap.YUVFrameInfo::V
	YUVBuffer_t1120549612  ___V_2;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(YUVFrameInfo_t3494447275, ___Y_0)); }
	inline YUVBuffer_t1120549612  get_Y_0() const { return ___Y_0; }
	inline YUVBuffer_t1120549612 * get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(YUVBuffer_t1120549612  value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_U_1() { return static_cast<int32_t>(offsetof(YUVFrameInfo_t3494447275, ___U_1)); }
	inline YUVBuffer_t1120549612  get_U_1() const { return ___U_1; }
	inline YUVBuffer_t1120549612 * get_address_of_U_1() { return &___U_1; }
	inline void set_U_1(YUVBuffer_t1120549612  value)
	{
		___U_1 = value;
	}

	inline static int32_t get_offset_of_V_2() { return static_cast<int32_t>(offsetof(YUVFrameInfo_t3494447275, ___V_2)); }
	inline YUVBuffer_t1120549612  get_V_2() const { return ___V_2; }
	inline YUVBuffer_t1120549612 * get_address_of_V_2() { return &___V_2; }
	inline void set_V_2(YUVBuffer_t1120549612  value)
	{
		___V_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.YUVFrameInfo
struct YUVFrameInfo_t3494447275_marshaled_pinvoke
{
	YUVBuffer_t1120549612_marshaled_pinvoke ___Y_0;
	YUVBuffer_t1120549612_marshaled_pinvoke ___U_1;
	YUVBuffer_t1120549612_marshaled_pinvoke ___V_2;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.YUVFrameInfo
struct YUVFrameInfo_t3494447275_marshaled_com
{
	YUVBuffer_t1120549612_marshaled_com ___Y_0;
	YUVBuffer_t1120549612_marshaled_com ___U_1;
	YUVBuffer_t1120549612_marshaled_com ___V_2;
};
#endif // YUVFRAMEINFO_T3494447275_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef MLCONTENTBINDINGTYPE_T1763875240_H
#define MLCONTENTBINDINGTYPE_T1763875240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLContentBindingType
struct  MLContentBindingType_t1763875240 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLContentBindingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLContentBindingType_t1763875240, ___value___1)); }
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
#endif // MLCONTENTBINDINGTYPE_T1763875240_H
#ifndef MLWORLDRAYCASTRESULTSTATE_T1995451677_H
#define MLWORLDRAYCASTRESULTSTATE_T1995451677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldRays/MLWorldRaycastResultState
struct  MLWorldRaycastResultState_t1995451677 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLWorldRays/MLWorldRaycastResultState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLWorldRaycastResultState_t1995451677, ___value___1)); }
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
#endif // MLWORLDRAYCASTRESULTSTATE_T1995451677_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef MLRESULTCODE_T2645639141_H
#define MLRESULTCODE_T2645639141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLResultCode
struct  MLResultCode_t2645639141 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLResultCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLResultCode_t2645639141, ___value___1)); }
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
#endif // MLRESULTCODE_T2645639141_H
#ifndef QUERYPARAMS_T2257812863_H
#define QUERYPARAMS_T2257812863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams
struct  QueryParams_t2257812863  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::Position
	Vector3_t3722313464  ___Position_0;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::Direction
	Vector3_t3722313464  ___Direction_1;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::UpVector
	Vector3_t3722313464  ___UpVector_2;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::Width
	uint32_t ___Width_3;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::Height
	uint32_t ___Height_4;
	// System.Single UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::HorizontalFovDegrees
	float ___HorizontalFovDegrees_5;
	// System.Boolean UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::CollideWithUnobserved
	bool ___CollideWithUnobserved_6;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___Position_0)); }
	inline Vector3_t3722313464  get_Position_0() const { return ___Position_0; }
	inline Vector3_t3722313464 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t3722313464  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___Direction_1)); }
	inline Vector3_t3722313464  get_Direction_1() const { return ___Direction_1; }
	inline Vector3_t3722313464 * get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(Vector3_t3722313464  value)
	{
		___Direction_1 = value;
	}

	inline static int32_t get_offset_of_UpVector_2() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___UpVector_2)); }
	inline Vector3_t3722313464  get_UpVector_2() const { return ___UpVector_2; }
	inline Vector3_t3722313464 * get_address_of_UpVector_2() { return &___UpVector_2; }
	inline void set_UpVector_2(Vector3_t3722313464  value)
	{
		___UpVector_2 = value;
	}

	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___Width_3)); }
	inline uint32_t get_Width_3() const { return ___Width_3; }
	inline uint32_t* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(uint32_t value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_Height_4() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___Height_4)); }
	inline uint32_t get_Height_4() const { return ___Height_4; }
	inline uint32_t* get_address_of_Height_4() { return &___Height_4; }
	inline void set_Height_4(uint32_t value)
	{
		___Height_4 = value;
	}

	inline static int32_t get_offset_of_HorizontalFovDegrees_5() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___HorizontalFovDegrees_5)); }
	inline float get_HorizontalFovDegrees_5() const { return ___HorizontalFovDegrees_5; }
	inline float* get_address_of_HorizontalFovDegrees_5() { return &___HorizontalFovDegrees_5; }
	inline void set_HorizontalFovDegrees_5(float value)
	{
		___HorizontalFovDegrees_5 = value;
	}

	inline static int32_t get_offset_of_CollideWithUnobserved_6() { return static_cast<int32_t>(offsetof(QueryParams_t2257812863, ___CollideWithUnobserved_6)); }
	inline bool get_CollideWithUnobserved_6() const { return ___CollideWithUnobserved_6; }
	inline bool* get_address_of_CollideWithUnobserved_6() { return &___CollideWithUnobserved_6; }
	inline void set_CollideWithUnobserved_6(bool value)
	{
		___CollideWithUnobserved_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYPARAMS_T2257812863_H
#ifndef MLRAYCASTRESULTSTATE_T1062506124_H
#define MLRAYCASTRESULTSTATE_T1062506124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResultState
struct  MLRaycastResultState_t1062506124 
{
public:
	// System.Int32 MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResultState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLRaycastResultState_t1062506124, ___value___1)); }
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
#endif // MLRAYCASTRESULTSTATE_T1062506124_H
#ifndef MLPLANEBOUNDARIESLIST_T215409676_H
#define MLPLANEBOUNDARIESLIST_T215409676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList
struct  MLPlaneBoundariesList_t215409676 
{
public:
	// System.UInt64 MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList::Version
	uint64_t ___Version_0;
	// System.IntPtr MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList::PlaneBoundaries
	intptr_t ___PlaneBoundaries_1;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList::PlaneBoundariesCount
	uint32_t ___PlaneBoundariesCount_2;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(MLPlaneBoundariesList_t215409676, ___Version_0)); }
	inline uint64_t get_Version_0() const { return ___Version_0; }
	inline uint64_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(uint64_t value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_PlaneBoundaries_1() { return static_cast<int32_t>(offsetof(MLPlaneBoundariesList_t215409676, ___PlaneBoundaries_1)); }
	inline intptr_t get_PlaneBoundaries_1() const { return ___PlaneBoundaries_1; }
	inline intptr_t* get_address_of_PlaneBoundaries_1() { return &___PlaneBoundaries_1; }
	inline void set_PlaneBoundaries_1(intptr_t value)
	{
		___PlaneBoundaries_1 = value;
	}

	inline static int32_t get_offset_of_PlaneBoundariesCount_2() { return static_cast<int32_t>(offsetof(MLPlaneBoundariesList_t215409676, ___PlaneBoundariesCount_2)); }
	inline uint32_t get_PlaneBoundariesCount_2() const { return ___PlaneBoundariesCount_2; }
	inline uint32_t* get_address_of_PlaneBoundariesCount_2() { return &___PlaneBoundariesCount_2; }
	inline void set_PlaneBoundariesCount_2(uint32_t value)
	{
		___PlaneBoundariesCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLANEBOUNDARIESLIST_T215409676_H
#ifndef MLWORLDPLANE_T893955864_H
#define MLWORLDPLANE_T893955864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlane
struct  MLWorldPlane_t893955864 
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldPlane::Center
	Vector3_t3722313464  ___Center_0;
	// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLWorldPlane::Rotation
	Quaternion_t2301928331  ___Rotation_1;
	// System.Single UnityEngine.XR.MagicLeap.MLWorldPlane::Width
	float ___Width_2;
	// System.Single UnityEngine.XR.MagicLeap.MLWorldPlane::Height
	float ___Height_3;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWorldPlane::Flags
	uint32_t ___Flags_4;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWorldPlane::Id
	uint64_t ___Id_5;

public:
	inline static int32_t get_offset_of_Center_0() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Center_0)); }
	inline Vector3_t3722313464  get_Center_0() const { return ___Center_0; }
	inline Vector3_t3722313464 * get_address_of_Center_0() { return &___Center_0; }
	inline void set_Center_0(Vector3_t3722313464  value)
	{
		___Center_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Rotation_1)); }
	inline Quaternion_t2301928331  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t2301928331  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}

	inline static int32_t get_offset_of_Flags_4() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Flags_4)); }
	inline uint32_t get_Flags_4() const { return ___Flags_4; }
	inline uint32_t* get_address_of_Flags_4() { return &___Flags_4; }
	inline void set_Flags_4(uint32_t value)
	{
		___Flags_4 = value;
	}

	inline static int32_t get_offset_of_Id_5() { return static_cast<int32_t>(offsetof(MLWorldPlane_t893955864, ___Id_5)); }
	inline uint64_t get_Id_5() const { return ___Id_5; }
	inline uint64_t* get_address_of_Id_5() { return &___Id_5; }
	inline void set_Id_5(uint64_t value)
	{
		___Id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWORLDPLANE_T893955864_H
#ifndef MLKEYPOINT_T2457746220_H
#define MLKEYPOINT_T2457746220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLKeyPoint
struct  MLKeyPoint_t2457746220  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.XR.MagicLeap.MLKeyPoint::<IsValid>k__BackingField
	bool ___U3CIsValidU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLKeyPoint::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIsValidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MLKeyPoint_t2457746220, ___U3CIsValidU3Ek__BackingField_0)); }
	inline bool get_U3CIsValidU3Ek__BackingField_0() const { return ___U3CIsValidU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsValidU3Ek__BackingField_0() { return &___U3CIsValidU3Ek__BackingField_0; }
	inline void set_U3CIsValidU3Ek__BackingField_0(bool value)
	{
		___U3CIsValidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MLKeyPoint_t2457746220, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLKEYPOINT_T2457746220_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef MLWORLDPLANESQUERYFLAGS_T1110022670_H
#define MLWORLDPLANESQUERYFLAGS_T1110022670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryFlags
struct  MLWorldPlanesQueryFlags_t1110022670 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLWorldPlanesQueryFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryFlags_t1110022670, ___value___1)); }
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
#endif // MLWORLDPLANESQUERYFLAGS_T1110022670_H
#ifndef MLRUNTIMEREQUESTPRIVILEGEID_T1801323118_H
#define MLRUNTIMEREQUESTPRIVILEGEID_T1801323118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLRuntimeRequestPrivilegeId
struct  MLRuntimeRequestPrivilegeId_t1801323118 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLRuntimeRequestPrivilegeId::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLRuntimeRequestPrivilegeId_t1801323118, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLRUNTIMEREQUESTPRIVILEGEID_T1801323118_H
#ifndef MLWORLDPLANEBOUNDARY_T1115739400_H
#define MLWORLDPLANEBOUNDARY_T1115739400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
struct  MLWorldPlaneBoundary_t1115739400 
{
public:
	// UnityEngine.XR.MagicLeap.MLWorldPolygon UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary::Polygon
	MLWorldPolygon_t751043636  ___Polygon_0;
	// UnityEngine.XR.MagicLeap.MLWorldPolygon[] UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary::Holes
	MLWorldPolygonU5BU5D_t555778173* ___Holes_1;

public:
	inline static int32_t get_offset_of_Polygon_0() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundary_t1115739400, ___Polygon_0)); }
	inline MLWorldPolygon_t751043636  get_Polygon_0() const { return ___Polygon_0; }
	inline MLWorldPolygon_t751043636 * get_address_of_Polygon_0() { return &___Polygon_0; }
	inline void set_Polygon_0(MLWorldPolygon_t751043636  value)
	{
		___Polygon_0 = value;
	}

	inline static int32_t get_offset_of_Holes_1() { return static_cast<int32_t>(offsetof(MLWorldPlaneBoundary_t1115739400, ___Holes_1)); }
	inline MLWorldPolygonU5BU5D_t555778173* get_Holes_1() const { return ___Holes_1; }
	inline MLWorldPolygonU5BU5D_t555778173** get_address_of_Holes_1() { return &___Holes_1; }
	inline void set_Holes_1(MLWorldPolygonU5BU5D_t555778173* value)
	{
		___Holes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Holes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
struct MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke
{
	MLWorldPolygon_t751043636_marshaled_pinvoke ___Polygon_0;
	MLWorldPolygon_t751043636_marshaled_pinvoke* ___Holes_1;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
struct MLWorldPlaneBoundary_t1115739400_marshaled_com
{
	MLWorldPolygon_t751043636_marshaled_com ___Polygon_0;
	MLWorldPolygon_t751043636_marshaled_com* ___Holes_1;
};
#endif // MLWORLDPLANEBOUNDARY_T1115739400_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef MLPRIVILEGEID_T1487572881_H
#define MLPRIVILEGEID_T1487572881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPrivilegeId
struct  MLPrivilegeId_t1487572881 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLPrivilegeId::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLPrivilegeId_t1487572881, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPRIVILEGEID_T1487572881_H
#ifndef LEVELS_T1882851789_H
#define LEVELS_T1882851789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLVerbosity/Levels
struct  Levels_t1882851789 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLVerbosity/Levels::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Levels_t1882851789, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELS_T1882851789_H
#ifndef MLPLANE_T934005159_H
#define MLPLANE_T934005159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlane
struct  MLPlane_t934005159 
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Position
	MLVec3f_t486797299  ___Position_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Rotation
	MLQuaternionf_t1293654839  ___Rotation_1;
	// System.Single MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Width
	float ___Width_2;
	// System.Single MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Height
	float ___Height_3;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Flags
	uint32_t ___Flags_4;
	// System.UInt64 MagicLeapInternal.PlanesApiNativeBindings/MLPlane::Id
	uint64_t ___Id_5;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Position_0)); }
	inline MLVec3f_t486797299  get_Position_0() const { return ___Position_0; }
	inline MLVec3f_t486797299 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(MLVec3f_t486797299  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Rotation_1)); }
	inline MLQuaternionf_t1293654839  get_Rotation_1() const { return ___Rotation_1; }
	inline MLQuaternionf_t1293654839 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(MLQuaternionf_t1293654839  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}

	inline static int32_t get_offset_of_Flags_4() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Flags_4)); }
	inline uint32_t get_Flags_4() const { return ___Flags_4; }
	inline uint32_t* get_address_of_Flags_4() { return &___Flags_4; }
	inline void set_Flags_4(uint32_t value)
	{
		___Flags_4 = value;
	}

	inline static int32_t get_offset_of_Id_5() { return static_cast<int32_t>(offsetof(MLPlane_t934005159, ___Id_5)); }
	inline uint64_t get_Id_5() const { return ___Id_5; }
	inline uint64_t* get_address_of_Id_5() { return &___Id_5; }
	inline void set_Id_5(uint64_t value)
	{
		___Id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLANE_T934005159_H
#ifndef MLPLANEBOUNDARIES_T1512705746_H
#define MLPLANEBOUNDARIES_T1512705746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundaries
struct  MLPlaneBoundaries_t1512705746 
{
public:
	// System.UInt64 MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundaries::Id
	uint64_t ___Id_0;
	// System.IntPtr MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundaries::Boundaries
	intptr_t ___Boundaries_1;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundaries::BoundariesCount
	uint32_t ___BoundariesCount_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(MLPlaneBoundaries_t1512705746, ___Id_0)); }
	inline uint64_t get_Id_0() const { return ___Id_0; }
	inline uint64_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint64_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Boundaries_1() { return static_cast<int32_t>(offsetof(MLPlaneBoundaries_t1512705746, ___Boundaries_1)); }
	inline intptr_t get_Boundaries_1() const { return ___Boundaries_1; }
	inline intptr_t* get_address_of_Boundaries_1() { return &___Boundaries_1; }
	inline void set_Boundaries_1(intptr_t value)
	{
		___Boundaries_1 = value;
	}

	inline static int32_t get_offset_of_BoundariesCount_2() { return static_cast<int32_t>(offsetof(MLPlaneBoundaries_t1512705746, ___BoundariesCount_2)); }
	inline uint32_t get_BoundariesCount_2() const { return ___BoundariesCount_2; }
	inline uint32_t* get_address_of_BoundariesCount_2() { return &___BoundariesCount_2; }
	inline void set_BoundariesCount_2(uint32_t value)
	{
		___BoundariesCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLANEBOUNDARIES_T1512705746_H
#ifndef MLPOSEFILTERLEVEL_T575167872_H
#define MLPOSEFILTERLEVEL_T575167872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPoseFilterLevel
struct  MLPoseFilterLevel_t575167872 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLPoseFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLPoseFilterLevel_t575167872, ___value___1)); }
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
#endif // MLPOSEFILTERLEVEL_T575167872_H
#ifndef MLTRANSFORM_T3435326713_H
#define MLTRANSFORM_T3435326713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.MagicLeapNativeBindings/MLTransform
struct  MLTransform_t3435326713 
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf MagicLeapInternal.MagicLeapNativeBindings/MLTransform::Rotation
	MLQuaternionf_t1293654839  ___Rotation_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.MagicLeapNativeBindings/MLTransform::Position
	MLVec3f_t486797299  ___Position_1;

public:
	inline static int32_t get_offset_of_Rotation_0() { return static_cast<int32_t>(offsetof(MLTransform_t3435326713, ___Rotation_0)); }
	inline MLQuaternionf_t1293654839  get_Rotation_0() const { return ___Rotation_0; }
	inline MLQuaternionf_t1293654839 * get_address_of_Rotation_0() { return &___Rotation_0; }
	inline void set_Rotation_0(MLQuaternionf_t1293654839  value)
	{
		___Rotation_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(MLTransform_t3435326713, ___Position_1)); }
	inline MLVec3f_t486797299  get_Position_1() const { return ___Position_1; }
	inline MLVec3f_t486797299 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(MLVec3f_t486797299  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLTRANSFORM_T3435326713_H
#ifndef MLKEYPOINTSTATE_T358041773_H
#define MLKEYPOINTSTATE_T358041773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState
struct  MLKeyPointState_t358041773 
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState::FrameId
	MLCoordinateFrameUID_t515144641  ___FrameId_0;
	// System.Boolean MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState::IsValid
	bool ___IsValid_1;

public:
	inline static int32_t get_offset_of_FrameId_0() { return static_cast<int32_t>(offsetof(MLKeyPointState_t358041773, ___FrameId_0)); }
	inline MLCoordinateFrameUID_t515144641  get_FrameId_0() const { return ___FrameId_0; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of_FrameId_0() { return &___FrameId_0; }
	inline void set_FrameId_0(MLCoordinateFrameUID_t515144641  value)
	{
		___FrameId_0 = value;
	}

	inline static int32_t get_offset_of_IsValid_1() { return static_cast<int32_t>(offsetof(MLKeyPointState_t358041773, ___IsValid_1)); }
	inline bool get_IsValid_1() const { return ___IsValid_1; }
	inline bool* get_address_of_IsValid_1() { return &___IsValid_1; }
	inline void set_IsValid_1(bool value)
	{
		___IsValid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLKEYPOINTSTATE_T358041773_H
#ifndef MLWORLDPLANES_T897167128_H
#define MLWORLDPLANES_T897167128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlanes
struct  MLWorldPlanes_t897167128  : public MLAPISingleton_1_t689948872
{
public:
	// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryFlags UnityEngine.XR.MagicLeap.MLWorldPlanes::DefaultQueryFlags
	int32_t ___DefaultQueryFlags_3;
	// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query> UnityEngine.XR.MagicLeap.MLWorldPlanes::_pendingQueries
	Dictionary_2_t2852916536 * ____pendingQueries_4;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWorldPlanes::_planesTracker
	uint64_t ____planesTracker_5;

public:
	inline static int32_t get_offset_of_DefaultQueryFlags_3() { return static_cast<int32_t>(offsetof(MLWorldPlanes_t897167128, ___DefaultQueryFlags_3)); }
	inline int32_t get_DefaultQueryFlags_3() const { return ___DefaultQueryFlags_3; }
	inline int32_t* get_address_of_DefaultQueryFlags_3() { return &___DefaultQueryFlags_3; }
	inline void set_DefaultQueryFlags_3(int32_t value)
	{
		___DefaultQueryFlags_3 = value;
	}

	inline static int32_t get_offset_of__pendingQueries_4() { return static_cast<int32_t>(offsetof(MLWorldPlanes_t897167128, ____pendingQueries_4)); }
	inline Dictionary_2_t2852916536 * get__pendingQueries_4() const { return ____pendingQueries_4; }
	inline Dictionary_2_t2852916536 ** get_address_of__pendingQueries_4() { return &____pendingQueries_4; }
	inline void set__pendingQueries_4(Dictionary_2_t2852916536 * value)
	{
		____pendingQueries_4 = value;
		Il2CppCodeGenWriteBarrier((&____pendingQueries_4), value);
	}

	inline static int32_t get_offset_of__planesTracker_5() { return static_cast<int32_t>(offsetof(MLWorldPlanes_t897167128, ____planesTracker_5)); }
	inline uint64_t get__planesTracker_5() const { return ____planesTracker_5; }
	inline uint64_t* get_address_of__planesTracker_5() { return &____planesTracker_5; }
	inline void set__planesTracker_5(uint64_t value)
	{
		____planesTracker_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWORLDPLANES_T897167128_H
#ifndef MLPCF_T2390192560_H
#define MLPCF_T2390192560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPCF
struct  MLPCF_t2390192560  : public RuntimeObject
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLPCF::CFUID
	MLCoordinateFrameUID_t515144641  ___CFUID_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f UnityEngine.XR.MagicLeap.MLPCF::PositionInRUB
	MLVec3f_t486797299  ___PositionInRUB_1;
	// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf UnityEngine.XR.MagicLeap.MLPCF::OrientationInRUB
	MLQuaternionf_t1293654839  ___OrientationInRUB_2;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLPCF::_position
	Vector3_t3722313464  ____position_3;
	// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLPCF::_orientation
	Quaternion_t2301928331  ____orientation_4;
	// System.Boolean UnityEngine.XR.MagicLeap.MLPCF::_transformChanged
	bool ____transformChanged_5;
	// UnityEngine.XR.MagicLeap.MLResultCode UnityEngine.XR.MagicLeap.MLPCF::_currentResultCode
	int32_t ____currentResultCode_6;
	// System.Action UnityEngine.XR.MagicLeap.MLPCF::OnUpdate
	Action_t1264377477 * ___OnUpdate_8;
	// System.Action UnityEngine.XR.MagicLeap.MLPCF::OnLost
	Action_t1264377477 * ___OnLost_9;
	// System.Action UnityEngine.XR.MagicLeap.MLPCF::OnRegain
	Action_t1264377477 * ___OnRegain_10;

public:
	inline static int32_t get_offset_of_CFUID_0() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___CFUID_0)); }
	inline MLCoordinateFrameUID_t515144641  get_CFUID_0() const { return ___CFUID_0; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of_CFUID_0() { return &___CFUID_0; }
	inline void set_CFUID_0(MLCoordinateFrameUID_t515144641  value)
	{
		___CFUID_0 = value;
	}

	inline static int32_t get_offset_of_PositionInRUB_1() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___PositionInRUB_1)); }
	inline MLVec3f_t486797299  get_PositionInRUB_1() const { return ___PositionInRUB_1; }
	inline MLVec3f_t486797299 * get_address_of_PositionInRUB_1() { return &___PositionInRUB_1; }
	inline void set_PositionInRUB_1(MLVec3f_t486797299  value)
	{
		___PositionInRUB_1 = value;
	}

	inline static int32_t get_offset_of_OrientationInRUB_2() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___OrientationInRUB_2)); }
	inline MLQuaternionf_t1293654839  get_OrientationInRUB_2() const { return ___OrientationInRUB_2; }
	inline MLQuaternionf_t1293654839 * get_address_of_OrientationInRUB_2() { return &___OrientationInRUB_2; }
	inline void set_OrientationInRUB_2(MLQuaternionf_t1293654839  value)
	{
		___OrientationInRUB_2 = value;
	}

	inline static int32_t get_offset_of__position_3() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ____position_3)); }
	inline Vector3_t3722313464  get__position_3() const { return ____position_3; }
	inline Vector3_t3722313464 * get_address_of__position_3() { return &____position_3; }
	inline void set__position_3(Vector3_t3722313464  value)
	{
		____position_3 = value;
	}

	inline static int32_t get_offset_of__orientation_4() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ____orientation_4)); }
	inline Quaternion_t2301928331  get__orientation_4() const { return ____orientation_4; }
	inline Quaternion_t2301928331 * get_address_of__orientation_4() { return &____orientation_4; }
	inline void set__orientation_4(Quaternion_t2301928331  value)
	{
		____orientation_4 = value;
	}

	inline static int32_t get_offset_of__transformChanged_5() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ____transformChanged_5)); }
	inline bool get__transformChanged_5() const { return ____transformChanged_5; }
	inline bool* get_address_of__transformChanged_5() { return &____transformChanged_5; }
	inline void set__transformChanged_5(bool value)
	{
		____transformChanged_5 = value;
	}

	inline static int32_t get_offset_of__currentResultCode_6() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ____currentResultCode_6)); }
	inline int32_t get__currentResultCode_6() const { return ____currentResultCode_6; }
	inline int32_t* get_address_of__currentResultCode_6() { return &____currentResultCode_6; }
	inline void set__currentResultCode_6(int32_t value)
	{
		____currentResultCode_6 = value;
	}

	inline static int32_t get_offset_of_OnUpdate_8() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___OnUpdate_8)); }
	inline Action_t1264377477 * get_OnUpdate_8() const { return ___OnUpdate_8; }
	inline Action_t1264377477 ** get_address_of_OnUpdate_8() { return &___OnUpdate_8; }
	inline void set_OnUpdate_8(Action_t1264377477 * value)
	{
		___OnUpdate_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnUpdate_8), value);
	}

	inline static int32_t get_offset_of_OnLost_9() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___OnLost_9)); }
	inline Action_t1264377477 * get_OnLost_9() const { return ___OnLost_9; }
	inline Action_t1264377477 ** get_address_of_OnLost_9() { return &___OnLost_9; }
	inline void set_OnLost_9(Action_t1264377477 * value)
	{
		___OnLost_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnLost_9), value);
	}

	inline static int32_t get_offset_of_OnRegain_10() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560, ___OnRegain_10)); }
	inline Action_t1264377477 * get_OnRegain_10() const { return ___OnRegain_10; }
	inline Action_t1264377477 ** get_address_of_OnRegain_10() { return &___OnRegain_10; }
	inline void set_OnRegain_10(Action_t1264377477 * value)
	{
		___OnRegain_10 = value;
		Il2CppCodeGenWriteBarrier((&___OnRegain_10), value);
	}
};

struct MLPCF_t2390192560_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.MagicLeap.MLPCF> UnityEngine.XR.MagicLeap.MLPCF::OnCreate
	Action_1_t2562660155 * ___OnCreate_7;

public:
	inline static int32_t get_offset_of_OnCreate_7() { return static_cast<int32_t>(offsetof(MLPCF_t2390192560_StaticFields, ___OnCreate_7)); }
	inline Action_1_t2562660155 * get_OnCreate_7() const { return ___OnCreate_7; }
	inline Action_1_t2562660155 ** get_address_of_OnCreate_7() { return &___OnCreate_7; }
	inline void set_OnCreate_7(Action_1_t2562660155 * value)
	{
		___OnCreate_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnCreate_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPCF_T2390192560_H
#ifndef MLWRISTSTATE_T678899973_H
#define MLWRISTSTATE_T678899973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.HandTrackingApiNativeBindings/MLWristState
struct  MLWristState_t678899973 
{
public:
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLWristState::Center
	MLKeyPointState_t358041773  ___Center_0;
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLWristState::Ulnar
	MLKeyPointState_t358041773  ___Ulnar_1;
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLWristState::Radial
	MLKeyPointState_t358041773  ___Radial_2;

public:
	inline static int32_t get_offset_of_Center_0() { return static_cast<int32_t>(offsetof(MLWristState_t678899973, ___Center_0)); }
	inline MLKeyPointState_t358041773  get_Center_0() const { return ___Center_0; }
	inline MLKeyPointState_t358041773 * get_address_of_Center_0() { return &___Center_0; }
	inline void set_Center_0(MLKeyPointState_t358041773  value)
	{
		___Center_0 = value;
	}

	inline static int32_t get_offset_of_Ulnar_1() { return static_cast<int32_t>(offsetof(MLWristState_t678899973, ___Ulnar_1)); }
	inline MLKeyPointState_t358041773  get_Ulnar_1() const { return ___Ulnar_1; }
	inline MLKeyPointState_t358041773 * get_address_of_Ulnar_1() { return &___Ulnar_1; }
	inline void set_Ulnar_1(MLKeyPointState_t358041773  value)
	{
		___Ulnar_1 = value;
	}

	inline static int32_t get_offset_of_Radial_2() { return static_cast<int32_t>(offsetof(MLWristState_t678899973, ___Radial_2)); }
	inline MLKeyPointState_t358041773  get_Radial_2() const { return ___Radial_2; }
	inline MLKeyPointState_t358041773 * get_address_of_Radial_2() { return &___Radial_2; }
	inline void set_Radial_2(MLKeyPointState_t358041773  value)
	{
		___Radial_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWRISTSTATE_T678899973_H
#ifndef ENUMERATOR_T3425078096_H
#define ENUMERATOR_T3425078096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>
struct  Enumerator_t3425078096 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t902116591  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3425078096, ___host_enumerator_0)); }
	inline Enumerator_t902116591  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t902116591 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t902116591  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3425078096_H
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
#ifndef MLTHUMBSTATE_T3324871280_H
#define MLTHUMBSTATE_T3324871280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState
struct  MLThumbState_t3324871280 
{
public:
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState::Tip
	MLKeyPointState_t358041773  ___Tip_0;
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState::IP
	MLKeyPointState_t358041773  ___IP_1;
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState::MCP
	MLKeyPointState_t358041773  ___MCP_2;
	// MagicLeapInternal.HandTrackingApiNativeBindings/MLKeyPointState MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState::CMC
	MLKeyPointState_t358041773  ___CMC_3;

public:
	inline static int32_t get_offset_of_Tip_0() { return static_cast<int32_t>(offsetof(MLThumbState_t3324871280, ___Tip_0)); }
	inline MLKeyPointState_t358041773  get_Tip_0() const { return ___Tip_0; }
	inline MLKeyPointState_t358041773 * get_address_of_Tip_0() { return &___Tip_0; }
	inline void set_Tip_0(MLKeyPointState_t358041773  value)
	{
		___Tip_0 = value;
	}

	inline static int32_t get_offset_of_IP_1() { return static_cast<int32_t>(offsetof(MLThumbState_t3324871280, ___IP_1)); }
	inline MLKeyPointState_t358041773  get_IP_1() const { return ___IP_1; }
	inline MLKeyPointState_t358041773 * get_address_of_IP_1() { return &___IP_1; }
	inline void set_IP_1(MLKeyPointState_t358041773  value)
	{
		___IP_1 = value;
	}

	inline static int32_t get_offset_of_MCP_2() { return static_cast<int32_t>(offsetof(MLThumbState_t3324871280, ___MCP_2)); }
	inline MLKeyPointState_t358041773  get_MCP_2() const { return ___MCP_2; }
	inline MLKeyPointState_t358041773 * get_address_of_MCP_2() { return &___MCP_2; }
	inline void set_MCP_2(MLKeyPointState_t358041773  value)
	{
		___MCP_2 = value;
	}

	inline static int32_t get_offset_of_CMC_3() { return static_cast<int32_t>(offsetof(MLThumbState_t3324871280, ___CMC_3)); }
	inline MLKeyPointState_t358041773  get_CMC_3() const { return ___CMC_3; }
	inline MLKeyPointState_t358041773 * get_address_of_CMC_3() { return &___CMC_3; }
	inline void set_CMC_3(MLKeyPointState_t358041773  value)
	{
		___CMC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLTHUMBSTATE_T3324871280_H
#ifndef MLWRIST_T4207073659_H
#define MLWRIST_T4207073659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWrist
struct  MLWrist_t4207073659  : public RuntimeObject
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLWrist::_CenterCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____CenterCoordinateFrameId_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLWrist::_UlnarCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____UlnarCoordinateFrameId_1;
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLWrist::_RadialCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____RadialCoordinateFrameId_2;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLWrist::_CenterUpdateTransform
	MLTransform_t3435326713  ____CenterUpdateTransform_3;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLWrist::_UlnarUpdateTransform
	MLTransform_t3435326713  ____UlnarUpdateTransform_4;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLWrist::_RadialUpdateTransform
	MLTransform_t3435326713  ____RadialUpdateTransform_5;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::<Center>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CCenterU3Ek__BackingField_6;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::<Ulnar>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CUlnarU3Ek__BackingField_7;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::<Radial>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CRadialU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLWrist::<KeyPoints>k__BackingField
	List_1_t3929820962 * ___U3CKeyPointsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__CenterCoordinateFrameId_0() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____CenterCoordinateFrameId_0)); }
	inline MLCoordinateFrameUID_t515144641  get__CenterCoordinateFrameId_0() const { return ____CenterCoordinateFrameId_0; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__CenterCoordinateFrameId_0() { return &____CenterCoordinateFrameId_0; }
	inline void set__CenterCoordinateFrameId_0(MLCoordinateFrameUID_t515144641  value)
	{
		____CenterCoordinateFrameId_0 = value;
	}

	inline static int32_t get_offset_of__UlnarCoordinateFrameId_1() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____UlnarCoordinateFrameId_1)); }
	inline MLCoordinateFrameUID_t515144641  get__UlnarCoordinateFrameId_1() const { return ____UlnarCoordinateFrameId_1; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__UlnarCoordinateFrameId_1() { return &____UlnarCoordinateFrameId_1; }
	inline void set__UlnarCoordinateFrameId_1(MLCoordinateFrameUID_t515144641  value)
	{
		____UlnarCoordinateFrameId_1 = value;
	}

	inline static int32_t get_offset_of__RadialCoordinateFrameId_2() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____RadialCoordinateFrameId_2)); }
	inline MLCoordinateFrameUID_t515144641  get__RadialCoordinateFrameId_2() const { return ____RadialCoordinateFrameId_2; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__RadialCoordinateFrameId_2() { return &____RadialCoordinateFrameId_2; }
	inline void set__RadialCoordinateFrameId_2(MLCoordinateFrameUID_t515144641  value)
	{
		____RadialCoordinateFrameId_2 = value;
	}

	inline static int32_t get_offset_of__CenterUpdateTransform_3() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____CenterUpdateTransform_3)); }
	inline MLTransform_t3435326713  get__CenterUpdateTransform_3() const { return ____CenterUpdateTransform_3; }
	inline MLTransform_t3435326713 * get_address_of__CenterUpdateTransform_3() { return &____CenterUpdateTransform_3; }
	inline void set__CenterUpdateTransform_3(MLTransform_t3435326713  value)
	{
		____CenterUpdateTransform_3 = value;
	}

	inline static int32_t get_offset_of__UlnarUpdateTransform_4() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____UlnarUpdateTransform_4)); }
	inline MLTransform_t3435326713  get__UlnarUpdateTransform_4() const { return ____UlnarUpdateTransform_4; }
	inline MLTransform_t3435326713 * get_address_of__UlnarUpdateTransform_4() { return &____UlnarUpdateTransform_4; }
	inline void set__UlnarUpdateTransform_4(MLTransform_t3435326713  value)
	{
		____UlnarUpdateTransform_4 = value;
	}

	inline static int32_t get_offset_of__RadialUpdateTransform_5() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ____RadialUpdateTransform_5)); }
	inline MLTransform_t3435326713  get__RadialUpdateTransform_5() const { return ____RadialUpdateTransform_5; }
	inline MLTransform_t3435326713 * get_address_of__RadialUpdateTransform_5() { return &____RadialUpdateTransform_5; }
	inline void set__RadialUpdateTransform_5(MLTransform_t3435326713  value)
	{
		____RadialUpdateTransform_5 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ___U3CCenterU3Ek__BackingField_6)); }
	inline MLKeyPoint_t2457746220 * get_U3CCenterU3Ek__BackingField_6() const { return ___U3CCenterU3Ek__BackingField_6; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CCenterU3Ek__BackingField_6() { return &___U3CCenterU3Ek__BackingField_6; }
	inline void set_U3CCenterU3Ek__BackingField_6(MLKeyPoint_t2457746220 * value)
	{
		___U3CCenterU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCenterU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CUlnarU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ___U3CUlnarU3Ek__BackingField_7)); }
	inline MLKeyPoint_t2457746220 * get_U3CUlnarU3Ek__BackingField_7() const { return ___U3CUlnarU3Ek__BackingField_7; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CUlnarU3Ek__BackingField_7() { return &___U3CUlnarU3Ek__BackingField_7; }
	inline void set_U3CUlnarU3Ek__BackingField_7(MLKeyPoint_t2457746220 * value)
	{
		___U3CUlnarU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUlnarU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CRadialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ___U3CRadialU3Ek__BackingField_8)); }
	inline MLKeyPoint_t2457746220 * get_U3CRadialU3Ek__BackingField_8() const { return ___U3CRadialU3Ek__BackingField_8; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CRadialU3Ek__BackingField_8() { return &___U3CRadialU3Ek__BackingField_8; }
	inline void set_U3CRadialU3Ek__BackingField_8(MLKeyPoint_t2457746220 * value)
	{
		___U3CRadialU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRadialU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CKeyPointsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MLWrist_t4207073659, ___U3CKeyPointsU3Ek__BackingField_9)); }
	inline List_1_t3929820962 * get_U3CKeyPointsU3Ek__BackingField_9() const { return ___U3CKeyPointsU3Ek__BackingField_9; }
	inline List_1_t3929820962 ** get_address_of_U3CKeyPointsU3Ek__BackingField_9() { return &___U3CKeyPointsU3Ek__BackingField_9; }
	inline void set_U3CKeyPointsU3Ek__BackingField_9(List_1_t3929820962 * value)
	{
		___U3CKeyPointsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeyPointsU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWRIST_T4207073659_H
#ifndef MLTHUMB_T652336835_H
#define MLTHUMB_T652336835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLThumb
struct  MLThumb_t652336835  : public RuntimeObject
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLThumb::_TipCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____TipCoordinateFrameId_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLThumb::_IPCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____IPCoordinateFrameId_1;
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLThumb::_MCPCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____MCPCoordinateFrameId_2;
	// MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID UnityEngine.XR.MagicLeap.MLThumb::_CMCCoordinateFrameId
	MLCoordinateFrameUID_t515144641  ____CMCCoordinateFrameId_3;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLThumb::_TipUpdateTransform
	MLTransform_t3435326713  ____TipUpdateTransform_4;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLThumb::_IPUpdateTransform
	MLTransform_t3435326713  ____IPUpdateTransform_5;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLThumb::_MCPUpdateTransform
	MLTransform_t3435326713  ____MCPUpdateTransform_6;
	// MagicLeapInternal.MagicLeapNativeBindings/MLTransform UnityEngine.XR.MagicLeap.MLThumb::_CMCUpdateTransform
	MLTransform_t3435326713  ____CMCUpdateTransform_7;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::<Tip>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CTipU3Ek__BackingField_8;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::<IP>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CIPU3Ek__BackingField_9;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::<MCP>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CMCPU3Ek__BackingField_10;
	// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::<CMC>k__BackingField
	MLKeyPoint_t2457746220 * ___U3CCMCU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLThumb::<KeyPoints>k__BackingField
	List_1_t3929820962 * ___U3CKeyPointsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__TipCoordinateFrameId_0() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____TipCoordinateFrameId_0)); }
	inline MLCoordinateFrameUID_t515144641  get__TipCoordinateFrameId_0() const { return ____TipCoordinateFrameId_0; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__TipCoordinateFrameId_0() { return &____TipCoordinateFrameId_0; }
	inline void set__TipCoordinateFrameId_0(MLCoordinateFrameUID_t515144641  value)
	{
		____TipCoordinateFrameId_0 = value;
	}

	inline static int32_t get_offset_of__IPCoordinateFrameId_1() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____IPCoordinateFrameId_1)); }
	inline MLCoordinateFrameUID_t515144641  get__IPCoordinateFrameId_1() const { return ____IPCoordinateFrameId_1; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__IPCoordinateFrameId_1() { return &____IPCoordinateFrameId_1; }
	inline void set__IPCoordinateFrameId_1(MLCoordinateFrameUID_t515144641  value)
	{
		____IPCoordinateFrameId_1 = value;
	}

	inline static int32_t get_offset_of__MCPCoordinateFrameId_2() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____MCPCoordinateFrameId_2)); }
	inline MLCoordinateFrameUID_t515144641  get__MCPCoordinateFrameId_2() const { return ____MCPCoordinateFrameId_2; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__MCPCoordinateFrameId_2() { return &____MCPCoordinateFrameId_2; }
	inline void set__MCPCoordinateFrameId_2(MLCoordinateFrameUID_t515144641  value)
	{
		____MCPCoordinateFrameId_2 = value;
	}

	inline static int32_t get_offset_of__CMCCoordinateFrameId_3() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____CMCCoordinateFrameId_3)); }
	inline MLCoordinateFrameUID_t515144641  get__CMCCoordinateFrameId_3() const { return ____CMCCoordinateFrameId_3; }
	inline MLCoordinateFrameUID_t515144641 * get_address_of__CMCCoordinateFrameId_3() { return &____CMCCoordinateFrameId_3; }
	inline void set__CMCCoordinateFrameId_3(MLCoordinateFrameUID_t515144641  value)
	{
		____CMCCoordinateFrameId_3 = value;
	}

	inline static int32_t get_offset_of__TipUpdateTransform_4() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____TipUpdateTransform_4)); }
	inline MLTransform_t3435326713  get__TipUpdateTransform_4() const { return ____TipUpdateTransform_4; }
	inline MLTransform_t3435326713 * get_address_of__TipUpdateTransform_4() { return &____TipUpdateTransform_4; }
	inline void set__TipUpdateTransform_4(MLTransform_t3435326713  value)
	{
		____TipUpdateTransform_4 = value;
	}

	inline static int32_t get_offset_of__IPUpdateTransform_5() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____IPUpdateTransform_5)); }
	inline MLTransform_t3435326713  get__IPUpdateTransform_5() const { return ____IPUpdateTransform_5; }
	inline MLTransform_t3435326713 * get_address_of__IPUpdateTransform_5() { return &____IPUpdateTransform_5; }
	inline void set__IPUpdateTransform_5(MLTransform_t3435326713  value)
	{
		____IPUpdateTransform_5 = value;
	}

	inline static int32_t get_offset_of__MCPUpdateTransform_6() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____MCPUpdateTransform_6)); }
	inline MLTransform_t3435326713  get__MCPUpdateTransform_6() const { return ____MCPUpdateTransform_6; }
	inline MLTransform_t3435326713 * get_address_of__MCPUpdateTransform_6() { return &____MCPUpdateTransform_6; }
	inline void set__MCPUpdateTransform_6(MLTransform_t3435326713  value)
	{
		____MCPUpdateTransform_6 = value;
	}

	inline static int32_t get_offset_of__CMCUpdateTransform_7() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ____CMCUpdateTransform_7)); }
	inline MLTransform_t3435326713  get__CMCUpdateTransform_7() const { return ____CMCUpdateTransform_7; }
	inline MLTransform_t3435326713 * get_address_of__CMCUpdateTransform_7() { return &____CMCUpdateTransform_7; }
	inline void set__CMCUpdateTransform_7(MLTransform_t3435326713  value)
	{
		____CMCUpdateTransform_7 = value;
	}

	inline static int32_t get_offset_of_U3CTipU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ___U3CTipU3Ek__BackingField_8)); }
	inline MLKeyPoint_t2457746220 * get_U3CTipU3Ek__BackingField_8() const { return ___U3CTipU3Ek__BackingField_8; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CTipU3Ek__BackingField_8() { return &___U3CTipU3Ek__BackingField_8; }
	inline void set_U3CTipU3Ek__BackingField_8(MLKeyPoint_t2457746220 * value)
	{
		___U3CTipU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTipU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CIPU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ___U3CIPU3Ek__BackingField_9)); }
	inline MLKeyPoint_t2457746220 * get_U3CIPU3Ek__BackingField_9() const { return ___U3CIPU3Ek__BackingField_9; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CIPU3Ek__BackingField_9() { return &___U3CIPU3Ek__BackingField_9; }
	inline void set_U3CIPU3Ek__BackingField_9(MLKeyPoint_t2457746220 * value)
	{
		___U3CIPU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIPU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CMCPU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ___U3CMCPU3Ek__BackingField_10)); }
	inline MLKeyPoint_t2457746220 * get_U3CMCPU3Ek__BackingField_10() const { return ___U3CMCPU3Ek__BackingField_10; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CMCPU3Ek__BackingField_10() { return &___U3CMCPU3Ek__BackingField_10; }
	inline void set_U3CMCPU3Ek__BackingField_10(MLKeyPoint_t2457746220 * value)
	{
		___U3CMCPU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMCPU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CCMCU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ___U3CCMCU3Ek__BackingField_11)); }
	inline MLKeyPoint_t2457746220 * get_U3CCMCU3Ek__BackingField_11() const { return ___U3CCMCU3Ek__BackingField_11; }
	inline MLKeyPoint_t2457746220 ** get_address_of_U3CCMCU3Ek__BackingField_11() { return &___U3CCMCU3Ek__BackingField_11; }
	inline void set_U3CCMCU3Ek__BackingField_11(MLKeyPoint_t2457746220 * value)
	{
		___U3CCMCU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCMCU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CKeyPointsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MLThumb_t652336835, ___U3CKeyPointsU3Ek__BackingField_12)); }
	inline List_1_t3929820962 * get_U3CKeyPointsU3Ek__BackingField_12() const { return ___U3CKeyPointsU3Ek__BackingField_12; }
	inline List_1_t3929820962 ** get_address_of_U3CKeyPointsU3Ek__BackingField_12() { return &___U3CKeyPointsU3Ek__BackingField_12; }
	inline void set_U3CKeyPointsU3Ek__BackingField_12(List_1_t3929820962 * value)
	{
		___U3CKeyPointsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeyPointsU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLTHUMB_T652336835_H
#ifndef MLWORLDRAYS_T3718842835_H
#define MLWORLDRAYS_T3718842835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldRays
struct  MLWorldRays_t3718842835  : public MLAPISingleton_1_t3511624579
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback> UnityEngine.XR.MagicLeap.MLWorldRays::_pendingQueries
	Dictionary_2_t436580975 * ____pendingQueries_3;
	// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastSettings UnityEngine.XR.MagicLeap.MLWorldRays::_settings
	MLRaycastSettings_t1144099939  ____settings_4;
	// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery UnityEngine.XR.MagicLeap.MLWorldRays::_query
	MLRaycastQuery_t3337934584  ____query_5;
	// System.UInt64 UnityEngine.XR.MagicLeap.MLWorldRays::_trackerHandle
	uint64_t ____trackerHandle_6;

public:
	inline static int32_t get_offset_of__pendingQueries_3() { return static_cast<int32_t>(offsetof(MLWorldRays_t3718842835, ____pendingQueries_3)); }
	inline Dictionary_2_t436580975 * get__pendingQueries_3() const { return ____pendingQueries_3; }
	inline Dictionary_2_t436580975 ** get_address_of__pendingQueries_3() { return &____pendingQueries_3; }
	inline void set__pendingQueries_3(Dictionary_2_t436580975 * value)
	{
		____pendingQueries_3 = value;
		Il2CppCodeGenWriteBarrier((&____pendingQueries_3), value);
	}

	inline static int32_t get_offset_of__settings_4() { return static_cast<int32_t>(offsetof(MLWorldRays_t3718842835, ____settings_4)); }
	inline MLRaycastSettings_t1144099939  get__settings_4() const { return ____settings_4; }
	inline MLRaycastSettings_t1144099939 * get_address_of__settings_4() { return &____settings_4; }
	inline void set__settings_4(MLRaycastSettings_t1144099939  value)
	{
		____settings_4 = value;
	}

	inline static int32_t get_offset_of__query_5() { return static_cast<int32_t>(offsetof(MLWorldRays_t3718842835, ____query_5)); }
	inline MLRaycastQuery_t3337934584  get__query_5() const { return ____query_5; }
	inline MLRaycastQuery_t3337934584 * get_address_of__query_5() { return &____query_5; }
	inline void set__query_5(MLRaycastQuery_t3337934584  value)
	{
		____query_5 = value;
	}

	inline static int32_t get_offset_of__trackerHandle_6() { return static_cast<int32_t>(offsetof(MLWorldRays_t3718842835, ____trackerHandle_6)); }
	inline uint64_t get__trackerHandle_6() const { return ____trackerHandle_6; }
	inline uint64_t* get_address_of__trackerHandle_6() { return &____trackerHandle_6; }
	inline void set__trackerHandle_6(uint64_t value)
	{
		____trackerHandle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWORLDRAYS_T3718842835_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MLCONTENTBINDING_T782013796_H
#define MLCONTENTBINDING_T782013796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLContentBinding
struct  MLContentBinding_t782013796  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLContentBinding::ObjectId
	String_t* ___ObjectId_0;
	// UnityEngine.XR.MagicLeap.MLPCF UnityEngine.XR.MagicLeap.MLContentBinding::PCF
	MLPCF_t2390192560 * ___PCF_1;
	// UnityEngine.XR.MagicLeap.MLContentBindingType UnityEngine.XR.MagicLeap.MLContentBinding::BindingType
	int32_t ___BindingType_2;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f UnityEngine.XR.MagicLeap.MLContentBinding::Offset
	MLVec3f_t486797299  ___Offset_3;
	// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf UnityEngine.XR.MagicLeap.MLContentBinding::OrientationOffset
	MLQuaternionf_t1293654839  ___OrientationOffset_4;
	// UnityEngine.GameObject UnityEngine.XR.MagicLeap.MLContentBinding::<GameObject>k__BackingField
	GameObject_t1113636619 * ___U3CGameObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_ObjectId_0() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___ObjectId_0)); }
	inline String_t* get_ObjectId_0() const { return ___ObjectId_0; }
	inline String_t** get_address_of_ObjectId_0() { return &___ObjectId_0; }
	inline void set_ObjectId_0(String_t* value)
	{
		___ObjectId_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectId_0), value);
	}

	inline static int32_t get_offset_of_PCF_1() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___PCF_1)); }
	inline MLPCF_t2390192560 * get_PCF_1() const { return ___PCF_1; }
	inline MLPCF_t2390192560 ** get_address_of_PCF_1() { return &___PCF_1; }
	inline void set_PCF_1(MLPCF_t2390192560 * value)
	{
		___PCF_1 = value;
		Il2CppCodeGenWriteBarrier((&___PCF_1), value);
	}

	inline static int32_t get_offset_of_BindingType_2() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___BindingType_2)); }
	inline int32_t get_BindingType_2() const { return ___BindingType_2; }
	inline int32_t* get_address_of_BindingType_2() { return &___BindingType_2; }
	inline void set_BindingType_2(int32_t value)
	{
		___BindingType_2 = value;
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___Offset_3)); }
	inline MLVec3f_t486797299  get_Offset_3() const { return ___Offset_3; }
	inline MLVec3f_t486797299 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(MLVec3f_t486797299  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_OrientationOffset_4() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___OrientationOffset_4)); }
	inline MLQuaternionf_t1293654839  get_OrientationOffset_4() const { return ___OrientationOffset_4; }
	inline MLQuaternionf_t1293654839 * get_address_of_OrientationOffset_4() { return &___OrientationOffset_4; }
	inline void set_OrientationOffset_4(MLQuaternionf_t1293654839  value)
	{
		___OrientationOffset_4 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MLContentBinding_t782013796, ___U3CGameObjectU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CGameObjectU3Ek__BackingField_5() const { return ___U3CGameObjectU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CGameObjectU3Ek__BackingField_5() { return &___U3CGameObjectU3Ek__BackingField_5; }
	inline void set_U3CGameObjectU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CGameObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameObjectU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLCONTENTBINDING_T782013796_H
#ifndef MLPLANESQUERY_T647580137_H
#define MLPLANESQUERY_T647580137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery
struct  MLPlanesQuery_t647580137 
{
public:
	// MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQueryFlags MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::Flags
	int32_t ___Flags_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::BoundsCenter
	MLVec3f_t486797299  ___BoundsCenter_1;
	// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::BoundsRotation
	MLQuaternionf_t1293654839  ___BoundsRotation_2;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::BoundsExtents
	MLVec3f_t486797299  ___BoundsExtents_3;
	// System.UInt32 MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::MaxResults
	uint32_t ___MaxResults_4;
	// System.Single MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::MinHoleLength
	float ___MinHoleLength_5;
	// System.Single MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery::MinPlaneArea
	float ___MinPlaneArea_6;

public:
	inline static int32_t get_offset_of_Flags_0() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___Flags_0)); }
	inline int32_t get_Flags_0() const { return ___Flags_0; }
	inline int32_t* get_address_of_Flags_0() { return &___Flags_0; }
	inline void set_Flags_0(int32_t value)
	{
		___Flags_0 = value;
	}

	inline static int32_t get_offset_of_BoundsCenter_1() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___BoundsCenter_1)); }
	inline MLVec3f_t486797299  get_BoundsCenter_1() const { return ___BoundsCenter_1; }
	inline MLVec3f_t486797299 * get_address_of_BoundsCenter_1() { return &___BoundsCenter_1; }
	inline void set_BoundsCenter_1(MLVec3f_t486797299  value)
	{
		___BoundsCenter_1 = value;
	}

	inline static int32_t get_offset_of_BoundsRotation_2() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___BoundsRotation_2)); }
	inline MLQuaternionf_t1293654839  get_BoundsRotation_2() const { return ___BoundsRotation_2; }
	inline MLQuaternionf_t1293654839 * get_address_of_BoundsRotation_2() { return &___BoundsRotation_2; }
	inline void set_BoundsRotation_2(MLQuaternionf_t1293654839  value)
	{
		___BoundsRotation_2 = value;
	}

	inline static int32_t get_offset_of_BoundsExtents_3() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___BoundsExtents_3)); }
	inline MLVec3f_t486797299  get_BoundsExtents_3() const { return ___BoundsExtents_3; }
	inline MLVec3f_t486797299 * get_address_of_BoundsExtents_3() { return &___BoundsExtents_3; }
	inline void set_BoundsExtents_3(MLVec3f_t486797299  value)
	{
		___BoundsExtents_3 = value;
	}

	inline static int32_t get_offset_of_MaxResults_4() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___MaxResults_4)); }
	inline uint32_t get_MaxResults_4() const { return ___MaxResults_4; }
	inline uint32_t* get_address_of_MaxResults_4() { return &___MaxResults_4; }
	inline void set_MaxResults_4(uint32_t value)
	{
		___MaxResults_4 = value;
	}

	inline static int32_t get_offset_of_MinHoleLength_5() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___MinHoleLength_5)); }
	inline float get_MinHoleLength_5() const { return ___MinHoleLength_5; }
	inline float* get_address_of_MinHoleLength_5() { return &___MinHoleLength_5; }
	inline void set_MinHoleLength_5(float value)
	{
		___MinHoleLength_5 = value;
	}

	inline static int32_t get_offset_of_MinPlaneArea_6() { return static_cast<int32_t>(offsetof(MLPlanesQuery_t647580137, ___MinPlaneArea_6)); }
	inline float get_MinPlaneArea_6() const { return ___MinPlaneArea_6; }
	inline float* get_address_of_MinPlaneArea_6() { return &___MinPlaneArea_6; }
	inline void set_MinPlaneArea_6(float value)
	{
		___MinPlaneArea_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLPLANESQUERY_T647580137_H
#ifndef MLVERBOSITY_T2291382169_H
#define MLVERBOSITY_T2291382169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLVerbosity
struct  MLVerbosity_t2291382169  : public RuntimeObject
{
public:

public:
};

struct MLVerbosity_t2291382169_StaticFields
{
public:
	// UnityEngine.XR.MagicLeap.MLVerbosity/Levels UnityEngine.XR.MagicLeap.MLVerbosity::Level
	uint32_t ___Level_0;

public:
	inline static int32_t get_offset_of_Level_0() { return static_cast<int32_t>(offsetof(MLVerbosity_t2291382169_StaticFields, ___Level_0)); }
	inline uint32_t get_Level_0() const { return ___Level_0; }
	inline uint32_t* get_address_of_Level_0() { return &___Level_0; }
	inline void set_Level_0(uint32_t value)
	{
		___Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLVERBOSITY_T2291382169_H
#ifndef ENUMERATOR_T3035093520_H
#define ENUMERATOR_T3035093520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  Enumerator_t3035093520 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t512132015  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3035093520, ___host_enumerator_0)); }
	inline Enumerator_t512132015  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t512132015 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t512132015  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3035093520_H
#ifndef MLWORLDPLANESQUERYPARAMS_T4087992392_H
#define MLWORLDPLANESQUERYPARAMS_T4087992392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams
struct  MLWorldPlanesQueryParams_t4087992392 
{
public:
	// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryFlags UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::Flags
	int32_t ___Flags_0;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::BoundsCenter
	Vector3_t3722313464  ___BoundsCenter_1;
	// UnityEngine.Quaternion UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::BoundsRotation
	Quaternion_t2301928331  ___BoundsRotation_2;
	// UnityEngine.Vector3 UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::BoundsExtents
	Vector3_t3722313464  ___BoundsExtents_3;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::MaxResults
	uint32_t ___MaxResults_4;
	// System.Single UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::MinHoleLength
	float ___MinHoleLength_5;
	// System.Single UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams::MinPlaneArea
	float ___MinPlaneArea_6;

public:
	inline static int32_t get_offset_of_Flags_0() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___Flags_0)); }
	inline int32_t get_Flags_0() const { return ___Flags_0; }
	inline int32_t* get_address_of_Flags_0() { return &___Flags_0; }
	inline void set_Flags_0(int32_t value)
	{
		___Flags_0 = value;
	}

	inline static int32_t get_offset_of_BoundsCenter_1() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___BoundsCenter_1)); }
	inline Vector3_t3722313464  get_BoundsCenter_1() const { return ___BoundsCenter_1; }
	inline Vector3_t3722313464 * get_address_of_BoundsCenter_1() { return &___BoundsCenter_1; }
	inline void set_BoundsCenter_1(Vector3_t3722313464  value)
	{
		___BoundsCenter_1 = value;
	}

	inline static int32_t get_offset_of_BoundsRotation_2() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___BoundsRotation_2)); }
	inline Quaternion_t2301928331  get_BoundsRotation_2() const { return ___BoundsRotation_2; }
	inline Quaternion_t2301928331 * get_address_of_BoundsRotation_2() { return &___BoundsRotation_2; }
	inline void set_BoundsRotation_2(Quaternion_t2301928331  value)
	{
		___BoundsRotation_2 = value;
	}

	inline static int32_t get_offset_of_BoundsExtents_3() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___BoundsExtents_3)); }
	inline Vector3_t3722313464  get_BoundsExtents_3() const { return ___BoundsExtents_3; }
	inline Vector3_t3722313464 * get_address_of_BoundsExtents_3() { return &___BoundsExtents_3; }
	inline void set_BoundsExtents_3(Vector3_t3722313464  value)
	{
		___BoundsExtents_3 = value;
	}

	inline static int32_t get_offset_of_MaxResults_4() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___MaxResults_4)); }
	inline uint32_t get_MaxResults_4() const { return ___MaxResults_4; }
	inline uint32_t* get_address_of_MaxResults_4() { return &___MaxResults_4; }
	inline void set_MaxResults_4(uint32_t value)
	{
		___MaxResults_4 = value;
	}

	inline static int32_t get_offset_of_MinHoleLength_5() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___MinHoleLength_5)); }
	inline float get_MinHoleLength_5() const { return ___MinHoleLength_5; }
	inline float* get_address_of_MinHoleLength_5() { return &___MinHoleLength_5; }
	inline void set_MinHoleLength_5(float value)
	{
		___MinHoleLength_5 = value;
	}

	inline static int32_t get_offset_of_MinPlaneArea_6() { return static_cast<int32_t>(offsetof(MLWorldPlanesQueryParams_t4087992392, ___MinPlaneArea_6)); }
	inline float get_MinPlaneArea_6() const { return ___MinPlaneArea_6; }
	inline float* get_address_of_MinPlaneArea_6() { return &___MinPlaneArea_6; }
	inline void set_MinPlaneArea_6(float value)
	{
		___MinPlaneArea_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLWORLDPLANESQUERYPARAMS_T4087992392_H
#ifndef ENUMERATOR_T3811794769_H
#define ENUMERATOR_T3811794769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>
struct  Enumerator_t3811794769 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t902116591  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3811794769, ___host_enumerator_0)); }
	inline Enumerator_t902116591  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t902116591 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t902116591  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3811794769_H
#ifndef ENUMERATOR_T553924204_H
#define ENUMERATOR_T553924204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct  Enumerator_t553924204 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2959647623 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t553924204, ___l_0)); }
	inline List_1_t2959647623 * get_l_0() const { return ___l_0; }
	inline List_1_t2959647623 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2959647623 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t553924204, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t553924204, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t553924204, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T553924204_H
#ifndef MLRESULT_T265502022_H
#define MLRESULT_T265502022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLResult
struct  MLResult_t265502022 
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLResult::_message
	String_t* ____message_1;
	// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String> UnityEngine.XR.MagicLeap.MLResult::_resultStringer
	Func_2_t563276670 * ____resultStringer_2;
	// UnityEngine.XR.MagicLeap.MLResultCode UnityEngine.XR.MagicLeap.MLResult::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ____message_1)); }
	inline String_t* get__message_1() const { return ____message_1; }
	inline String_t** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(String_t* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__resultStringer_2() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ____resultStringer_2)); }
	inline Func_2_t563276670 * get__resultStringer_2() const { return ____resultStringer_2; }
	inline Func_2_t563276670 ** get_address_of__resultStringer_2() { return &____resultStringer_2; }
	inline void set__resultStringer_2(Func_2_t563276670 * value)
	{
		____resultStringer_2 = value;
		Il2CppCodeGenWriteBarrier((&____resultStringer_2), value);
	}

	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MLResult_t265502022, ___U3CCodeU3Ek__BackingField_3)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_3() const { return ___U3CCodeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_3() { return &___U3CCodeU3Ek__BackingField_3; }
	inline void set_U3CCodeU3Ek__BackingField_3(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_3 = value;
	}
};

struct MLResult_t265502022_StaticFields
{
public:
	// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLResult::ResultOk
	MLResult_t265502022  ___ResultOk_0;

public:
	inline static int32_t get_offset_of_ResultOk_0() { return static_cast<int32_t>(offsetof(MLResult_t265502022_StaticFields, ___ResultOk_0)); }
	inline MLResult_t265502022  get_ResultOk_0() const { return ___ResultOk_0; }
	inline MLResult_t265502022 * get_address_of_ResultOk_0() { return &___ResultOk_0; }
	inline void set_ResultOk_0(MLResult_t265502022  value)
	{
		___ResultOk_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t265502022_marshaled_pinvoke
{
	char* ____message_1;
	Il2CppMethodPointer ____resultStringer_2;
	int32_t ___U3CCodeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.MagicLeap.MLResult
struct MLResult_t265502022_marshaled_com
{
	Il2CppChar* ____message_1;
	Il2CppMethodPointer ____resultStringer_2;
	int32_t ___U3CCodeU3Ek__BackingField_3;
};
#endif // MLRESULT_T265502022_H
#ifndef ENUMERATOR_T3421810193_H
#define ENUMERATOR_T3421810193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>
struct  Enumerator_t3421810193 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t512132015  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3421810193, ___host_enumerator_0)); }
	inline Enumerator_t512132015  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t512132015 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t512132015  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3421810193_H
#ifndef ENUMERATOR_T618757959_H
#define ENUMERATOR_T618757959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>
struct  Enumerator_t618757959 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2390763750  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t618757959, ___host_enumerator_0)); }
	inline Enumerator_t2390763750  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2390763750 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2390763750  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T618757959_H
#ifndef MLRAYCASTRESULT_T3432466840_H
#define MLRAYCASTRESULT_T3432466840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult
struct  MLRaycastResult_t3432466840 
{
public:
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult::Hitpoint
	MLVec3f_t486797299  ___Hitpoint_0;
	// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult::Normal
	MLVec3f_t486797299  ___Normal_1;
	// System.Single MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult::Confidence
	float ___Confidence_2;
	// MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResultState MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult::State
	int32_t ___State_3;

public:
	inline static int32_t get_offset_of_Hitpoint_0() { return static_cast<int32_t>(offsetof(MLRaycastResult_t3432466840, ___Hitpoint_0)); }
	inline MLVec3f_t486797299  get_Hitpoint_0() const { return ___Hitpoint_0; }
	inline MLVec3f_t486797299 * get_address_of_Hitpoint_0() { return &___Hitpoint_0; }
	inline void set_Hitpoint_0(MLVec3f_t486797299  value)
	{
		___Hitpoint_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(MLRaycastResult_t3432466840, ___Normal_1)); }
	inline MLVec3f_t486797299  get_Normal_1() const { return ___Normal_1; }
	inline MLVec3f_t486797299 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(MLVec3f_t486797299  value)
	{
		___Normal_1 = value;
	}

	inline static int32_t get_offset_of_Confidence_2() { return static_cast<int32_t>(offsetof(MLRaycastResult_t3432466840, ___Confidence_2)); }
	inline float get_Confidence_2() const { return ___Confidence_2; }
	inline float* get_address_of_Confidence_2() { return &___Confidence_2; }
	inline void set_Confidence_2(float value)
	{
		___Confidence_2 = value;
	}

	inline static int32_t get_offset_of_State_3() { return static_cast<int32_t>(offsetof(MLRaycastResult_t3432466840, ___State_3)); }
	inline int32_t get_State_3() const { return ___State_3; }
	inline int32_t* get_address_of_State_3() { return &___State_3; }
	inline void set_State_3(int32_t value)
	{
		___State_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLRAYCASTRESULT_T3432466840_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef KEYVALUEPAIR_2_T1697966659_H
#define KEYVALUEPAIR_2_T1697966659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct  KeyValuePair_2_t1697966659 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MLRaycastResult_t3432466840  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1697966659, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1697966659, ___value_1)); }
	inline MLRaycastResult_t3432466840  get_value_1() const { return ___value_1; }
	inline MLRaycastResult_t3432466840 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MLRaycastResult_t3432466840  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1697966659_H
#ifndef REQUESTPRIVILEGEQUERY_T2806466543_H
#define REQUESTPRIVILEGEQUERY_T2806466543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery
struct  RequestPrivilegeQuery_t2806466543  : public RuntimeObject
{
public:
	// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId> UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::Callback
	Action_2_t1067572169 * ___Callback_0;
	// UnityEngine.XR.MagicLeap.MLPrivilegeId UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::PrivilegeId
	uint32_t ___PrivilegeId_1;
	// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::Result
	MLResult_t265502022  ___Result_2;
	// System.IntPtr UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::Request
	intptr_t ___Request_3;

public:
	inline static int32_t get_offset_of_Callback_0() { return static_cast<int32_t>(offsetof(RequestPrivilegeQuery_t2806466543, ___Callback_0)); }
	inline Action_2_t1067572169 * get_Callback_0() const { return ___Callback_0; }
	inline Action_2_t1067572169 ** get_address_of_Callback_0() { return &___Callback_0; }
	inline void set_Callback_0(Action_2_t1067572169 * value)
	{
		___Callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___Callback_0), value);
	}

	inline static int32_t get_offset_of_PrivilegeId_1() { return static_cast<int32_t>(offsetof(RequestPrivilegeQuery_t2806466543, ___PrivilegeId_1)); }
	inline uint32_t get_PrivilegeId_1() const { return ___PrivilegeId_1; }
	inline uint32_t* get_address_of_PrivilegeId_1() { return &___PrivilegeId_1; }
	inline void set_PrivilegeId_1(uint32_t value)
	{
		___PrivilegeId_1 = value;
	}

	inline static int32_t get_offset_of_Result_2() { return static_cast<int32_t>(offsetof(RequestPrivilegeQuery_t2806466543, ___Result_2)); }
	inline MLResult_t265502022  get_Result_2() const { return ___Result_2; }
	inline MLResult_t265502022 * get_address_of_Result_2() { return &___Result_2; }
	inline void set_Result_2(MLResult_t265502022  value)
	{
		___Result_2 = value;
	}

	inline static int32_t get_offset_of_Request_3() { return static_cast<int32_t>(offsetof(RequestPrivilegeQuery_t2806466543, ___Request_3)); }
	inline intptr_t get_Request_3() const { return ___Request_3; }
	inline intptr_t* get_address_of_Request_3() { return &___Request_3; }
	inline void set_Request_3(intptr_t value)
	{
		___Request_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTPRIVILEGEQUERY_T2806466543_H
#ifndef QUERY_T2690121588_H
#define QUERY_T2690121588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldPlanes/Query
struct  Query_t2690121588  : public RuntimeObject
{
public:
	// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]> UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::CallbackWithoutBoundaries
	Action_2_t409093569 * ___CallbackWithoutBoundaries_0;
	// System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]> UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::CallbackWithBoundaries
	Action_3_t4204205301 * ___CallbackWithBoundaries_1;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::MaxResults
	uint32_t ___MaxResults_2;
	// System.IntPtr UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::PlanesResultsUnmanaged
	intptr_t ___PlanesResultsUnmanaged_3;
	// UnityEngine.XR.MagicLeap.MLWorldPlane[] UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Planes
	MLWorldPlaneU5BU5D_t829094281* ___Planes_4;
	// System.IntPtr UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::PlaneBoundariesResultsUnmanaged
	intptr_t ___PlaneBoundariesResultsUnmanaged_5;
	// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[] UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::PlaneBoundaries
	MLWorldPlaneBoundariesU5BU5D_t1821879535* ___PlaneBoundaries_6;
	// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Result
	MLResult_t265502022  ___Result_7;
	// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::<CanRequestBoundaries>k__BackingField
	bool ___U3CCanRequestBoundariesU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::<IsRequestingBoundaries>k__BackingField
	bool ___U3CIsRequestingBoundariesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_CallbackWithoutBoundaries_0() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___CallbackWithoutBoundaries_0)); }
	inline Action_2_t409093569 * get_CallbackWithoutBoundaries_0() const { return ___CallbackWithoutBoundaries_0; }
	inline Action_2_t409093569 ** get_address_of_CallbackWithoutBoundaries_0() { return &___CallbackWithoutBoundaries_0; }
	inline void set_CallbackWithoutBoundaries_0(Action_2_t409093569 * value)
	{
		___CallbackWithoutBoundaries_0 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackWithoutBoundaries_0), value);
	}

	inline static int32_t get_offset_of_CallbackWithBoundaries_1() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___CallbackWithBoundaries_1)); }
	inline Action_3_t4204205301 * get_CallbackWithBoundaries_1() const { return ___CallbackWithBoundaries_1; }
	inline Action_3_t4204205301 ** get_address_of_CallbackWithBoundaries_1() { return &___CallbackWithBoundaries_1; }
	inline void set_CallbackWithBoundaries_1(Action_3_t4204205301 * value)
	{
		___CallbackWithBoundaries_1 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackWithBoundaries_1), value);
	}

	inline static int32_t get_offset_of_MaxResults_2() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___MaxResults_2)); }
	inline uint32_t get_MaxResults_2() const { return ___MaxResults_2; }
	inline uint32_t* get_address_of_MaxResults_2() { return &___MaxResults_2; }
	inline void set_MaxResults_2(uint32_t value)
	{
		___MaxResults_2 = value;
	}

	inline static int32_t get_offset_of_PlanesResultsUnmanaged_3() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___PlanesResultsUnmanaged_3)); }
	inline intptr_t get_PlanesResultsUnmanaged_3() const { return ___PlanesResultsUnmanaged_3; }
	inline intptr_t* get_address_of_PlanesResultsUnmanaged_3() { return &___PlanesResultsUnmanaged_3; }
	inline void set_PlanesResultsUnmanaged_3(intptr_t value)
	{
		___PlanesResultsUnmanaged_3 = value;
	}

	inline static int32_t get_offset_of_Planes_4() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___Planes_4)); }
	inline MLWorldPlaneU5BU5D_t829094281* get_Planes_4() const { return ___Planes_4; }
	inline MLWorldPlaneU5BU5D_t829094281** get_address_of_Planes_4() { return &___Planes_4; }
	inline void set_Planes_4(MLWorldPlaneU5BU5D_t829094281* value)
	{
		___Planes_4 = value;
		Il2CppCodeGenWriteBarrier((&___Planes_4), value);
	}

	inline static int32_t get_offset_of_PlaneBoundariesResultsUnmanaged_5() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___PlaneBoundariesResultsUnmanaged_5)); }
	inline intptr_t get_PlaneBoundariesResultsUnmanaged_5() const { return ___PlaneBoundariesResultsUnmanaged_5; }
	inline intptr_t* get_address_of_PlaneBoundariesResultsUnmanaged_5() { return &___PlaneBoundariesResultsUnmanaged_5; }
	inline void set_PlaneBoundariesResultsUnmanaged_5(intptr_t value)
	{
		___PlaneBoundariesResultsUnmanaged_5 = value;
	}

	inline static int32_t get_offset_of_PlaneBoundaries_6() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___PlaneBoundaries_6)); }
	inline MLWorldPlaneBoundariesU5BU5D_t1821879535* get_PlaneBoundaries_6() const { return ___PlaneBoundaries_6; }
	inline MLWorldPlaneBoundariesU5BU5D_t1821879535** get_address_of_PlaneBoundaries_6() { return &___PlaneBoundaries_6; }
	inline void set_PlaneBoundaries_6(MLWorldPlaneBoundariesU5BU5D_t1821879535* value)
	{
		___PlaneBoundaries_6 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneBoundaries_6), value);
	}

	inline static int32_t get_offset_of_Result_7() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___Result_7)); }
	inline MLResult_t265502022  get_Result_7() const { return ___Result_7; }
	inline MLResult_t265502022 * get_address_of_Result_7() { return &___Result_7; }
	inline void set_Result_7(MLResult_t265502022  value)
	{
		___Result_7 = value;
	}

	inline static int32_t get_offset_of_U3CCanRequestBoundariesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___U3CCanRequestBoundariesU3Ek__BackingField_8)); }
	inline bool get_U3CCanRequestBoundariesU3Ek__BackingField_8() const { return ___U3CCanRequestBoundariesU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CCanRequestBoundariesU3Ek__BackingField_8() { return &___U3CCanRequestBoundariesU3Ek__BackingField_8; }
	inline void set_U3CCanRequestBoundariesU3Ek__BackingField_8(bool value)
	{
		___U3CCanRequestBoundariesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsRequestingBoundariesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Query_t2690121588, ___U3CIsRequestingBoundariesU3Ek__BackingField_9)); }
	inline bool get_U3CIsRequestingBoundariesU3Ek__BackingField_9() const { return ___U3CIsRequestingBoundariesU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsRequestingBoundariesU3Ek__BackingField_9() { return &___U3CIsRequestingBoundariesU3Ek__BackingField_9; }
	inline void set_U3CIsRequestingBoundariesU3Ek__BackingField_9(bool value)
	{
		___U3CIsRequestingBoundariesU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERY_T2690121588_H
#ifndef ACTION_2_T1067572169_H
#define ACTION_2_T1067572169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>
struct  Action_2_t1067572169  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1067572169_H
#ifndef ACTION_2_T1970191848_H
#define ACTION_2_T1970191848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPCF>
struct  Action_2_t1970191848  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1970191848_H
#ifndef FUNC_2_T563276670_H
#define FUNC_2_T563276670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>
struct  Func_2_t563276670  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T563276670_H
#ifndef ACTION_3_T4204205301_H
#define ACTION_3_T4204205301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>
struct  Action_3_t4204205301  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T4204205301_H
#ifndef RESULTCALLBACK_T273786027_H
#define RESULTCALLBACK_T273786027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback
struct  ResultCallback_t273786027  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTCALLBACK_T273786027_H
#ifndef ACTION_2_T409093569_H
#define ACTION_2_T409093569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]>
struct  Action_2_t409093569  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T409093569_H
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
#ifndef ENUMERATOR_T1254477267_H
#define ENUMERATOR_T1254477267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct  Enumerator_t1254477267 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3595261788 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1697966659  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1254477267, ___dictionary_0)); }
	inline Dictionary_2_t3595261788 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3595261788 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3595261788 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1254477267, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t1254477267, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1254477267, ___current_3)); }
	inline KeyValuePair_2_t1697966659  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1697966659 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1697966659  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1254477267_H
#ifndef ENUMERATOR_T3777438772_H
#define ENUMERATOR_T3777438772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>
struct  Enumerator_t3777438772 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t1254477267  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3777438772, ___host_enumerator_0)); }
	inline Enumerator_t1254477267  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t1254477267 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t1254477267  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3777438772_H
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
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[]
struct MLWorldPlaneBoundaryU5BU5D_t1423265241  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MLWorldPlaneBoundary_t1115739400  m_Items[1];

public:
	inline MLWorldPlaneBoundary_t1115739400  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MLWorldPlaneBoundary_t1115739400 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MLWorldPlaneBoundary_t1115739400  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MLWorldPlaneBoundary_t1115739400  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MLWorldPlaneBoundary_t1115739400 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MLWorldPlaneBoundary_t1115739400  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.MagicLeap.MLWorldPolygon[]
struct MLWorldPolygonU5BU5D_t555778173  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MLWorldPolygon_t751043636  m_Items[1];

public:
	inline MLWorldPolygon_t751043636  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MLWorldPolygon_t751043636 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MLWorldPolygon_t751043636  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MLWorldPolygon_t751043636  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MLWorldPolygon_t751043636 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MLWorldPolygon_t751043636  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.MagicLeap.MLWorldPlane[]
struct MLWorldPlaneU5BU5D_t829094281  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MLWorldPlane_t893955864  m_Items[1];

public:
	inline MLWorldPlane_t893955864  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MLWorldPlane_t893955864 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MLWorldPlane_t893955864  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MLWorldPlane_t893955864  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MLWorldPlane_t893955864 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MLWorldPlane_t893955864  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]
struct MLWorldPlaneBoundariesU5BU5D_t1821879535  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MLWorldPlaneBoundaries_t1565814570  m_Items[1];

public:
	inline MLWorldPlaneBoundaries_t1565814570  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MLWorldPlaneBoundaries_t1565814570 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MLWorldPlaneBoundaries_t1565814570  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MLWorldPlaneBoundaries_t1565814570  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MLWorldPlaneBoundaries_t1565814570 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MLWorldPlaneBoundaries_t1565814570  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke(const MLWorldPlaneBoundary_t1115739400& unmarshaled, MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled);
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke_back(const MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled, MLWorldPlaneBoundary_t1115739400& unmarshaled);
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke_cleanup(MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled);
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com(const MLWorldPlaneBoundary_t1115739400& unmarshaled, MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled);
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com_back(const MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled, MLWorldPlaneBoundary_t1115739400& unmarshaled);
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com_cleanup(MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke(const MLWorldPolygon_t751043636& unmarshaled, MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke_back(const MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled, MLWorldPolygon_t751043636& unmarshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke_cleanup(MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_com(const MLWorldPolygon_t751043636& unmarshaled, MLWorldPolygon_t751043636_marshaled_com& marshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_com_back(const MLWorldPolygon_t751043636_marshaled_com& marshaled, MLWorldPolygon_t751043636& unmarshaled);
extern "C" void MLWorldPolygon_t751043636_marshal_com_cleanup(MLWorldPolygon_t751043636_marshaled_com& marshaled);
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke(const YUVBuffer_t1120549612& unmarshaled, YUVBuffer_t1120549612_marshaled_pinvoke& marshaled);
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke_back(const YUVBuffer_t1120549612_marshaled_pinvoke& marshaled, YUVBuffer_t1120549612& unmarshaled);
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke_cleanup(YUVBuffer_t1120549612_marshaled_pinvoke& marshaled);
extern "C" void YUVBuffer_t1120549612_marshal_com(const YUVBuffer_t1120549612& unmarshaled, YUVBuffer_t1120549612_marshaled_com& marshaled);
extern "C" void YUVBuffer_t1120549612_marshal_com_back(const YUVBuffer_t1120549612_marshaled_com& marshaled, YUVBuffer_t1120549612& unmarshaled);
extern "C" void YUVBuffer_t1120549612_marshal_com_cleanup(YUVBuffer_t1120549612_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1__ctor_m3813194182_gshared (MLAPISingleton_1_t2872887908 * __this, const RuntimeMethod* method);
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MLAPISingleton_1_get_Instance_m3294954138_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::IsValidInstance()
extern "C" IL2CPP_METHOD_ATTR bool MLAPISingleton_1_IsValidInstance_m1326148161_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::BaseStart()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLAPISingleton_1_BaseStart_m2686327205_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentFileStorage_1__ctor_m2394374796_gshared (MLPersistentFileStorage_1_t3733006835 * __this, const RuntimeMethod* method);
// MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MLPersistentFileStorage_1_Load_m319393528_gshared (MLPersistentFileStorage_1_t3733006835 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>::Save(System.String,MLContentBindings)
extern "C" IL2CPP_METHOD_ATTR bool MLPersistentFileStorage_1_Save_m634271050_gshared (MLPersistentFileStorage_1_t3733006835 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47825339_gshared (Dictionary_2_t918551439 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m2106534252_gshared (Func_2_t1795932145 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2640735603_gshared (Dictionary_2_t918551439 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2080406004_gshared (Dictionary_2_t918551439 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3817465632_gshared (Dictionary_2_t918551439 * __this, uint32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t1108226910 * Dictionary_2_get_Keys_m940314689_gshared (Dictionary_2_t918551439 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2805305761_gshared (List_1_t2959647623 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t553924204  List_1_GetEnumerator_m494563792_gshared (List_1_t2959647623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivilegeId>::get_Current()
extern "C" IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m644941155_gshared (Enumerator_t553924204 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivilegeId>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1013546311_gshared (Enumerator_t553924204 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m3294212910_gshared (Action_2_t1067572169 * __this, MLResult_t265502022  p0, uint32_t p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m1683359748_gshared (Dictionary_2_t918551439 * __this, uint32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3051578013_gshared (Dictionary_2_t918551439 * __this, uint32_t p0, const RuntimeMethod* method);
// !1 System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m4274196053_gshared (Func_2_t1795932145 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1251347527_gshared (Dictionary_2_t3242901112 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" IL2CPP_METHOD_ATTR ValueCollection_t663978134 * Dictionary_2_get_Values_m426494178_gshared (Dictionary_2_t3242901112 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3811794769  ValueCollection_GetEnumerator_m4218083842_gshared (ValueCollection_t663978134 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1306394347_gshared (Enumerator_t3811794769 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3873905035_gshared (Enumerator_t3811794769 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1860259576_gshared (Dictionary_2_t3242901112 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t3432576583 * Dictionary_2_get_Keys_m2357732402_gshared (Dictionary_2_t3242901112 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m14275872_gshared (List_1_t1311147538 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3200391415  List_1_GetEnumerator_m1477228033_gshared (List_1_t1311147538 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.UInt64>::get_Current()
extern "C" IL2CPP_METHOD_ATTR uint64_t Enumerator_get_Current_m3398180830_gshared (Enumerator_t3200391415 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2256841521_gshared (Dictionary_2_t3242901112 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt64>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1114585714_gshared (Enumerator_t3200391415 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m698893651_gshared (Dictionary_2_t3242901112 * __this, uint64_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1178167052_gshared (Dictionary_2_t3242901112 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3425078096  KeyCollection_GetEnumerator_m1954083509_gshared (KeyCollection_t3432576583 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR uint64_t Enumerator_get_Current_m1225301124_gshared (Enumerator_t3425078096 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<UnityEngine.XR.MagicLeap.MLResult,System.Object,System.Object>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m2605881604_gshared (Action_3_t1256390787 * __this, MLResult_t265502022  p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.MagicLeap.MLResult,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m2396645086_gshared (Action_2_t2660105452 * __this, MLResult_t265502022  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1508577259_gshared (Enumerator_t3425078096 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3937881832_gshared (Dictionary_2_t3595261788 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m29744162_gshared (Dictionary_2_t3595261788 * __this, uint64_t p0, MLRaycastResult_t3432466840  p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t3784937259 * Dictionary_2_get_Keys_m1812259646_gshared (Dictionary_2_t3595261788 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3777438772  KeyCollection_GetEnumerator_m2409833759_gshared (KeyCollection_t3784937259 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Current()
extern "C" IL2CPP_METHOD_ATTR uint64_t Enumerator_get_Current_m2334559211_gshared (Enumerator_t3777438772 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR MLRaycastResult_t3432466840  Dictionary_2_get_Item_m1024048780_gshared (Dictionary_2_t3595261788 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m852263570_gshared (Enumerator_t3777438772 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>::.ctor()
#define Dictionary_2__ctor_m3634040152(__this, method) ((  void (*) (Dictionary_2_t567270095 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>::.ctor()
#define MLAPISingleton_1__ctor_m3472792385(__this, method) ((  void (*) (MLAPISingleton_1_t1485281829 *, const RuntimeMethod*))MLAPISingleton_1__ctor_m3813194182_gshared)(__this, method)
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>::get_Instance()
#define MLAPISingleton_1_get_Instance_m1889607474(__this /* static, unused */, method) ((  MLPersistentStore_t1692500085 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_get_Instance_m3294954138_gshared)(__this /* static, unused */, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>::IsValidInstance()
#define MLAPISingleton_1_IsValidInstance_m1441028858(__this /* static, unused */, method) ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_IsValidInstance_m1326148161_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore__ctor_m850784991 (MLPersistentStore_t1692500085 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_CreateInstance_m3652746897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPersistentStore>::BaseStart()
#define MLAPISingleton_1_BaseStart_m3102707757(__this /* static, unused */, method) ((  MLResult_t265502022  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_BaseStart_m2686327205_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::LoadBindings()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_LoadBindings_m1577149611 (MLPersistentStore_t1692500085 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m18499570 (MLResult_t265502022 * __this, int32_t ___resultCode0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings>::.ctor()
#define MLPersistentFileStorage_1__ctor_m3597687518(__this, method) ((  void (*) (MLPersistentFileStorage_1_t1427508899 *, const RuntimeMethod*))MLPersistentFileStorage_1__ctor_m2394374796_gshared)(__this, method)
// MLContentBindings UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings>::Load(System.String)
#define MLPersistentFileStorage_1_Load_m1031024647(__this, p0, method) ((  MLContentBindings_t774608228 * (*) (MLPersistentFileStorage_1_t1427508899 *, String_t*, const RuntimeMethod*))MLPersistentFileStorage_1_Load_m319393528_gshared)(__this, p0, method)
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::CacheData(UnityEngine.XR.MagicLeap.MLContentBindings)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_CacheData_m1273779862 (MLPersistentStore_t1692500085 * __this, MLContentBindings_t774608228 * ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLContentBindings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLContentBindings__ctor_m1873460414 (MLContentBindings_t774608228 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>::.ctor()
#define List_1__ctor_m2417779515(__this, method) ((  void (*) (List_1_t2254088538 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>::GetEnumerator()
#define List_1_GetEnumerator_m3952526511(__this, method) ((  Enumerator_t4143332415  (*) (List_1_t2254088538 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLContentBinding>::get_Current()
#define Enumerator_get_Current_m4188341177(__this, method) ((  MLContentBinding_t782013796 * (*) (Enumerator_t4143332415 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m646611730(__this, p0, method) ((  bool (*) (Dictionary_2_t567270095 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>::Add(!0,!1)
#define Dictionary_2_Add_m1935860828(__this, p0, p1, method) ((  void (*) (Dictionary_2_t567270095 *, String_t*, MLContentBinding_t782013796 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::ErrorFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_ErrorFormat_m663780805 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLContentBinding>::MoveNext()
#define Enumerator_MoveNext_m813455213(__this, method) ((  bool (*) (Enumerator_t4143332415 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentStore::ContainsInternal(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MLPersistentStore_ContainsInternal_m2925873846 (MLPersistentStore_t1692500085 * __this, String_t* ___virtualObjId0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPersistentStore::LoadInternal(System.String,UnityEngine.XR.MagicLeap.MLContentBinding&)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPersistentStore_LoadInternal_m1897615709 (MLPersistentStore_t1692500085 * __this, String_t* ___virtualObjId0, MLContentBinding_t782013796 ** ___binding1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLContentBinding::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLContentBinding__ctor_m1882622984 (MLContentBinding_t782013796 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode,System.String)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m899246048 (MLResult_t265502022 * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>::get_Item(!0)
#define Dictionary_2_get_Item_m950280343(__this, p0, method) ((  MLContentBinding_t782013796 * (*) (Dictionary_2_t567270095 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<UnityEngine.XR.MagicLeap.MLContentBindings>::Save(System.String,MLContentBindings)
#define MLPersistentFileStorage_1_Save_m1274139372(__this, p0, p1, method) ((  bool (*) (MLPersistentFileStorage_1_t1427508899 *, String_t*, MLContentBindings_t774608228 *, const RuntimeMethod*))MLPersistentFileStorage_1_Save_m634271050_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::InternalSave(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_InternalSave_m2663847312 (MLPersistentStore_t1692500085 * __this, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLContentBinding::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool MLContentBinding_get_IsValid_m2436486059 (MLContentBinding_t782013796 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Error(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Error_m2481084810 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>::Contains(!0)
#define List_1_Contains_m2172433515(__this, p0, method) ((  bool (*) (List_1_t2254088538 *, MLContentBinding_t782013796 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>::Add(!0)
#define List_1_Add_m401685647(__this, p0, method) ((  void (*) (List_1_t2254088538 *, MLContentBinding_t782013796 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::InternalDeleteBinding(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_InternalDeleteBinding_m3676039623 (MLPersistentStore_t1692500085 * __this, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding>::Remove(!0)
#define List_1_Remove_m4126410017(__this, p0, method) ((  bool (*) (List_1_t2254088538 *, MLContentBinding_t782013796 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.MagicLeap.MLContentBinding>::Remove(!0)
#define Dictionary_2_Remove_m2935512818(__this, p0, method) ((  bool (*) (Dictionary_2_t567270095 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m575266265 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::.ctor()
#define Dictionary_2__ctor_m1452536154(__this, method) ((  void (*) (Dictionary_2_t644911818 *, const RuntimeMethod*))Dictionary_2__ctor_m47825339_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>::.ctor()
#define MLAPISingleton_1__ctor_m708467073(__this, method) ((  void (*) (MLAPISingleton_1_t1282713979 *, const RuntimeMethod*))MLAPISingleton_1__ctor_m3813194182_gshared)(__this, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>::IsValidInstance()
#define MLAPISingleton_1_IsValidInstance_m1089243868(__this /* static, unused */, method) ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_IsValidInstance_m1326148161_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges__ctor_m3632535423 (MLPrivileges_t1489932235 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_CreateInstance_m2669308799 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>::BaseStart()
#define MLAPISingleton_1_BaseStart_m2260802994(__this /* static, unused */, method) ((  MLResult_t265502022  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_BaseStart_m2686327205_gshared)(__this /* static, unused */, method)
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PrivilegesApiNativeBindings::MLPrivilegesStartup()
extern "C" IL2CPP_METHOD_ATTR int32_t PrivilegesApiNativeBindings_MLPrivilegesStartup_m3155357192 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2424052174(__this, p0, p1, method) ((  void (*) (Func_2_t563276670 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2106534252_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode,System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m1759028860 (MLResult_t265502022 * __this, int32_t ___resultCode0, Func_2_t563276670 * ___resultStringer1, const RuntimeMethod* method);
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLPrivileges>::get_Instance()
#define MLAPISingleton_1_get_Instance_m1138459504(__this /* static, unused */, method) ((  MLPrivileges_t1489932235 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_get_Instance_m3294954138_gshared)(__this /* static, unused */, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::Clear()
#define Dictionary_2_Clear_m2062726206(__this, method) ((  void (*) (Dictionary_2_t644911818 *, const RuntimeMethod*))Dictionary_2_Clear_m2640735603_gshared)(__this, method)
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PrivilegesApiNativeBindings::MLPrivilegesShutdown()
extern "C" IL2CPP_METHOD_ATTR int32_t PrivilegesApiNativeBindings_MLPrivilegesShutdown_m3474603340 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLResult::get_IsOk()
extern "C" IL2CPP_METHOD_ATTR bool MLResult_get_IsOk_m578243083 (MLResult_t265502022 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::ProcessPendingQueries()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_ProcessPendingQueries_m1848275908 (MLPrivileges_t1489932235 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1056690393(__this, p0, method) ((  bool (*) (Dictionary_2_t644911818 *, uint32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2080406004_gshared)(__this, p0, method)
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PrivilegesApiNativeBindings::MLPrivilegesRequestPrivilegeAsync(UnityEngine.XR.MagicLeap.MLPrivilegeId,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t PrivilegesApiNativeBindings_MLPrivilegesRequestPrivilegeAsync_m4187851999 (RuntimeObject * __this /* static, unused */, uint32_t ___privilegeId0, intptr_t* ___request1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::.ctor(System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>,System.IntPtr,UnityEngine.XR.MagicLeap.MLPrivilegeId)
extern "C" IL2CPP_METHOD_ATTR void RequestPrivilegeQuery__ctor_m4198570648 (RequestPrivilegeQuery_t2806466543 * __this, Action_2_t1067572169 * ___callback0, intptr_t ___request1, uint32_t ___privilege2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::Add(!0,!1)
#define Dictionary_2_Add_m1818062991(__this, p0, p1, method) ((  void (*) (Dictionary_2_t644911818 *, uint32_t, RequestPrivilegeQuery_t2806466543 *, const RuntimeMethod*))Dictionary_2_Add_m3817465632_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::get_Keys()
#define Dictionary_2_get_Keys_m2630551117(__this, method) ((  KeyCollection_t834587289 * (*) (Dictionary_2_t644911818 *, const RuntimeMethod*))Dictionary_2_get_Keys_m940314689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2805305761(__this, p0, method) ((  void (*) (List_1_t2959647623 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m2805305761_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::.ctor()
#define List_1__ctor_m313014393(__this, method) ((  void (*) (List_1_t4278541285 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivilegeId>::GetEnumerator()
#define List_1_GetEnumerator_m494563792(__this, method) ((  Enumerator_t553924204  (*) (List_1_t2959647623 *, const RuntimeMethod*))List_1_GetEnumerator_m494563792_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivilegeId>::get_Current()
#define Enumerator_get_Current_m644941155(__this, method) ((  uint32_t (*) (Enumerator_t553924204 *, const RuntimeMethod*))Enumerator_get_Current_m644941155_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::RequestPrivilegeStatus(UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_RequestPrivilegeStatus_m1688795195 (MLPrivileges_t1489932235 * __this, uint32_t ___privilegeId0, List_1_t4278541285 * ___completedQueries1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivilegeId>::MoveNext()
#define Enumerator_MoveNext_m1013546311(__this, method) ((  bool (*) (Enumerator_t553924204 *, const RuntimeMethod*))Enumerator_MoveNext_m1013546311_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::ProcessCompletedQueries(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_ProcessCompletedQueries_m414769647 (MLPrivileges_t1489932235 * __this, List_1_t4278541285 * ___completedQueries0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::GetEnumerator()
#define List_1_GetEnumerator_m962900038(__this, method) ((  Enumerator_t1872817866  (*) (List_1_t4278541285 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::get_Current()
#define Enumerator_get_Current_m1933130926(__this, method) ((  RequestPrivilegeQuery_t2806466543 * (*) (Enumerator_t1872817866 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>::Invoke(!0,!1)
#define Action_2_Invoke_m3294212910(__this, p0, p1, method) ((  void (*) (Action_2_t1067572169 *, MLResult_t265502022 , uint32_t, const RuntimeMethod*))Action_2_Invoke_m3294212910_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::MoveNext()
#define Enumerator_MoveNext_m2604661306(__this, method) ((  bool (*) (Enumerator_t1872817866 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::get_Item(!0)
#define Dictionary_2_get_Item_m2186518206(__this, p0, method) ((  RequestPrivilegeQuery_t2806466543 * (*) (Dictionary_2_t644911818 *, uint32_t, const RuntimeMethod*))Dictionary_2_get_Item_m1683359748_gshared)(__this, p0, method)
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PrivilegesApiNativeBindings::MLPrivilegesRequestPrivilegeTryGet(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t PrivilegesApiNativeBindings_MLPrivilegesRequestPrivilegeTryGet_m1103042580 (RuntimeObject * __this /* static, unused */, intptr_t ___request0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::Add(!0)
#define List_1_Add_m1383809553(__this, p0, method) ((  void (*) (List_1_t4278541285 *, RequestPrivilegeQuery_t2806466543 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MagicLeap.MLPrivilegeId,UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>::Remove(!0)
#define Dictionary_2_Remove_m2761173242(__this, p0, method) ((  bool (*) (Dictionary_2_t644911818 *, uint32_t, const RuntimeMethod*))Dictionary_2_Remove_m3051578013_gshared)(__this, p0, method)
// System.IntPtr MagicLeapInternal.PrivilegesApiNativeBindings::MLPrivilegesGetResultString(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR intptr_t PrivilegesApiNativeBindings_MLPrivilegesGetResultString_m1636711003 (RuntimeObject * __this /* static, unused */, int32_t ___result0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m2474145239 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLResult::set_Code(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR void MLResult_set_Code_m3511893626 (MLResult_t265502022 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String MagicLeapInternal.MagicLeapNativeBindings::MLGetResultString(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR String_t* MagicLeapNativeBindings_MLGetResultString_m2945365584 (RuntimeObject * __this /* static, unused */, int32_t ___result0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode UnityEngine.XR.MagicLeap.MLResult::get_Code()
extern "C" IL2CPP_METHOD_ATTR int32_t MLResult_get_Code_m815222229 (MLResult_t265502022 * __this, const RuntimeMethod* method);
// !1 System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>::Invoke(!0)
#define Func_2_Invoke_m484750874(__this, p0, method) ((  String_t* (*) (Func_2_t563276670 *, int32_t, const RuntimeMethod*))Func_2_Invoke_m4274196053_gshared)(__this, p0, method)
// System.String UnityEngine.XR.MagicLeap.MLResult::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MLResult_ToString_m2357201379 (MLResult_t265502022 * __this, const RuntimeMethod* method);
// System.IntPtr MagicLeapInternal.MagicLeapNativeBindings::MLSnapshotGetResultString(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR intptr_t MagicLeapNativeBindings_MLSnapshotGetResultString_m811262212 (RuntimeObject * __this /* static, unused */, int32_t ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLKeyPoint::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLKeyPoint__ctor_m1054801110 (MLKeyPoint_t2457746220 * __this, bool ___valid0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_Tip(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_Tip_m1451869089 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_IP(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_IP_m2461086816 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_MCP(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_MCP_m1189870082 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_CMC(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_CMC_m2281774863 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>::.ctor()
#define List_1__ctor_m977214386(__this, method) ((  void (*) (List_1_t3929820962 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_KeyPoints(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_KeyPoints_m3759159430 (MLThumb_t652336835 * __this, List_1_t3929820962 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_Tip()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_Tip_m821651102 (MLThumb_t652336835 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLKeyPoint::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool MLKeyPoint_get_IsValid_m1846993851 (MLKeyPoint_t2457746220 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLThumb::get_KeyPoints()
extern "C" IL2CPP_METHOD_ATTR List_1_t3929820962 * MLThumb_get_KeyPoints_m1130332393 (MLThumb_t652336835 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>::Add(!0)
#define List_1_Add_m1804663636(__this, p0, method) ((  void (*) (List_1_t3929820962 *, MLKeyPoint_t2457746220 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_IP()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_IP_m1499952108 (MLThumb_t652336835 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_MCP()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_MCP_m3239949728 (MLThumb_t652336835 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_CMC()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_CMC_m2035951506 (MLThumb_t652336835 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.MagicLeapNativeBindings::MLSnapshotGetTransform(System.IntPtr,MagicLeapInternal.MagicLeapNativeBindings/MLCoordinateFrameUID&,MagicLeapInternal.MagicLeapNativeBindings/MLTransform&)
extern "C" IL2CPP_METHOD_ATTR int32_t MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387 (RuntimeObject * __this /* static, unused */, intptr_t ___snap0, MLCoordinateFrameUID_t515144641 * ___id1, MLTransform_t3435326713 * ___outTransform2, const RuntimeMethod* method);
// UnityEngine.Vector3 MagicLeapInternal.MLConvert::ToUnity(MagicLeapInternal.MagicLeapNativeBindings/MLVec3f,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  MLConvert_ToUnity_m254532658 (RuntimeObject * __this /* static, unused */, MLVec3f_t486797299  ___vec0, bool ___transformToRUF1, bool ___applyScale2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLKeyPoint::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MLKeyPoint_set_Position_m1226285128 (MLKeyPoint_t2457746220 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::.ctor()
#define Dictionary_2__ctor_m531202632(__this, method) ((  void (*) (Dictionary_2_t2852916536 *, const RuntimeMethod*))Dictionary_2__ctor_m1251347527_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>::.ctor()
#define MLAPISingleton_1__ctor_m3675945823(__this, method) ((  void (*) (MLAPISingleton_1_t689948872 *, const RuntimeMethod*))MLAPISingleton_1__ctor_m3813194182_gshared)(__this, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>::IsValidInstance()
#define MLAPISingleton_1_IsValidInstance_m2107751717(__this /* static, unused */, method) ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_IsValidInstance_m1326148161_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes__ctor_m512352524 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_CreateInstance_m495043801 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>::BaseStart()
#define MLAPISingleton_1_BaseStart_m2003534722(__this /* static, unused */, method) ((  MLResult_t265502022  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_BaseStart_m2686327205_gshared)(__this /* static, unused */, method)
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::CreatePlanesTracker()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_CreatePlanesTracker_m2112856877 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesCreate(System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesCreate_m2763124871 (RuntimeObject * __this /* static, unused */, uint64_t* ___handle0, const RuntimeMethod* method);
// System.Boolean MagicLeapInternal.MagicLeapNativeBindings::MLHandleIsValid(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR bool MagicLeapNativeBindings_MLHandleIsValid_m2044113266 (RuntimeObject * __this /* static, unused */, uint64_t ___handle0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::get_Values()
#define Dictionary_2_get_Values_m3202201288(__this, method) ((  ValueCollection_t273993558 * (*) (Dictionary_2_t2852916536 *, const RuntimeMethod*))Dictionary_2_get_Values_m426494178_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::GetEnumerator()
#define ValueCollection_GetEnumerator_m3085029500(__this, method) ((  Enumerator_t3421810193  (*) (ValueCollection_t273993558 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m4218083842_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::get_Current()
#define Enumerator_get_Current_m3028051899(__this, method) ((  Query_t2690121588 * (*) (Enumerator_t3421810193 *, const RuntimeMethod*))Enumerator_get_Current_m1306394347_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Query_Dispose_m3838602477 (Query_t2690121588 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::MoveNext()
#define Enumerator_MoveNext_m4053677450(__this, method) ((  bool (*) (Enumerator_t3421810193 *, const RuntimeMethod*))Enumerator_MoveNext_m3873905035_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::Clear()
#define Dictionary_2_Clear_m3935512194(__this, method) ((  void (*) (Dictionary_2_t2852916536 *, const RuntimeMethod*))Dictionary_2_Clear_m1860259576_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::DestroyNativeTracker()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_DestroyNativeTracker_m1786741380 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesDestroy(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesDestroy_m2253045321 (RuntimeObject * __this /* static, unused */, uint64_t ___planesTracker0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ProcessPendingQueries()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ProcessPendingQueries_m2055653149 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::get_Keys()
#define Dictionary_2_get_Keys_m4214368148(__this, method) ((  KeyCollection_t3042592007 * (*) (Dictionary_2_t2852916536 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2357732402_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m14275872(__this, p0, method) ((  void (*) (List_1_t1311147538 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m14275872_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
#define List_1_GetEnumerator_m1477228033(__this, method) ((  Enumerator_t3200391415  (*) (List_1_t1311147538 *, const RuntimeMethod*))List_1_GetEnumerator_m1477228033_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.UInt64>::get_Current()
#define Enumerator_get_Current_m3398180830(__this, method) ((  uint64_t (*) (Enumerator_t3200391415 *, const RuntimeMethod*))Enumerator_get_Current_m3398180830_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::get_Item(!0)
#define Dictionary_2_get_Item_m3792233323(__this, p0, method) ((  Query_t2690121588 * (*) (Dictionary_2_t2852916536 *, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_m2256841521_gshared)(__this, p0, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::GetQueryResultForHandle(System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_GetQueryResultForHandle_m1031431879 (MLWorldPlanes_t897167128 * __this, uint64_t ___handle0, Query_t2690121588 * ___query1, Dictionary_2_t2852916536 * ___completedQueries2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.UInt64>::MoveNext()
#define Enumerator_MoveNext_m1114585714(__this, method) ((  bool (*) (Enumerator_t3200391415 *, const RuntimeMethod*))Enumerator_MoveNext_m1114585714_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ProcessCompletedQueries(System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ProcessCompletedQueries_m4273076203 (MLWorldPlanes_t897167128 * __this, Dictionary_2_t2852916536 * ___completedQueries0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::get_CanRequestBoundaries()
extern "C" IL2CPP_METHOD_ATTR bool Query_get_CanRequestBoundaries_m1840087566 (Query_t2690121588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::get_IsRequestingBoundaries()
extern "C" IL2CPP_METHOD_ATTR bool Query_get_IsRequestingBoundaries_m2588259630 (Query_t2690121588 * __this, const RuntimeMethod* method);
// System.Void MagicLeapInternal.PlanesApiNativeBindings::MLPlaneBoundariesListInit(MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList&)
extern "C" IL2CPP_METHOD_ATTR void PlanesApiNativeBindings_MLPlaneBoundariesListInit_m310069473 (RuntimeObject * __this /* static, unused */, MLPlaneBoundariesList_t215409676 * ___boundariesList0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_m2294149499 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, intptr_t p1, bool p2, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesQueryGetResultsWithBoundaries(System.UInt64,System.UInt64,System.IntPtr,System.UInt32&,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesQueryGetResultsWithBoundaries_m3746688729 (RuntimeObject * __this /* static, unused */, uint64_t ___planesTracker0, uint64_t ___queryHandle1, intptr_t ___results2, uint32_t* ___numResults3, intptr_t ___planeBoundaries4, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesQueryGetResults(System.UInt64,System.UInt64,System.IntPtr,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesQueryGetResults_m355351042 (RuntimeObject * __this /* static, unused */, uint64_t ___planesTracker0, uint64_t ___queryHandle1, intptr_t ___results2, uint32_t* ___numResults3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractPlanesFromQueryResults(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, uint32_t ___numResults1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m771949023 (RuntimeObject * __this /* static, unused */, intptr_t p0, Type_t * p1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesReleaseBoundariesList(System.UInt64,MagicLeapInternal.PlanesApiNativeBindings/MLPlaneBoundariesList)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesReleaseBoundariesList_m2700064302 (RuntimeObject * __this /* static, unused */, uint64_t ___planesTracker0, MLPlaneBoundariesList_t215409676  ___planeBoundaries1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::Add(!0,!1)
#define Dictionary_2_Add_m310089197(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2852916536 *, uint64_t, Query_t2690121588 *, const RuntimeMethod*))Dictionary_2_Add_m698893651_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::Remove(!0)
#define Dictionary_2_Remove_m4117128284(__this, p0, method) ((  bool (*) (Dictionary_2_t2852916536 *, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m1178167052_gshared)(__this, p0, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractRectangularPlanes(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractRectangularPlanes_m467654221 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, uint32_t ___numResults1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractPolygonalPlanes(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractPolygonalPlanes_m3848234297 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_m3069307747 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Single MagicLeapInternal.MLConvert::ToUnity(System.Single)
extern "C" IL2CPP_METHOD_ATTR float MLConvert_ToUnity_m3479320760 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion MagicLeapInternal.MLConvert::ToUnity(MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  MLConvert_ToUnity_m1079097615 (RuntimeObject * __this /* static, unused */, MLQuaternionf_t1293654839  ___quat0, bool ___transformToRUF1, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
extern "C" IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m192765549 (intptr_t* __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m987476171 (intptr_t* __this, int64_t p0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldBoundariesArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlaneBoundariesU5BU5D_t1821879535* MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldPlaneBoundaryArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlaneBoundaryU5BU5D_t1423265241* MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetVector3Array(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* MLWorldPlanes_GetVector3Array_m116043022 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLWorldPolygon[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldPolygonArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPolygonU5BU5D_t555778173* MLWorldPlanes_GetMLWorldPolygonArray_m3447409925 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::GetEnumerator()
#define KeyCollection_GetEnumerator_m343274962(__this, method) ((  Enumerator_t3035093520  (*) (KeyCollection_t3042592007 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m1954083509_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::get_Current()
#define Enumerator_get_Current_m2460190571(__this, method) ((  uint64_t (*) (Enumerator_t3035093520 *, const RuntimeMethod*))Enumerator_get_Current_m1225301124_gshared)(__this, method)
// System.Void System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>::Invoke(!0,!1,!2)
#define Action_3_Invoke_m1533210316(__this, p0, p1, p2, method) ((  void (*) (Action_3_t4204205301 *, MLResult_t265502022 , MLWorldPlaneU5BU5D_t829094281*, MLWorldPlaneBoundariesU5BU5D_t1821879535*, const RuntimeMethod*))Action_3_Invoke_m2605881604_gshared)(__this, p0, p1, p2, method)
// System.Void System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]>::Invoke(!0,!1)
#define Action_2_Invoke_m1171916642(__this, p0, p1, method) ((  void (*) (Action_2_t409093569 *, MLResult_t265502022 , MLWorldPlaneU5BU5D_t829094281*, const RuntimeMethod*))Action_2_Invoke_m2396645086_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>::MoveNext()
#define Enumerator_MoveNext_m682503810(__this, method) ((  bool (*) (Enumerator_t3035093520 *, const RuntimeMethod*))Enumerator_MoveNext_m1508577259_gshared)(__this, method)
// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams UnityEngine.XR.MagicLeap.MLWorldPlanes::ValidateQueryParams(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlanesQueryParams_t4087992392  MLWorldPlanes_ValidateQueryParams_m1729142513 (RuntimeObject * __this /* static, unused */, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, const RuntimeMethod* method);
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldPlanes>::get_Instance()
#define MLAPISingleton_1_get_Instance_m3771610727(__this /* static, unused */, method) ((  MLWorldPlanes_t897167128 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_get_Instance_m3294954138_gshared)(__this /* static, unused */, method)
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::GetPlanesInternal(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams,System.Object)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_GetPlanesInternal_m804000014 (MLWorldPlanes_t897167128 * __this, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::BeginPlaneQuery(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams,System.Object)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_BeginPlaneQuery_m154042370 (MLWorldPlanes_t897167128 * __this, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// MagicLeapInternal.MagicLeapNativeBindings/MLVec3f MagicLeapInternal.MLConvert::FromUnity(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR MLVec3f_t486797299  MLConvert_FromUnity_m1623782790 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___vec0, bool ___transformFromRUF1, bool ___applyScale2, const RuntimeMethod* method);
// MagicLeapInternal.MagicLeapNativeBindings/MLQuaternionf MagicLeapInternal.MLConvert::FromUnity(UnityEngine.Quaternion,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR MLQuaternionf_t1293654839  MLConvert_FromUnity_m971747090 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  ___quat0, bool ___transformFromRUF1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.PlanesApiNativeBindings::MLPlanesQueryBegin(System.UInt64,MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQuery&,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t PlanesApiNativeBindings_MLPlanesQueryBegin_m113900280 (RuntimeObject * __this /* static, unused */, uint64_t ___planesTracker0, MLPlanesQuery_t647580137 * ___query1, uint64_t* ___handle2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes::IsRequestingBoundaries(MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQueryFlags)
extern "C" IL2CPP_METHOD_ATTR bool MLWorldPlanes_IsRequestingBoundaries_m1506575629 (MLWorldPlanes_t897167128 * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::.ctor(System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query__ctor_m828612218 (Query_t2690121588 * __this, Action_3_t4204205301 * ___callback0, uint32_t ___maxResults1, bool ___requestBoundaries2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::.ctor(System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]>,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void Query__ctor_m1371094385 (Query_t2690121588 * __this, Action_2_t409093569 * ___callback0, uint32_t ___maxResults1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Warning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Warning_m456580735 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::set_CanRequestBoundaries(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_set_CanRequestBoundaries_m3858444546 (Query_t2690121588 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::set_IsRequestingBoundaries(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_set_IsRequestingBoundaries_m3869185173 (Query_t2690121588 * __this, bool ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.MagicLeap.MagicLeapDevice::get_PlatformLevel()
extern "C" IL2CPP_METHOD_ATTR uint32_t MagicLeapDevice_get_PlatformLevel_m4029381879 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_Dispose_m831012807 (Query_t2690121588 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::.ctor()
#define Dictionary_2__ctor_m2115436320(__this, method) ((  void (*) (Dictionary_2_t436580975 *, const RuntimeMethod*))Dictionary_2__ctor_m1251347527_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>::.ctor()
#define MLAPISingleton_1__ctor_m389370787(__this, method) ((  void (*) (MLAPISingleton_1_t3511624579 *, const RuntimeMethod*))MLAPISingleton_1__ctor_m3813194182_gshared)(__this, method)
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>::IsValidInstance()
#define MLAPISingleton_1_IsValidInstance_m37160189(__this /* static, unused */, method) ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_IsValidInstance_m1326148161_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays__ctor_m110937502 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_CreateInstance_m2326537007 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>::BaseStart()
#define MLAPISingleton_1_BaseStart_m2346531178(__this /* static, unused */, method) ((  MLResult_t265502022  (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_BaseStart_m2686327205_gshared)(__this /* static, unused */, method)
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::EnableRayCast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_EnableRayCast_m2839752565 (MLWorldRays_t3718842835 * __this, bool ___isEnabled0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.RaycastApiNativeBindings::MLRaycastCreate(System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastApiNativeBindings_MLRaycastCreate_m3911004103 (RuntimeObject * __this /* static, unused */, uint64_t* ___trackerHandle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::Clear()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_Clear_m2911191125 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::DestroyNativeTracker()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_DestroyNativeTracker_m65768388 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.RaycastApiNativeBindings::MLRaycastDestroy(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastApiNativeBindings_MLRaycastDestroy_m1878973286 (RuntimeObject * __this /* static, unused */, uint64_t ___trackerHandle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::Clear()
#define Dictionary_2_Clear_m1912202939(__this, method) ((  void (*) (Dictionary_2_t436580975 *, const RuntimeMethod*))Dictionary_2_Clear_m1860259576_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::.ctor()
#define Dictionary_2__ctor_m3937881832(__this, method) ((  void (*) (Dictionary_2_t3595261788 *, const RuntimeMethod*))Dictionary_2__ctor_m3937881832_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::get_Keys()
#define Dictionary_2_get_Keys_m2452223945(__this, method) ((  KeyCollection_t626256446 * (*) (Dictionary_2_t436580975 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2357732402_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::GetEnumerator()
#define KeyCollection_GetEnumerator_m784870435(__this, method) ((  Enumerator_t618757959  (*) (KeyCollection_t626256446 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m1954083509_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::get_Current()
#define Enumerator_get_Current_m1886482871(__this, method) ((  uint64_t (*) (Enumerator_t618757959 *, const RuntimeMethod*))Enumerator_get_Current_m1225301124_gshared)(__this, method)
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.RaycastApiNativeBindings::MLRaycastGetResult(System.UInt64,System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult&)
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastApiNativeBindings_MLRaycastGetResult_m3779525067 (RuntimeObject * __this /* static, unused */, uint64_t ___trackerHandle0, uint64_t ___raycastRequest1, MLRaycastResult_t3432466840 * ___result2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::Add(!0,!1)
#define Dictionary_2_Add_m29744162(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3595261788 *, uint64_t, MLRaycastResult_t3432466840 , const RuntimeMethod*))Dictionary_2_Add_m29744162_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::MoveNext()
#define Enumerator_MoveNext_m3476970948(__this, method) ((  bool (*) (Enumerator_t618757959 *, const RuntimeMethod*))Enumerator_MoveNext_m1508577259_gshared)(__this, method)
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::PublishResults(System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_PublishResults_m3834204153 (MLWorldRays_t3718842835 * __this, Dictionary_2_t3595261788 * ___completedQueries0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Keys()
#define Dictionary_2_get_Keys_m1812259646(__this, method) ((  KeyCollection_t3784937259 * (*) (Dictionary_2_t3595261788 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1812259646_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::GetEnumerator()
#define KeyCollection_GetEnumerator_m2409833759(__this, method) ((  Enumerator_t3777438772  (*) (KeyCollection_t3784937259 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m2409833759_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Current()
#define Enumerator_get_Current_m2334559211(__this, method) ((  uint64_t (*) (Enumerator_t3777438772 *, const RuntimeMethod*))Enumerator_get_Current_m2334559211_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::get_Item(!0)
#define Dictionary_2_get_Item_m773252330(__this, p0, method) ((  ResultCallback_t273786027 * (*) (Dictionary_2_t436580975 *, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_m2256841521_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::Remove(!0)
#define Dictionary_2_Remove_m2551690312(__this, p0, method) ((  bool (*) (Dictionary_2_t436580975 *, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m1178167052_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::get_Item(!0)
#define Dictionary_2_get_Item_m1024048780(__this, p0, method) ((  MLRaycastResult_t3432466840  (*) (Dictionary_2_t3595261788 *, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_m1024048780_gshared)(__this, p0, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback::Invoke(UnityEngine.XR.MagicLeap.MLWorldRays/MLWorldRaycastResultState,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ResultCallback_Invoke_m3918620459 (ResultCallback_t273786027 * __this, int32_t ___state0, Vector3_t3722313464  ___hitpoint1, Vector3_t3722313464  ___normal2, float ___confidence3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>::MoveNext()
#define Enumerator_MoveNext_m852263570(__this, method) ((  bool (*) (Enumerator_t3777438772 *, const RuntimeMethod*))Enumerator_MoveNext_m852263570_gshared)(__this, method)
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<UnityEngine.XR.MagicLeap.MLWorldRays>::get_Instance()
#define MLAPISingleton_1_get_Instance_m2552627568(__this /* static, unused */, method) ((  MLWorldRays_t3718842835 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))MLAPISingleton_1_get_Instance_m3294954138_gshared)(__this /* static, unused */, method)
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::GetWorldRaysInternal(UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_GetWorldRaysInternal_m2427709051 (MLWorldRays_t3718842835 * __this, QueryParams_t2257812863 * ___query0, ResultCallback_t273786027 * ___callback1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::RequestRays(UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_RequestRays_m3648928211 (MLWorldRays_t3718842835 * __this, QueryParams_t2257812863 * ___query0, ResultCallback_t273786027 * ___callback1, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLResultCode MagicLeapInternal.RaycastApiNativeBindings::MLRaycastRequest(System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastQuery&,System.UInt64&)
extern "C" IL2CPP_METHOD_ATTR int32_t RaycastApiNativeBindings_MLRaycastRequest_m3115572012 (RuntimeObject * __this /* static, unused */, uint64_t ___trackerHandle0, MLRaycastQuery_t3337934584 * ___request1, uint64_t* ___queryHandle2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback>::Add(!0,!1)
#define Dictionary_2_Add_m3502265607(__this, p0, p1, method) ((  void (*) (Dictionary_2_t436580975 *, uint64_t, ResultCallback_t273786027 *, const RuntimeMethod*))Dictionary_2_Add_m698893651_gshared)(__this, p0, p1, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Center(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Center_m3540272568 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Ulnar(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Ulnar_m3352492981 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Radial(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Radial_m1091520556 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_KeyPoints(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_KeyPoints_m79121153 (MLWrist_t4207073659 * __this, List_1_t3929820962 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Center()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Center_m1680979287 (MLWrist_t4207073659 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLWrist::get_KeyPoints()
extern "C" IL2CPP_METHOD_ATTR List_1_t3929820962 * MLWrist_get_KeyPoints_m156169264 (MLWrist_t4207073659 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Ulnar()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Ulnar_m2865653812 (MLWrist_t4207073659 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Radial()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Radial_m3701760810 (MLWrist_t4207073659 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.YUVBuffer::CopyFromPlane(UnityEngine.XR.MagicLeap.MLCameraPlaneInfo)
extern "C" IL2CPP_METHOD_ATTR void YUVBuffer_CopyFromPlane_m3997292803 (YUVBuffer_t1120549612 * __this, MLCameraPlaneInfo_t532240353  ___plane0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MLPersistentCoordinateFrames/GetPCFPositionQuery::.ctor(UnityEngine.XR.MagicLeap.MLPCF,System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPCF>)
extern "C" IL2CPP_METHOD_ATTR void GetPCFPositionQuery__ctor_m3111794024 (GetPCFPositionQuery_t4278136314 * __this, MLPCF_t2390192560 * ___pcf0, Action_2_t1970191848 * ___cb1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetPCFPositionQuery__ctor_m3111794024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(GetPCFPositionQuery__ctor_m3111794024_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MLPCF_t2390192560 * L_0 = ___pcf0;
		__this->set_PCF_0(L_0);
		Action_2_t1970191848 * L_1 = ___cb1;
		__this->set_CB_1(L_1);
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
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore__ctor_m850784991 (MLPersistentStore_t1692500085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore__ctor_m850784991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore__ctor_m850784991_RuntimeMethod_var);
	{
		__this->set__fileName_3(_stringLiteral3610044383);
		Dictionary_2_t567270095 * L_0 = (Dictionary_2_t567270095 *)il2cpp_codegen_object_new(Dictionary_2_t567270095_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3634040152(L_0, /*hidden argument*/Dictionary_2__ctor_m3634040152_RuntimeMethod_var);
		__this->set__virtualIdToBindings_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLAPISingleton_1__ctor_m3472792385(__this, /*hidden argument*/MLAPISingleton_1__ctor_m3472792385_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLContentBinding> UnityEngine.XR.MagicLeap.MLPersistentStore::get_AllBindings()
extern "C" IL2CPP_METHOD_ATTR List_1_t2254088538 * MLPersistentStore_get_AllBindings_m3236505811 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_get_AllBindings_m3236505811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_get_AllBindings_m3236505811_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLPersistentStore_t1692500085 * L_0 = MLAPISingleton_1_get_Instance_m1889607474(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var);
		NullCheck(L_0);
		MLContentBindings_t774608228 * L_1 = L_0->get__data_6();
		NullCheck(L_1);
		List_1_t2254088538 * L_2 = L_1->get_Bindings_1();
		return L_2;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_CreateInstance_m3652746897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_CreateInstance_m3652746897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_CreateInstance_m3652746897_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		bool L_0 = MLAPISingleton_1_IsValidInstance_m1441028858(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_IsValidInstance_m1441028858_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MLPersistentStore_t1692500085 * L_1 = (MLPersistentStore_t1692500085 *)il2cpp_codegen_object_new(MLPersistentStore_t1692500085_il2cpp_TypeInfo_var);
		MLPersistentStore__ctor_m850784991(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		((MLAPISingleton_1_t1485281829_StaticFields*)il2cpp_codegen_static_fields_for(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var))->set__instance_0(L_1);
	}

IL_0014:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPersistentStore::Start()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPersistentStore_Start_m2084181192 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_Start_m2084181192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_Start_m2084181192_RuntimeMethod_var);
	{
		MLPersistentStore_CreateInstance_m3652746897(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLResult_t265502022  L_0 = MLAPISingleton_1_BaseStart_m3102707757(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_BaseStart_m3102707757_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPersistentStore::StartAPI()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPersistentStore_StartAPI_m1125451185 (MLPersistentStore_t1692500085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_StartAPI_m1125451185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_StartAPI_m1125451185_RuntimeMethod_var);
	{
		MLPersistentStore_LoadBindings_m1577149611(__this, /*hidden argument*/NULL);
		MLResult_t265502022  L_0;
		memset(&L_0, 0, sizeof(L_0));
		MLResult__ctor_m18499570((&L_0), 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::LoadBindings()
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_LoadBindings_m1577149611 (MLPersistentStore_t1692500085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_LoadBindings_m1577149611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_LoadBindings_m1577149611_RuntimeMethod_var);
	{
		MLPersistentFileStorage_1_t1427508899 * L_0 = (MLPersistentFileStorage_1_t1427508899 *)il2cpp_codegen_object_new(MLPersistentFileStorage_1_t1427508899_il2cpp_TypeInfo_var);
		MLPersistentFileStorage_1__ctor_m3597687518(L_0, /*hidden argument*/MLPersistentFileStorage_1__ctor_m3597687518_RuntimeMethod_var);
		__this->set__persistentStore_5(L_0);
		MLPersistentFileStorage_1_t1427508899 * L_1 = __this->get__persistentStore_5();
		String_t* L_2 = __this->get__fileName_3();
		NullCheck(L_1);
		MLContentBindings_t774608228 * L_3 = MLPersistentFileStorage_1_Load_m1031024647(L_1, L_2, /*hidden argument*/MLPersistentFileStorage_1_Load_m1031024647_RuntimeMethod_var);
		__this->set__data_6(L_3);
		MLContentBindings_t774608228 * L_4 = __this->get__data_6();
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MLContentBindings_t774608228 * L_5 = __this->get__data_6();
		MLPersistentStore_CacheData_m1273779862(__this, L_5, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_003e:
	{
		MLContentBindings_t774608228 * L_6 = (MLContentBindings_t774608228 *)il2cpp_codegen_object_new(MLContentBindings_t774608228_il2cpp_TypeInfo_var);
		MLContentBindings__ctor_m1873460414(L_6, /*hidden argument*/NULL);
		__this->set__data_6(L_6);
		MLContentBindings_t774608228 * L_7 = __this->get__data_6();
		List_1_t2254088538 * L_8 = (List_1_t2254088538 *)il2cpp_codegen_object_new(List_1_t2254088538_il2cpp_TypeInfo_var);
		List_1__ctor_m2417779515(L_8, /*hidden argument*/List_1__ctor_m2417779515_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_Bindings_1(L_8);
		MLContentBindings_t774608228 * L_9 = __this->get__data_6();
		NullCheck(L_9);
		L_9->set_Version_0(_stringLiteral3749140265);
	}

IL_0069:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::CacheData(UnityEngine.XR.MagicLeap.MLContentBindings)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_CacheData_m1273779862 (MLPersistentStore_t1692500085 * __this, MLContentBindings_t774608228 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_CacheData_m1273779862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_CacheData_m1273779862_RuntimeMethod_var);
	MLContentBinding_t782013796 * V_0 = NULL;
	Enumerator_t4143332415  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MLContentBindings_t774608228 * L_0 = ___data0;
		NullCheck(L_0);
		List_1_t2254088538 * L_1 = L_0->get_Bindings_1();
		NullCheck(L_1);
		Enumerator_t4143332415  L_2 = List_1_GetEnumerator_m3952526511(L_1, /*hidden argument*/List_1_GetEnumerator_m3952526511_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0011:
		{
			MLContentBinding_t782013796 * L_3 = Enumerator_get_Current_m4188341177((Enumerator_t4143332415 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4188341177_RuntimeMethod_var);
			V_0 = L_3;
			Dictionary_2_t567270095 * L_4 = __this->get__virtualIdToBindings_4();
			MLContentBinding_t782013796 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_ObjectId_0();
			NullCheck(L_4);
			bool L_7 = Dictionary_2_ContainsKey_m646611730(L_4, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m646611730_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0046;
			}
		}

IL_002f:
		{
			Dictionary_2_t567270095 * L_8 = __this->get__virtualIdToBindings_4();
			MLContentBinding_t782013796 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = L_9->get_ObjectId_0();
			MLContentBinding_t782013796 * L_11 = V_0;
			NullCheck(L_8);
			Dictionary_2_Add_m1935860828(L_8, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m1935860828_RuntimeMethod_var);
			goto IL_005f;
		}

IL_0046:
		{
			ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t2843939325* L_13 = L_12;
			MLContentBinding_t782013796 * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15 = L_14->get_ObjectId_0();
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_15);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
			MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral1305129047, L_13, /*hidden argument*/NULL);
		}

IL_005f:
		{
			bool L_16 = Enumerator_MoveNext_m813455213((Enumerator_t4143332415 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m813455213_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0011;
			}
		}

IL_006b:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		Enumerator_t4143332415  L_17 = V_1;
		Enumerator_t4143332415  L_18 = L_17;
		RuntimeObject * L_19 = Box(Enumerator_t4143332415_il2cpp_TypeInfo_var, &L_18);
		NullCheck((RuntimeObject*)L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentStore::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MLPersistentStore_Contains_m415070868 (RuntimeObject * __this /* static, unused */, String_t* ___virtualObjId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_Contains_m415070868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_Contains_m415070868_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLPersistentStore_t1692500085 * L_0 = MLAPISingleton_1_get_Instance_m1889607474(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var);
		String_t* L_1 = ___virtualObjId0;
		NullCheck(L_0);
		bool L_2 = MLPersistentStore_ContainsInternal_m2925873846(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLPersistentStore::ContainsInternal(System.String)
extern "C" IL2CPP_METHOD_ATTR bool MLPersistentStore_ContainsInternal_m2925873846 (MLPersistentStore_t1692500085 * __this, String_t* ___virtualObjId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_ContainsInternal_m2925873846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_ContainsInternal_m2925873846_RuntimeMethod_var);
	{
		Dictionary_2_t567270095 * L_0 = __this->get__virtualIdToBindings_4();
		String_t* L_1 = ___virtualObjId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m646611730(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m646611730_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPersistentStore::Load(System.String,UnityEngine.XR.MagicLeap.MLContentBinding&)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPersistentStore_Load_m2404750756 (RuntimeObject * __this /* static, unused */, String_t* ___virtualObjId0, MLContentBinding_t782013796 ** ___binding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_Load_m2404750756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_Load_m2404750756_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLPersistentStore_t1692500085 * L_0 = MLAPISingleton_1_get_Instance_m1889607474(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var);
		String_t* L_1 = ___virtualObjId0;
		MLContentBinding_t782013796 ** L_2 = ___binding1;
		NullCheck(L_0);
		MLResult_t265502022  L_3 = MLPersistentStore_LoadInternal_m1897615709(L_0, L_1, (MLContentBinding_t782013796 **)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPersistentStore::LoadInternal(System.String,UnityEngine.XR.MagicLeap.MLContentBinding&)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPersistentStore_LoadInternal_m1897615709 (MLPersistentStore_t1692500085 * __this, String_t* ___virtualObjId0, MLContentBinding_t782013796 ** ___binding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_LoadInternal_m1897615709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_LoadInternal_m1897615709_RuntimeMethod_var);
	{
		MLContentBinding_t782013796 ** L_0 = ___binding1;
		MLContentBinding_t782013796 * L_1 = (MLContentBinding_t782013796 *)il2cpp_codegen_object_new(MLContentBinding_t782013796_il2cpp_TypeInfo_var);
		MLContentBinding__ctor_m1882622984(L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)L_1);
		String_t* L_2 = ___virtualObjId0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		MLResult_t265502022  L_4;
		memset(&L_4, 0, sizeof(L_4));
		MLResult__ctor_m899246048((&L_4), 5, _stringLiteral297097126, /*hidden argument*/NULL);
		return L_4;
	}

IL_001e:
	{
		String_t* L_5 = ___virtualObjId0;
		bool L_6 = MLPersistentStore_ContainsInternal_m2925873846(__this, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		MLResult_t265502022  L_7;
		memset(&L_7, 0, sizeof(L_7));
		MLResult__ctor_m899246048((&L_7), 5, _stringLiteral253289519, /*hidden argument*/NULL);
		return L_7;
	}

IL_0036:
	{
		MLContentBinding_t782013796 ** L_8 = ___binding1;
		Dictionary_2_t567270095 * L_9 = __this->get__virtualIdToBindings_4();
		String_t* L_10 = ___virtualObjId0;
		NullCheck(L_9);
		MLContentBinding_t782013796 * L_11 = Dictionary_2_get_Item_m950280343(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m950280343_RuntimeMethod_var);
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_11;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(MLResult_t265502022_il2cpp_TypeInfo_var);
		MLResult_t265502022  L_12 = ((MLResult_t265502022_StaticFields*)il2cpp_codegen_static_fields_for(MLResult_t265502022_il2cpp_TypeInfo_var))->get_ResultOk_0();
		return L_12;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::CleanupAPI(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_CleanupAPI_m1885124633 (MLPersistentStore_t1692500085 * __this, bool ___isSafeToAccessManagedObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_CleanupAPI_m1885124633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_CleanupAPI_m1885124633_RuntimeMethod_var);
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::Update(System.Single,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_Update_m1283113470 (MLPersistentStore_t1692500085 * __this, float ___timeDelta0, intptr_t ___perceptionSnapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_Update_m1283113470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_Update_m1283113470_RuntimeMethod_var);
	{
		bool L_0 = __this->get__saveRequired_7();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		__this->set__saveRequired_7((bool)0);
		MLPersistentFileStorage_1_t1427508899 * L_1 = __this->get__persistentStore_5();
		String_t* L_2 = __this->get__fileName_3();
		MLContentBindings_t774608228 * L_3 = __this->get__data_6();
		NullCheck(L_1);
		MLPersistentFileStorage_1_Save_m1274139372(L_1, L_2, L_3, /*hidden argument*/MLPersistentFileStorage_1_Save_m1274139372_RuntimeMethod_var);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::Save(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_Save_m476286943 (RuntimeObject * __this /* static, unused */, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_Save_m476286943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_Save_m476286943_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLPersistentStore_t1692500085 * L_0 = MLAPISingleton_1_get_Instance_m1889607474(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var);
		MLContentBinding_t782013796 * L_1 = ___binding0;
		NullCheck(L_0);
		MLPersistentStore_InternalSave_m2663847312(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::InternalSave(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_InternalSave_m2663847312 (MLPersistentStore_t1692500085 * __this, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_InternalSave_m2663847312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_InternalSave_m2663847312_RuntimeMethod_var);
	{
		MLContentBinding_t782013796 * L_0 = ___binding0;
		NullCheck(L_0);
		bool L_1 = MLContentBinding_get_IsValid_m2436486059(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		MLPluginLog_Error_m2481084810(NULL /*static, unused*/, _stringLiteral903157360, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		MLContentBindings_t774608228 * L_2 = __this->get__data_6();
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		MLContentBindings_t774608228 * L_3 = __this->get__data_6();
		NullCheck(L_3);
		List_1_t2254088538 * L_4 = L_3->get_Bindings_1();
		MLContentBinding_t782013796 * L_5 = ___binding0;
		NullCheck(L_4);
		bool L_6 = List_1_Contains_m2172433515(L_4, L_5, /*hidden argument*/List_1_Contains_m2172433515_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		MLContentBindings_t774608228 * L_7 = __this->get__data_6();
		NullCheck(L_7);
		List_1_t2254088538 * L_8 = L_7->get_Bindings_1();
		MLContentBinding_t782013796 * L_9 = ___binding0;
		NullCheck(L_8);
		List_1_Add_m401685647(L_8, L_9, /*hidden argument*/List_1_Add_m401685647_RuntimeMethod_var);
	}

IL_0048:
	{
		__this->set__saveRequired_7((bool)1);
	}

IL_004f:
	{
		Dictionary_2_t567270095 * L_10 = __this->get__virtualIdToBindings_4();
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		Dictionary_2_t567270095 * L_11 = __this->get__virtualIdToBindings_4();
		MLContentBinding_t782013796 * L_12 = ___binding0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_ObjectId_0();
		NullCheck(L_11);
		bool L_14 = Dictionary_2_ContainsKey_m646611730(L_11, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m646611730_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0082;
		}
	}
	{
		Dictionary_2_t567270095 * L_15 = __this->get__virtualIdToBindings_4();
		MLContentBinding_t782013796 * L_16 = ___binding0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_ObjectId_0();
		MLContentBinding_t782013796 * L_18 = ___binding0;
		NullCheck(L_15);
		Dictionary_2_Add_m1935860828(L_15, L_17, L_18, /*hidden argument*/Dictionary_2_Add_m1935860828_RuntimeMethod_var);
	}

IL_0082:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::DeleteBinding(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_DeleteBinding_m3521712599 (RuntimeObject * __this /* static, unused */, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_DeleteBinding_m3521712599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_DeleteBinding_m3521712599_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1485281829_il2cpp_TypeInfo_var);
		MLPersistentStore_t1692500085 * L_0 = MLAPISingleton_1_get_Instance_m1889607474(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1889607474_RuntimeMethod_var);
		MLContentBinding_t782013796 * L_1 = ___binding0;
		NullCheck(L_0);
		MLPersistentStore_InternalDeleteBinding_m3676039623(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPersistentStore::InternalDeleteBinding(UnityEngine.XR.MagicLeap.MLContentBinding)
extern "C" IL2CPP_METHOD_ATTR void MLPersistentStore_InternalDeleteBinding_m3676039623 (MLPersistentStore_t1692500085 * __this, MLContentBinding_t782013796 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPersistentStore_InternalDeleteBinding_m3676039623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPersistentStore_InternalDeleteBinding_m3676039623_RuntimeMethod_var);
	{
		MLContentBindings_t774608228 * L_0 = __this->get__data_6();
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		MLContentBindings_t774608228 * L_1 = __this->get__data_6();
		NullCheck(L_1);
		List_1_t2254088538 * L_2 = L_1->get_Bindings_1();
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		MLContentBindings_t774608228 * L_3 = __this->get__data_6();
		NullCheck(L_3);
		List_1_t2254088538 * L_4 = L_3->get_Bindings_1();
		MLContentBinding_t782013796 * L_5 = ___binding0;
		NullCheck(L_4);
		bool L_6 = List_1_Contains_m2172433515(L_4, L_5, /*hidden argument*/List_1_Contains_m2172433515_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		MLContentBindings_t774608228 * L_7 = __this->get__data_6();
		NullCheck(L_7);
		List_1_t2254088538 * L_8 = L_7->get_Bindings_1();
		MLContentBinding_t782013796 * L_9 = ___binding0;
		NullCheck(L_8);
		List_1_Remove_m4126410017(L_8, L_9, /*hidden argument*/List_1_Remove_m4126410017_RuntimeMethod_var);
		__this->set__saveRequired_7((bool)1);
	}

IL_004a:
	{
		Dictionary_2_t567270095 * L_10 = __this->get__virtualIdToBindings_4();
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t567270095 * L_11 = __this->get__virtualIdToBindings_4();
		MLContentBinding_t782013796 * L_12 = ___binding0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_ObjectId_0();
		NullCheck(L_11);
		bool L_14 = Dictionary_2_ContainsKey_m646611730(L_11, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m646611730_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t567270095 * L_15 = __this->get__virtualIdToBindings_4();
		MLContentBinding_t782013796 * L_16 = ___binding0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_ObjectId_0();
		NullCheck(L_15);
		Dictionary_2_Remove_m2935512818(L_15, L_17, /*hidden argument*/Dictionary_2_Remove_m2935512818_RuntimeMethod_var);
	}

IL_007d:
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
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Debug(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Debug_m2493769454 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_Debug_m2493769454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_Debug_m2493769454_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject * L_1 = ___logMsg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::DebugFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_DebugFormat_m106165726 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_DebugFormat_m106165726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_DebugFormat_m106165726_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___logMsg0;
		ObjectU5BU5D_t2843939325* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Warning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Warning_m456580735 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_Warning_m456580735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_Warning_m456580735_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_1 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___logMsg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3395722776, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::WarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_WarningFormat_m3743858162 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_WarningFormat_m3743858162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_WarningFormat_m3743858162_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_1 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}

IL_0016:
	{
		String_t* L_2 = ___logMsg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3395722776, L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::Error(System.Object)
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_Error_m2481084810 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___logMsg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_Error_m2481084810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_Error_m2481084810_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_1 = ___logMsg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1503557889, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::ErrorFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_ErrorFormat_m663780805 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPluginLog_ErrorFormat_m663780805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPluginLog_ErrorFormat_m663780805_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLVerbosity_t2291382169_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->get_Level_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = ___logMsg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1503557889, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m575266265(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
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
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges__ctor_m3632535423 (MLPrivileges_t1489932235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges__ctor_m3632535423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges__ctor_m3632535423_RuntimeMethod_var);
	{
		Dictionary_2_t644911818 * L_0 = (Dictionary_2_t644911818 *)il2cpp_codegen_object_new(Dictionary_2_t644911818_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1452536154(L_0, /*hidden argument*/Dictionary_2__ctor_m1452536154_RuntimeMethod_var);
		__this->set__currentRequests_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
		MLAPISingleton_1__ctor_m708467073(__this, /*hidden argument*/MLAPISingleton_1__ctor_m708467073_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges__cctor_m3710798674 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges__cctor_m3710798674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges__cctor_m3710798674_RuntimeMethod_var);
	{
		((MLPrivileges_t1489932235_StaticFields*)il2cpp_codegen_static_fields_for(MLPrivileges_t1489932235_il2cpp_TypeInfo_var))->set_DllNotFoundError_3(_stringLiteral2115790382);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_CreateInstance_m2669308799 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_CreateInstance_m2669308799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_CreateInstance_m2669308799_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
		bool L_0 = MLAPISingleton_1_IsValidInstance_m1089243868(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_IsValidInstance_m1089243868_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MLPrivileges_t1489932235 * L_1 = (MLPrivileges_t1489932235 *)il2cpp_codegen_object_new(MLPrivileges_t1489932235_il2cpp_TypeInfo_var);
		MLPrivileges__ctor_m3632535423(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
		((MLAPISingleton_1_t1282713979_StaticFields*)il2cpp_codegen_static_fields_for(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var))->set__instance_0(L_1);
	}

IL_0014:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges::Start()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPrivileges_Start_m3573642168 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_Start_m3573642168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_Start_m3573642168_RuntimeMethod_var);
	MLResult_t265502022  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MLPrivileges_t1489932235_il2cpp_TypeInfo_var);
			MLPrivileges_CreateInstance_m2669308799(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
			MLResult_t265502022  L_0 = MLAPISingleton_1_BaseStart_m2260802994(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_BaseStart_m2260802994_RuntimeMethod_var);
			V_0 = L_0;
			goto IL_0027;
		}

IL_0010:
		{
			; // IL_0010: leave IL_0027
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.DllNotFoundException)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MLPrivileges_t1489932235_il2cpp_TypeInfo_var);
			String_t* L_1 = ((MLPrivileges_t1489932235_StaticFields*)il2cpp_codegen_static_fields_for(MLPrivileges_t1489932235_il2cpp_TypeInfo_var))->get_DllNotFoundError_3();
			MLPluginLog_Error_m2481084810(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, MLPrivileges_Start_m3573642168_RuntimeMethod_var);
		}

IL_0022:
		{
			goto IL_0027;
		}
	} // end catch (depth: 1)

IL_0027:
	{
		MLResult_t265502022  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges::StartAPI()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPrivileges_StartAPI_m2005446506 (MLPrivileges_t1489932235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_StartAPI_m2005446506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_StartAPI_m2005446506_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLResult_t265502022  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = PrivilegesApiNativeBindings_MLPrivilegesStartup_m3155357192(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		intptr_t L_2 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
		Func_2_t563276670 * L_3 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult__ctor_m1759028860((MLResult_t265502022 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		MLResult_t265502022  L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::CleanupAPI(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_CleanupAPI_m1223685304 (MLPrivileges_t1489932235 * __this, bool ___isSafeToAccessManagedObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_CleanupAPI_m1223685304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_CleanupAPI_m1223685304_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLResult_t265502022  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = ___isSafeToAccessManagedObjects0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
		MLPrivileges_t1489932235 * L_1 = MLAPISingleton_1_get_Instance_m1138459504(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1138459504_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_t644911818 * L_2 = L_1->get__currentRequests_4();
		NullCheck(L_2);
		Dictionary_2_Clear_m2062726206(L_2, /*hidden argument*/Dictionary_2_Clear_m2062726206_RuntimeMethod_var);
	}

IL_0015:
	{
		int32_t L_3 = PrivilegesApiNativeBindings_MLPrivilegesShutdown_m3474603340(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		intptr_t L_5 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
		Func_2_t563276670 * L_6 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_6, NULL, L_5, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult__ctor_m1759028860((MLResult_t265502022 *)(&V_1), L_4, L_6, /*hidden argument*/NULL);
		bool L_7 = MLResult_get_IsOk_m578243083((MLResult_t265502022 *)(&V_1), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		MLResult_t265502022  L_10 = V_1;
		MLResult_t265502022  L_11 = L_10;
		RuntimeObject * L_12 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral216773886, L_9, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::Update(System.Single,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_Update_m1109306329 (MLPrivileges_t1489932235 * __this, float ___timeDelta0, intptr_t ___perceptionSnapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_Update_m1109306329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_Update_m1109306329_RuntimeMethod_var);
	{
		MLPrivileges_ProcessPendingQueries_m1848275908(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLPrivileges::RequestPrivilegeAsync(UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLPrivileges_RequestPrivilegeAsync_m1270271508 (RuntimeObject * __this /* static, unused */, uint32_t ___privilegeId0, Action_2_t1067572169 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_RequestPrivilegeAsync_m1270271508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_RequestPrivilegeAsync_m1270271508_RuntimeMethod_var);
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	MLResult_t265502022  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RequestPrivilegeQuery_t2806466543 * V_3 = NULL;
	MLResult_t265502022  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Action_2_t1067572169 * L_0 = ___callback1;
			if (L_0)
			{
				goto IL_0018;
			}
		}

IL_0006:
		{
			MLResult_t265502022  L_1;
			memset(&L_1, 0, sizeof(L_1));
			MLResult__ctor_m899246048((&L_1), 5, _stringLiteral3905049707, /*hidden argument*/NULL);
			V_4 = L_1;
			goto IL_00ae;
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
			MLPrivileges_t1489932235 * L_2 = MLAPISingleton_1_get_Instance_m1138459504(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1138459504_RuntimeMethod_var);
			NullCheck(L_2);
			Dictionary_2_t644911818 * L_3 = L_2->get__currentRequests_4();
			uint32_t L_4 = ___privilegeId0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_ContainsKey_m1056690393(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m1056690393_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_007e;
			}
		}

IL_002d:
		{
			V_0 = (intptr_t)(0);
			uint32_t L_6 = ___privilegeId0;
			int32_t L_7 = PrivilegesApiNativeBindings_MLPrivilegesRequestPrivilegeAsync_m4187851999(NULL /*static, unused*/, L_6, (intptr_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = L_7;
			int32_t L_8 = V_1;
			intptr_t L_9 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
			Func_2_t563276670 * L_10 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
			Func_2__ctor_m2424052174(L_10, NULL, L_9, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
			MLResult__ctor_m1759028860((MLResult_t265502022 *)(&V_2), L_8, L_10, /*hidden argument*/NULL);
			bool L_11 = MLResult_get_IsOk_m578243083((MLResult_t265502022 *)(&V_2), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0076;
			}
		}

IL_005c:
		{
			Action_2_t1067572169 * L_12 = ___callback1;
			intptr_t L_13 = V_0;
			uint32_t L_14 = ___privilegeId0;
			RequestPrivilegeQuery_t2806466543 * L_15 = (RequestPrivilegeQuery_t2806466543 *)il2cpp_codegen_object_new(RequestPrivilegeQuery_t2806466543_il2cpp_TypeInfo_var);
			RequestPrivilegeQuery__ctor_m4198570648(L_15, L_12, L_13, L_14, /*hidden argument*/NULL);
			V_3 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t1282713979_il2cpp_TypeInfo_var);
			MLPrivileges_t1489932235 * L_16 = MLAPISingleton_1_get_Instance_m1138459504(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m1138459504_RuntimeMethod_var);
			NullCheck(L_16);
			Dictionary_2_t644911818 * L_17 = L_16->get__currentRequests_4();
			uint32_t L_18 = ___privilegeId0;
			RequestPrivilegeQuery_t2806466543 * L_19 = V_3;
			NullCheck(L_17);
			Dictionary_2_Add_m1818062991(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m1818062991_RuntimeMethod_var);
		}

IL_0076:
		{
			MLResult_t265502022  L_20 = V_2;
			V_4 = L_20;
			goto IL_00ae;
		}

IL_007e:
		{
			intptr_t L_21 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
			Func_2_t563276670 * L_22 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
			Func_2__ctor_m2424052174(L_22, NULL, L_21, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
			MLResult_t265502022  L_23;
			memset(&L_23, 0, sizeof(L_23));
			MLResult__ctor_m1759028860((&L_23), 0, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			goto IL_00ae;
		}

IL_0097:
		{
			; // IL_0097: leave IL_00ae
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009c;
		throw e;
	}

CATCH_009c:
	{ // begin catch(System.DllNotFoundException)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MLPrivileges_t1489932235_il2cpp_TypeInfo_var);
			String_t* L_24 = ((MLPrivileges_t1489932235_StaticFields*)il2cpp_codegen_static_fields_for(MLPrivileges_t1489932235_il2cpp_TypeInfo_var))->get_DllNotFoundError_3();
			MLPluginLog_Error_m2481084810(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, MLPrivileges_RequestPrivilegeAsync_m1270271508_RuntimeMethod_var);
		}

IL_00a9:
		{
			goto IL_00ae;
		}
	} // end catch (depth: 1)

IL_00ae:
	{
		MLResult_t265502022  L_25 = V_4;
		return L_25;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::ProcessPendingQueries()
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_ProcessPendingQueries_m1848275908 (MLPrivileges_t1489932235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_ProcessPendingQueries_m1848275908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_ProcessPendingQueries_m1848275908_RuntimeMethod_var);
	List_1_t2959647623 * V_0 = NULL;
	List_1_t4278541285 * V_1 = NULL;
	uint32_t V_2 = 0;
	Enumerator_t553924204  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t644911818 * L_0 = __this->get__currentRequests_4();
		NullCheck(L_0);
		KeyCollection_t834587289 * L_1 = Dictionary_2_get_Keys_m2630551117(L_0, /*hidden argument*/Dictionary_2_get_Keys_m2630551117_RuntimeMethod_var);
		List_1_t2959647623 * L_2 = (List_1_t2959647623 *)il2cpp_codegen_object_new(List_1_t2959647623_il2cpp_TypeInfo_var);
		List_1__ctor_m2805305761(L_2, L_1, /*hidden argument*/List_1__ctor_m2805305761_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t4278541285 * L_3 = (List_1_t4278541285 *)il2cpp_codegen_object_new(List_1_t4278541285_il2cpp_TypeInfo_var);
		List_1__ctor_m313014393(L_3, /*hidden argument*/List_1__ctor_m313014393_RuntimeMethod_var);
		V_1 = L_3;
		List_1_t2959647623 * L_4 = V_0;
		NullCheck(L_4);
		Enumerator_t553924204  L_5 = List_1_GetEnumerator_m494563792(L_4, /*hidden argument*/List_1_GetEnumerator_m494563792_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0023:
		{
			uint32_t L_6 = Enumerator_get_Current_m644941155((Enumerator_t553924204 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m644941155_RuntimeMethod_var);
			V_2 = L_6;
			uint32_t L_7 = V_2;
			List_1_t4278541285 * L_8 = V_1;
			MLPrivileges_RequestPrivilegeStatus_m1688795195(__this, L_7, L_8, /*hidden argument*/NULL);
		}

IL_0033:
		{
			bool L_9 = Enumerator_MoveNext_m1013546311((Enumerator_t553924204 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m1013546311_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0023;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_t553924204  L_10 = V_3;
		Enumerator_t553924204  L_11 = L_10;
		RuntimeObject * L_12 = Box(Enumerator_t553924204_il2cpp_TypeInfo_var, &L_11);
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		List_1_t4278541285 * L_13 = V_1;
		MLPrivileges_ProcessCompletedQueries_m414769647(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::ProcessCompletedQueries(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_ProcessCompletedQueries_m414769647 (MLPrivileges_t1489932235 * __this, List_1_t4278541285 * ___completedQueries0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_ProcessCompletedQueries_m414769647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_ProcessCompletedQueries_m414769647_RuntimeMethod_var);
	RequestPrivilegeQuery_t2806466543 * V_0 = NULL;
	Enumerator_t1872817866  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t4278541285 * L_0 = ___completedQueries0;
		NullCheck(L_0);
		Enumerator_t1872817866  L_1 = List_1_GetEnumerator_m962900038(L_0, /*hidden argument*/List_1_GetEnumerator_m962900038_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_000c:
		{
			RequestPrivilegeQuery_t2806466543 * L_2 = Enumerator_get_Current_m1933130926((Enumerator_t1872817866 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1933130926_RuntimeMethod_var);
			V_0 = L_2;
			RequestPrivilegeQuery_t2806466543 * L_3 = V_0;
			NullCheck(L_3);
			Action_2_t1067572169 * L_4 = L_3->get_Callback_0();
			RequestPrivilegeQuery_t2806466543 * L_5 = V_0;
			NullCheck(L_5);
			MLResult_t265502022  L_6 = L_5->get_Result_2();
			RequestPrivilegeQuery_t2806466543 * L_7 = V_0;
			NullCheck(L_7);
			uint32_t L_8 = L_7->get_PrivilegeId_1();
			NullCheck(L_4);
			Action_2_Invoke_m3294212910(L_4, L_6, L_8, /*hidden argument*/Action_2_Invoke_m3294212910_RuntimeMethod_var);
		}

IL_002b:
		{
			bool L_9 = Enumerator_MoveNext_m2604661306((Enumerator_t1872817866 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2604661306_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_t1872817866  L_10 = V_1;
		Enumerator_t1872817866  L_11 = L_10;
		RuntimeObject * L_12 = Box(Enumerator_t1872817866_il2cpp_TypeInfo_var, &L_11);
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0048:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges::RequestPrivilegeStatus(UnityEngine.XR.MagicLeap.MLPrivilegeId,System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery>)
extern "C" IL2CPP_METHOD_ATTR void MLPrivileges_RequestPrivilegeStatus_m1688795195 (MLPrivileges_t1489932235 * __this, uint32_t ___privilegeId0, List_1_t4278541285 * ___completedQueries1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_RequestPrivilegeStatus_m1688795195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_RequestPrivilegeStatus_m1688795195_RuntimeMethod_var);
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t644911818 * L_0 = __this->get__currentRequests_4();
			uint32_t L_1 = ___privilegeId0;
			NullCheck(L_0);
			bool L_2 = Dictionary_2_ContainsKey_m1056690393(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1056690393_RuntimeMethod_var);
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0011:
		{
			MLPluginLog_Error_m2481084810(NULL /*static, unused*/, _stringLiteral4237448329, /*hidden argument*/NULL);
		}

IL_001b:
		{
			Dictionary_2_t644911818 * L_3 = __this->get__currentRequests_4();
			uint32_t L_4 = ___privilegeId0;
			NullCheck(L_3);
			RequestPrivilegeQuery_t2806466543 * L_5 = Dictionary_2_get_Item_m2186518206(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m2186518206_RuntimeMethod_var);
			NullCheck(L_5);
			intptr_t L_6 = L_5->get_Request_3();
			int32_t L_7 = PrivilegesApiNativeBindings_MLPrivilegesRequestPrivilegeTryGet_m1103042580(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			int32_t L_8 = V_0;
			if ((((int32_t)L_8) == ((int32_t)1)))
			{
				goto IL_007b;
			}
		}

IL_0039:
		{
			Dictionary_2_t644911818 * L_9 = __this->get__currentRequests_4();
			uint32_t L_10 = ___privilegeId0;
			NullCheck(L_9);
			RequestPrivilegeQuery_t2806466543 * L_11 = Dictionary_2_get_Item_m2186518206(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m2186518206_RuntimeMethod_var);
			int32_t L_12 = V_0;
			intptr_t L_13 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
			Func_2_t563276670 * L_14 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
			Func_2__ctor_m2424052174(L_14, NULL, L_13, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
			MLResult_t265502022  L_15;
			memset(&L_15, 0, sizeof(L_15));
			MLResult__ctor_m1759028860((&L_15), L_12, L_14, /*hidden argument*/NULL);
			NullCheck(L_11);
			L_11->set_Result_2(L_15);
			List_1_t4278541285 * L_16 = ___completedQueries1;
			Dictionary_2_t644911818 * L_17 = __this->get__currentRequests_4();
			uint32_t L_18 = ___privilegeId0;
			NullCheck(L_17);
			RequestPrivilegeQuery_t2806466543 * L_19 = Dictionary_2_get_Item_m2186518206(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_m2186518206_RuntimeMethod_var);
			NullCheck(L_16);
			List_1_Add_m1383809553(L_16, L_19, /*hidden argument*/List_1_Add_m1383809553_RuntimeMethod_var);
			Dictionary_2_t644911818 * L_20 = __this->get__currentRequests_4();
			uint32_t L_21 = ___privilegeId0;
			NullCheck(L_20);
			Dictionary_2_Remove_m2761173242(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m2761173242_RuntimeMethod_var);
		}

IL_007b:
		{
			goto IL_0092;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0080;
		throw e;
	}

CATCH_0080:
	{ // begin catch(System.DllNotFoundException)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MLPrivileges_t1489932235_il2cpp_TypeInfo_var);
			String_t* L_22 = ((MLPrivileges_t1489932235_StaticFields*)il2cpp_codegen_static_fields_for(MLPrivileges_t1489932235_il2cpp_TypeInfo_var))->get_DllNotFoundError_3();
			MLPluginLog_Error_m2481084810(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, MLPrivileges_RequestPrivilegeStatus_m1688795195_RuntimeMethod_var);
		}

IL_008d:
		{
			goto IL_0092;
		}
	} // end catch (depth: 1)

IL_0092:
	{
		return;
	}
}
// System.String UnityEngine.XR.MagicLeap.MLPrivileges::GetResultString(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR String_t* MLPrivileges_GetResultString_m821970532 (RuntimeObject * __this /* static, unused */, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLPrivileges_GetResultString_m821970532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLPrivileges_GetResultString_m821970532_RuntimeMethod_var);
	{
		int32_t L_0 = ___result0;
		intptr_t L_1 = PrivilegesApiNativeBindings_MLPrivilegesGetResultString_m1636711003(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_2 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UnityEngine.XR.MagicLeap.MLPrivileges/RequestPrivilegeQuery::.ctor(System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLPrivilegeId>,System.IntPtr,UnityEngine.XR.MagicLeap.MLPrivilegeId)
extern "C" IL2CPP_METHOD_ATTR void RequestPrivilegeQuery__ctor_m4198570648 (RequestPrivilegeQuery_t2806466543 * __this, Action_2_t1067572169 * ___callback0, intptr_t ___request1, uint32_t ___privilege2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RequestPrivilegeQuery__ctor_m4198570648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(RequestPrivilegeQuery__ctor_m4198570648_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Action_2_t1067572169 * L_0 = ___callback0;
		__this->set_Callback_0(L_0);
		intptr_t L_1 = (intptr_t)MLPrivileges_GetResultString_m821970532_RuntimeMethod_var;
		Func_2_t563276670 * L_2 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_2, NULL, L_1, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_3;
		memset(&L_3, 0, sizeof(L_3));
		MLResult__ctor_m1759028860((&L_3), 1, L_2, /*hidden argument*/NULL);
		__this->set_Result_2(L_3);
		intptr_t L_4 = ___request1;
		__this->set_Request_3(L_4);
		uint32_t L_5 = ___privilege2;
		__this->set_PrivilegeId_1(L_5);
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
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLResult
extern "C" void MLResult_t265502022_marshal_pinvoke(const MLResult_t265502022& unmarshaled, MLResult_t265502022_marshaled_pinvoke& marshaled)
{
	marshaled.____message_1 = il2cpp_codegen_marshal_string(unmarshaled.get__message_1());
	marshaled.____resultStringer_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get__resultStringer_2()));
	marshaled.___U3CCodeU3Ek__BackingField_3 = unmarshaled.get_U3CCodeU3Ek__BackingField_3();
}
extern "C" void MLResult_t265502022_marshal_pinvoke_back(const MLResult_t265502022_marshaled_pinvoke& marshaled, MLResult_t265502022& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_t265502022_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__message_1(il2cpp_codegen_marshal_string_result(marshaled.____message_1));
	unmarshaled.set__resultStringer_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Func_2_t563276670>(marshaled.____resultStringer_2, Func_2_t563276670_il2cpp_TypeInfo_var));
	int32_t unmarshaled_U3CCodeU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CCodeU3Ek__BackingField_temp_2 = marshaled.___U3CCodeU3Ek__BackingField_3;
	unmarshaled.set_U3CCodeU3Ek__BackingField_3(unmarshaled_U3CCodeU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLResult
extern "C" void MLResult_t265502022_marshal_pinvoke_cleanup(MLResult_t265502022_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____message_1);
	marshaled.____message_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLResult
extern "C" void MLResult_t265502022_marshal_com(const MLResult_t265502022& unmarshaled, MLResult_t265502022_marshaled_com& marshaled)
{
	marshaled.____message_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get__message_1());
	marshaled.____resultStringer_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get__resultStringer_2()));
	marshaled.___U3CCodeU3Ek__BackingField_3 = unmarshaled.get_U3CCodeU3Ek__BackingField_3();
}
extern "C" void MLResult_t265502022_marshal_com_back(const MLResult_t265502022_marshaled_com& marshaled, MLResult_t265502022& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_t265502022_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set__message_1(il2cpp_codegen_marshal_bstring_result(marshaled.____message_1));
	unmarshaled.set__resultStringer_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Func_2_t563276670>(marshaled.____resultStringer_2, Func_2_t563276670_il2cpp_TypeInfo_var));
	int32_t unmarshaled_U3CCodeU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CCodeU3Ek__BackingField_temp_2 = marshaled.___U3CCodeU3Ek__BackingField_3;
	unmarshaled.set_U3CCodeU3Ek__BackingField_3(unmarshaled_U3CCodeU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLResult
extern "C" void MLResult_t265502022_marshal_com_cleanup(MLResult_t265502022_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____message_1);
	marshaled.____message_1 = NULL;
}
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode,System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m1759028860 (MLResult_t265502022 * __this, int32_t ___resultCode0, Func_2_t563276670 * ___resultStringer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult__ctor_m1759028860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult__ctor_m1759028860_RuntimeMethod_var);
	{
		Func_2_t563276670 * L_0 = ___resultStringer1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral3960684345, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, MLResult__ctor_m1759028860_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___resultCode0;
		MLResult_set_Code_m3511893626((MLResult_t265502022 *)__this, L_2, /*hidden argument*/NULL);
		Func_2_t563276670 * L_3 = ___resultStringer1;
		__this->set__resultStringer_2(L_3);
		__this->set__message_1((String_t*)NULL);
		return;
	}
}
extern "C"  void MLResult__ctor_m1759028860_AdjustorThunk (RuntimeObject * __this, int32_t ___resultCode0, Func_2_t563276670 * ___resultStringer1, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	MLResult__ctor_m1759028860(_thisAdjusted, ___resultCode0, ___resultStringer1, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode,System.String)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m899246048 (MLResult_t265502022 * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult__ctor_m899246048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult__ctor_m899246048_RuntimeMethod_var);
	{
		int32_t L_0 = ___resultCode0;
		MLResult_set_Code_m3511893626((MLResult_t265502022 *)__this, L_0, /*hidden argument*/NULL);
		__this->set__resultStringer_2((Func_2_t563276670 *)NULL);
		String_t* L_1 = ___message1;
		__this->set__message_1(L_1);
		return;
	}
}
extern "C"  void MLResult__ctor_m899246048_AdjustorThunk (RuntimeObject * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	MLResult__ctor_m899246048(_thisAdjusted, ___resultCode0, ___message1, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m18499570 (MLResult_t265502022 * __this, int32_t ___resultCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult__ctor_m18499570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult__ctor_m18499570_RuntimeMethod_var);
	{
		int32_t L_0 = ___resultCode0;
		MLResult_set_Code_m3511893626((MLResult_t265502022 *)__this, L_0, /*hidden argument*/NULL);
		__this->set__resultStringer_2((Func_2_t563276670 *)NULL);
		int32_t L_1 = ___resultCode0;
		String_t* L_2 = MagicLeapNativeBindings_MLGetResultString_m2945365584(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set__message_1(L_2);
		return;
	}
}
extern "C"  void MLResult__ctor_m18499570_AdjustorThunk (RuntimeObject * __this, int32_t ___resultCode0, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	MLResult__ctor_m18499570(_thisAdjusted, ___resultCode0, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLResult::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MLResult__cctor_m446257078 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult__cctor_m446257078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult__cctor_m446257078_RuntimeMethod_var);
	{
		MLResult_t265502022  L_0;
		memset(&L_0, 0, sizeof(L_0));
		MLResult__ctor_m18499570((&L_0), 0, /*hidden argument*/NULL);
		((MLResult_t265502022_StaticFields*)il2cpp_codegen_static_fields_for(MLResult_t265502022_il2cpp_TypeInfo_var))->set_ResultOk_0(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResultCode UnityEngine.XR.MagicLeap.MLResult::get_Code()
extern "C" IL2CPP_METHOD_ATTR int32_t MLResult_get_Code_m815222229 (MLResult_t265502022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_get_Code_m815222229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult_get_Code_m815222229_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_U3CCodeU3Ek__BackingField_3();
		return L_0;
	}
}
extern "C"  int32_t MLResult_get_Code_m815222229_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	return MLResult_get_Code_m815222229(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.MagicLeap.MLResult::set_Code(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR void MLResult_set_Code_m3511893626 (MLResult_t265502022 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_set_Code_m3511893626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult_set_Code_m3511893626_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_3(L_0);
		return;
	}
}
extern "C"  void MLResult_set_Code_m3511893626_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	MLResult_set_Code_m3511893626(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.MagicLeap.MLResult::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MLResult_ToString_m2357201379 (MLResult_t265502022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_ToString_m2357201379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult_ToString_m2357201379_RuntimeMethod_var);
	{
		String_t* L_0 = __this->get__message_1();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Func_2_t563276670 * L_1 = __this->get__resultStringer_2();
		int32_t L_2 = MLResult_get_Code_m815222229((MLResult_t265502022 *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = Func_2_Invoke_m484750874(L_1, L_2, /*hidden argument*/Func_2_Invoke_m484750874_RuntimeMethod_var);
		__this->set__message_1(L_3);
	}

IL_0022:
	{
		String_t* L_4 = __this->get__message_1();
		return L_4;
	}
}
extern "C"  String_t* MLResult_ToString_m2357201379_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	return MLResult_ToString_m2357201379(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.MagicLeap.MLResult::get_IsOk()
extern "C" IL2CPP_METHOD_ATTR bool MLResult_get_IsOk_m578243083 (MLResult_t265502022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLResult_get_IsOk_m578243083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLResult_get_IsOk_m578243083_RuntimeMethod_var);
	{
		int32_t L_0 = MLResult_get_Code_m815222229((MLResult_t265502022 *)__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C"  bool MLResult_get_IsOk_m578243083_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	MLResult_t265502022 * _thisAdjusted = reinterpret_cast<MLResult_t265502022 *>(__this + 1);
	return MLResult_get_IsOk_m578243083(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.MagicLeap.MLSnapshot::GetResultString(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR String_t* MLSnapshot_GetResultString_m3014783930 (RuntimeObject * __this /* static, unused */, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLSnapshot_GetResultString_m3014783930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLSnapshot_GetResultString_m3014783930_RuntimeMethod_var);
	{
		int32_t L_0 = ___result0;
		intptr_t L_1 = MagicLeapNativeBindings_MLSnapshotGetResultString_m811262212(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_2 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void UnityEngine.XR.MagicLeap.MLThumb::.ctor(MagicLeapInternal.HandTrackingApiNativeBindings/MLThumbState)
extern "C" IL2CPP_METHOD_ATTR void MLThumb__ctor_m1321403752 (MLThumb_t652336835 * __this, MLThumbState_t3324871280  ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb__ctor_m1321403752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb__ctor_m1321403752_RuntimeMethod_var);
	MLTransform_t3435326713  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MLTransform_t3435326713  V_1;
	memset(&V_1, 0, sizeof(V_1));
	MLTransform_t3435326713  V_2;
	memset(&V_2, 0, sizeof(V_2));
	MLTransform_t3435326713  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_0 = V_0;
		__this->set__TipUpdateTransform_4(L_0);
		il2cpp_codegen_initobj((&V_1), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_1 = V_1;
		__this->set__IPUpdateTransform_5(L_1);
		il2cpp_codegen_initobj((&V_2), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_2 = V_2;
		__this->set__MCPUpdateTransform_6(L_2);
		il2cpp_codegen_initobj((&V_3), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_3 = V_3;
		__this->set__CMCUpdateTransform_7(L_3);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_4 = (&___state0)->get_address_of_Tip_0();
		MLCoordinateFrameUID_t515144641  L_5 = L_4->get_FrameId_0();
		__this->set__TipCoordinateFrameId_0(L_5);
		MLKeyPointState_t358041773 * L_6 = (&___state0)->get_address_of_IP_1();
		MLCoordinateFrameUID_t515144641  L_7 = L_6->get_FrameId_0();
		__this->set__IPCoordinateFrameId_1(L_7);
		MLKeyPointState_t358041773 * L_8 = (&___state0)->get_address_of_MCP_2();
		MLCoordinateFrameUID_t515144641  L_9 = L_8->get_FrameId_0();
		__this->set__MCPCoordinateFrameId_2(L_9);
		MLKeyPointState_t358041773 * L_10 = (&___state0)->get_address_of_CMC_3();
		MLCoordinateFrameUID_t515144641  L_11 = L_10->get_FrameId_0();
		__this->set__CMCCoordinateFrameId_3(L_11);
		MLKeyPointState_t358041773 * L_12 = (&___state0)->get_address_of_Tip_0();
		bool L_13 = L_12->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_14 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_14, L_13, /*hidden argument*/NULL);
		MLThumb_set_Tip_m1451869089(__this, L_14, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_15 = (&___state0)->get_address_of_IP_1();
		bool L_16 = L_15->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_17 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_17, L_16, /*hidden argument*/NULL);
		MLThumb_set_IP_m2461086816(__this, L_17, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_18 = (&___state0)->get_address_of_MCP_2();
		bool L_19 = L_18->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_20 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_20, L_19, /*hidden argument*/NULL);
		MLThumb_set_MCP_m1189870082(__this, L_20, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_21 = (&___state0)->get_address_of_CMC_3();
		bool L_22 = L_21->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_23 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_23, L_22, /*hidden argument*/NULL);
		MLThumb_set_CMC_m2281774863(__this, L_23, /*hidden argument*/NULL);
		List_1_t3929820962 * L_24 = (List_1_t3929820962 *)il2cpp_codegen_object_new(List_1_t3929820962_il2cpp_TypeInfo_var);
		List_1__ctor_m977214386(L_24, /*hidden argument*/List_1__ctor_m977214386_RuntimeMethod_var);
		MLThumb_set_KeyPoints_m3759159430(__this, L_24, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_25 = MLThumb_get_Tip_m821651102(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26 = MLKeyPoint_get_IsValid_m1846993851(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0112;
		}
	}
	{
		List_1_t3929820962 * L_27 = MLThumb_get_KeyPoints_m1130332393(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_28 = MLThumb_get_Tip_m821651102(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m1804663636(L_27, L_28, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_0112:
	{
		MLKeyPoint_t2457746220 * L_29 = MLThumb_get_IP_m1499952108(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = MLKeyPoint_get_IsValid_m1846993851(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0133;
		}
	}
	{
		List_1_t3929820962 * L_31 = MLThumb_get_KeyPoints_m1130332393(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_32 = MLThumb_get_IP_m1499952108(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m1804663636(L_31, L_32, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_0133:
	{
		MLKeyPoint_t2457746220 * L_33 = MLThumb_get_MCP_m3239949728(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = MLKeyPoint_get_IsValid_m1846993851(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0154;
		}
	}
	{
		List_1_t3929820962 * L_35 = MLThumb_get_KeyPoints_m1130332393(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_36 = MLThumb_get_MCP_m3239949728(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		List_1_Add_m1804663636(L_35, L_36, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_0154:
	{
		MLKeyPoint_t2457746220 * L_37 = MLThumb_get_CMC_m2035951506(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = MLKeyPoint_get_IsValid_m1846993851(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0175;
		}
	}
	{
		List_1_t3929820962 * L_39 = MLThumb_get_KeyPoints_m1130332393(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_40 = MLThumb_get_CMC_m2035951506(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_Add_m1804663636(L_39, L_40, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_0175:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_Tip()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_Tip_m821651102 (MLThumb_t652336835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_get_Tip_m821651102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_get_Tip_m821651102_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CTipU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_Tip(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_Tip_m1451869089 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_set_Tip_m1451869089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_set_Tip_m1451869089_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CTipU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_IP()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_IP_m1499952108 (MLThumb_t652336835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_get_IP_m1499952108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_get_IP_m1499952108_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CIPU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_IP(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_IP_m2461086816 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_set_IP_m2461086816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_set_IP_m2461086816_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CIPU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_MCP()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_MCP_m3239949728 (MLThumb_t652336835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_get_MCP_m3239949728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_get_MCP_m3239949728_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CMCPU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_MCP(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_MCP_m1189870082 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_set_MCP_m1189870082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_set_MCP_m1189870082_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CMCPU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLThumb::get_CMC()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLThumb_get_CMC_m2035951506 (MLThumb_t652336835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_get_CMC_m2035951506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_get_CMC_m2035951506_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CCMCU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_CMC(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_CMC_m2281774863 (MLThumb_t652336835 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_set_CMC_m2281774863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_set_CMC_m2281774863_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CCMCU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLThumb::get_KeyPoints()
extern "C" IL2CPP_METHOD_ATTR List_1_t3929820962 * MLThumb_get_KeyPoints_m1130332393 (MLThumb_t652336835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_get_KeyPoints_m1130332393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_get_KeyPoints_m1130332393_RuntimeMethod_var);
	{
		List_1_t3929820962 * L_0 = __this->get_U3CKeyPointsU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::set_KeyPoints(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_set_KeyPoints_m3759159430 (MLThumb_t652336835 * __this, List_1_t3929820962 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_set_KeyPoints_m3759159430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_set_KeyPoints_m3759159430_RuntimeMethod_var);
	{
		List_1_t3929820962 * L_0 = ___value0;
		__this->set_U3CKeyPointsU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLThumb::Update(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLThumb_Update_m1648285559 (MLThumb_t652336835 * __this, intptr_t ___perceptionSnapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLThumb_Update_m1648285559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLThumb_Update_m1648285559_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		MLKeyPoint_t2457746220 * L_0 = MLThumb_get_Tip_m821651102(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = MLKeyPoint_get_IsValid_m1846993851(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_2 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_3 = __this->get_address_of__TipCoordinateFrameId_0();
		MLTransform_t3435326713 * L_4 = __this->get_address_of__TipUpdateTransform_4();
		int32_t L_5 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_2, (MLCoordinateFrameUID_t515144641 *)L_3, (MLTransform_t3435326713 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_7 = MLThumb_get_Tip_m821651102(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_8 = __this->get_address_of__TipUpdateTransform_4();
		MLVec3f_t486797299  L_9 = L_8->get_Position_1();
		Vector3_t3722313464  L_10 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_7);
		MLKeyPoint_set_Position_m1226285128(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0046:
	{
		MLKeyPoint_t2457746220 * L_11 = MLThumb_get_IP_m1499952108(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = MLKeyPoint_get_IsValid_m1846993851(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		intptr_t L_13 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_14 = __this->get_address_of__IPCoordinateFrameId_1();
		MLTransform_t3435326713 * L_15 = __this->get_address_of__IPUpdateTransform_5();
		int32_t L_16 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_13, (MLCoordinateFrameUID_t515144641 *)L_14, (MLTransform_t3435326713 *)L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_008c;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_18 = MLThumb_get_IP_m1499952108(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_19 = __this->get_address_of__IPUpdateTransform_5();
		MLVec3f_t486797299  L_20 = L_19->get_Position_1();
		Vector3_t3722313464  L_21 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_20, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_18);
		MLKeyPoint_set_Position_m1226285128(L_18, L_21, /*hidden argument*/NULL);
	}

IL_008c:
	{
		MLKeyPoint_t2457746220 * L_22 = MLThumb_get_MCP_m3239949728(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = MLKeyPoint_get_IsValid_m1846993851(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d2;
		}
	}
	{
		intptr_t L_24 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_25 = __this->get_address_of__MCPCoordinateFrameId_2();
		MLTransform_t3435326713 * L_26 = __this->get_address_of__MCPUpdateTransform_6();
		int32_t L_27 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_24, (MLCoordinateFrameUID_t515144641 *)L_25, (MLTransform_t3435326713 *)L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00d2;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_29 = MLThumb_get_MCP_m3239949728(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_30 = __this->get_address_of__MCPUpdateTransform_6();
		MLVec3f_t486797299  L_31 = L_30->get_Position_1();
		Vector3_t3722313464  L_32 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_31, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_29);
		MLKeyPoint_set_Position_m1226285128(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		MLKeyPoint_t2457746220 * L_33 = MLThumb_get_CMC_m2035951506(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = MLKeyPoint_get_IsValid_m1846993851(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		intptr_t L_35 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_36 = __this->get_address_of__CMCCoordinateFrameId_3();
		MLTransform_t3435326713 * L_37 = __this->get_address_of__CMCUpdateTransform_7();
		int32_t L_38 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_35, (MLCoordinateFrameUID_t515144641 *)L_36, (MLTransform_t3435326713 *)L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		int32_t L_39 = V_0;
		if (L_39)
		{
			goto IL_0118;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_40 = MLThumb_get_CMC_m2035951506(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_41 = __this->get_address_of__CMCUpdateTransform_7();
		MLVec3f_t486797299  L_42 = L_41->get_Position_1();
		Vector3_t3722313464  L_43 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_42, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_40);
		MLKeyPoint_set_Position_m1226285128(L_40, L_43, /*hidden argument*/NULL);
	}

IL_0118:
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
// System.Void UnityEngine.XR.MagicLeap.MLVerbosity::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MLVerbosity__cctor_m3960015354 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLVerbosity__cctor_m3960015354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLVerbosity__cctor_m3960015354_RuntimeMethod_var);
	{
		((MLVerbosity_t2291382169_StaticFields*)il2cpp_codegen_static_fields_for(MLVerbosity_t2291382169_il2cpp_TypeInfo_var))->set_Level_0(1);
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


// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_pinvoke(const MLWorldPlaneBoundaries_t1565814570& unmarshaled, MLWorldPlaneBoundaries_t1565814570_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Boundaries_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Boundaries' of type 'MLWorldPlaneBoundaries'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Boundaries_1Exception, NULL, NULL);
}
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_pinvoke_back(const MLWorldPlaneBoundaries_t1565814570_marshaled_pinvoke& marshaled, MLWorldPlaneBoundaries_t1565814570& unmarshaled)
{
	Exception_t* ___Boundaries_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Boundaries' of type 'MLWorldPlaneBoundaries'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Boundaries_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_pinvoke_cleanup(MLWorldPlaneBoundaries_t1565814570_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_com(const MLWorldPlaneBoundaries_t1565814570& unmarshaled, MLWorldPlaneBoundaries_t1565814570_marshaled_com& marshaled)
{
	Exception_t* ___Boundaries_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Boundaries' of type 'MLWorldPlaneBoundaries'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Boundaries_1Exception, NULL, NULL);
}
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_com_back(const MLWorldPlaneBoundaries_t1565814570_marshaled_com& marshaled, MLWorldPlaneBoundaries_t1565814570& unmarshaled)
{
	Exception_t* ___Boundaries_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Boundaries' of type 'MLWorldPlaneBoundaries'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Boundaries_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries
extern "C" void MLWorldPlaneBoundaries_t1565814570_marshal_com_cleanup(MLWorldPlaneBoundaries_t1565814570_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke(const MLWorldPlaneBoundary_t1115739400& unmarshaled, MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Polygon_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Polygon' of type 'MLWorldPlaneBoundary'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Polygon_0Exception, NULL, NULL);
}
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke_back(const MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled, MLWorldPlaneBoundary_t1115739400& unmarshaled)
{
	Exception_t* ___Polygon_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Polygon' of type 'MLWorldPlaneBoundary'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Polygon_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_pinvoke_cleanup(MLWorldPlaneBoundary_t1115739400_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com(const MLWorldPlaneBoundary_t1115739400& unmarshaled, MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled)
{
	Exception_t* ___Polygon_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Polygon' of type 'MLWorldPlaneBoundary'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Polygon_0Exception, NULL, NULL);
}
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com_back(const MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled, MLWorldPlaneBoundary_t1115739400& unmarshaled)
{
	Exception_t* ___Polygon_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Polygon' of type 'MLWorldPlaneBoundary'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Polygon_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary
extern "C" void MLWorldPlaneBoundary_t1115739400_marshal_com_cleanup(MLWorldPlaneBoundary_t1115739400_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes__ctor_m512352524 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes__ctor_m512352524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes__ctor_m512352524_RuntimeMethod_var);
	{
		__this->set_DefaultQueryFlags_3(7);
		Dictionary_2_t2852916536 * L_0 = (Dictionary_2_t2852916536 *)il2cpp_codegen_object_new(Dictionary_2_t2852916536_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m531202632(L_0, /*hidden argument*/Dictionary_2__ctor_m531202632_RuntimeMethod_var);
		__this->set__pendingQueries_4(L_0);
		__this->set__planesTracker_5((((int64_t)((int64_t)(-1)))));
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var);
		MLAPISingleton_1__ctor_m3675945823(__this, /*hidden argument*/MLAPISingleton_1__ctor_m3675945823_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_CreateInstance_m495043801 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_CreateInstance_m495043801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_CreateInstance_m495043801_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var);
		bool L_0 = MLAPISingleton_1_IsValidInstance_m2107751717(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_IsValidInstance_m2107751717_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MLWorldPlanes_t897167128 * L_1 = (MLWorldPlanes_t897167128 *)il2cpp_codegen_object_new(MLWorldPlanes_t897167128_il2cpp_TypeInfo_var);
		MLWorldPlanes__ctor_m512352524(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var);
		((MLAPISingleton_1_t689948872_StaticFields*)il2cpp_codegen_static_fields_for(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var))->set__instance_0(L_1);
	}

IL_0014:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::Start()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_Start_m568717041 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_Start_m568717041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_Start_m568717041_RuntimeMethod_var);
	{
		MLWorldPlanes_CreateInstance_m495043801(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var);
		MLResult_t265502022  L_0 = MLAPISingleton_1_BaseStart_m2003534722(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_BaseStart_m2003534722_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::StartAPI()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_StartAPI_m402532385 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_StartAPI_m402532385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_StartAPI_m402532385_RuntimeMethod_var);
	{
		__this->set__planesTracker_5((((int64_t)((int64_t)(-1)))));
		MLResult_t265502022  L_0 = MLWorldPlanes_CreatePlanesTracker_m2112856877(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::CreatePlanesTracker()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_CreatePlanesTracker_m2112856877 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_CreatePlanesTracker_m2112856877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_CreatePlanesTracker_m2112856877_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLResult_t265502022  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		uint64_t* L_0 = __this->get_address_of__planesTracker_5();
		int32_t L_1 = PlanesApiNativeBindings_MLPlanesCreate_m2763124871(NULL /*static, unused*/, (uint64_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		intptr_t L_3 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_4 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_4, NULL, L_3, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult__ctor_m1759028860((MLResult_t265502022 *)(&V_1), L_2, L_4, /*hidden argument*/NULL);
		bool L_5 = MLResult_get_IsOk_m578243083((MLResult_t265502022 *)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		uint64_t L_6 = __this->get__planesTracker_5();
		bool L_7 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0055;
		}
	}

IL_003c:
	{
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		MLResult_t265502022  L_10 = V_1;
		MLResult_t265502022  L_11 = L_10;
		RuntimeObject * L_12 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral3010012664, L_9, /*hidden argument*/NULL);
	}

IL_0055:
	{
		MLResult_t265502022  L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::CleanupAPI(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_CleanupAPI_m3573952776 (MLWorldPlanes_t897167128 * __this, bool ___isSafeToAccessManagedObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_CleanupAPI_m3573952776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_CleanupAPI_m3573952776_RuntimeMethod_var);
	Query_t2690121588 * V_0 = NULL;
	Enumerator_t3421810193  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___isSafeToAccessManagedObjects0;
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t2852916536 * L_1 = __this->get__pendingQueries_4();
		NullCheck(L_1);
		ValueCollection_t273993558 * L_2 = Dictionary_2_get_Values_m3202201288(L_1, /*hidden argument*/Dictionary_2_get_Values_m3202201288_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t3421810193  L_3 = ValueCollection_GetEnumerator_m3085029500(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m3085029500_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001c:
		{
			Query_t2690121588 * L_4 = Enumerator_get_Current_m3028051899((Enumerator_t3421810193 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3028051899_RuntimeMethod_var);
			V_0 = L_4;
			Query_t2690121588 * L_5 = V_0;
			NullCheck(L_5);
			Query_Dispose_m3838602477(L_5, /*hidden argument*/NULL);
		}

IL_002a:
		{
			bool L_6 = Enumerator_MoveNext_m4053677450((Enumerator_t3421810193 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4053677450_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001c;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_t3421810193  L_7 = V_1;
		Enumerator_t3421810193  L_8 = L_7;
		RuntimeObject * L_9 = Box(Enumerator_t3421810193_il2cpp_TypeInfo_var, &L_8);
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		Dictionary_2_t2852916536 * L_10 = __this->get__pendingQueries_4();
		NullCheck(L_10);
		Dictionary_2_Clear_m3935512194(L_10, /*hidden argument*/Dictionary_2_Clear_m3935512194_RuntimeMethod_var);
	}

IL_0052:
	{
		MLWorldPlanes_DestroyNativeTracker_m1786741380(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::DestroyNativeTracker()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_DestroyNativeTracker_m1786741380 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_DestroyNativeTracker_m1786741380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_DestroyNativeTracker_m1786741380_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		uint64_t L_0 = __this->get__planesTracker_5();
		bool L_1 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		uint64_t L_2 = __this->get__planesTracker_5();
		int32_t L_3 = PlanesApiNativeBindings_MLPlanesDestroy_m2253045321(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = V_0;
		String_t* L_8 = MagicLeapNativeBindings_MLGetResultString_m2945365584(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral1650052322, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		__this->set__planesTracker_5((((int64_t)((int64_t)(-1)))));
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::Update(System.Single,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_Update_m2466396547 (MLWorldPlanes_t897167128 * __this, float ___timeElapsed0, intptr_t ___perceptionSnapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_Update_m2466396547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_Update_m2466396547_RuntimeMethod_var);
	{
		MLWorldPlanes_ProcessPendingQueries_m2055653149(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ProcessPendingQueries()
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ProcessPendingQueries_m2055653149 (MLWorldPlanes_t897167128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ProcessPendingQueries_m2055653149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ProcessPendingQueries_m2055653149_RuntimeMethod_var);
	List_1_t1311147538 * V_0 = NULL;
	Dictionary_2_t2852916536 * V_1 = NULL;
	uint64_t V_2 = 0;
	Enumerator_t3200391415  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2852916536 * L_0 = __this->get__pendingQueries_4();
		NullCheck(L_0);
		KeyCollection_t3042592007 * L_1 = Dictionary_2_get_Keys_m4214368148(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4214368148_RuntimeMethod_var);
		List_1_t1311147538 * L_2 = (List_1_t1311147538 *)il2cpp_codegen_object_new(List_1_t1311147538_il2cpp_TypeInfo_var);
		List_1__ctor_m14275872(L_2, L_1, /*hidden argument*/List_1__ctor_m14275872_RuntimeMethod_var);
		V_0 = L_2;
		Dictionary_2_t2852916536 * L_3 = (Dictionary_2_t2852916536 *)il2cpp_codegen_object_new(Dictionary_2_t2852916536_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m531202632(L_3, /*hidden argument*/Dictionary_2__ctor_m531202632_RuntimeMethod_var);
		V_1 = L_3;
		List_1_t1311147538 * L_4 = V_0;
		NullCheck(L_4);
		Enumerator_t3200391415  L_5 = List_1_GetEnumerator_m1477228033(L_4, /*hidden argument*/List_1_GetEnumerator_m1477228033_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0023:
		{
			uint64_t L_6 = Enumerator_get_Current_m3398180830((Enumerator_t3200391415 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m3398180830_RuntimeMethod_var);
			V_2 = L_6;
			uint64_t L_7 = V_2;
			Dictionary_2_t2852916536 * L_8 = __this->get__pendingQueries_4();
			uint64_t L_9 = V_2;
			NullCheck(L_8);
			Query_t2690121588 * L_10 = Dictionary_2_get_Item_m3792233323(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m3792233323_RuntimeMethod_var);
			Dictionary_2_t2852916536 * L_11 = V_1;
			MLWorldPlanes_GetQueryResultForHandle_m1031431879(__this, L_7, L_10, L_11, /*hidden argument*/NULL);
		}

IL_003f:
		{
			bool L_12 = Enumerator_MoveNext_m1114585714((Enumerator_t3200391415 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m1114585714_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0023;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_t3200391415  L_13 = V_3;
		Enumerator_t3200391415  L_14 = L_13;
		RuntimeObject * L_15 = Box(Enumerator_t3200391415_il2cpp_TypeInfo_var, &L_14);
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		Dictionary_2_t2852916536 * L_16 = V_1;
		MLWorldPlanes_ProcessCompletedQueries_m4273076203(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::GetQueryResultForHandle(System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_GetQueryResultForHandle_m1031431879 (MLWorldPlanes_t897167128 * __this, uint64_t ___handle0, Query_t2690121588 * ___query1, Dictionary_2_t2852916536 * ___completedQueries2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetQueryResultForHandle_m1031431879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetQueryResultForHandle_m1031431879_RuntimeMethod_var);
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	MLPlaneBoundariesList_t215409676  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(MLPlaneBoundariesList_t215409676 ));
		Query_t2690121588 * L_0 = ___query1;
		NullCheck(L_0);
		bool L_1 = Query_get_CanRequestBoundaries_m1840087566(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		Query_t2690121588 * L_2 = ___query1;
		NullCheck(L_2);
		bool L_3 = Query_get_IsRequestingBoundaries_m2588259630(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		PlanesApiNativeBindings_MLPlaneBoundariesListInit_m310069473(NULL /*static, unused*/, (MLPlaneBoundariesList_t215409676 *)(&V_2), /*hidden argument*/NULL);
		MLPlaneBoundariesList_t215409676  L_4 = V_2;
		MLPlaneBoundariesList_t215409676  L_5 = L_4;
		RuntimeObject * L_6 = Box(MLPlaneBoundariesList_t215409676_il2cpp_TypeInfo_var, &L_5);
		Query_t2690121588 * L_7 = ___query1;
		NullCheck(L_7);
		intptr_t L_8 = L_7->get_PlaneBoundariesResultsUnmanaged_5();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_m2294149499(NULL /*static, unused*/, L_6, L_8, (bool)1, /*hidden argument*/NULL);
		uint64_t L_9 = __this->get__planesTracker_5();
		uint64_t L_10 = ___handle0;
		Query_t2690121588 * L_11 = ___query1;
		NullCheck(L_11);
		intptr_t L_12 = L_11->get_PlanesResultsUnmanaged_3();
		Query_t2690121588 * L_13 = ___query1;
		NullCheck(L_13);
		intptr_t L_14 = L_13->get_PlaneBoundariesResultsUnmanaged_5();
		int32_t L_15 = PlanesApiNativeBindings_MLPlanesQueryGetResultsWithBoundaries_m3746688729(NULL /*static, unused*/, L_9, L_10, L_12, (uint32_t*)(&V_0), L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_006e;
	}

IL_0059:
	{
		uint64_t L_16 = __this->get__planesTracker_5();
		uint64_t L_17 = ___handle0;
		Query_t2690121588 * L_18 = ___query1;
		NullCheck(L_18);
		intptr_t L_19 = L_18->get_PlanesResultsUnmanaged_3();
		int32_t L_20 = PlanesApiNativeBindings_MLPlanesQueryGetResults_m355351042(NULL /*static, unused*/, L_16, L_17, L_19, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_20;
	}

IL_006e:
	{
		Query_t2690121588 * L_21 = ___query1;
		int32_t L_22 = V_1;
		intptr_t L_23 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_24 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_24, NULL, L_23, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_25;
		memset(&L_25, 0, sizeof(L_25));
		MLResult__ctor_m1759028860((&L_25), L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_Result_7(L_25);
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_27 = V_1;
		if (L_27)
		{
			goto IL_0102;
		}
	}
	{
		Query_t2690121588 * L_28 = ___query1;
		uint32_t L_29 = V_0;
		MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380(__this, L_28, L_29, /*hidden argument*/NULL);
		Query_t2690121588 * L_30 = ___query1;
		NullCheck(L_30);
		bool L_31 = Query_get_CanRequestBoundaries_m1840087566(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fd;
		}
	}
	{
		Query_t2690121588 * L_32 = ___query1;
		NullCheck(L_32);
		bool L_33 = Query_get_IsRequestingBoundaries_m2588259630(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fd;
		}
	}
	{
		Query_t2690121588 * L_34 = ___query1;
		NullCheck(L_34);
		intptr_t L_35 = L_34->get_PlaneBoundariesResultsUnmanaged_5();
		RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (MLPlaneBoundariesList_t215409676_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_38 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		V_2 = ((*(MLPlaneBoundariesList_t215409676 *)((MLPlaneBoundariesList_t215409676 *)UnBox(L_38, MLPlaneBoundariesList_t215409676_il2cpp_TypeInfo_var))));
		uint64_t L_39 = __this->get__planesTracker_5();
		MLPlaneBoundariesList_t215409676  L_40 = V_2;
		int32_t L_41 = PlanesApiNativeBindings_MLPlanesReleaseBoundariesList_m2700064302(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		int32_t L_42 = V_1;
		if (!L_42)
		{
			goto IL_00fd;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_43 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_44 = L_43;
		Query_t2690121588 * L_45 = ___query1;
		NullCheck(L_45);
		MLResult_t265502022  L_46 = L_45->get_Result_7();
		MLResult_t265502022  L_47 = L_46;
		RuntimeObject * L_48 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_48);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_48);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral1785588440, L_44, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		goto IL_0120;
	}

IL_0102:
	{
		ObjectU5BU5D_t2843939325* L_49 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_50 = L_49;
		Query_t2690121588 * L_51 = ___query1;
		NullCheck(L_51);
		MLResult_t265502022  L_52 = L_51->get_Result_7();
		MLResult_t265502022  L_53 = L_52;
		RuntimeObject * L_54 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_54);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral1785588440, L_50, /*hidden argument*/NULL);
	}

IL_0120:
	{
		Dictionary_2_t2852916536 * L_55 = ___completedQueries2;
		uint64_t L_56 = ___handle0;
		Query_t2690121588 * L_57 = ___query1;
		NullCheck(L_55);
		Dictionary_2_Add_m310089197(L_55, L_56, L_57, /*hidden argument*/Dictionary_2_Add_m310089197_RuntimeMethod_var);
		Dictionary_2_t2852916536 * L_58 = __this->get__pendingQueries_4();
		uint64_t L_59 = ___handle0;
		NullCheck(L_58);
		Dictionary_2_Remove_m4117128284(L_58, L_59, /*hidden argument*/Dictionary_2_Remove_m4117128284_RuntimeMethod_var);
	}

IL_0135:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractPlanesFromQueryResults(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, uint32_t ___numResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ExtractPlanesFromQueryResults_m2769379380_RuntimeMethod_var);
	{
		Query_t2690121588 * L_0 = ___query0;
		uint32_t L_1 = ___numResults1;
		MLWorldPlanes_ExtractRectangularPlanes_m467654221(__this, L_0, L_1, /*hidden argument*/NULL);
		Query_t2690121588 * L_2 = ___query0;
		NullCheck(L_2);
		bool L_3 = Query_get_CanRequestBoundaries_m1840087566(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Query_t2690121588 * L_4 = ___query0;
		NullCheck(L_4);
		bool L_5 = Query_get_IsRequestingBoundaries_m2588259630(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		Query_t2690121588 * L_6 = ___query0;
		MLWorldPlanes_ExtractPolygonalPlanes_m3848234297(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractRectangularPlanes(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractRectangularPlanes_m467654221 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, uint32_t ___numResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ExtractRectangularPlanes_m467654221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ExtractRectangularPlanes_m467654221_RuntimeMethod_var);
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	MLPlane_t934005159  V_3;
	memset(&V_3, 0, sizeof(V_3));
	MLWorldPlane_t893955864  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Query_t2690121588 * L_0 = ___query0;
		uint32_t L_1 = ___numResults1;
		MLWorldPlaneU5BU5D_t829094281* L_2 = (MLWorldPlaneU5BU5D_t829094281*)SZArrayNew(MLWorldPlaneU5BU5D_t829094281_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_1)));
		NullCheck(L_0);
		L_0->set_Planes_4(L_2);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (MLPlane_t934005159_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_5 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Query_t2690121588 * L_6 = ___query0;
		NullCheck(L_6);
		intptr_t L_7 = L_6->get_PlanesResultsUnmanaged_3();
		V_1 = L_7;
		V_2 = 0;
		goto IL_00dc;
	}

IL_002b:
	{
		intptr_t L_8 = V_1;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (MLPlane_t934005159_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_11 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_3 = ((*(MLPlane_t934005159 *)((MLPlane_t934005159 *)UnBox(L_11, MLPlane_t934005159_il2cpp_TypeInfo_var))));
		Query_t2690121588 * L_12 = ___query0;
		NullCheck(L_12);
		MLWorldPlaneU5BU5D_t829094281* L_13 = L_12->get_Planes_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		il2cpp_codegen_initobj((&V_4), sizeof(MLWorldPlane_t893955864 ));
		float L_15 = (&V_3)->get_Height_3();
		float L_16 = MLConvert_ToUnity_m3479320760(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		(&V_4)->set_Height_3(L_16);
		float L_17 = (&V_3)->get_Width_2();
		float L_18 = MLConvert_ToUnity_m3479320760(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		(&V_4)->set_Width_2(L_18);
		MLVec3f_t486797299  L_19 = (&V_3)->get_Position_0();
		Vector3_t3722313464  L_20 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_19, (bool)1, (bool)1, /*hidden argument*/NULL);
		(&V_4)->set_Center_0(L_20);
		MLQuaternionf_t1293654839  L_21 = (&V_3)->get_Rotation_1();
		Quaternion_t2301928331  L_22 = MLConvert_ToUnity_m1079097615(NULL /*static, unused*/, L_21, (bool)1, /*hidden argument*/NULL);
		(&V_4)->set_Rotation_1(L_22);
		uint32_t L_23 = (&V_3)->get_Flags_4();
		(&V_4)->set_Flags_4(L_23);
		uint64_t L_24 = (&V_3)->get_Id_5();
		(&V_4)->set_Id_5(L_24);
		MLWorldPlane_t893955864  L_25 = V_4;
		*(MLWorldPlane_t893955864 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))) = L_25;
		int64_t L_26 = IntPtr_ToInt64_m192765549((intptr_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_27 = V_0;
		IntPtr__ctor_m987476171((intptr_t*)(&V_1), ((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)L_27))))), /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_29 = V_2;
		uint32_t L_30 = ___numResults1;
		if ((((int64_t)(((int64_t)((int64_t)L_29)))) < ((int64_t)(((int64_t)((uint64_t)L_30))))))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ExtractPolygonalPlanes(UnityEngine.XR.MagicLeap.MLWorldPlanes/Query)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ExtractPolygonalPlanes_m3848234297 (MLWorldPlanes_t897167128 * __this, Query_t2690121588 * ___query0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ExtractPolygonalPlanes_m3848234297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ExtractPolygonalPlanes_m3848234297_RuntimeMethod_var);
	MLPlaneBoundariesList_t215409676  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Query_t2690121588 * L_0 = ___query0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_PlaneBoundariesResultsUnmanaged_5();
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (MLPlaneBoundariesList_t215409676_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = ((*(MLPlaneBoundariesList_t215409676 *)((MLPlaneBoundariesList_t215409676 *)UnBox(L_4, MLPlaneBoundariesList_t215409676_il2cpp_TypeInfo_var))));
		Query_t2690121588 * L_5 = ___query0;
		intptr_t L_6 = (&V_0)->get_PlaneBoundaries_1();
		uint32_t L_7 = (&V_0)->get_PlaneBoundariesCount_2();
		MLWorldPlaneBoundariesU5BU5D_t1821879535* L_8 = MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864(__this, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_PlaneBoundaries_6(L_8);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldBoundariesArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlaneBoundariesU5BU5D_t1821879535* MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetMLWorldBoundariesArray_m2879412864_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLWorldPlaneBoundariesU5BU5D_t1821879535* V_1 = NULL;
	int32_t V_2 = 0;
	MLPlaneBoundaries_t1512705746  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (MLPlaneBoundaries_t1512705746_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = ___count1;
		MLWorldPlaneBoundariesU5BU5D_t1821879535* L_4 = (MLWorldPlaneBoundariesU5BU5D_t1821879535*)SZArrayNew(MLWorldPlaneBoundariesU5BU5D_t1821879535_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_3)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_007d;
	}

IL_001f:
	{
		intptr_t L_5 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (MLPlaneBoundaries_t1512705746_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_8 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_3 = ((*(MLPlaneBoundaries_t1512705746 *)((MLPlaneBoundaries_t1512705746 *)UnBox(L_8, MLPlaneBoundaries_t1512705746_il2cpp_TypeInfo_var))));
		MLWorldPlaneBoundariesU5BU5D_t1821879535* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		uint64_t L_11 = (&V_3)->get_Id_0();
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_Id_0(L_11);
		MLWorldPlaneBoundariesU5BU5D_t1821879535* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		intptr_t L_14 = (&V_3)->get_Boundaries_1();
		uint32_t L_15 = (&V_3)->get_BoundariesCount_2();
		MLWorldPlaneBoundaryU5BU5D_t1423265241* L_16 = MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780(__this, L_14, L_15, /*hidden argument*/NULL);
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->set_Boundaries_1(L_16);
		int64_t L_17 = IntPtr_ToInt64_m192765549((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		IntPtr__ctor_m987476171((intptr_t*)(&___ptr0), ((int64_t)il2cpp_codegen_add((int64_t)L_17, (int64_t)(((int64_t)((int64_t)L_18))))), /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_20 = V_2;
		uint32_t L_21 = ___count1;
		if ((((int64_t)(((int64_t)((int64_t)L_20)))) < ((int64_t)(((int64_t)((uint64_t)L_21))))))
		{
			goto IL_001f;
		}
	}
	{
		MLWorldPlaneBoundariesU5BU5D_t1821879535* L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.XR.MagicLeap.MLWorldPlaneBoundary[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldPlaneBoundaryArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlaneBoundaryU5BU5D_t1423265241* MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetMLWorldPlaneBoundaryArray_m3374486780_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLWorldPlaneBoundaryU5BU5D_t1423265241* V_1 = NULL;
	int32_t V_2 = 0;
	MLPlaneBoundary_t1075292213  V_3;
	memset(&V_3, 0, sizeof(V_3));
	MLPolygon_t1612796882  V_4;
	memset(&V_4, 0, sizeof(V_4));
	MLWorldPolygon_t751043636  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (MLPlaneBoundary_t1075292213_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = ___count1;
		MLWorldPlaneBoundaryU5BU5D_t1423265241* L_4 = (MLWorldPlaneBoundaryU5BU5D_t1423265241*)SZArrayNew(MLWorldPlaneBoundaryU5BU5D_t1423265241_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_3)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_00b8;
	}

IL_001f:
	{
		intptr_t L_5 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (MLPlaneBoundary_t1075292213_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_8 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_3 = ((*(MLPlaneBoundary_t1075292213 *)((MLPlaneBoundary_t1075292213 *)UnBox(L_8, MLPlaneBoundary_t1075292213_il2cpp_TypeInfo_var))));
		intptr_t L_9 = (&V_3)->get_Polygon_0();
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (MLPolygon_t1612796882_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_4 = ((*(MLPolygon_t1612796882 *)((MLPolygon_t1612796882 *)UnBox(L_12, MLPolygon_t1612796882_il2cpp_TypeInfo_var))));
		MLWorldPlaneBoundaryU5BU5D_t1423265241* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		il2cpp_codegen_initobj((&V_5), sizeof(MLWorldPolygon_t751043636 ));
		intptr_t L_15 = (&V_4)->get_Vertices_0();
		uint32_t L_16 = (&V_4)->get_VerticesCount_1();
		Vector3U5BU5D_t1718750761* L_17 = MLWorldPlanes_GetVector3Array_m116043022(__this, L_15, L_16, /*hidden argument*/NULL);
		(&V_5)->set_Vertices_0(L_17);
		MLWorldPolygon_t751043636  L_18 = V_5;
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->set_Polygon_0(L_18);
		MLWorldPlaneBoundaryU5BU5D_t1423265241* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		intptr_t L_21 = (&V_3)->get_Holes_1();
		uint32_t L_22 = (&V_3)->get_HolesCount_2();
		MLWorldPolygonU5BU5D_t555778173* L_23 = MLWorldPlanes_GetMLWorldPolygonArray_m3447409925(__this, L_21, L_22, /*hidden argument*/NULL);
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_Holes_1(L_23);
		int64_t L_24 = IntPtr_ToInt64_m192765549((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int32_t L_25 = V_0;
		IntPtr__ctor_m987476171((intptr_t*)(&___ptr0), ((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)(((int64_t)((int64_t)L_25))))), /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b8:
	{
		int32_t L_27 = V_2;
		uint32_t L_28 = ___count1;
		if ((((int64_t)(((int64_t)((int64_t)L_27)))) < ((int64_t)(((int64_t)((uint64_t)L_28))))))
		{
			goto IL_001f;
		}
	}
	{
		MLWorldPlaneBoundaryU5BU5D_t1423265241* L_29 = V_1;
		return L_29;
	}
}
// UnityEngine.XR.MagicLeap.MLWorldPolygon[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetMLWorldPolygonArray(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR MLWorldPolygonU5BU5D_t555778173* MLWorldPlanes_GetMLWorldPolygonArray_m3447409925 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetMLWorldPolygonArray_m3447409925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetMLWorldPolygonArray_m3447409925_RuntimeMethod_var);
	int32_t V_0 = 0;
	MLWorldPolygonU5BU5D_t555778173* V_1 = NULL;
	int32_t V_2 = 0;
	MLPolygon_t1612796882  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (MLPolygon_t1612796882_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = ___count1;
		MLWorldPolygonU5BU5D_t555778173* L_4 = (MLWorldPolygonU5BU5D_t555778173*)SZArrayNew(MLWorldPolygonU5BU5D_t555778173_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_3)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_006a;
	}

IL_001f:
	{
		intptr_t L_5 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (MLPolygon_t1612796882_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_8 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_3 = ((*(MLPolygon_t1612796882 *)((MLPolygon_t1612796882 *)UnBox(L_8, MLPolygon_t1612796882_il2cpp_TypeInfo_var))));
		MLWorldPolygonU5BU5D_t555778173* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		intptr_t L_11 = (&V_3)->get_Vertices_0();
		uint32_t L_12 = (&V_3)->get_VerticesCount_1();
		Vector3U5BU5D_t1718750761* L_13 = MLWorldPlanes_GetVector3Array_m116043022(__this, L_11, L_12, /*hidden argument*/NULL);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_Vertices_0(L_13);
		int64_t L_14 = IntPtr_ToInt64_m192765549((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		IntPtr__ctor_m987476171((intptr_t*)(&___ptr0), ((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)(((int64_t)((int64_t)L_15))))), /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_17 = V_2;
		uint32_t L_18 = ___count1;
		if ((((int64_t)(((int64_t)((int64_t)L_17)))) < ((int64_t)(((int64_t)((uint64_t)L_18))))))
		{
			goto IL_001f;
		}
	}
	{
		MLWorldPolygonU5BU5D_t555778173* L_19 = V_1;
		return L_19;
	}
}
// UnityEngine.Vector3[] UnityEngine.XR.MagicLeap.MLWorldPlanes::GetVector3Array(System.IntPtr,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* MLWorldPlanes_GetVector3Array_m116043022 (MLWorldPlanes_t897167128 * __this, intptr_t ___ptr0, uint32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetVector3Array_m116043022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetVector3Array_m116043022_RuntimeMethod_var);
	int32_t V_0 = 0;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	MLVec3f_t486797299  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (MLVec3f_t486797299_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = ___count1;
		Vector3U5BU5D_t1718750761* L_4 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_3)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_005e;
	}

IL_001f:
	{
		intptr_t L_5 = ___ptr0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (MLVec3f_t486797299_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_8 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_3 = ((*(MLVec3f_t486797299 *)((MLVec3f_t486797299 *)UnBox(L_8, MLVec3f_t486797299_il2cpp_TypeInfo_var))));
		Vector3U5BU5D_t1718750761* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		MLVec3f_t486797299  L_11 = V_3;
		Vector3_t3722313464  L_12 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_11, (bool)1, (bool)1, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))) = L_12;
		int64_t L_13 = IntPtr_ToInt64_m192765549((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		IntPtr__ctor_m987476171((intptr_t*)(&___ptr0), ((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)(((int64_t)((int64_t)L_14))))), /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_16 = V_2;
		uint32_t L_17 = ___count1;
		if ((((int64_t)(((int64_t)((int64_t)L_16)))) < ((int64_t)(((int64_t)((uint64_t)L_17))))))
		{
			goto IL_001f;
		}
	}
	{
		Vector3U5BU5D_t1718750761* L_18 = V_1;
		return L_18;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes::ProcessCompletedQueries(System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.XR.MagicLeap.MLWorldPlanes/Query>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldPlanes_ProcessCompletedQueries_m4273076203 (MLWorldPlanes_t897167128 * __this, Dictionary_2_t2852916536 * ___completedQueries0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ProcessCompletedQueries_m4273076203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ProcessCompletedQueries_m4273076203_RuntimeMethod_var);
	uint64_t V_0 = 0;
	Enumerator_t3035093520  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Query_t2690121588 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2852916536 * L_0 = ___completedQueries0;
		NullCheck(L_0);
		KeyCollection_t3042592007 * L_1 = Dictionary_2_get_Keys_m4214368148(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4214368148_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t3035093520  L_2 = KeyCollection_GetEnumerator_m343274962(L_1, /*hidden argument*/KeyCollection_GetEnumerator_m343274962_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0099;
		}

IL_0011:
		{
			uint64_t L_3 = Enumerator_get_Current_m2460190571((Enumerator_t3035093520 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2460190571_RuntimeMethod_var);
			V_0 = L_3;
			Dictionary_2_t2852916536 * L_4 = ___completedQueries0;
			uint64_t L_5 = V_0;
			NullCheck(L_4);
			Query_t2690121588 * L_6 = Dictionary_2_get_Item_m3792233323(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3792233323_RuntimeMethod_var);
			V_2 = L_6;
			Query_t2690121588 * L_7 = V_2;
			NullCheck(L_7);
			MLWorldPlaneU5BU5D_t829094281* L_8 = L_7->get_Planes_4();
			if (L_8)
			{
				goto IL_0038;
			}
		}

IL_002c:
		{
			Query_t2690121588 * L_9 = V_2;
			MLWorldPlaneU5BU5D_t829094281* L_10 = (MLWorldPlaneU5BU5D_t829094281*)SZArrayNew(MLWorldPlaneU5BU5D_t829094281_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_9);
			L_9->set_Planes_4(L_10);
		}

IL_0038:
		{
			Query_t2690121588 * L_11 = V_2;
			NullCheck(L_11);
			MLWorldPlaneBoundariesU5BU5D_t1821879535* L_12 = L_11->get_PlaneBoundaries_6();
			if (L_12)
			{
				goto IL_004f;
			}
		}

IL_0043:
		{
			Query_t2690121588 * L_13 = V_2;
			MLWorldPlaneBoundariesU5BU5D_t1821879535* L_14 = (MLWorldPlaneBoundariesU5BU5D_t1821879535*)SZArrayNew(MLWorldPlaneBoundariesU5BU5D_t1821879535_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_13);
			L_13->set_PlaneBoundaries_6(L_14);
		}

IL_004f:
		{
			Query_t2690121588 * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = Query_get_CanRequestBoundaries_m1840087566(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_005a:
		{
			Query_t2690121588 * L_17 = V_2;
			NullCheck(L_17);
			Action_3_t4204205301 * L_18 = L_17->get_CallbackWithBoundaries_1();
			Query_t2690121588 * L_19 = V_2;
			NullCheck(L_19);
			MLResult_t265502022  L_20 = L_19->get_Result_7();
			Query_t2690121588 * L_21 = V_2;
			NullCheck(L_21);
			MLWorldPlaneU5BU5D_t829094281* L_22 = L_21->get_Planes_4();
			Query_t2690121588 * L_23 = V_2;
			NullCheck(L_23);
			MLWorldPlaneBoundariesU5BU5D_t1821879535* L_24 = L_23->get_PlaneBoundaries_6();
			NullCheck(L_18);
			Action_3_Invoke_m1533210316(L_18, L_20, L_22, L_24, /*hidden argument*/Action_3_Invoke_m1533210316_RuntimeMethod_var);
			goto IL_0093;
		}

IL_007c:
		{
			Query_t2690121588 * L_25 = V_2;
			NullCheck(L_25);
			Action_2_t409093569 * L_26 = L_25->get_CallbackWithoutBoundaries_0();
			Query_t2690121588 * L_27 = V_2;
			NullCheck(L_27);
			MLResult_t265502022  L_28 = L_27->get_Result_7();
			Query_t2690121588 * L_29 = V_2;
			NullCheck(L_29);
			MLWorldPlaneU5BU5D_t829094281* L_30 = L_29->get_Planes_4();
			NullCheck(L_26);
			Action_2_Invoke_m1171916642(L_26, L_28, L_30, /*hidden argument*/Action_2_Invoke_m1171916642_RuntimeMethod_var);
		}

IL_0093:
		{
			Query_t2690121588 * L_31 = V_2;
			NullCheck(L_31);
			Query_Dispose_m3838602477(L_31, /*hidden argument*/NULL);
		}

IL_0099:
		{
			bool L_32 = Enumerator_MoveNext_m682503810((Enumerator_t3035093520 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m682503810_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0011;
			}
		}

IL_00a5:
		{
			IL2CPP_LEAVE(0xB6, FINALLY_00aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		Enumerator_t3035093520  L_33 = V_1;
		Enumerator_t3035093520  L_34 = L_33;
		RuntimeObject * L_35 = Box(Enumerator_t3035093520_il2cpp_TypeInfo_var, &L_34);
		NullCheck((RuntimeObject*)L_35);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
		IL2CPP_END_FINALLY(170)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b6:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::GetPlanes(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams,System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_GetPlanes_m891916505 (RuntimeObject * __this /* static, unused */, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, Action_3_t4204205301 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetPlanes_m891916505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetPlanes_m891916505_RuntimeMethod_var);
	{
		MLWorldPlanesQueryParams_t4087992392  L_0 = ___queryParams0;
		MLWorldPlanesQueryParams_t4087992392  L_1 = MLWorldPlanes_ValidateQueryParams_m1729142513(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___queryParams0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t689948872_il2cpp_TypeInfo_var);
		MLWorldPlanes_t897167128 * L_2 = MLAPISingleton_1_get_Instance_m3771610727(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m3771610727_RuntimeMethod_var);
		MLWorldPlanesQueryParams_t4087992392  L_3 = ___queryParams0;
		Action_3_t4204205301 * L_4 = ___callback1;
		NullCheck(L_2);
		MLResult_t265502022  L_5 = MLWorldPlanes_GetPlanesInternal_m804000014(L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::GetPlanesInternal(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams,System.Object)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_GetPlanesInternal_m804000014 (MLWorldPlanes_t897167128 * __this, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_GetPlanesInternal_m804000014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_GetPlanesInternal_m804000014_RuntimeMethod_var);
	{
		RuntimeObject * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		MLPluginLog_Error_m2481084810(NULL /*static, unused*/, _stringLiteral1549374725, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_2 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_2, NULL, L_1, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_3;
		memset(&L_3, 0, sizeof(L_3));
		MLResult__ctor_m1759028860((&L_3), 5, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0023:
	{
		MLWorldPlanesQueryParams_t4087992392  L_4 = ___queryParams0;
		RuntimeObject * L_5 = ___callback1;
		MLResult_t265502022  L_6 = MLWorldPlanes_BeginPlaneQuery_m154042370(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldPlanes::BeginPlaneQuery(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams,System.Object)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldPlanes_BeginPlaneQuery_m154042370 (MLWorldPlanes_t897167128 * __this, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_BeginPlaneQuery_m154042370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_BeginPlaneQuery_m154042370_RuntimeMethod_var);
	MLPlanesQuery_t647580137  V_0;
	memset(&V_0, 0, sizeof(V_0));
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	Query_t2690121588 * V_3 = NULL;
	{
		uint64_t L_0 = __this->get__planesTracker_5();
		bool L_1 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		MLPluginLog_Error_m2481084810(NULL /*static, unused*/, _stringLiteral1798214334, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_3 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_4;
		memset(&L_4, 0, sizeof(L_4));
		MLResult__ctor_m1759028860((&L_4), 5, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002d:
	{
		int32_t L_5 = (&___queryParams0)->get_Flags_0();
		(&V_0)->set_Flags_0(L_5);
		Vector3_t3722313464  L_6 = (&___queryParams0)->get_BoundsCenter_1();
		MLVec3f_t486797299  L_7 = MLConvert_FromUnity_m1623782790(NULL /*static, unused*/, L_6, (bool)1, (bool)1, /*hidden argument*/NULL);
		(&V_0)->set_BoundsCenter_1(L_7);
		Quaternion_t2301928331  L_8 = (&___queryParams0)->get_BoundsRotation_2();
		MLQuaternionf_t1293654839  L_9 = MLConvert_FromUnity_m971747090(NULL /*static, unused*/, L_8, (bool)1, /*hidden argument*/NULL);
		(&V_0)->set_BoundsRotation_2(L_9);
		Vector3_t3722313464  L_10 = (&___queryParams0)->get_BoundsExtents_3();
		MLVec3f_t486797299  L_11 = MLConvert_FromUnity_m1623782790(NULL /*static, unused*/, L_10, (bool)0, (bool)1, /*hidden argument*/NULL);
		(&V_0)->set_BoundsExtents_3(L_11);
		uint32_t L_12 = (&___queryParams0)->get_MaxResults_4();
		(&V_0)->set_MaxResults_4(L_12);
		float L_13 = (&___queryParams0)->get_MinHoleLength_5();
		(&V_0)->set_MinHoleLength_5(L_13);
		float L_14 = (&___queryParams0)->get_MinPlaneArea_6();
		(&V_0)->set_MinPlaneArea_6(L_14);
		V_1 = (((int64_t)((int64_t)(-1))));
		uint64_t L_15 = __this->get__planesTracker_5();
		int32_t L_16 = PlanesApiNativeBindings_MLPlanesQueryBegin_m113900280(NULL /*static, unused*/, L_15, (MLPlanesQuery_t647580137 *)(&V_0), (uint64_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)8))))
		{
			goto IL_00e0;
		}
	}
	{
		MLPlanesQuery_t647580137 * L_18 = (&V_0);
		int32_t L_19 = L_18->get_Flags_0();
		L_18->set_Flags_0(((int32_t)((int32_t)L_19&(int32_t)((int32_t)-513))));
		uint64_t L_20 = __this->get__planesTracker_5();
		int32_t L_21 = PlanesApiNativeBindings_MLPlanesQueryBegin_m113900280(NULL /*static, unused*/, L_20, (MLPlanesQuery_t647580137 *)(&V_0), (uint64_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_00e0:
	{
		int32_t L_22 = V_2;
		if (L_22)
		{
			goto IL_00f1;
		}
	}
	{
		uint64_t L_23 = V_1;
		bool L_24 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0104;
		}
	}

IL_00f1:
	{
		int32_t L_25 = V_2;
		intptr_t L_26 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_27 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_27, NULL, L_26, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_28;
		memset(&L_28, 0, sizeof(L_28));
		MLResult__ctor_m1759028860((&L_28), L_25, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_0104:
	{
		V_3 = (Query_t2690121588 *)NULL;
		RuntimeObject * L_29 = ___callback1;
		NullCheck(L_29);
		Type_t * L_30 = Object_GetType_m88164663(L_29, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_31 = { reinterpret_cast<intptr_t> (Action_3_t4204205301_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))))
		{
			goto IL_0140;
		}
	}
	{
		RuntimeObject * L_33 = ___callback1;
		uint32_t L_34 = (&V_0)->get_MaxResults_4();
		int32_t L_35 = (&V_0)->get_Flags_0();
		bool L_36 = MLWorldPlanes_IsRequestingBoundaries_m1506575629(__this, L_35, /*hidden argument*/NULL);
		Query_t2690121588 * L_37 = (Query_t2690121588 *)il2cpp_codegen_object_new(Query_t2690121588_il2cpp_TypeInfo_var);
		Query__ctor_m828612218(L_37, ((Action_3_t4204205301 *)CastclassSealed((RuntimeObject*)L_33, Action_3_t4204205301_il2cpp_TypeInfo_var)), L_34, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		goto IL_0153;
	}

IL_0140:
	{
		RuntimeObject * L_38 = ___callback1;
		uint32_t L_39 = (&V_0)->get_MaxResults_4();
		Query_t2690121588 * L_40 = (Query_t2690121588 *)il2cpp_codegen_object_new(Query_t2690121588_il2cpp_TypeInfo_var);
		Query__ctor_m1371094385(L_40, ((Action_2_t409093569 *)CastclassSealed((RuntimeObject*)L_38, Action_2_t409093569_il2cpp_TypeInfo_var)), L_39, /*hidden argument*/NULL);
		V_3 = L_40;
	}

IL_0153:
	{
		Dictionary_2_t2852916536 * L_41 = __this->get__pendingQueries_4();
		uint64_t L_42 = V_1;
		Query_t2690121588 * L_43 = V_3;
		NullCheck(L_41);
		Dictionary_2_Add_m310089197(L_41, L_42, L_43, /*hidden argument*/Dictionary_2_Add_m310089197_RuntimeMethod_var);
		int32_t L_44 = V_2;
		intptr_t L_45 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_46 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_46, NULL, L_45, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_47;
		memset(&L_47, 0, sizeof(L_47));
		MLResult__ctor_m1759028860((&L_47), L_44, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes::IsRequestingBoundaries(MagicLeapInternal.PlanesApiNativeBindings/MLPlanesQueryFlags)
extern "C" IL2CPP_METHOD_ATTR bool MLWorldPlanes_IsRequestingBoundaries_m1506575629 (MLWorldPlanes_t897167128 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_IsRequestingBoundaries_m1506575629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_IsRequestingBoundaries_m1506575629_RuntimeMethod_var);
	{
		int32_t L_0 = ___flags0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)512)))) == ((int32_t)((int32_t)512)))? 1 : 0);
	}
}
// UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams UnityEngine.XR.MagicLeap.MLWorldPlanes::ValidateQueryParams(UnityEngine.XR.MagicLeap.MLWorldPlanesQueryParams)
extern "C" IL2CPP_METHOD_ATTR MLWorldPlanesQueryParams_t4087992392  MLWorldPlanes_ValidateQueryParams_m1729142513 (RuntimeObject * __this /* static, unused */, MLWorldPlanesQueryParams_t4087992392  ___queryParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldPlanes_ValidateQueryParams_m1729142513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldPlanes_ValidateQueryParams_m1729142513_RuntimeMethod_var);
	{
		Quaternion_t2301928331 * L_0 = (&___queryParams0)->get_address_of_BoundsRotation_2();
		float L_1 = L_0->get_x_0();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		Quaternion_t2301928331 * L_2 = (&___queryParams0)->get_address_of_BoundsRotation_2();
		float L_3 = L_2->get_y_1();
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		Quaternion_t2301928331 * L_4 = (&___queryParams0)->get_address_of_BoundsRotation_2();
		float L_5 = L_4->get_z_2();
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		Quaternion_t2301928331 * L_6 = (&___queryParams0)->get_address_of_BoundsRotation_2();
		float L_7 = L_6->get_w_3();
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		MLPluginLog_Warning_m456580735(NULL /*static, unused*/, _stringLiteral711215277, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&___queryParams0)->set_BoundsRotation_2(L_8);
	}

IL_006e:
	{
		MLWorldPlanesQueryParams_t4087992392  L_9 = ___queryParams0;
		return L_9;
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
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::.ctor(System.Action`2<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[]>,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void Query__ctor_m1371094385 (Query_t2690121588 * __this, Action_2_t409093569 * ___callback0, uint32_t ___maxResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query__ctor_m1371094385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query__ctor_m1371094385_RuntimeMethod_var);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Query_set_CanRequestBoundaries_m3858444546(__this, (bool)0, /*hidden argument*/NULL);
		Query_set_IsRequestingBoundaries_m3869185173(__this, (bool)0, /*hidden argument*/NULL);
		Action_2_t409093569 * L_0 = ___callback0;
		__this->set_CallbackWithoutBoundaries_0(L_0);
		uint32_t L_1 = ___maxResults1;
		__this->set_MaxResults_2(L_1);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (MLPlane_t934005159_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_4 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint32_t L_5 = __this->get_MaxResults_2();
		intptr_t L_6 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		__this->set_PlanesResultsUnmanaged_3(L_6);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::.ctor(System.Action`3<UnityEngine.XR.MagicLeap.MLResult,UnityEngine.XR.MagicLeap.MLWorldPlane[],UnityEngine.XR.MagicLeap.MLWorldPlaneBoundaries[]>,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query__ctor_m828612218 (Query_t2690121588 * __this, Action_3_t4204205301 * ___callback0, uint32_t ___maxResults1, bool ___requestBoundaries2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query__ctor_m828612218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query__ctor_m828612218_RuntimeMethod_var);
	Query_t2690121588 * G_B2_0 = NULL;
	Query_t2690121588 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Query_t2690121588 * G_B3_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var);
		uint32_t L_0 = MagicLeapDevice_get_PlatformLevel_m4029381879(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) >= ((uint32_t)2))))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		Query_set_CanRequestBoundaries_m3858444546(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		bool L_1 = ___requestBoundaries2;
		Query_set_IsRequestingBoundaries_m3869185173(__this, L_1, /*hidden argument*/NULL);
		Action_3_t4204205301 * L_2 = ___callback0;
		__this->set_CallbackWithBoundaries_1(L_2);
		uint32_t L_3 = ___maxResults1;
		__this->set_MaxResults_2(L_3);
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (MLPlane_t934005159_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_6 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		uint32_t L_7 = __this->get_MaxResults_2();
		intptr_t L_8 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		__this->set_PlanesResultsUnmanaged_3(L_8);
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (MLPlaneBoundariesList_t215409676_0_0_0_var) };
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		int32_t L_11 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		uint32_t L_12 = __this->get_MaxResults_2();
		intptr_t L_13 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12)), /*hidden argument*/NULL);
		__this->set_PlaneBoundariesResultsUnmanaged_5(L_13);
		return;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::get_CanRequestBoundaries()
extern "C" IL2CPP_METHOD_ATTR bool Query_get_CanRequestBoundaries_m1840087566 (Query_t2690121588 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_get_CanRequestBoundaries_m1840087566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_get_CanRequestBoundaries_m1840087566_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CCanRequestBoundariesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::set_CanRequestBoundaries(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_set_CanRequestBoundaries_m3858444546 (Query_t2690121588 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_set_CanRequestBoundaries_m3858444546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_set_CanRequestBoundaries_m3858444546_RuntimeMethod_var);
	{
		bool L_0 = ___value0;
		__this->set_U3CCanRequestBoundariesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::get_IsRequestingBoundaries()
extern "C" IL2CPP_METHOD_ATTR bool Query_get_IsRequestingBoundaries_m2588259630 (Query_t2690121588 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_get_IsRequestingBoundaries_m2588259630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_get_IsRequestingBoundaries_m2588259630_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CIsRequestingBoundariesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::set_IsRequestingBoundaries(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_set_IsRequestingBoundaries_m3869185173 (Query_t2690121588 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_set_IsRequestingBoundaries_m3869185173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_set_IsRequestingBoundaries_m3869185173_RuntimeMethod_var);
	{
		bool L_0 = ___value0;
		__this->set_U3CIsRequestingBoundariesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Query_Finalize_m1553610967 (Query_t2690121588 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_Finalize_m1553610967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_Finalize_m1553610967_RuntimeMethod_var);
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Query_Dispose_m831012807(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Query_Dispose_m3838602477 (Query_t2690121588 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_Dispose_m3838602477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_Dispose_m3838602477_RuntimeMethod_var);
	{
		Query_Dispose_m831012807(__this, (bool)1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldPlanes/Query::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Query_Dispose_m831012807 (Query_t2690121588 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_Dispose_m831012807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(Query_Dispose_m831012807_RuntimeMethod_var);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = __this->get_PlanesResultsUnmanaged_3();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0011:
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
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPolygon
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke(const MLWorldPolygon_t751043636& unmarshaled, MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Vertices_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Vertices' of type 'MLWorldPolygon'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Vertices_0Exception, NULL, NULL);
}
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke_back(const MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled, MLWorldPolygon_t751043636& unmarshaled)
{
	Exception_t* ___Vertices_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Vertices' of type 'MLWorldPolygon'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Vertices_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPolygon
extern "C" void MLWorldPolygon_t751043636_marshal_pinvoke_cleanup(MLWorldPolygon_t751043636_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.MLWorldPolygon
extern "C" void MLWorldPolygon_t751043636_marshal_com(const MLWorldPolygon_t751043636& unmarshaled, MLWorldPolygon_t751043636_marshaled_com& marshaled)
{
	Exception_t* ___Vertices_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Vertices' of type 'MLWorldPolygon'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Vertices_0Exception, NULL, NULL);
}
extern "C" void MLWorldPolygon_t751043636_marshal_com_back(const MLWorldPolygon_t751043636_marshaled_com& marshaled, MLWorldPolygon_t751043636& unmarshaled)
{
	Exception_t* ___Vertices_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Vertices' of type 'MLWorldPolygon'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Vertices_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.MLWorldPolygon
extern "C" void MLWorldPolygon_t751043636_marshal_com_cleanup(MLWorldPolygon_t751043636_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays__ctor_m110937502 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays__ctor_m110937502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays__ctor_m110937502_RuntimeMethod_var);
	MLRaycastSettings_t1144099939  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MLRaycastQuery_t3337934584  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Dictionary_2_t436580975 * L_0 = (Dictionary_2_t436580975 *)il2cpp_codegen_object_new(Dictionary_2_t436580975_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2115436320(L_0, /*hidden argument*/Dictionary_2__ctor_m2115436320_RuntimeMethod_var);
		__this->set__pendingQueries_3(L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(MLRaycastSettings_t1144099939 ));
		MLRaycastSettings_t1144099939  L_1 = V_0;
		__this->set__settings_4(L_1);
		il2cpp_codegen_initobj((&V_1), sizeof(MLRaycastQuery_t3337934584 ));
		MLRaycastQuery_t3337934584  L_2 = V_1;
		__this->set__query_5(L_2);
		__this->set__trackerHandle_6((((int64_t)((int64_t)(-1)))));
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var);
		MLAPISingleton_1__ctor_m389370787(__this, /*hidden argument*/MLAPISingleton_1__ctor_m389370787_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::CreateInstance()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_CreateInstance_m2326537007 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_CreateInstance_m2326537007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_CreateInstance_m2326537007_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var);
		bool L_0 = MLAPISingleton_1_IsValidInstance_m37160189(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_IsValidInstance_m37160189_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MLWorldRays_t3718842835 * L_1 = (MLWorldRays_t3718842835 *)il2cpp_codegen_object_new(MLWorldRays_t3718842835_il2cpp_TypeInfo_var);
		MLWorldRays__ctor_m110937502(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var);
		((MLAPISingleton_1_t3511624579_StaticFields*)il2cpp_codegen_static_fields_for(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var))->set__instance_0(L_1);
	}

IL_0014:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::Start()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_Start_m4201150463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_Start_m4201150463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_Start_m4201150463_RuntimeMethod_var);
	{
		MLWorldRays_CreateInstance_m2326537007(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var);
		MLResult_t265502022  L_0 = MLAPISingleton_1_BaseStart_m2346531178(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_BaseStart_m2346531178_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::StartAPI()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_StartAPI_m308646717 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_StartAPI_m308646717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_StartAPI_m308646717_RuntimeMethod_var);
	{
		MLResult_t265502022  L_0 = MLWorldRays_EnableRayCast_m2839752565(__this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::EnableRayCast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_EnableRayCast_m2839752565 (MLWorldRays_t3718842835 * __this, bool ___isEnabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_EnableRayCast_m2839752565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_EnableRayCast_m2839752565_RuntimeMethod_var);
	MLResult_t265502022  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		MLResult__ctor_m18499570((MLResult_t265502022 *)(&V_0), 0, /*hidden argument*/NULL);
		MLRaycastSettings_t1144099939 * L_0 = __this->get_address_of__settings_4();
		bool L_1 = ___isEnabled0;
		L_0->set_Enabled_0(L_1);
		MLRaycastSettings_t1144099939 * L_2 = __this->get_address_of__settings_4();
		bool L_3 = L_2->get_Enabled_0();
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		__this->set__trackerHandle_6((((int64_t)((int64_t)(-1)))));
		uint64_t* L_4 = __this->get_address_of__trackerHandle_6();
		int32_t L_5 = RaycastApiNativeBindings_MLRaycastCreate_m3911004103(NULL /*static, unused*/, (uint64_t*)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		intptr_t L_7 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_8 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_8, NULL, L_7, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult__ctor_m1759028860((MLResult_t265502022 *)(&V_0), L_6, L_8, /*hidden argument*/NULL);
		bool L_9 = MLResult_get_IsOk_m578243083((MLResult_t265502022 *)(&V_0), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		uint64_t L_10 = __this->get__trackerHandle_6();
		bool L_11 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008d;
		}
	}

IL_0068:
	{
		ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		MLResult_t265502022  L_14 = V_0;
		MLResult_t265502022  L_15 = L_14;
		RuntimeObject * L_16 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral3238931492, L_13, /*hidden argument*/NULL);
		MLRaycastSettings_t1144099939 * L_17 = __this->get_address_of__settings_4();
		L_17->set_Enabled_0((bool)0);
	}

IL_008d:
	{
		MLResult_t265502022  L_18 = V_0;
		return L_18;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::CleanupAPI(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_CleanupAPI_m2095633278 (MLWorldRays_t3718842835 * __this, bool ___isSafeToAccessManagedObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_CleanupAPI_m2095633278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_CleanupAPI_m2095633278_RuntimeMethod_var);
	{
		bool L_0 = ___isSafeToAccessManagedObjects0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MLWorldRays_EnableRayCast_m2839752565(__this, (bool)0, /*hidden argument*/NULL);
		MLWorldRays_Clear_m2911191125(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		MLWorldRays_DestroyNativeTracker_m65768388(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::DestroyNativeTracker()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_DestroyNativeTracker_m65768388 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_DestroyNativeTracker_m65768388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_DestroyNativeTracker_m65768388_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		uint64_t L_0 = __this->get__trackerHandle_6();
		bool L_1 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		uint64_t L_2 = __this->get__trackerHandle_6();
		int32_t L_3 = RaycastApiNativeBindings_MLRaycastDestroy_m1878973286(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = V_0;
		String_t* L_8 = MagicLeapNativeBindings_MLGetResultString_m2945365584(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral4264740623, L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		__this->set__trackerHandle_6((((int64_t)((int64_t)(-1)))));
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::Clear()
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_Clear_m2911191125 (MLWorldRays_t3718842835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_Clear_m2911191125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_Clear_m2911191125_RuntimeMethod_var);
	{
		Dictionary_2_t436580975 * L_0 = __this->get__pendingQueries_3();
		NullCheck(L_0);
		Dictionary_2_Clear_m1912202939(L_0, /*hidden argument*/Dictionary_2_Clear_m1912202939_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::Update(System.Single,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_Update_m412987748 (MLWorldRays_t3718842835 * __this, float ___deltaTime0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_Update_m412987748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_Update_m412987748_RuntimeMethod_var);
	Dictionary_2_t3595261788 * V_0 = NULL;
	uint64_t V_1 = 0;
	Enumerator_t618757959  V_2;
	memset(&V_2, 0, sizeof(V_2));
	MLRaycastResult_t3432466840  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3595261788 * L_0 = (Dictionary_2_t3595261788 *)il2cpp_codegen_object_new(Dictionary_2_t3595261788_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3937881832(L_0, /*hidden argument*/Dictionary_2__ctor_m3937881832_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t436580975 * L_1 = __this->get__pendingQueries_3();
		NullCheck(L_1);
		KeyCollection_t626256446 * L_2 = Dictionary_2_get_Keys_m2452223945(L_1, /*hidden argument*/Dictionary_2_get_Keys_m2452223945_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t618757959  L_3 = KeyCollection_GetEnumerator_m784870435(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m784870435_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_001c:
		{
			uint64_t L_4 = Enumerator_get_Current_m1886482871((Enumerator_t618757959 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1886482871_RuntimeMethod_var);
			V_1 = L_4;
			il2cpp_codegen_initobj((&V_3), sizeof(MLRaycastResult_t3432466840 ));
			uint64_t L_5 = __this->get__trackerHandle_6();
			uint64_t L_6 = V_1;
			int32_t L_7 = RaycastApiNativeBindings_MLRaycastGetResult_m3779525067(NULL /*static, unused*/, L_5, L_6, (MLRaycastResult_t3432466840 *)(&V_3), /*hidden argument*/NULL);
			V_4 = L_7;
			int32_t L_8 = V_4;
			if (L_8)
			{
				goto IL_004b;
			}
		}

IL_0043:
		{
			Dictionary_2_t3595261788 * L_9 = V_0;
			uint64_t L_10 = V_1;
			MLRaycastResult_t3432466840  L_11 = V_3;
			NullCheck(L_9);
			Dictionary_2_Add_m29744162(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m29744162_RuntimeMethod_var);
		}

IL_004b:
		{
			bool L_12 = Enumerator_MoveNext_m3476970948((Enumerator_t618757959 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m3476970948_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_001c;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_t618757959  L_13 = V_2;
		Enumerator_t618757959  L_14 = L_13;
		RuntimeObject * L_15 = Box(Enumerator_t618757959_il2cpp_TypeInfo_var, &L_14);
		NullCheck((RuntimeObject*)L_15);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		Dictionary_2_t3595261788 * L_16 = V_0;
		MLWorldRays_PublishResults_m3834204153(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays::PublishResults(System.Collections.Generic.Dictionary`2<System.UInt64,MagicLeapInternal.RaycastApiNativeBindings/MLRaycastResult>)
extern "C" IL2CPP_METHOD_ATTR void MLWorldRays_PublishResults_m3834204153 (MLWorldRays_t3718842835 * __this, Dictionary_2_t3595261788 * ___completedQueries0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_PublishResults_m3834204153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_PublishResults_m3834204153_RuntimeMethod_var);
	uint64_t V_0 = 0;
	Enumerator_t3777438772  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ResultCallback_t273786027 * V_2 = NULL;
	MLRaycastResult_t3432466840  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	ResultCallback_t273786027 * G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	ResultCallback_t273786027 * G_B6_1 = NULL;
	Vector3_t3722313464  G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	ResultCallback_t273786027 * G_B8_2 = NULL;
	Vector3_t3722313464  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	int32_t G_B10_1 = 0;
	ResultCallback_t273786027 * G_B10_2 = NULL;
	Vector3_t3722313464  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	int32_t G_B9_1 = 0;
	ResultCallback_t273786027 * G_B9_2 = NULL;
	Vector3_t3722313464  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Vector3_t3722313464  G_B11_1;
	memset(&G_B11_1, 0, sizeof(G_B11_1));
	int32_t G_B11_2 = 0;
	ResultCallback_t273786027 * G_B11_3 = NULL;
	{
		Dictionary_2_t3595261788 * L_0 = ___completedQueries0;
		NullCheck(L_0);
		KeyCollection_t3784937259 * L_1 = Dictionary_2_get_Keys_m1812259646(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1812259646_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t3777438772  L_2 = KeyCollection_GetEnumerator_m2409833759(L_1, /*hidden argument*/KeyCollection_GetEnumerator_m2409833759_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ac;
		}

IL_0011:
		{
			uint64_t L_3 = Enumerator_get_Current_m2334559211((Enumerator_t3777438772 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2334559211_RuntimeMethod_var);
			V_0 = L_3;
			Dictionary_2_t436580975 * L_4 = __this->get__pendingQueries_3();
			uint64_t L_5 = V_0;
			NullCheck(L_4);
			ResultCallback_t273786027 * L_6 = Dictionary_2_get_Item_m773252330(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m773252330_RuntimeMethod_var);
			V_2 = L_6;
			Dictionary_2_t436580975 * L_7 = __this->get__pendingQueries_3();
			uint64_t L_8 = V_0;
			NullCheck(L_7);
			Dictionary_2_Remove_m2551690312(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m2551690312_RuntimeMethod_var);
			Dictionary_2_t3595261788 * L_9 = ___completedQueries0;
			uint64_t L_10 = V_0;
			NullCheck(L_9);
			MLRaycastResult_t3432466840  L_11 = Dictionary_2_get_Item_m1024048780(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m1024048780_RuntimeMethod_var);
			V_3 = L_11;
			int32_t L_12 = (&V_3)->get_State_3();
			if ((((int32_t)L_12) == ((int32_t)(-1))))
			{
				goto IL_0057;
			}
		}

IL_0048:
		{
			int32_t L_13 = (&V_3)->get_State_3();
			G_B5_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0058;
		}

IL_0057:
		{
			G_B5_0 = 0;
		}

IL_0058:
		{
			V_4 = (bool)G_B5_0;
			ResultCallback_t273786027 * L_14 = V_2;
			int32_t L_15 = (&V_3)->get_State_3();
			bool L_16 = V_4;
			G_B6_0 = L_15;
			G_B6_1 = L_14;
			if (!L_16)
			{
				G_B7_0 = L_15;
				G_B7_1 = L_14;
				goto IL_007c;
			}
		}

IL_0069:
		{
			MLVec3f_t486797299  L_17 = (&V_3)->get_Hitpoint_0();
			Vector3_t3722313464  L_18 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_17, (bool)1, (bool)1, /*hidden argument*/NULL);
			G_B8_0 = L_18;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			goto IL_0081;
		}

IL_007c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_19 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
			G_B8_0 = L_19;
			G_B8_1 = G_B7_0;
			G_B8_2 = G_B7_1;
		}

IL_0081:
		{
			bool L_20 = V_4;
			G_B9_0 = G_B8_0;
			G_B9_1 = G_B8_1;
			G_B9_2 = G_B8_2;
			if (!L_20)
			{
				G_B10_0 = G_B8_0;
				G_B10_1 = G_B8_1;
				G_B10_2 = G_B8_2;
				goto IL_009b;
			}
		}

IL_0088:
		{
			MLVec3f_t486797299  L_21 = (&V_3)->get_Normal_1();
			Vector3_t3722313464  L_22 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_21, (bool)1, (bool)0, /*hidden argument*/NULL);
			G_B11_0 = L_22;
			G_B11_1 = G_B9_0;
			G_B11_2 = G_B9_1;
			G_B11_3 = G_B9_2;
			goto IL_00a0;
		}

IL_009b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_23 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
			G_B11_0 = L_23;
			G_B11_1 = G_B10_0;
			G_B11_2 = G_B10_1;
			G_B11_3 = G_B10_2;
		}

IL_00a0:
		{
			float L_24 = (&V_3)->get_Confidence_2();
			NullCheck(G_B11_3);
			ResultCallback_Invoke_m3918620459(G_B11_3, G_B11_2, G_B11_1, G_B11_0, L_24, /*hidden argument*/NULL);
		}

IL_00ac:
		{
			bool L_25 = Enumerator_MoveNext_m852263570((Enumerator_t3777438772 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m852263570_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0011;
			}
		}

IL_00b8:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		Enumerator_t3777438772  L_26 = V_1;
		Enumerator_t3777438772  L_27 = L_26;
		RuntimeObject * L_28 = Box(Enumerator_t3777438772_il2cpp_TypeInfo_var, &L_27);
		NullCheck((RuntimeObject*)L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		IL2CPP_END_FINALLY(189)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c9:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::GetWorldRays(UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_GetWorldRays_m2295408648 (RuntimeObject * __this /* static, unused */, QueryParams_t2257812863 * ___query0, ResultCallback_t273786027 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_GetWorldRays_m2295408648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_GetWorldRays_m2295408648_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MLAPISingleton_1_t3511624579_il2cpp_TypeInfo_var);
		MLWorldRays_t3718842835 * L_0 = MLAPISingleton_1_get_Instance_m2552627568(NULL /*static, unused*/, /*hidden argument*/MLAPISingleton_1_get_Instance_m2552627568_RuntimeMethod_var);
		QueryParams_t2257812863 * L_1 = ___query0;
		ResultCallback_t273786027 * L_2 = ___callback1;
		NullCheck(L_0);
		MLResult_t265502022  L_3 = MLWorldRays_GetWorldRaysInternal_m2427709051(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::GetWorldRaysInternal(UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_GetWorldRaysInternal_m2427709051 (MLWorldRays_t3718842835 * __this, QueryParams_t2257812863 * ___query0, ResultCallback_t273786027 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_GetWorldRaysInternal_m2427709051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_GetWorldRaysInternal_m2427709051_RuntimeMethod_var);
	{
		MLRaycastSettings_t1144099939 * L_0 = __this->get_address_of__settings_4();
		bool L_1 = L_0->get_Enabled_0();
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, _stringLiteral2643257692, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_4 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_4, NULL, L_3, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_5;
		memset(&L_5, 0, sizeof(L_5));
		MLResult__ctor_m1759028860((&L_5), 4, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0033:
	{
		QueryParams_t2257812863 * L_6 = ___query0;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		ResultCallback_t273786027 * L_7 = ___callback1;
		if (L_7)
		{
			goto IL_0052;
		}
	}

IL_003f:
	{
		intptr_t L_8 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_9 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_9, NULL, L_8, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_10;
		memset(&L_10, 0, sizeof(L_10));
		MLResult__ctor_m1759028860((&L_10), 5, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0052:
	{
		QueryParams_t2257812863 * L_11 = ___query0;
		ResultCallback_t273786027 * L_12 = ___callback1;
		MLResult_t265502022  L_13 = MLWorldRays_RequestRays_m3648928211(__this, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLWorldRays::RequestRays(UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams,UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback)
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLWorldRays_RequestRays_m3648928211 (MLWorldRays_t3718842835 * __this, QueryParams_t2257812863 * ___query0, ResultCallback_t273786027 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWorldRays_RequestRays_m3648928211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWorldRays_RequestRays_m3648928211_RuntimeMethod_var);
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MLRaycastQuery_t3337934584 * L_0 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_1 = ___query0;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = L_1->get_Position_0();
		MLVec3f_t486797299  L_3 = MLConvert_FromUnity_m1623782790(NULL /*static, unused*/, L_2, (bool)1, (bool)1, /*hidden argument*/NULL);
		L_0->set_Position_0(L_3);
		MLRaycastQuery_t3337934584 * L_4 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_5 = ___query0;
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = L_5->get_Direction_1();
		MLVec3f_t486797299  L_7 = MLConvert_FromUnity_m1623782790(NULL /*static, unused*/, L_6, (bool)1, (bool)0, /*hidden argument*/NULL);
		L_4->set_Direction_1(L_7);
		MLRaycastQuery_t3337934584 * L_8 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_9 = ___query0;
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = L_9->get_UpVector_2();
		MLVec3f_t486797299  L_11 = MLConvert_FromUnity_m1623782790(NULL /*static, unused*/, L_10, (bool)1, (bool)0, /*hidden argument*/NULL);
		L_8->set_UpVector_2(L_11);
		MLRaycastQuery_t3337934584 * L_12 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_13 = ___query0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->get_Width_3();
		L_12->set_Width_3(L_14);
		MLRaycastQuery_t3337934584 * L_15 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_16 = ___query0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->get_Height_4();
		L_15->set_Height_4(L_17);
		MLRaycastQuery_t3337934584 * L_18 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_19 = ___query0;
		NullCheck(L_19);
		float L_20 = L_19->get_HorizontalFovDegrees_5();
		L_18->set_HorizontalFovDegrees_5(L_20);
		MLRaycastQuery_t3337934584 * L_21 = __this->get_address_of__query_5();
		QueryParams_t2257812863 * L_22 = ___query0;
		NullCheck(L_22);
		bool L_23 = L_22->get_CollideWithUnobserved_6();
		L_21->set_CollideWithUnobserved_6(L_23);
		V_0 = (((int64_t)((int64_t)(-1))));
		uint64_t L_24 = __this->get__trackerHandle_6();
		MLRaycastQuery_t3337934584 * L_25 = __this->get_address_of__query_5();
		int32_t L_26 = RaycastApiNativeBindings_MLRaycastRequest_m3115572012(NULL /*static, unused*/, L_24, (MLRaycastQuery_t3337934584 *)L_25, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		uint64_t L_28 = V_0;
		bool L_29 = MagicLeapNativeBindings_MLHandleIsValid_m2044113266(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00c7;
		}
	}

IL_00b4:
	{
		int32_t L_30 = V_1;
		intptr_t L_31 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_32 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_32, NULL, L_31, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_33;
		memset(&L_33, 0, sizeof(L_33));
		MLResult__ctor_m1759028860((&L_33), L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00c7:
	{
		Dictionary_2_t436580975 * L_34 = __this->get__pendingQueries_3();
		uint64_t L_35 = V_0;
		ResultCallback_t273786027 * L_36 = ___callback1;
		NullCheck(L_34);
		Dictionary_2_Add_m3502265607(L_34, L_35, L_36, /*hidden argument*/Dictionary_2_Add_m3502265607_RuntimeMethod_var);
		int32_t L_37 = V_1;
		intptr_t L_38 = (intptr_t)MagicLeapNativeBindings_MLGetResultString_m2945365584_RuntimeMethod_var;
		Func_2_t563276670 * L_39 = (Func_2_t563276670 *)il2cpp_codegen_object_new(Func_2_t563276670_il2cpp_TypeInfo_var);
		Func_2__ctor_m2424052174(L_39, NULL, L_38, /*hidden argument*/Func_2__ctor_m2424052174_RuntimeMethod_var);
		MLResult_t265502022  L_40;
		memset(&L_40, 0, sizeof(L_40));
		MLResult__ctor_m1759028860((&L_40), L_37, L_39, /*hidden argument*/NULL);
		return L_40;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays/QueryParams::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QueryParams__ctor_m2015436004 (QueryParams_t2257812863 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueryParams__ctor_m2015436004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(QueryParams__ctor_m2015436004_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_Position_0(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_Direction_1(L_1);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_UpVector_2(L_2);
		__this->set_Width_3(1);
		__this->set_Height_4(1);
		__this->set_HorizontalFovDegrees_5((50.0f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_ResultCallback_t273786027 (ResultCallback_t273786027 * __this, int32_t ___state0, Vector3_t3722313464  ___hitpoint1, Vector3_t3722313464  ___normal2, float ___confidence3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0, ___hitpoint1, ___normal2, ___confidence3);

}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ResultCallback__ctor_m2686888811 (ResultCallback_t273786027 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultCallback__ctor_m2686888811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ResultCallback__ctor_m2686888811_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback::Invoke(UnityEngine.XR.MagicLeap.MLWorldRays/MLWorldRaycastResultState,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ResultCallback_Invoke_m3918620459 (ResultCallback_t273786027 * __this, int32_t ___state0, Vector3_t3722313464  ___hitpoint1, Vector3_t3722313464  ___normal2, float ___confidence3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultCallback_Invoke_m3918620459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ResultCallback_Invoke_m3918620459_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		ResultCallback_Invoke_m3918620459((ResultCallback_t273786027 *)__this->get_prev_9(), ___state0, ___hitpoint1, ___normal2, ___confidence3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___state0, ___hitpoint1, ___normal2, ___confidence3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float >::Invoke(targetMethod, targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3);
					else
						GenericVirtActionInvoker4< int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float >::Invoke(targetMethod, targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3);
					else
						VirtActionInvoker4< int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t3722313464 , Vector3_t3722313464 , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, ___hitpoint1, ___normal2, ___confidence3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback::BeginInvoke(UnityEngine.XR.MagicLeap.MLWorldRays/MLWorldRaycastResultState,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ResultCallback_BeginInvoke_m973713653 (ResultCallback_t273786027 * __this, int32_t ___state0, Vector3_t3722313464  ___hitpoint1, Vector3_t3722313464  ___normal2, float ___confidence3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultCallback_BeginInvoke_m973713653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ResultCallback_BeginInvoke_m973713653_RuntimeMethod_var);
	void *__d_args[5] = {0};
	__d_args[0] = Box(MLWorldRaycastResultState_t1995451677_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___hitpoint1);
	__d_args[2] = Box(Vector3_t3722313464_il2cpp_TypeInfo_var, &___normal2);
	__d_args[3] = Box(Single_t1397266774_il2cpp_TypeInfo_var, &___confidence3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.MagicLeap.MLWorldRays/ResultCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ResultCallback_EndInvoke_m3182151595 (ResultCallback_t273786027 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultCallback_EndInvoke_m3182151595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ResultCallback_EndInvoke_m3182151595_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.MagicLeap.MLWrist::.ctor(MagicLeapInternal.HandTrackingApiNativeBindings/MLWristState)
extern "C" IL2CPP_METHOD_ATTR void MLWrist__ctor_m739757203 (MLWrist_t4207073659 * __this, MLWristState_t678899973  ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist__ctor_m739757203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist__ctor_m739757203_RuntimeMethod_var);
	MLTransform_t3435326713  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MLTransform_t3435326713  V_1;
	memset(&V_1, 0, sizeof(V_1));
	MLTransform_t3435326713  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_0 = V_0;
		__this->set__CenterUpdateTransform_3(L_0);
		il2cpp_codegen_initobj((&V_1), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_1 = V_1;
		__this->set__UlnarUpdateTransform_4(L_1);
		il2cpp_codegen_initobj((&V_2), sizeof(MLTransform_t3435326713 ));
		MLTransform_t3435326713  L_2 = V_2;
		__this->set__RadialUpdateTransform_5(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_3 = (&___state0)->get_address_of_Center_0();
		MLCoordinateFrameUID_t515144641  L_4 = L_3->get_FrameId_0();
		__this->set__CenterCoordinateFrameId_0(L_4);
		MLKeyPointState_t358041773 * L_5 = (&___state0)->get_address_of_Ulnar_1();
		MLCoordinateFrameUID_t515144641  L_6 = L_5->get_FrameId_0();
		__this->set__UlnarCoordinateFrameId_1(L_6);
		MLKeyPointState_t358041773 * L_7 = (&___state0)->get_address_of_Radial_2();
		MLCoordinateFrameUID_t515144641  L_8 = L_7->get_FrameId_0();
		__this->set__RadialCoordinateFrameId_2(L_8);
		MLKeyPointState_t358041773 * L_9 = (&___state0)->get_address_of_Center_0();
		bool L_10 = L_9->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_11 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_11, L_10, /*hidden argument*/NULL);
		MLWrist_set_Center_m3540272568(__this, L_11, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_12 = (&___state0)->get_address_of_Ulnar_1();
		bool L_13 = L_12->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_14 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_14, L_13, /*hidden argument*/NULL);
		MLWrist_set_Ulnar_m3352492981(__this, L_14, /*hidden argument*/NULL);
		MLKeyPointState_t358041773 * L_15 = (&___state0)->get_address_of_Radial_2();
		bool L_16 = L_15->get_IsValid_1();
		MLKeyPoint_t2457746220 * L_17 = (MLKeyPoint_t2457746220 *)il2cpp_codegen_object_new(MLKeyPoint_t2457746220_il2cpp_TypeInfo_var);
		MLKeyPoint__ctor_m1054801110(L_17, L_16, /*hidden argument*/NULL);
		MLWrist_set_Radial_m1091520556(__this, L_17, /*hidden argument*/NULL);
		List_1_t3929820962 * L_18 = (List_1_t3929820962 *)il2cpp_codegen_object_new(List_1_t3929820962_il2cpp_TypeInfo_var);
		List_1__ctor_m977214386(L_18, /*hidden argument*/List_1__ctor_m977214386_RuntimeMethod_var);
		MLWrist_set_KeyPoints_m79121153(__this, L_18, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_19 = MLWrist_get_Center_m1680979287(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = MLKeyPoint_get_IsValid_m1846993851(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00da;
		}
	}
	{
		List_1_t3929820962 * L_21 = MLWrist_get_KeyPoints_m156169264(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_22 = MLWrist_get_Center_m1680979287(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_m1804663636(L_21, L_22, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_00da:
	{
		MLKeyPoint_t2457746220 * L_23 = MLWrist_get_Ulnar_m2865653812(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24 = MLKeyPoint_get_IsValid_m1846993851(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00fb;
		}
	}
	{
		List_1_t3929820962 * L_25 = MLWrist_get_KeyPoints_m156169264(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_26 = MLWrist_get_Ulnar_m2865653812(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_Add_m1804663636(L_25, L_26, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_00fb:
	{
		MLKeyPoint_t2457746220 * L_27 = MLWrist_get_Radial_m3701760810(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_28 = MLKeyPoint_get_IsValid_m1846993851(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_011c;
		}
	}
	{
		List_1_t3929820962 * L_29 = MLWrist_get_KeyPoints_m156169264(__this, /*hidden argument*/NULL);
		MLKeyPoint_t2457746220 * L_30 = MLWrist_get_Radial_m3701760810(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m1804663636(L_29, L_30, /*hidden argument*/List_1_Add_m1804663636_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Center()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Center_m1680979287 (MLWrist_t4207073659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_get_Center_m1680979287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_get_Center_m1680979287_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CCenterU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Center(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Center_m3540272568 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_set_Center_m3540272568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_set_Center_m3540272568_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CCenterU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Ulnar()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Ulnar_m2865653812 (MLWrist_t4207073659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_get_Ulnar_m2865653812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_get_Ulnar_m2865653812_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CUlnarU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Ulnar(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Ulnar_m3352492981 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_set_Ulnar_m3352492981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_set_Ulnar_m3352492981_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CUlnarU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.XR.MagicLeap.MLKeyPoint UnityEngine.XR.MagicLeap.MLWrist::get_Radial()
extern "C" IL2CPP_METHOD_ATTR MLKeyPoint_t2457746220 * MLWrist_get_Radial_m3701760810 (MLWrist_t4207073659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_get_Radial_m3701760810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_get_Radial_m3701760810_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = __this->get_U3CRadialU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_Radial(UnityEngine.XR.MagicLeap.MLKeyPoint)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_Radial_m1091520556 (MLWrist_t4207073659 * __this, MLKeyPoint_t2457746220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_set_Radial_m1091520556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_set_Radial_m1091520556_RuntimeMethod_var);
	{
		MLKeyPoint_t2457746220 * L_0 = ___value0;
		__this->set_U3CRadialU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint> UnityEngine.XR.MagicLeap.MLWrist::get_KeyPoints()
extern "C" IL2CPP_METHOD_ATTR List_1_t3929820962 * MLWrist_get_KeyPoints_m156169264 (MLWrist_t4207073659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_get_KeyPoints_m156169264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_get_KeyPoints_m156169264_RuntimeMethod_var);
	{
		List_1_t3929820962 * L_0 = __this->get_U3CKeyPointsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWrist::set_KeyPoints(System.Collections.Generic.List`1<UnityEngine.XR.MagicLeap.MLKeyPoint>)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_set_KeyPoints_m79121153 (MLWrist_t4207073659 * __this, List_1_t3929820962 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_set_KeyPoints_m79121153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_set_KeyPoints_m79121153_RuntimeMethod_var);
	{
		List_1_t3929820962 * L_0 = ___value0;
		__this->set_U3CKeyPointsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLWrist::Update(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MLWrist_Update_m1395190252 (MLWrist_t4207073659 * __this, intptr_t ___perceptionSnapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLWrist_Update_m1395190252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLWrist_Update_m1395190252_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		MLKeyPoint_t2457746220 * L_0 = MLWrist_get_Center_m1680979287(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = MLKeyPoint_get_IsValid_m1846993851(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_2 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_3 = __this->get_address_of__CenterCoordinateFrameId_0();
		MLTransform_t3435326713 * L_4 = __this->get_address_of__CenterUpdateTransform_3();
		int32_t L_5 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_2, (MLCoordinateFrameUID_t515144641 *)L_3, (MLTransform_t3435326713 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_7 = MLWrist_get_Center_m1680979287(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_8 = __this->get_address_of__CenterUpdateTransform_3();
		MLVec3f_t486797299  L_9 = L_8->get_Position_1();
		Vector3_t3722313464  L_10 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_7);
		MLKeyPoint_set_Position_m1226285128(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0046:
	{
		MLKeyPoint_t2457746220 * L_11 = MLWrist_get_Ulnar_m2865653812(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = MLKeyPoint_get_IsValid_m1846993851(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		intptr_t L_13 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_14 = __this->get_address_of__UlnarCoordinateFrameId_1();
		MLTransform_t3435326713 * L_15 = __this->get_address_of__UlnarUpdateTransform_4();
		int32_t L_16 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_13, (MLCoordinateFrameUID_t515144641 *)L_14, (MLTransform_t3435326713 *)L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_008c;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_18 = MLWrist_get_Ulnar_m2865653812(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_19 = __this->get_address_of__UlnarUpdateTransform_4();
		MLVec3f_t486797299  L_20 = L_19->get_Position_1();
		Vector3_t3722313464  L_21 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_20, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_18);
		MLKeyPoint_set_Position_m1226285128(L_18, L_21, /*hidden argument*/NULL);
	}

IL_008c:
	{
		MLKeyPoint_t2457746220 * L_22 = MLWrist_get_Radial_m3701760810(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = MLKeyPoint_get_IsValid_m1846993851(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d2;
		}
	}
	{
		intptr_t L_24 = ___perceptionSnapshot0;
		MLCoordinateFrameUID_t515144641 * L_25 = __this->get_address_of__RadialCoordinateFrameId_2();
		MLTransform_t3435326713 * L_26 = __this->get_address_of__RadialUpdateTransform_5();
		int32_t L_27 = MagicLeapNativeBindings_MLSnapshotGetTransform_m359473387(NULL /*static, unused*/, L_24, (MLCoordinateFrameUID_t515144641 *)L_25, (MLTransform_t3435326713 *)L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00d2;
		}
	}
	{
		MLKeyPoint_t2457746220 * L_29 = MLWrist_get_Radial_m3701760810(__this, /*hidden argument*/NULL);
		MLTransform_t3435326713 * L_30 = __this->get_address_of__RadialUpdateTransform_5();
		MLVec3f_t486797299  L_31 = L_30->get_Position_1();
		Vector3_t3722313464  L_32 = MLConvert_ToUnity_m254532658(NULL /*static, unused*/, L_31, (bool)1, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_29);
		MLKeyPoint_set_Position_m1226285128(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00d2:
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
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.YUVBuffer
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke(const YUVBuffer_t1120549612& unmarshaled, YUVBuffer_t1120549612_marshaled_pinvoke& marshaled)
{
	marshaled.___Width_0 = unmarshaled.get_Width_0();
	marshaled.___Height_1 = unmarshaled.get_Height_1();
	marshaled.___Stride_2 = unmarshaled.get_Stride_2();
	marshaled.___BytesPerPixel_3 = unmarshaled.get_BytesPerPixel_3();
	if (unmarshaled.get_Data_4() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Data_Length = (unmarshaled.get_Data_4())->max_length;
		marshaled.___Data_4 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_Data_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Data_Length); i++)
		{
			(marshaled.___Data_4)[i] = (unmarshaled.get_Data_4())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Data_4 = NULL;
	}
	marshaled.___Size_5 = unmarshaled.get_Size_5();
}
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke_back(const YUVBuffer_t1120549612_marshaled_pinvoke& marshaled, YUVBuffer_t1120549612& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YUVBuffer_t1120549612_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_Width_temp_0 = 0;
	unmarshaled_Width_temp_0 = marshaled.___Width_0;
	unmarshaled.set_Width_0(unmarshaled_Width_temp_0);
	uint32_t unmarshaled_Height_temp_1 = 0;
	unmarshaled_Height_temp_1 = marshaled.___Height_1;
	unmarshaled.set_Height_1(unmarshaled_Height_temp_1);
	uint32_t unmarshaled_Stride_temp_2 = 0;
	unmarshaled_Stride_temp_2 = marshaled.___Stride_2;
	unmarshaled.set_Stride_2(unmarshaled_Stride_temp_2);
	uint32_t unmarshaled_BytesPerPixel_temp_3 = 0;
	unmarshaled_BytesPerPixel_temp_3 = marshaled.___BytesPerPixel_3;
	unmarshaled.set_BytesPerPixel_3(unmarshaled_BytesPerPixel_temp_3);
	if (marshaled.___Data_4 != NULL)
	{
		if (unmarshaled.get_Data_4() == NULL)
		{
			unmarshaled.set_Data_4(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Data_4())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Data_4())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Data_4)[i]);
		}
	}
	uint32_t unmarshaled_Size_temp_5 = 0;
	unmarshaled_Size_temp_5 = marshaled.___Size_5;
	unmarshaled.set_Size_5(unmarshaled_Size_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.YUVBuffer
extern "C" void YUVBuffer_t1120549612_marshal_pinvoke_cleanup(YUVBuffer_t1120549612_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Data_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Data_4);
		marshaled.___Data_4 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.YUVBuffer
extern "C" void YUVBuffer_t1120549612_marshal_com(const YUVBuffer_t1120549612& unmarshaled, YUVBuffer_t1120549612_marshaled_com& marshaled)
{
	marshaled.___Width_0 = unmarshaled.get_Width_0();
	marshaled.___Height_1 = unmarshaled.get_Height_1();
	marshaled.___Stride_2 = unmarshaled.get_Stride_2();
	marshaled.___BytesPerPixel_3 = unmarshaled.get_BytesPerPixel_3();
	if (unmarshaled.get_Data_4() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Data_Length = (unmarshaled.get_Data_4())->max_length;
		marshaled.___Data_4 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_Data_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Data_Length); i++)
		{
			(marshaled.___Data_4)[i] = (unmarshaled.get_Data_4())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Data_4 = NULL;
	}
	marshaled.___Size_5 = unmarshaled.get_Size_5();
}
extern "C" void YUVBuffer_t1120549612_marshal_com_back(const YUVBuffer_t1120549612_marshaled_com& marshaled, YUVBuffer_t1120549612& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YUVBuffer_t1120549612_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_Width_temp_0 = 0;
	unmarshaled_Width_temp_0 = marshaled.___Width_0;
	unmarshaled.set_Width_0(unmarshaled_Width_temp_0);
	uint32_t unmarshaled_Height_temp_1 = 0;
	unmarshaled_Height_temp_1 = marshaled.___Height_1;
	unmarshaled.set_Height_1(unmarshaled_Height_temp_1);
	uint32_t unmarshaled_Stride_temp_2 = 0;
	unmarshaled_Stride_temp_2 = marshaled.___Stride_2;
	unmarshaled.set_Stride_2(unmarshaled_Stride_temp_2);
	uint32_t unmarshaled_BytesPerPixel_temp_3 = 0;
	unmarshaled_BytesPerPixel_temp_3 = marshaled.___BytesPerPixel_3;
	unmarshaled.set_BytesPerPixel_3(unmarshaled_BytesPerPixel_temp_3);
	if (marshaled.___Data_4 != NULL)
	{
		if (unmarshaled.get_Data_4() == NULL)
		{
			unmarshaled.set_Data_4(reinterpret_cast<ByteU5BU5D_t4116647657*>(SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Data_4())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Data_4())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Data_4)[i]);
		}
	}
	uint32_t unmarshaled_Size_temp_5 = 0;
	unmarshaled_Size_temp_5 = marshaled.___Size_5;
	unmarshaled.set_Size_5(unmarshaled_Size_temp_5);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.YUVBuffer
extern "C" void YUVBuffer_t1120549612_marshal_com_cleanup(YUVBuffer_t1120549612_marshaled_com& marshaled)
{
	if (marshaled.___Data_4 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Data_4);
		marshaled.___Data_4 = NULL;
	}
}
// System.Void UnityEngine.XR.MagicLeap.YUVBuffer::CopyFromPlane(UnityEngine.XR.MagicLeap.MLCameraPlaneInfo)
extern "C" IL2CPP_METHOD_ATTR void YUVBuffer_CopyFromPlane_m3997292803 (YUVBuffer_t1120549612 * __this, MLCameraPlaneInfo_t532240353  ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YUVBuffer_CopyFromPlane_m3997292803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(YUVBuffer_CopyFromPlane_m3997292803_RuntimeMethod_var);
	{
		uint32_t L_0 = (&___plane0)->get_Width_0();
		__this->set_Width_0(L_0);
		uint32_t L_1 = (&___plane0)->get_Height_1();
		__this->set_Height_1(L_1);
		uint32_t L_2 = (&___plane0)->get_Stride_2();
		__this->set_Stride_2(L_2);
		uint32_t L_3 = (&___plane0)->get_BytesPerPixel_3();
		__this->set_BytesPerPixel_3(L_3);
		uint32_t L_4 = (&___plane0)->get_Size_5();
		__this->set_Size_5(L_4);
		uint32_t L_5 = __this->get_Size_5();
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((uintptr_t)L_5)));
		__this->set_Data_4(L_6);
		intptr_t L_7 = (&___plane0)->get_Data_4();
		ByteU5BU5D_t4116647657* L_8 = __this->get_Data_4();
		ByteU5BU5D_t4116647657* L_9 = __this->get_Data_4();
		NullCheck(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_7, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void YUVBuffer_CopyFromPlane_m3997292803_AdjustorThunk (RuntimeObject * __this, MLCameraPlaneInfo_t532240353  ___plane0, const RuntimeMethod* method)
{
	YUVBuffer_t1120549612 * _thisAdjusted = reinterpret_cast<YUVBuffer_t1120549612 *>(__this + 1);
	YUVBuffer_CopyFromPlane_m3997292803(_thisAdjusted, ___plane0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.YUVFrameInfo
extern "C" void YUVFrameInfo_t3494447275_marshal_pinvoke(const YUVFrameInfo_t3494447275& unmarshaled, YUVFrameInfo_t3494447275_marshaled_pinvoke& marshaled)
{
	YUVBuffer_t1120549612_marshal_pinvoke(unmarshaled.get_Y_0(), marshaled.___Y_0);
	YUVBuffer_t1120549612_marshal_pinvoke(unmarshaled.get_U_1(), marshaled.___U_1);
	YUVBuffer_t1120549612_marshal_pinvoke(unmarshaled.get_V_2(), marshaled.___V_2);
}
extern "C" void YUVFrameInfo_t3494447275_marshal_pinvoke_back(const YUVFrameInfo_t3494447275_marshaled_pinvoke& marshaled, YUVFrameInfo_t3494447275& unmarshaled)
{
	YUVBuffer_t1120549612  unmarshaled_Y_temp_0;
	memset(&unmarshaled_Y_temp_0, 0, sizeof(unmarshaled_Y_temp_0));
	YUVBuffer_t1120549612_marshal_pinvoke_back(marshaled.___Y_0, unmarshaled_Y_temp_0);
	unmarshaled.set_Y_0(unmarshaled_Y_temp_0);
	YUVBuffer_t1120549612  unmarshaled_U_temp_1;
	memset(&unmarshaled_U_temp_1, 0, sizeof(unmarshaled_U_temp_1));
	YUVBuffer_t1120549612_marshal_pinvoke_back(marshaled.___U_1, unmarshaled_U_temp_1);
	unmarshaled.set_U_1(unmarshaled_U_temp_1);
	YUVBuffer_t1120549612  unmarshaled_V_temp_2;
	memset(&unmarshaled_V_temp_2, 0, sizeof(unmarshaled_V_temp_2));
	YUVBuffer_t1120549612_marshal_pinvoke_back(marshaled.___V_2, unmarshaled_V_temp_2);
	unmarshaled.set_V_2(unmarshaled_V_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.YUVFrameInfo
extern "C" void YUVFrameInfo_t3494447275_marshal_pinvoke_cleanup(YUVFrameInfo_t3494447275_marshaled_pinvoke& marshaled)
{
	YUVBuffer_t1120549612_marshal_pinvoke_cleanup(marshaled.___Y_0);
	YUVBuffer_t1120549612_marshal_pinvoke_cleanup(marshaled.___U_1);
	YUVBuffer_t1120549612_marshal_pinvoke_cleanup(marshaled.___V_2);
}






// Conversion methods for marshalling of: UnityEngine.XR.MagicLeap.YUVFrameInfo
extern "C" void YUVFrameInfo_t3494447275_marshal_com(const YUVFrameInfo_t3494447275& unmarshaled, YUVFrameInfo_t3494447275_marshaled_com& marshaled)
{
	YUVBuffer_t1120549612_marshal_com(unmarshaled.get_Y_0(), marshaled.___Y_0);
	YUVBuffer_t1120549612_marshal_com(unmarshaled.get_U_1(), marshaled.___U_1);
	YUVBuffer_t1120549612_marshal_com(unmarshaled.get_V_2(), marshaled.___V_2);
}
extern "C" void YUVFrameInfo_t3494447275_marshal_com_back(const YUVFrameInfo_t3494447275_marshaled_com& marshaled, YUVFrameInfo_t3494447275& unmarshaled)
{
	YUVBuffer_t1120549612  unmarshaled_Y_temp_0;
	memset(&unmarshaled_Y_temp_0, 0, sizeof(unmarshaled_Y_temp_0));
	YUVBuffer_t1120549612_marshal_com_back(marshaled.___Y_0, unmarshaled_Y_temp_0);
	unmarshaled.set_Y_0(unmarshaled_Y_temp_0);
	YUVBuffer_t1120549612  unmarshaled_U_temp_1;
	memset(&unmarshaled_U_temp_1, 0, sizeof(unmarshaled_U_temp_1));
	YUVBuffer_t1120549612_marshal_com_back(marshaled.___U_1, unmarshaled_U_temp_1);
	unmarshaled.set_U_1(unmarshaled_U_temp_1);
	YUVBuffer_t1120549612  unmarshaled_V_temp_2;
	memset(&unmarshaled_V_temp_2, 0, sizeof(unmarshaled_V_temp_2));
	YUVBuffer_t1120549612_marshal_com_back(marshaled.___V_2, unmarshaled_V_temp_2);
	unmarshaled.set_V_2(unmarshaled_V_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MagicLeap.YUVFrameInfo
extern "C" void YUVFrameInfo_t3494447275_marshal_com_cleanup(YUVFrameInfo_t3494447275_marshaled_com& marshaled)
{
	YUVBuffer_t1120549612_marshal_com_cleanup(marshaled.___Y_0);
	YUVBuffer_t1120549612_marshal_com_cleanup(marshaled.___U_1);
	YUVBuffer_t1120549612_marshal_com_cleanup(marshaled.___V_2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

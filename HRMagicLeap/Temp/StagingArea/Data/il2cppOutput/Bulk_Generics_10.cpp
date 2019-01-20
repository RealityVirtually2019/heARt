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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Experimental.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t817262664;
// UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t234526808;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.String
struct String_t;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ec__Iterator0_t3860393442;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ec__Iterator0_t30141770;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1234605051;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2779729376;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>
struct MLAPISingleton_1_t2872887908;
// System.Type
struct Type_t;
// UnityEngine.XR.MagicLeap.InvalidInstanceException
struct InvalidInstanceException_t95521288;
// System.Action`2<System.Single,System.IntPtr>
struct Action_2_t3125992077;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// UnityEngine.XR.MagicLeap.MLPersistentFileStorage`1<System.Object>
struct MLPersistentFileStorage_1_t3733006835;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.IO.TextReader
struct TextReader_t283511965;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_t620998193;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_t362444879;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t934228263;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t1819441192;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t2077994506;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_t176726424;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t4213140406;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t3327927477;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t4122643707;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t712889340;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t971442654;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_t3772199246;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t1100603065;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t842049751;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_t4251804118;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_t599044122;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1484257051;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_t195759595;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1080972524;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t1742810365;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t1339525838;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1750446691;
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
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Void
struct Void_t1185182177;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t1856710240;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_t515866703;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_t1121741130;
// System.Func`2<UnityEngine.XR.MagicLeap.MLResultCode,System.String>
struct Func_2_t563276670;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern const RuntimeMethod* EventFunction_1__ctor_m4292798223_RuntimeMethod_var;
extern const uint32_t EventFunction_1__ctor_m4292798223_MetadataUsageId;
extern const RuntimeMethod* EventFunction_1_Invoke_m2429482587_RuntimeMethod_var;
extern const uint32_t EventFunction_1_Invoke_m2429482587_MetadataUsageId;
extern const RuntimeMethod* EventFunction_1_BeginInvoke_m117707366_RuntimeMethod_var;
extern const uint32_t EventFunction_1_BeginInvoke_m117707366_MetadataUsageId;
extern const RuntimeMethod* EventFunction_1_EndInvoke_m1395098989_RuntimeMethod_var;
extern const uint32_t EventFunction_1_EndInvoke_m1395098989_MetadataUsageId;
extern RuntimeClass* Internal_SubsystemDescriptors_t691162017_il2cpp_TypeInfo_var;
extern RuntimeClass* Internal_SubsystemInstances_t893566515_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SubsystemDescriptor_1_Create_m3101241506_RuntimeMethod_var;
extern const uint32_t SubsystemDescriptor_1_Create_m3101241506_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1__ctor_m2250384602_RuntimeMethod_var;
extern const uint32_t IndexedSet_1__ctor_m2250384602_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_Add_m459949375_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_Add_m459949375_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_AddUnique_m861843892_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_AddUnique_m861843892_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_Remove_m4118314453_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_Remove_m4118314453_MetadataUsageId;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_Clear_m4036265083_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_Clear_m4036265083_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_Contains_m1525966688_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_Contains_m1525966688_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_CopyTo_m4232548259_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_CopyTo_m4232548259_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_get_Count_m2591381675_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_get_Count_m2591381675_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_get_IsReadOnly_m1939064765_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_get_IsReadOnly_m1939064765_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_IndexOf_m241693686_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_IndexOf_m241693686_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* IndexedSet_1_Insert_m1432638049_RuntimeMethod_var;
extern String_t* _stringLiteral3926843441;
extern const uint32_t IndexedSet_1_Insert_m1432638049_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_RemoveAt_m3002732320_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_RemoveAt_m3002732320_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_get_Item_m3913508799_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_get_Item_m3913508799_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_set_Item_m4214546195_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_set_Item_m4214546195_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_RemoveAll_m3453409986_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_RemoveAll_m3453409986_MetadataUsageId;
extern const RuntimeMethod* IndexedSet_1_Sort_m2612539420_RuntimeMethod_var;
extern const uint32_t IndexedSet_1_Sort_m2612539420_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0__ctor_m3001242744_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0__ctor_m3001242744_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_MoveNext_m524356752_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Dispose_m261027331_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_Dispose_m261027331_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0__ctor_m2366347741_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0__ctor_m2366347741_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_MoveNext_m4270440387_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Dispose_m3800412744_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_Dispose_m3800412744_MetadataUsageId;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1__ctor_m340723704_RuntimeMethod_var;
extern const uint32_t TweenRunner_1__ctor_m340723704_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_Start_m817364799_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_Start_m817364799_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_Init_m3026112660_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_Init_m3026112660_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TweenRunner_1_StartTween_m2247690200_RuntimeMethod_var;
extern String_t* _stringLiteral1132744560;
extern const uint32_t TweenRunner_1_StartTween_m2247690200_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_StopTween_m1830357468_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_StopTween_m1830357468_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1__ctor_m3053831591_RuntimeMethod_var;
extern const uint32_t TweenRunner_1__ctor_m3053831591_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_Start_m3757154622_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_Start_m3757154622_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_Init_m1266084429_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_Init_m1266084429_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_StartTween_m1055628540_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_StartTween_m1055628540_MetadataUsageId;
extern const RuntimeMethod* TweenRunner_1_StopTween_m3457627707_RuntimeMethod_var;
extern const uint32_t TweenRunner_1_StopTween_m3457627707_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m1094012931_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m1094012931_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m2031605680_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m2031605680_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m188599205_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m188599205_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m647010813_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m647010813_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m2266431612_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m2266431612_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m1670010485_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m1670010485_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m957266927_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m957266927_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m1477269088_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m1477269088_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m2605375579_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m2605375579_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m2875520964_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m2875520964_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m2857821093_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m2857821093_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m1390066271_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m1390066271_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m3636388248_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m3636388248_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m738675669_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m738675669_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m1246825787_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m1246825787_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m995356616_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m995356616_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m2531706949_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m2531706949_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m3176650548_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m3176650548_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m591299672_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m591299672_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m3480273184_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m3480273184_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m2587502754_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m2587502754_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m3176649063_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m3176649063_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m4113115349_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m4113115349_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m4085211983_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m4085211983_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Clear_m1838177011_RuntimeMethod_var;
extern const uint32_t ListPool_1_Clear_m1838177011_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Get_m3176656818_RuntimeMethod_var;
extern const uint32_t ListPool_1_Get_m3176656818_MetadataUsageId;
extern const RuntimeMethod* ListPool_1_Release_m1363449253_RuntimeMethod_var;
extern const uint32_t ListPool_1_Release_m1363449253_MetadataUsageId;
extern const RuntimeMethod* ListPool_1__cctor_m704263611_RuntimeMethod_var;
extern const uint32_t ListPool_1__cctor_m704263611_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1__ctor_m2535233435_RuntimeMethod_var;
extern const uint32_t ObjectPool_1__ctor_m2535233435_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_get_countAll_m819305395_RuntimeMethod_var;
extern const uint32_t ObjectPool_1_get_countAll_m819305395_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_set_countAll_m3507126863_RuntimeMethod_var;
extern const uint32_t ObjectPool_1_set_countAll_m3507126863_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_get_countActive_m807006650_RuntimeMethod_var;
extern const uint32_t ObjectPool_1_get_countActive_m807006650_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_get_countInactive_m526975942_RuntimeMethod_var;
extern const uint32_t ObjectPool_1_get_countInactive_m526975942_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_Get_m3351668383_RuntimeMethod_var;
extern const uint32_t ObjectPool_1_Get_m3351668383_MetadataUsageId;
extern const RuntimeMethod* ObjectPool_1_Release_m3263354170_RuntimeMethod_var;
extern String_t* _stringLiteral46997234;
extern const uint32_t ObjectPool_1_Release_m3263354170_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1__ctor_m3813194182_RuntimeMethod_var;
extern String_t* _stringLiteral4171276603;
extern const uint32_t MLAPISingleton_1__ctor_m3813194182_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1__cctor_m2321230902_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1__cctor_m2321230902_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_IsValidInstance_m1326148161_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_IsValidInstance_m1326148161_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidInstanceException_t95521288_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLAPISingleton_1_CheckValidInstance_m1336067562_RuntimeMethod_var;
extern String_t* _stringLiteral4112473801;
extern const uint32_t MLAPISingleton_1_CheckValidInstance_m1336067562_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_get_Instance_m3294954138_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_get_Instance_m3294954138_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_get_IsStarted_m2405736327_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_get_IsStarted_m2405736327_MetadataUsageId;
extern RuntimeClass* MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* MLResult_t265502022_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t3125992077_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* DllNotFoundException_t2721418633_il2cpp_TypeInfo_var;
extern RuntimeClass* EntryPointNotFoundException_t1356862416_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLAPISingleton_1_BaseStart_m2686327205_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m1736396111_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1363151734_RuntimeMethod_var;
extern String_t* _stringLiteral2459931840;
extern String_t* _stringLiteral282095538;
extern String_t* _stringLiteral1426936825;
extern String_t* _stringLiteral41356492;
extern String_t* _stringLiteral3870954459;
extern const uint32_t MLAPISingleton_1_BaseStart_m2686327205_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_Stop_m4119119501_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_Stop_m4119119501_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MLAPISingleton_1_Finalize_m75731386_RuntimeMethod_var;
extern String_t* _stringLiteral550298114;
extern const uint32_t MLAPISingleton_1_Finalize_m75731386_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_StopAPI_m3120813299_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_StopAPI_m3120813299_MetadataUsageId;
extern const RuntimeMethod* MLAPISingleton_1_OnApplicationPause_m3162866582_RuntimeMethod_var;
extern const uint32_t MLAPISingleton_1_OnApplicationPause_m3162866582_MetadataUsageId;
extern const RuntimeMethod* MLPersistentFileStorage_1__ctor_m2394374796_RuntimeMethod_var;
extern const uint32_t MLPersistentFileStorage_1__ctor_m2394374796_MetadataUsageId;
extern const RuntimeMethod* MLPersistentFileStorage_1_Finalize_m333891891_RuntimeMethod_var;
extern const uint32_t MLPersistentFileStorage_1_Finalize_m333891891_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
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
#ifndef LIST_1_T1234605051_H
#define LIST_1_T1234605051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t1234605051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1981460040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____items_1)); }
	inline UIVertexU5BU5D_t1981460040* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1981460040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1981460040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1234605051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1981460040* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1234605051_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1981460040* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1981460040* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1234605051_H
#ifndef OBJECTPOOL_1_T3772199246_H
#define OBJECTPOOL_1_T3772199246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_t3772199246  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t620998193 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t362444879 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t362444879 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_Stack_0)); }
	inline Stack_1_t620998193 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t620998193 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t620998193 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t362444879 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t362444879 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t362444879 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3772199246, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3772199246_H
#ifndef LISTPOOL_1_T792119500_H
#define LISTPOOL_1_T792119500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_t792119500  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t792119500_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t934228263 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1819441192 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t934228263 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t934228263 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t934228263 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t792119500_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1819441192 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1819441192 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T792119500_H
#ifndef OBJECTPOOL_1_T934228263_H
#define OBJECTPOOL_1_T934228263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t934228263  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t2077994506 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1819441192 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1819441192 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_Stack_0)); }
	inline Stack_1_t2077994506 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t2077994506 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t2077994506 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1819441192 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1819441192 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1819441192 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t934228263, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T934228263_H
#ifndef OBJECTPOOL_1_T3327927477_H
#define OBJECTPOOL_1_T3327927477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t3327927477  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t176726424 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t4213140406 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t4213140406 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_Stack_0)); }
	inline Stack_1_t176726424 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t176726424 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t176726424 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t4213140406 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t4213140406 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t4213140406 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t3327927477, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T3327927477_H
#ifndef LIST_1_T3628304265_H
#define LIST_1_T3628304265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t3628304265  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_t1457185986* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____items_1)); }
	inline Vector2U5BU5D_t1457185986* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_t1457185986** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_t1457185986* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3628304265, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3628304265_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector2U5BU5D_t1457185986* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3628304265_StaticFields, ___EmptyArray_4)); }
	inline Vector2U5BU5D_t1457185986* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector2U5BU5D_t1457185986** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector2U5BU5D_t1457185986* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3628304265_H
#ifndef LISTPOOL_1_T3185818714_H
#define LISTPOOL_1_T3185818714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_t3185818714  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3185818714_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3327927477 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t4213140406 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3327927477 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3327927477 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3327927477 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3185818714_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t4213140406 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t4213140406 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t4213140406 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3185818714_H
#ifndef LIST_1_T4072576034_H
#define LIST_1_T4072576034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t4072576034  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t3850468773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____items_1)); }
	inline Color32U5BU5D_t3850468773* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t3850468773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t3850468773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4072576034, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4072576034_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Color32U5BU5D_t3850468773* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4072576034_StaticFields, ___EmptyArray_4)); }
	inline Color32U5BU5D_t3850468773* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Color32U5BU5D_t3850468773** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Color32U5BU5D_t3850468773* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4072576034_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LISTPOOL_1_T3980534944_H
#define LISTPOOL_1_T3980534944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3980534944  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3980534944_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4122643707 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t712889340 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4122643707 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4122643707 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4122643707 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3980534944_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t712889340 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t712889340 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t712889340 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3980534944_H
#ifndef TWEENRUNNER_1_T3520241082_H
#define TWEENRUNNER_1_T3520241082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_t3520241082  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3520241082, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3520241082_H
#ifndef OBJECTPOOL_1_T4122643707_H
#define OBJECTPOOL_1_T4122643707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t4122643707  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t971442654 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t712889340 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t712889340 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_Stack_0)); }
	inline Stack_1_t971442654 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t971442654 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t971442654 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t712889340 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t712889340 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t712889340 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4122643707, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4122643707_H
#ifndef LISTPOOL_1_T3630090483_H
#define LISTPOOL_1_T3630090483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_t3630090483  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3630090483_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t3772199246 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t362444879 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t3772199246 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t3772199246 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t3772199246 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t3630090483_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t362444879 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t362444879 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t362444879 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T3630090483_H
#ifndef OBJECTPOOL_1_T4251804118_H
#define OBJECTPOOL_1_T4251804118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_t4251804118  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1100603065 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t842049751 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t842049751 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_Stack_0)); }
	inline Stack_1_t1100603065 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1100603065 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1100603065 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t842049751 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t842049751 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t842049751 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4251804118, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T4251804118_H
#ifndef LISTPOOL_1_T4109695355_H
#define LISTPOOL_1_T4109695355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t4109695355  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t4109695355_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4251804118 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t842049751 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4251804118 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4251804118 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4251804118 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t4109695355_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t842049751 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t842049751 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t842049751 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T4109695355_H
#ifndef LISTPOOL_1_T456935359_H
#define LISTPOOL_1_T456935359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t456935359  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t456935359_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t599044122 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1484257051 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t599044122 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t599044122 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t599044122 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t456935359_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1484257051 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1484257051 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T456935359_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef MLAPISINGLETON_1_T2872887908_H
#define MLAPISINGLETON_1_T2872887908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>
struct  MLAPISingleton_1_t2872887908  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.MagicLeap.MLAPISingleton`1::DllNotFoundError
	String_t* ___DllNotFoundError_2;

public:
	inline static int32_t get_offset_of_DllNotFoundError_2() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t2872887908, ___DllNotFoundError_2)); }
	inline String_t* get_DllNotFoundError_2() const { return ___DllNotFoundError_2; }
	inline String_t** get_address_of_DllNotFoundError_2() { return &___DllNotFoundError_2; }
	inline void set_DllNotFoundError_2(String_t* value)
	{
		___DllNotFoundError_2 = value;
		Il2CppCodeGenWriteBarrier((&___DllNotFoundError_2), value);
	}
};

struct MLAPISingleton_1_t2872887908_StaticFields
{
public:
	// T UnityEngine.XR.MagicLeap.MLAPISingleton`1::_instance
	RuntimeObject * ____instance_0;
	// System.UInt32 UnityEngine.XR.MagicLeap.MLAPISingleton`1::_startCount
	uint32_t ____startCount_1;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t2872887908_StaticFields, ____instance_0)); }
	inline RuntimeObject * get__instance_0() const { return ____instance_0; }
	inline RuntimeObject ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RuntimeObject * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of__startCount_1() { return static_cast<int32_t>(offsetof(MLAPISingleton_1_t2872887908_StaticFields, ____startCount_1)); }
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
#endif // MLAPISINGLETON_1_T2872887908_H
#ifndef LISTPOOL_1_T53650832_H
#define LISTPOOL_1_T53650832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_t53650832  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t53650832_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t195759595 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__mg$cache0
	UnityAction_1_t1080972524 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t195759595 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t195759595 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t195759595 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_ListPool_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(ListPool_1_t53650832_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline UnityAction_1_t1080972524 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(UnityAction_1_t1080972524 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTPOOL_1_T53650832_H
#ifndef OBJECTPOOL_1_T599044122_H
#define OBJECTPOOL_1_T599044122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_t599044122  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1742810365 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1484257051 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1484257051 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_Stack_0)); }
	inline Stack_1_t1742810365 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1742810365 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1742810365 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1484257051 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1484257051 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1484257051 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t599044122, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T599044122_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef LIST_1_T496136383_H
#define LIST_1_T496136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t496136383  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t934056436* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____items_1)); }
	inline Vector4U5BU5D_t934056436* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t934056436** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t934056436* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t496136383, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t496136383_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector4U5BU5D_t934056436* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t496136383_StaticFields, ___EmptyArray_4)); }
	inline Vector4U5BU5D_t934056436* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector4U5BU5D_t934056436** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector4U5BU5D_t934056436* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T496136383_H
#ifndef STACK_1_T3923495619_H
#define STACK_1_T3923495619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t3923495619  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3923495619, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3923495619_H
#ifndef OBJECTPOOL_1_T2779729376_H
#define OBJECTPOOL_1_T2779729376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t2779729376  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3923495619 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t3664942305 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t3664942305 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_Stack_0)); }
	inline Stack_1_t3923495619 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3923495619 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3923495619 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t3664942305 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t3664942305 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t3664942305 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t2779729376, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T2779729376_H
#ifndef OBJECTPOOL_1_T195759595_H
#define OBJECTPOOL_1_T195759595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_t195759595  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t1339525838 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1080972524 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1080972524 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_Stack_0)); }
	inline Stack_1_t1339525838 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t1339525838 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t1339525838 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stack_0), value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnGet_1), value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1080972524 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1080972524 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1080972524 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ActionOnRelease_2), value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t195759595, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTPOOL_1_T195759595_H
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
#ifndef TWEENRUNNER_1_T3055525458_H
#define TWEENRUNNER_1_T3055525458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t3055525458  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t3962482529 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t3962482529 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t3962482529 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CoroutineContainer_0), value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t3055525458, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tween_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENRUNNER_1_T3055525458_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef INDEXEDSET_1_T234526808_H
#define INDEXEDSET_1_T234526808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t234526808  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t257213610 * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t3384741 * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_List_0)); }
	inline List_1_t257213610 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t257213610 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t257213610 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_0), value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t234526808, ___m_Dictionary_1)); }
	inline Dictionary_2_t3384741 * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t3384741 ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t3384741 * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEDSET_1_T234526808_H
#ifndef DICTIONARY_2_T3384741_H
#define DICTIONARY_2_T3384741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t3384741  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3384741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1750446691 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3384741_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1750446691 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1750446691 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1750446691 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3384741_H
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
	ByteU5BU5D_t4116647657* ___input_buffer_4;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_5;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_6;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_7;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_8;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_9;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_10;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_11;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_12;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_13;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_14;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_16;

public:
	inline static int32_t get_offset_of_input_buffer_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_4)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_4() const { return ___input_buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_4() { return &___input_buffer_4; }
	inline void set_input_buffer_4(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_4), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_5)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_5() const { return ___decoded_buffer_5; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_5() { return &___decoded_buffer_5; }
	inline void set_decoded_buffer_5(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_5), value);
	}

	inline static int32_t get_offset_of_decoded_count_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_6)); }
	inline int32_t get_decoded_count_6() const { return ___decoded_count_6; }
	inline int32_t* get_address_of_decoded_count_6() { return &___decoded_count_6; }
	inline void set_decoded_count_6(int32_t value)
	{
		___decoded_count_6 = value;
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_7)); }
	inline int32_t get_pos_7() const { return ___pos_7; }
	inline int32_t* get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(int32_t value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_buffer_size_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_8)); }
	inline int32_t get_buffer_size_8() const { return ___buffer_size_8; }
	inline int32_t* get_address_of_buffer_size_8() { return &___buffer_size_8; }
	inline void set_buffer_size_8(int32_t value)
	{
		___buffer_size_8 = value;
	}

	inline static int32_t get_offset_of_do_checks_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_9)); }
	inline int32_t get_do_checks_9() const { return ___do_checks_9; }
	inline int32_t* get_address_of_do_checks_9() { return &___do_checks_9; }
	inline void set_do_checks_9(int32_t value)
	{
		___do_checks_9 = value;
	}

	inline static int32_t get_offset_of_encoding_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_10)); }
	inline Encoding_t1523322056 * get_encoding_10() const { return ___encoding_10; }
	inline Encoding_t1523322056 ** get_address_of_encoding_10() { return &___encoding_10; }
	inline void set_encoding_10(Encoding_t1523322056 * value)
	{
		___encoding_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_10), value);
	}

	inline static int32_t get_offset_of_decoder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_11)); }
	inline Decoder_t2204182725 * get_decoder_11() const { return ___decoder_11; }
	inline Decoder_t2204182725 ** get_address_of_decoder_11() { return &___decoder_11; }
	inline void set_decoder_11(Decoder_t2204182725 * value)
	{
		___decoder_11 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_11), value);
	}

	inline static int32_t get_offset_of_base_stream_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_12)); }
	inline Stream_t1273022909 * get_base_stream_12() const { return ___base_stream_12; }
	inline Stream_t1273022909 ** get_address_of_base_stream_12() { return &___base_stream_12; }
	inline void set_base_stream_12(Stream_t1273022909 * value)
	{
		___base_stream_12 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_12), value);
	}

	inline static int32_t get_offset_of_mayBlock_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_13)); }
	inline bool get_mayBlock_13() const { return ___mayBlock_13; }
	inline bool* get_address_of_mayBlock_13() { return &___mayBlock_13; }
	inline void set_mayBlock_13(bool value)
	{
		___mayBlock_13 = value;
	}

	inline static int32_t get_offset_of_line_builder_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_14)); }
	inline StringBuilder_t * get_line_builder_14() const { return ___line_builder_14; }
	inline StringBuilder_t ** get_address_of_line_builder_14() { return &___line_builder_14; }
	inline void set_line_builder_14(StringBuilder_t * value)
	{
		___line_builder_14 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_14), value);
	}

	inline static int32_t get_offset_of_foundCR_16() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_16)); }
	inline bool get_foundCR_16() const { return ___foundCR_16; }
	inline bool* get_address_of_foundCR_16() { return &___foundCR_16; }
	inline void set_foundCR_16(bool value)
	{
		___foundCR_16 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_15;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_15)); }
	inline StreamReader_t4009935899 * get_Null_15() const { return ___Null_15; }
	inline StreamReader_t4009935899 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamReader_t4009935899 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier((&___Null_15), value);
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef INVALIDINSTANCEEXCEPTION_T95521288_H
#define INVALIDINSTANCEEXCEPTION_T95521288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.InvalidInstanceException
struct  InvalidInstanceException_t95521288  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDINSTANCEEXCEPTION_T95521288_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef FLOATTWEEN_T1274330004_H
#define FLOATTWEEN_T1274330004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_t1274330004 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Target_0)); }
	inline FloatTweenCallback_t1856710240 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t1856710240 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t1856710240 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_t1274330004, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_pinvoke
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_t1274330004_marshaled_com
{
	FloatTweenCallback_t1856710240 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
#endif // FLOATTWEEN_T1274330004_H
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
#ifndef SUBSYSTEM_T89723475_H
#define SUBSYSTEM_T89723475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t89723475  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.Subsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // SUBSYSTEM_T89723475_H
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
#ifndef COLORTWEENMODE_T1000778859_H
#define COLORTWEENMODE_T1000778859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
struct  ColorTweenMode_t1000778859 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorTweenMode_t1000778859, ___value___1)); }
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
#endif // COLORTWEENMODE_T1000778859_H
#ifndef SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#define SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptorBase
struct  SubsystemDescriptorBase_t2374447182  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.SubsystemDescriptorBase::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorBase_t2374447182, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef U3CSTARTU3EC__ITERATOR0_T30141770_H
#define U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ec__Iterator0_t30141770  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	FloatTween_t1274330004  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___tweenInfo_0)); }
	inline FloatTween_t1274330004  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline FloatTween_t1274330004 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(FloatTween_t1274330004  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t30141770, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T30141770_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t1356862416  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
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
#ifndef COLORTWEEN_T809614380_H
#define COLORTWEEN_T809614380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t809614380 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t2555686324  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t2555686324  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Target_0)); }
	inline ColorTweenCallback_t1121741130 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_t1121741130 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_t1121741130 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_StartColor_1)); }
	inline Color_t2555686324  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t2555686324 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t2555686324  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TargetColor_2)); }
	inline Color_t2555686324  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t2555686324 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t2555686324  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t809614380, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_pinvoke
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t809614380_marshaled_com
{
	ColorTweenCallback_t1121741130 * ___m_Target_0;
	Color_t2555686324  ___m_StartColor_1;
	Color_t2555686324  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
#endif // COLORTWEEN_T809614380_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SUBSYSTEM_1_T4274336850_H
#define SUBSYSTEM_1_T4274336850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<System.Object>
struct  Subsystem_1_t4274336850  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T4274336850_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T817262664_H
#define SUBSYSTEMDESCRIPTOR_1_T817262664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_t817262664  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T817262664_H
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
#ifndef UNITYACTION_1_T1080972524_H
#define UNITYACTION_1_T1080972524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1080972524  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1080972524_H
#ifndef UNITYACTION_1_T362444879_H
#define UNITYACTION_1_T362444879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_t362444879  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T362444879_H
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
#ifndef EVENTFUNCTION_1_T1764640198_H
#define EVENTFUNCTION_1_T1764640198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t1764640198  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1764640198_H
#ifndef UNITYACTION_1_T842049751_H
#define UNITYACTION_1_T842049751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t842049751  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T842049751_H
#ifndef UNITYACTION_1_T712889340_H
#define UNITYACTION_1_T712889340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t712889340  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T712889340_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef ACTION_2_T3125992077_H
#define ACTION_2_T3125992077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Single,System.IntPtr>
struct  Action_2_t3125992077  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3125992077_H
#ifndef UNITYACTION_1_T4213140406_H
#define UNITYACTION_1_T4213140406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t4213140406  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T4213140406_H
#ifndef UNITYACTION_1_T1484257051_H
#define UNITYACTION_1_T1484257051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1484257051  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1484257051_H
#ifndef UNITYACTION_1_T3664942305_H
#define UNITYACTION_1_T3664942305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t3664942305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T3664942305_H
#ifndef UNITYACTION_1_T1819441192_H
#define UNITYACTION_1_T1819441192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t1819441192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T1819441192_H
#ifndef COMPARISON_1_T2855037343_H
#define COMPARISON_1_T2855037343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<System.Object>
struct  Comparison_1_t2855037343  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T2855037343_H
#ifndef U3CSTARTU3EC__ITERATOR0_T3860393442_H
#define U3CSTARTU3EC__ITERATOR0_T3860393442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ec__Iterator0_t3860393442  : public RuntimeObject
{
public:
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::tweenInfo
	ColorTween_t809614380  ___tweenInfo_0;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<elapsedTime>__0
	float ___U3CelapsedTimeU3E__0_1;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::<percentage>__1
	float ___U3CpercentageU3E__1_2;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_tweenInfo_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___tweenInfo_0)); }
	inline ColorTween_t809614380  get_tweenInfo_0() const { return ___tweenInfo_0; }
	inline ColorTween_t809614380 * get_address_of_tweenInfo_0() { return &___tweenInfo_0; }
	inline void set_tweenInfo_0(ColorTween_t809614380  value)
	{
		___tweenInfo_0 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CelapsedTimeU3E__0_1)); }
	inline float get_U3CelapsedTimeU3E__0_1() const { return ___U3CelapsedTimeU3E__0_1; }
	inline float* get_address_of_U3CelapsedTimeU3E__0_1() { return &___U3CelapsedTimeU3E__0_1; }
	inline void set_U3CelapsedTimeU3E__0_1(float value)
	{
		___U3CelapsedTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageU3E__1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U3CpercentageU3E__1_2)); }
	inline float get_U3CpercentageU3E__1_2() const { return ___U3CpercentageU3E__1_2; }
	inline float* get_address_of_U3CpercentageU3E__1_2() { return &___U3CpercentageU3E__1_2; }
	inline void set_U3CpercentageU3E__1_2(float value)
	{
		___U3CpercentageU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3860393442, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T3860393442_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
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
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
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


// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1_Invoke_m2429482587_gshared (EventFunction_1_t1764640198 * __this, RuntimeObject * ___handler0, BaseEventData_t3903027533 * ___eventData1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m1736396111_gshared (Action_2_t3125992077 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m1363151734_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m2429482587(__this, ___handler0, ___eventData1, method) ((  void (*) (EventFunction_1_t1764640198 *, RuntimeObject *, BaseEventData_t3903027533 *, const RuntimeMethod*))EventFunction_1_Invoke_m2429482587_gshared)(__this, ___handler0, ___eventData1, method)
// System.IntPtr UnityEngine.Experimental.Internal_SubsystemDescriptors::Create(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t Internal_SubsystemDescriptors_Create_m2780843198 (RuntimeObject * __this /* static, unused */, intptr_t ___descriptorPtr0, const RuntimeMethod* method);
// UnityEngine.Experimental.Subsystem UnityEngine.Experimental.Internal_SubsystemInstances::Internal_GetInstanceByPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Subsystem_t89723475 * Internal_SubsystemInstances_Internal_GetInstanceByPtr_m1622708940 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m376919233 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_m1133957174 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m4270080131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float ColorTween_get_duration_m3264097060 (ColorTween_t809614380 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m3895102629 (ColorTween_t809614380 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m885246038 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
extern "C" IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m322812475 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
extern "C" IL2CPP_METHOD_ATTR float FloatTween_get_duration_m1227071020 (FloatTween_t1274330004 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m52237061 (FloatTween_t1274330004 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.InvalidInstanceException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidInstanceException__ctor_m2604859130 (InvalidInstanceException_t95521288 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MagicLeapDevice::IsReady()
extern "C" IL2CPP_METHOD_ATTR bool MagicLeapDevice_IsReady_m3703051086 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode,System.String)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m899246048 (MLResult_t265502022 * __this, int32_t ___resultCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLPluginLog::ErrorFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void MLPluginLog_ErrorFormat_m663780805 (RuntimeObject * __this /* static, unused */, String_t* ___logMsg0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MLResult::.ctor(UnityEngine.XR.MagicLeap.MLResultCode)
extern "C" IL2CPP_METHOD_ATTR void MLResult__ctor_m18499570 (MLResult_t265502022 * __this, int32_t ___resultCode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MagicLeap.MLResult::get_IsOk()
extern "C" IL2CPP_METHOD_ATTR bool MLResult_get_IsOk_m578243083 (MLResult_t265502022 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.IntPtr>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m1736396111(__this, p0, p1, method) ((  void (*) (Action_2_t3125992077 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1736396111_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.XR.MagicLeap.MagicLeapDevice::Register(System.Action`2<System.Single,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void MagicLeapDevice_Register_m1008033135 (RuntimeObject * __this /* static, unused */, Action_2_t3125992077 * ___updateCallback0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m1363151734(__this, p0, p1, method) ((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m1363151734_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.XR.MagicLeap.MagicLeapDevice::RegisterOnApplicationPause(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MagicLeapDevice_RegisterOnApplicationPause_m2735053769 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___onApplicationPauseCallback0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MagicLeapDevice::Unregister(System.Action`2<System.Single,System.IntPtr>)
extern "C" IL2CPP_METHOD_ATTR void MagicLeapDevice_Unregister_m844408261 (RuntimeObject * __this /* static, unused */, Action_2_t3125992077 * ___updateCallback0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.MagicLeap.MagicLeapDevice::UnregisterOnApplicationPause(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void MagicLeapDevice_UnregisterOnApplicationPause_m4279706140 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___onApplicationPauseCallback0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
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
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m4292798223_gshared (EventFunction_1_t1764640198 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_1__ctor_m4292798223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventFunction_1__ctor_m4292798223_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1_Invoke_m2429482587_gshared (EventFunction_1_t1764640198 * __this, RuntimeObject * ___handler0, BaseEventData_t3903027533 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_1_Invoke_m2429482587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventFunction_1_Invoke_m2429482587_RuntimeMethod_var);
	if(__this->get_prev_9() != NULL)
	{
		EventFunction_1_Invoke_m2429482587((EventFunction_1_t1764640198 *)__this->get_prev_9(), ___handler0, ___eventData1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, BaseEventData_t3903027533 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___handler0, ___eventData1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, BaseEventData_t3903027533 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___handler0, ___eventData1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, BaseEventData_t3903027533 * >::Invoke(targetMethod, targetThis, ___handler0, ___eventData1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, BaseEventData_t3903027533 * >::Invoke(targetMethod, targetThis, ___handler0, ___eventData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, BaseEventData_t3903027533 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0, ___eventData1);
					else
						VirtActionInvoker2< RuntimeObject *, BaseEventData_t3903027533 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0, ___eventData1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, BaseEventData_t3903027533 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, ___eventData1, targetMethod);
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
						GenericInterfaceActionInvoker1< BaseEventData_t3903027533 * >::Invoke(targetMethod, ___handler0, ___eventData1);
					else
						GenericVirtActionInvoker1< BaseEventData_t3903027533 * >::Invoke(targetMethod, ___handler0, ___eventData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< BaseEventData_t3903027533 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0, ___eventData1);
					else
						VirtActionInvoker1< BaseEventData_t3903027533 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0, ___eventData1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, BaseEventData_t3903027533 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, ___eventData1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EventFunction_1_BeginInvoke_m117707366_gshared (EventFunction_1_t1764640198 * __this, RuntimeObject * ___handler0, BaseEventData_t3903027533 * ___eventData1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_1_BeginInvoke_m117707366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventFunction_1_BeginInvoke_m117707366_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___handler0;
	__d_args[1] = ___eventData1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EventFunction_1_EndInvoke_m1395098989_gshared (EventFunction_1_t1764640198 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventFunction_1_EndInvoke_m1395098989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(EventFunction_1_EndInvoke_m1395098989_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSubsystem UnityEngine.Experimental.SubsystemDescriptor`1<System.Object>::Create()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SubsystemDescriptor_1_Create_m3101241506_gshared (SubsystemDescriptor_1_t817262664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemDescriptor_1_Create_m3101241506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(SubsystemDescriptor_1_Create_m3101241506_RuntimeMethod_var);
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		intptr_t L_0 = (intptr_t)((SubsystemDescriptorBase_t2374447182 *)__this)->get_m_Ptr_0();
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_t691162017_il2cpp_TypeInfo_var);
		intptr_t L_1 = Internal_SubsystemDescriptors_Create_m2780843198(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_t893566515_il2cpp_TypeInfo_var);
		Subsystem_t89723475 * L_3 = Internal_SubsystemInstances_Internal_GetInstanceByPtr_m1622708940(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		RuntimeObject * L_4 = V_1;
		NullCheck(L_4);
		((Subsystem_t89723475 *)L_4)->set_m_subsystemDescriptor_1(__this);
		RuntimeObject * L_5 = V_1;
		V_2 = (RuntimeObject *)L_5;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject * L_6 = V_2;
		return L_6;
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_m2250384602_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1__ctor_m2250384602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1__ctor_m2250384602_RuntimeMethod_var);
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_List_0(L_0);
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m459949375_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Add_m459949375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Add_m459949375_RuntimeMethod_var);
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_2 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t257213610 * L_4 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_2);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m861843892_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_AddUnique_m861843892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_AddUnique_m861843892_RuntimeMethod_var);
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0045;
	}

IL_0019:
	{
		List_1_t257213610 * L_3 = (List_1_t257213610 *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t257213610 *)L_3);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t257213610 * L_7 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (bool)1;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m4118314453_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Remove_m4118314453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Remove_m4118314453_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  void (*) (IndexedSet_1_t234526808 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((IndexedSet_1_t234526808 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m3750514392_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m3750514392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var);
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_GetEnumerator_m3750514392_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m190983904_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IndexedSet_1_t234526808 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_t234526808 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IndexedSet_1_t234526808 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m4036265083_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Clear_m4036265083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Clear_m4036265083_RuntimeMethod_var);
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		Dictionary_2_t3384741 * L_1 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t3384741 *)L_1);
		((  void (*) (Dictionary_2_t3384741 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((Dictionary_2_t3384741 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_m1525966688_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Contains_m1525966688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Contains_m1525966688_RuntimeMethod_var);
	bool V_0 = false;
	{
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4232548259_gshared (IndexedSet_1_t234526808 * __this, ObjectU5BU5D_t2843939325* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_CopyTo_m4232548259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_CopyTo_m4232548259_RuntimeMethod_var);
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		ObjectU5BU5D_t2843939325* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, ObjectU5BU5D_t2843939325*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t257213610 *)L_0, (ObjectU5BU5D_t2843939325*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_m2591381675_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_get_Count_m2591381675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_get_Count_m2591381675_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m1939064765_gshared (IndexedSet_1_t234526808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_get_IsReadOnly_m1939064765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_get_IsReadOnly_m1939064765_RuntimeMethod_var);
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m241693686_gshared (IndexedSet_1_t234526808 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_IndexOf_m241693686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_IndexOf_m241693686_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t3384741 * L_0 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t3384741 *)L_0);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t3384741 *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		int32_t L_2 = V_0;
		V_1 = (int32_t)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m1432638049_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m1432638049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Insert_m1432638049_RuntimeMethod_var);
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_0, (String_t*)_stringLiteral3926843441, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IndexedSet_1_Insert_m1432638049_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_m3002732320_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_RemoveAt_m3002732320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_RemoveAt_m3002732320_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		int32_t L_5 = ___index0;
		List_1_t257213610 * L_6 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_003f;
		}
	}
	{
		List_1_t257213610 * L_8 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t257213610 *)L_8);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0082;
	}

IL_003f:
	{
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		List_1_t257213610 * L_12 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t257213610 *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_2 = (RuntimeObject *)L_14;
		List_1_t257213610 * L_15 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t257213610 *)L_15);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_18 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_18);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		List_1_t257213610 * L_21 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t257213610 *)L_21);
		((  void (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t257213610 *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
	}

IL_0082:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m3913508799_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_get_Item_m3913508799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_get_Item_m3913508799_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m4214546195_gshared (IndexedSet_1_t234526808 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_set_Item_m4214546195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_set_Item_m4214546195_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_0 = (RuntimeObject *)L_2;
		Dictionary_2_t3384741 * L_3 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_3);
		((  bool (*) (Dictionary_2_t3384741 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Dictionary_2_t3384741 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		List_1_t257213610 * L_5 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t257213610 *)L_5);
		((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t257213610 *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Dictionary_2_t3384741 * L_8 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t3384741 *)L_8);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Dictionary_2_t3384741 *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_m3453409986_gshared (IndexedSet_1_t234526808 * __this, Predicate_1_t3905400288 * ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_RemoveAll_m3453409986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_RemoveAll_m3453409986_RuntimeMethod_var);
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0008:
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t257213610 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_2;
		Predicate_1_t3905400288 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t3905400288 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((Predicate_1_t3905400288 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_t234526808 *)__this);
		((  bool (*) (IndexedSet_1_t234526808 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((IndexedSet_1_t234526808 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		goto IL_0033;
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m2612539420_gshared (IndexedSet_1_t234526808 * __this, Comparison_1_t2855037343 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Sort_m2612539420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(IndexedSet_1_Sort_m2612539420_RuntimeMethod_var);
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)__this->get_m_List_0();
		Comparison_1_t2855037343 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, Comparison_1_t2855037343 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((List_1_t257213610 *)L_0, (Comparison_1_t2855037343 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0034;
	}

IL_0014:
	{
		List_1_t257213610 * L_2 = (List_1_t257213610 *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t257213610 *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t257213610 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		V_1 = (RuntimeObject *)L_4;
		Dictionary_2_t3384741 * L_5 = (Dictionary_2_t3384741 *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t3384741 *)L_5);
		((  void (*) (Dictionary_2_t3384741 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((Dictionary_2_t3384741 *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		List_1_t257213610 * L_10 = (List_1_t257213610 *)__this->get_m_List_0();
		NullCheck((List_1_t257213610 *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0014;
		}
	}
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3001242744_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0__ctor_m3001242744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0__ctor_m3001242744_RuntimeMethod_var);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m524356752_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m524356752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_MoveNext_m524356752_RuntimeMethod_var);
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t3860393442 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		ColorTween_t809614380 * L_2 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = ColorTween_ValidTarget_m376919233((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_5 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = ColorTween_get_ignoreTimeScale_m1133957174((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t3860393442 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_10 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_11 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		ColorTween_t809614380 * L_13 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		ColorTween_t809614380 * L_17 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		float L_18 = ColorTween_get_duration_m3264097060((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t809614380 * L_19 = (ColorTween_t809614380 *)__this->get_address_of_tweenInfo_0();
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2852443338_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3282639877_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m261027331_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Dispose_m261027331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_Dispose_m261027331_RuntimeMethod_var);
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m3175110837_gshared (U3CStartU3Ec__Iterator0_t3860393442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m3175110837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var);
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m3175110837_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m2366347741_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0__ctor_m2366347741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0__ctor_m2366347741_RuntimeMethod_var);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m4270440387_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m4270440387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_MoveNext_m4270440387_RuntimeMethod_var);
	uint32_t V_0 = 0;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t30141770 * G_B8_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U24PC_5();
		V_0 = (uint32_t)L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_010f;
	}

IL_0021:
	{
		FloatTween_t1274330004 * L_2 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_3 = FloatTween_ValidTarget_m885246038((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		goto IL_010f;
	}

IL_003d:
	{
		__this->set_U3CelapsedTimeU3E__0_1((0.0f));
		goto IL_00d6;
	}

IL_004d:
	{
		float L_4 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_5 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		bool L_6 = FloatTween_get_ignoreTimeScale_m322812475((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_5, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t30141770 *)(__this));
			goto IL_0075;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m4270080131(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B6_1));
		goto IL_007a;
	}

IL_0075:
	{
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t30141770 *)(G_B7_1));
	}

IL_007a:
	{
		NullCheck(G_B8_2);
		G_B8_2->set_U3CelapsedTimeU3E__0_1(((float)il2cpp_codegen_add((float)G_B8_1, (float)G_B8_0)));
		float L_9 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_10 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_11 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->set_U3CpercentageU3E__1_2(L_12);
		FloatTween_t1274330004 * L_13 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_14 = (float)__this->get_U3CpercentageU3E__1_2();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_13, (float)L_14, /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_15 = (bool)__this->get_U24disposing_4();
		if (L_15)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00d0:
	{
		goto IL_0111;
	}

IL_00d5:
	{
	}

IL_00d6:
	{
		float L_16 = (float)__this->get_U3CelapsedTimeU3E__0_1();
		FloatTween_t1274330004 * L_17 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		float L_18 = FloatTween_get_duration_m1227071020((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_t1274330004 * L_19 = (FloatTween_t1274330004 *)__this->get_address_of_tweenInfo_0();
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_010f:
	{
		return (bool)0;
	}

IL_0111:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3156493053_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1677159983_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U24current_3();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m3800412744_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Dispose_m3800412744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_Dispose_m3800412744_RuntimeMethod_var);
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.FloatTween>::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m656428886_gshared (U3CStartU3Ec__Iterator0_t30141770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m656428886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var);
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m656428886_RuntimeMethod_var);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m340723704_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1__ctor_m340723704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1__ctor_m340723704_RuntimeMethod_var);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m817364799_gshared (RuntimeObject * __this /* static, unused */, ColorTween_t809614380  ___tweenInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_Start_m817364799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_Start_m817364799_RuntimeMethod_var);
	U3CStartU3Ec__Iterator0_t3860393442 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t3860393442 * L_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t3860393442 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t3860393442 *)L_0;
		U3CStartU3Ec__Iterator0_t3860393442 * L_1 = V_0;
		ColorTween_t809614380  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t3860393442 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m3026112660_gshared (TweenRunner_1_t3055525458 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_Init_m3026112660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_Init_m3026112660_RuntimeMethod_var);
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m2247690200_gshared (TweenRunner_1_t3055525458 * __this, ColorTween_t809614380  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m2247690200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_StartTween_m2247690200_RuntimeMethod_var);
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3055525458 *)__this);
		((  void (*) (TweenRunner_1_t3055525458 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3055525458 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		ColorTween_TweenValue_m3895102629((ColorTween_t809614380 *)(ColorTween_t809614380 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		ColorTween_t809614380  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, ColorTween_t809614380 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (ColorTween_t809614380 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m1830357468_gshared (TweenRunner_1_t3055525458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StopTween_m1830357468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_StopTween_m1830357468_RuntimeMethod_var);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_m3053831591_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1__ctor_m3053831591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1__ctor_m3053831591_RuntimeMethod_var);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m3757154622_gshared (RuntimeObject * __this /* static, unused */, FloatTween_t1274330004  ___tweenInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_Start_m3757154622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_Start_m3757154622_RuntimeMethod_var);
	U3CStartU3Ec__Iterator0_t30141770 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CStartU3Ec__Iterator0_t30141770 * L_0 = (U3CStartU3Ec__Iterator0_t30141770 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ec__Iterator0_t30141770 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t30141770 *)L_0;
		U3CStartU3Ec__Iterator0_t30141770 * L_1 = V_0;
		FloatTween_t1274330004  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_0(L_2);
		U3CStartU3Ec__Iterator0_t30141770 * L_3 = V_0;
		V_1 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m1266084429_gshared (TweenRunner_1_t3520241082 * __this, MonoBehaviour_t3962482529 * ___coroutineContainer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_Init_m1266084429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_Init_m1266084429_RuntimeMethod_var);
	{
		MonoBehaviour_t3962482529 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m1055628540_gshared (TweenRunner_1_t3520241082 * __this, FloatTween_t1274330004  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_m1055628540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_StartTween_m1055628540_RuntimeMethod_var);
	{
		MonoBehaviour_t3962482529 * L_0 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1132744560, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0022:
	{
		NullCheck((TweenRunner_1_t3520241082 *)__this);
		((  void (*) (TweenRunner_1_t3520241082 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t3520241082 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		MonoBehaviour_t3962482529 * L_2 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t1923634451 *)L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688((GameObject_t1113636619 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		FloatTween_TweenValue_m52237061((FloatTween_t1274330004 *)(FloatTween_t1274330004 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0055:
	{
		FloatTween_t1274330004  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, FloatTween_t1274330004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, (FloatTween_t1274330004 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		MonoBehaviour_t3962482529 * L_7 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_7);
		MonoBehaviour_StartCoroutine_m3411253000((MonoBehaviour_t3962482529 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
extern "C" IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m3457627707_gshared (TweenRunner_1_t3520241082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StopTween_m3457627707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(TweenRunner_1_StopTween_m3457627707_RuntimeMethod_var);
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_1 = (MonoBehaviour_t3962482529 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t3962482529 *)L_1);
		MonoBehaviour_StopCoroutine_m615723318((MonoBehaviour_t3962482529 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0026:
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1094012931_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m1094012931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m1094012931_RuntimeMethod_var);
	{
		List_1_t128053199 * L_0 = ___l0;
		NullCheck((List_1_t128053199 *)L_0);
		((  void (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t128053199 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t128053199 * ListPool_1_Get_m2031605680_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m2031605680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m2031605680_RuntimeMethod_var);
	List_1_t128053199 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		List_1_t128053199 * L_1 = ((  List_1_t128053199 * (*) (ObjectPool_1_t4122643707 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t128053199 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t128053199 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m188599205_gshared (RuntimeObject * __this /* static, unused */, List_1_t128053199 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m188599205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m188599205_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4122643707 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t128053199 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4122643707 *)L_0);
		((  void (*) (ObjectPool_1_t4122643707 *, List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4122643707 *)L_0, (List_1_t128053199 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m647010813_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m647010813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m647010813_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t712889340 * L_0 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t712889340 * L_2 = (UnityAction_1_t712889340 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t712889340 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t712889340 * L_3 = ((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4122643707 * L_4 = (ObjectPool_1_t4122643707 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4122643707 *, UnityAction_1_t712889340 *, UnityAction_1_t712889340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t712889340 *)G_B2_0, (UnityAction_1_t712889340 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3980534944_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2266431612_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m2266431612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m2266431612_RuntimeMethod_var);
	{
		List_1_t257213610 * L_0 = ___l0;
		NullCheck((List_1_t257213610 *)L_0);
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t257213610 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * ListPool_1_Get_m1670010485_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m1670010485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m1670010485_RuntimeMethod_var);
	List_1_t257213610 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		List_1_t257213610 * L_1 = ((  List_1_t257213610 * (*) (ObjectPool_1_t4251804118 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t257213610 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t257213610 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m957266927_gshared (RuntimeObject * __this /* static, unused */, List_1_t257213610 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m957266927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m957266927_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t4251804118 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t257213610 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t4251804118 *)L_0);
		((  void (*) (ObjectPool_1_t4251804118 *, List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t4251804118 *)L_0, (List_1_t257213610 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1477269088_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m1477269088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m1477269088_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t842049751 * L_0 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t842049751 * L_2 = (UnityAction_1_t842049751 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t842049751 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t842049751 * L_3 = ((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t4251804118 * L_4 = (ObjectPool_1_t4251804118 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t4251804118 *, UnityAction_1_t842049751 *, UnityAction_1_t842049751 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t842049751 *)G_B2_0, (UnityAction_1_t842049751 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t4109695355_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2605375579_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m2605375579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m2605375579_RuntimeMethod_var);
	{
		List_1_t4072576034 * L_0 = ___l0;
		NullCheck((List_1_t4072576034 *)L_0);
		((  void (*) (List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4072576034 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t4072576034 * ListPool_1_Get_m2875520964_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m2875520964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m2875520964_RuntimeMethod_var);
	List_1_t4072576034 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		List_1_t4072576034 * L_1 = ((  List_1_t4072576034 * (*) (ObjectPool_1_t3772199246 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t4072576034 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t4072576034 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m2857821093_gshared (RuntimeObject * __this /* static, unused */, List_1_t4072576034 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m2857821093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m2857821093_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3772199246 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4072576034 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3772199246 *)L_0);
		((  void (*) (ObjectPool_1_t3772199246 *, List_1_t4072576034 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3772199246 *)L_0, (List_1_t4072576034 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m1390066271_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m1390066271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m1390066271_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t362444879 * L_0 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t362444879 * L_2 = (UnityAction_1_t362444879 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t362444879 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t362444879 * L_3 = ((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3772199246 * L_4 = (ObjectPool_1_t3772199246 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3772199246 *, UnityAction_1_t362444879 *, UnityAction_1_t362444879 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t362444879 *)G_B2_0, (UnityAction_1_t362444879 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3630090483_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3636388248_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m3636388248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m3636388248_RuntimeMethod_var);
	{
		List_1_t1234605051 * L_0 = ___l0;
		NullCheck((List_1_t1234605051 *)L_0);
		((  void (*) (List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t1234605051 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t1234605051 * ListPool_1_Get_m738675669_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m738675669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m738675669_RuntimeMethod_var);
	List_1_t1234605051 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		List_1_t1234605051 * L_1 = ((  List_1_t1234605051 * (*) (ObjectPool_1_t934228263 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t934228263 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t1234605051 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t1234605051 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1246825787_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m1246825787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m1246825787_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t934228263 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t1234605051 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t934228263 *)L_0);
		((  void (*) (ObjectPool_1_t934228263 *, List_1_t1234605051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t934228263 *)L_0, (List_1_t1234605051 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m995356616_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m995356616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m995356616_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1819441192 * L_0 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1819441192 * L_2 = (UnityAction_1_t1819441192 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1819441192 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1819441192 * L_3 = ((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t934228263 * L_4 = (ObjectPool_1_t934228263 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t934228263 *, UnityAction_1_t1819441192 *, UnityAction_1_t1819441192 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1819441192 *)G_B2_0, (UnityAction_1_t1819441192 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t792119500_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2531706949_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m2531706949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m2531706949_RuntimeMethod_var);
	{
		List_1_t3628304265 * L_0 = ___l0;
		NullCheck((List_1_t3628304265 *)L_0);
		((  void (*) (List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t3628304265 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t3628304265 * ListPool_1_Get_m3176650548_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m3176650548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m3176650548_RuntimeMethod_var);
	List_1_t3628304265 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		List_1_t3628304265 * L_1 = ((  List_1_t3628304265 * (*) (ObjectPool_1_t3327927477 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t3628304265 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t3628304265 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m591299672_gshared (RuntimeObject * __this /* static, unused */, List_1_t3628304265 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m591299672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m591299672_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t3327927477 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t3628304265 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t3327927477 *)L_0);
		((  void (*) (ObjectPool_1_t3327927477 *, List_1_t3628304265 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t3327927477 *)L_0, (List_1_t3628304265 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m3480273184_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m3480273184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m3480273184_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t4213140406 * L_0 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t4213140406 * L_2 = (UnityAction_1_t4213140406 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t4213140406 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t4213140406 * L_3 = ((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t3327927477 * L_4 = (ObjectPool_1_t3327927477 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t3327927477 *, UnityAction_1_t4213140406 *, UnityAction_1_t4213140406 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t4213140406 *)G_B2_0, (UnityAction_1_t4213140406 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3185818714_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m2587502754_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m2587502754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m2587502754_RuntimeMethod_var);
	{
		List_1_t899420910 * L_0 = ___l0;
		NullCheck((List_1_t899420910 *)L_0);
		((  void (*) (List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t899420910 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t899420910 * ListPool_1_Get_m3176649063_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m3176649063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m3176649063_RuntimeMethod_var);
	List_1_t899420910 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		List_1_t899420910 * L_1 = ((  List_1_t899420910 * (*) (ObjectPool_1_t599044122 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t599044122 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t899420910 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t899420910 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m4113115349_gshared (RuntimeObject * __this /* static, unused */, List_1_t899420910 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m4113115349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m4113115349_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t599044122 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t899420910 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t599044122 *)L_0);
		((  void (*) (ObjectPool_1_t599044122 *, List_1_t899420910 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t599044122 *)L_0, (List_1_t899420910 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m4085211983_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m4085211983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m4085211983_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1484257051 * L_0 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1484257051 * L_2 = (UnityAction_1_t1484257051 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1484257051 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1484257051 * L_3 = ((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t599044122 * L_4 = (ObjectPool_1_t599044122 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t599044122 *, UnityAction_1_t1484257051 *, UnityAction_1_t1484257051 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1484257051 *)G_B2_0, (UnityAction_1_t1484257051 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t456935359_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Clear_m1838177011_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Clear_m1838177011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Clear_m1838177011_RuntimeMethod_var);
	{
		List_1_t496136383 * L_0 = ___l0;
		NullCheck((List_1_t496136383 *)L_0);
		((  void (*) (List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t496136383 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
extern "C" IL2CPP_METHOD_ATTR List_1_t496136383 * ListPool_1_Get_m3176656818_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Get_m3176656818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Get_m3176656818_RuntimeMethod_var);
	List_1_t496136383 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		List_1_t496136383 * L_1 = ((  List_1_t496136383 * (*) (ObjectPool_1_t195759595 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t195759595 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_0 = (List_1_t496136383 *)L_1;
		goto IL_0011;
	}

IL_0011:
	{
		List_1_t496136383 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ListPool_1_Release_m1363449253_gshared (RuntimeObject * __this /* static, unused */, List_1_t496136383 * ___toRelease0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1_Release_m1363449253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1_Release_m1363449253_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t195759595 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t496136383 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t195759595 *)L_0);
		((  void (*) (ObjectPool_1_t195759595 *, List_1_t496136383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t195759595 *)L_0, (List_1_t496136383 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ListPool_1__cctor_m704263611_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListPool_1__cctor_m704263611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ListPool_1__cctor_m704263611_RuntimeMethod_var);
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		UnityAction_1_t1080972524 * L_0 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = NULL;
		if (L_0)
		{
			G_B2_0 = NULL;
			goto IL_0019;
		}
	}
	{
		intptr_t L_1 = (intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4);
		UnityAction_1_t1080972524 * L_2 = (UnityAction_1_t1080972524 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1080972524 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)NULL, (intptr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_U3CU3Ef__mgU24cache0_1(L_2);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		UnityAction_1_t1080972524 * L_3 = ((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_U3CU3Ef__mgU24cache0_1();
		ObjectPool_1_t195759595 * L_4 = (ObjectPool_1_t195759595 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t195759595 *, UnityAction_1_t1080972524 *, UnityAction_1_t1080972524 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_4, (UnityAction_1_t1080972524 *)G_B2_0, (UnityAction_1_t1080972524 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t53650832_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_4);
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
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m2535233435_gshared (ObjectPool_1_t2779729376 * __this, UnityAction_1_t3664942305 * ___actionOnGet0, UnityAction_1_t3664942305 * ___actionOnRelease1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1__ctor_m2535233435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1__ctor_m2535233435_RuntimeMethod_var);
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		UnityAction_1_t3664942305 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		UnityAction_1_t3664942305 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_m819305395_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_get_countAll_m819305395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_get_countAll_m819305395_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		V_0 = (int32_t)L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_m3507126863_gshared (ObjectPool_1_t2779729376 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_set_countAll_m3507126863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_set_countAll_m3507126863_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m807006650_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_get_countActive_m807006650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_get_countActive_m807006650_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_m526975942_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_get_countInactive_m526975942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_get_countInactive_m526975942_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (int32_t)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3351668383_gshared (ObjectPool_1_t2779729376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Get_m3351668383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_Get_m3351668383_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t2779729376 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((ObjectPool_1_t2779729376 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((ObjectPool_1_t2779729376 *)__this);
		((  void (*) (ObjectPool_1_t2779729376 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t2779729376 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		goto IL_003a;
	}

IL_002c:
	{
		Stack_1_t3923495619 * L_4 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t3923495619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_5;
	}

IL_003a:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_8 = V_0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0051:
	{
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3263354170_gshared (ObjectPool_1_t2779729376 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m3263354170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(ObjectPool_1_Release_m3263354170_RuntimeMethod_var);
	{
		Stack_1_t3923495619 * L_0 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Stack_1_t3923495619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stack_1_t3923495619 * L_2 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t3923495619 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t3923495619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t3923495619 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		bool L_5 = il2cpp_codegen_object_reference_equals((RuntimeObject *)L_3, (RuntimeObject *)L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral46997234, /*hidden argument*/NULL);
	}

IL_003c:
	{
		UnityAction_1_t3664942305 * L_6 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UnityAction_1_t3664942305 * L_7 = (UnityAction_1_t3664942305 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_8 = ___element0;
		NullCheck((UnityAction_1_t3664942305 *)L_7);
		((  void (*) (UnityAction_1_t3664942305 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t3664942305 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0053:
	{
		Stack_1_t3923495619 * L_9 = (Stack_1_t3923495619 *)__this->get_m_Stack_0();
		RuntimeObject * L_10 = ___element0;
		NullCheck((Stack_1_t3923495619 *)L_9);
		((  void (*) (Stack_1_t3923495619 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t3923495619 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1__ctor_m3813194182_gshared (MLAPISingleton_1_t2872887908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1__ctor_m3813194182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1__ctor_m3813194182_RuntimeMethod_var);
	{
		__this->set_DllNotFoundError_2(_stringLiteral4171276603);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m297566312((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1__cctor_m2321230902_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1__cctor_m2321230902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1__cctor_m2321230902_RuntimeMethod_var);
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::IsValidInstance()
extern "C" IL2CPP_METHOD_ATTR bool MLAPISingleton_1_IsValidInstance_m1326148161_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_IsValidInstance_m1326148161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_IsValidInstance_m1326148161_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_0 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__instance_0();
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::CheckValidInstance()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1_CheckValidInstance_m1336067562_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_CheckValidInstance_m1336067562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_CheckValidInstance_m1336067562_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_0 = ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)_stringLiteral4112473801, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		InvalidInstanceException_t95521288 * L_5 = (InvalidInstanceException_t95521288 *)il2cpp_codegen_object_new(InvalidInstanceException_t95521288_il2cpp_TypeInfo_var);
		InvalidInstanceException__ctor_m2604859130(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, MLAPISingleton_1_CheckValidInstance_m1336067562_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
// T UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MLAPISingleton_1_get_Instance_m3294954138_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_get_Instance_m3294954138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_get_Instance_m3294954138_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_0 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__instance_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::get_IsStarted()
extern "C" IL2CPP_METHOD_ATTR bool MLAPISingleton_1_get_IsStarted_m2405736327_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_get_IsStarted_m2405736327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_get_IsStarted_m2405736327_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_0 = ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_0;
	}
}
// UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::BaseStart()
extern "C" IL2CPP_METHOD_ATTR MLResult_t265502022  MLAPISingleton_1_BaseStart_m2686327205_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_BaseStart_m2686327205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_BaseStart_m2686327205_RuntimeMethod_var);
	MLResult_t265502022  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	MLResult_t265502022  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var);
		bool L_0 = MagicLeapDevice_IsReady_m3703051086(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		MLResult__ctor_m899246048((MLResult_t265502022 *)(MLResult_t265502022 *)(&V_0), (int32_t)4, (String_t*)_stringLiteral2459931840, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)L_1;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_2;
		MLResult_t265502022  L_7 = V_0;
		MLResult_t265502022  L_8 = L_7;
		RuntimeObject * L_9 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)_stringLiteral282095538, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__instance_0(((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		MLResult_t265502022  L_10 = V_0;
		return L_10;
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			uint32_t L_11 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__startCount_1();
			if ((!(((uint32_t)L_11) > ((uint32_t)0))))
			{
				goto IL_0073;
			}
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			uint32_t L_12 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__startCount_1();
			((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__startCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
			MLResult__ctor_m18499570((MLResult_t265502022 *)(MLResult_t265502022 *)(&V_0), (int32_t)0, /*hidden argument*/NULL);
			goto IL_0110;
		}

IL_0073:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			RuntimeObject * L_13 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
			V_2 = (RuntimeObject *)L_13;
			NullCheck((MLAPISingleton_1_t2872887908 *)(V_2));
			MLResult_t265502022  L_14 = VirtFuncInvoker0< MLResult_t265502022  >::Invoke(4 /* UnityEngine.XR.MagicLeap.MLResult UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::StartAPI() */, (MLAPISingleton_1_t2872887908 *)(V_2));
			V_0 = (MLResult_t265502022 )L_14;
			bool L_15 = MLResult_get_IsOk_m578243083((MLResult_t265502022 *)(MLResult_t265502022 *)(&V_0), /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00da;
			}
		}

IL_0093:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			RuntimeObject * L_16 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
			RuntimeObject * L_17 = (RuntimeObject *)L_16;
			intptr_t L_18 = (intptr_t)GetVirtualMethodInfo(L_17, 6);
			Action_2_t3125992077 * L_19 = (Action_2_t3125992077 *)il2cpp_codegen_object_new(Action_2_t3125992077_il2cpp_TypeInfo_var);
			Action_2__ctor_m1736396111(L_19, (RuntimeObject *)L_17, (intptr_t)L_18, /*hidden argument*/Action_2__ctor_m1736396111_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var);
			MagicLeapDevice_Register_m1008033135(NULL /*static, unused*/, (Action_2_t3125992077 *)L_19, /*hidden argument*/NULL);
			RuntimeObject * L_20 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
			RuntimeObject * L_21 = (RuntimeObject *)L_20;
			intptr_t L_22 = (intptr_t)GetVirtualMethodInfo(L_21, 7);
			Action_1_t269755560 * L_23 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
			Action_1__ctor_m1363151734(L_23, (RuntimeObject *)L_21, (intptr_t)L_22, /*hidden argument*/Action_1__ctor_m1363151734_RuntimeMethod_var);
			MagicLeapDevice_RegisterOnApplicationPause_m2735053769(NULL /*static, unused*/, (Action_1_t269755560 *)L_23, /*hidden argument*/NULL);
			uint32_t L_24 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__startCount_1();
			((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__startCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
			goto IL_0110;
		}

IL_00da:
		{
			ObjectU5BU5D_t2843939325* L_25 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t2843939325* L_26 = (ObjectU5BU5D_t2843939325*)L_25;
			RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_27, /*hidden argument*/NULL);
			NullCheck((MemberInfo_t *)L_28);
			String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_28);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_29);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
			ObjectU5BU5D_t2843939325* L_30 = (ObjectU5BU5D_t2843939325*)L_26;
			MLResult_t265502022  L_31 = V_0;
			MLResult_t265502022  L_32 = L_31;
			RuntimeObject * L_33 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
			MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)_stringLiteral1426936825, (ObjectU5BU5D_t2843939325*)L_30, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
			((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__instance_0(((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		}

IL_0110:
		{
			MLResult_t265502022  L_34 = V_0;
			V_3 = (MLResult_t265502022 )L_34;
			goto IL_01f2;
		}

IL_0117:
		{
			; // IL_0117: leave IL_01f0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_011c;
		if(il2cpp_codegen_class_is_assignable_from (EntryPointNotFoundException_t1356862416_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0191;
		throw e;
	}

CATCH_011c:
	{ // begin catch(System.DllNotFoundException)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_35 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get__instance_0();
		NullCheck(L_35);
		String_t* L_36 = (String_t*)((MLAPISingleton_1_t2872887908 *)L_35)->get_DllNotFoundError_2();
		ObjectU5BU5D_t2843939325* L_37 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_38 = (ObjectU5BU5D_t2843939325*)L_37;
		RuntimeTypeHandle_t3027515415  L_39 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_39, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)L_36, (ObjectU5BU5D_t2843939325*)L_38, /*hidden argument*/NULL);
		MLResult__ctor_m899246048((MLResult_t265502022 *)(MLResult_t265502022 *)(&V_0), (int32_t)4, (String_t*)_stringLiteral41356492, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_42 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_43 = (ObjectU5BU5D_t2843939325*)L_42;
		RuntimeTypeHandle_t3027515415  L_44 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		Type_t * L_45 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_44, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_46);
		ObjectU5BU5D_t2843939325* L_47 = (ObjectU5BU5D_t2843939325*)L_43;
		MLResult_t265502022  L_48 = V_0;
		MLResult_t265502022  L_49 = L_48;
		RuntimeObject * L_50 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_50);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)_stringLiteral1426936825, (ObjectU5BU5D_t2843939325*)L_47, /*hidden argument*/NULL);
		((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__instance_0(((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		goto IL_01f0;
	} // end catch (depth: 1)

CATCH_0191:
	{ // begin catch(System.EntryPointNotFoundException)
		RuntimeTypeHandle_t3027515415  L_51 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_52 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_51, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_52);
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_52);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Format_m2844511972(NULL /*static, unused*/, (String_t*)_stringLiteral3870954459, (RuntimeObject *)L_53, /*hidden argument*/NULL);
		V_1 = (String_t*)L_54;
		String_t* L_55 = V_1;
		MLResult__ctor_m899246048((MLResult_t265502022 *)(MLResult_t265502022 *)(&V_0), (int32_t)4, (String_t*)L_55, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_56 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_57 = (ObjectU5BU5D_t2843939325*)L_56;
		RuntimeTypeHandle_t3027515415  L_58 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		Type_t * L_59 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_58, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		ObjectU5BU5D_t2843939325* L_61 = (ObjectU5BU5D_t2843939325*)L_57;
		MLResult_t265502022  L_62 = V_0;
		MLResult_t265502022  L_63 = L_62;
		RuntimeObject * L_64 = Box(MLResult_t265502022_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)_stringLiteral1426936825, (ObjectU5BU5D_t2843939325*)L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set__instance_0(((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))));
		goto IL_01f0;
	} // end catch (depth: 1)

IL_01f0:
	{
		MLResult_t265502022  L_65 = V_0;
		return L_65;
	}

IL_01f2:
	{
		MLResult_t265502022  L_66 = V_3;
		return L_66;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::Stop()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1_Stop_m4119119501_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_Stop_m4119119501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_Stop_m4119119501_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_0 = ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_1;
		NullCheck((MLAPISingleton_1_t2872887908 *)(V_0));
		((  void (*) (MLAPISingleton_1_t2872887908 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((MLAPISingleton_1_t2872887908 *)(V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1_Finalize_m75731386_gshared (MLAPISingleton_1_t2872887908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_Finalize_m75731386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_Finalize_m75731386_RuntimeMethod_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			uint32_t L_0 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__startCount_1();
			if ((!(((uint32_t)L_0) > ((uint32_t)0))))
			{
				goto IL_0040;
			}
		}

IL_000b:
		{
			ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)L_1;
			RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
			NullCheck((MemberInfo_t *)L_4);
			String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_4);
			NullCheck(L_2);
			ArrayElementTypeCheck (L_2, L_5);
			(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
			ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)L_2;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			uint32_t L_7 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__startCount_1();
			uint32_t L_8 = L_7;
			RuntimeObject * L_9 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_8);
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_9);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
			MLPluginLog_ErrorFormat_m663780805(NULL /*static, unused*/, (String_t*)_stringLiteral550298114, (ObjectU5BU5D_t2843939325*)L_6, /*hidden argument*/NULL);
			((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->set__startCount_1(0);
		}

IL_0040:
		{
			NullCheck((MLAPISingleton_1_t2872887908 *)__this);
			VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::CleanupAPI(System.Boolean) */, (MLAPISingleton_1_t2872887908 *)__this, (bool)0);
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_m3076187857((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::StopAPI()
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1_StopAPI_m3120813299_gshared (MLAPISingleton_1_t2872887908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_StopAPI_m3120813299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_StopAPI_m3120813299_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		uint32_t L_0 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__startCount_1();
		if ((!(((uint32_t)L_0) > ((uint32_t)0))))
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		uint32_t L_1 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__startCount_1();
		((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->set__startCount_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = ((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get__startCount_1();
		if (L_2)
		{
			goto IL_005d;
		}
	}
	{
		intptr_t L_3 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		Action_2_t3125992077 * L_4 = (Action_2_t3125992077 *)il2cpp_codegen_object_new(Action_2_t3125992077_il2cpp_TypeInfo_var);
		Action_2__ctor_m1736396111(L_4, (RuntimeObject *)__this, (intptr_t)L_3, /*hidden argument*/Action_2__ctor_m1736396111_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MagicLeapDevice_t3936074942_il2cpp_TypeInfo_var);
		MagicLeapDevice_Unregister_m844408261(NULL /*static, unused*/, (Action_2_t3125992077 *)L_4, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 7);
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m1363151734(L_6, (RuntimeObject *)__this, (intptr_t)L_5, /*hidden argument*/Action_1__ctor_m1363151734_RuntimeMethod_var);
		MagicLeapDevice_UnregisterOnApplicationPause_m4279706140(NULL /*static, unused*/, (Action_1_t269755560 *)L_6, /*hidden argument*/NULL);
		NullCheck((MLAPISingleton_1_t2872887908 *)__this);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::CleanupAPI(System.Boolean) */, (MLAPISingleton_1_t2872887908 *)__this, (bool)1);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, (RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((MLAPISingleton_1_t2872887908_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->set__instance_0(((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
	}

IL_005d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.MagicLeap.MLAPISingleton`1<System.Object>::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MLAPISingleton_1_OnApplicationPause_m3162866582_gshared (MLAPISingleton_1_t2872887908 * __this, bool ___pauseStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MLAPISingleton_1_OnApplicationPause_m3162866582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(MLAPISingleton_1_OnApplicationPause_m3162866582_RuntimeMethod_var);
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
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.StreamReader::ReadToEnd() */, (StreamReader_t4009935899 *)L_12);
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

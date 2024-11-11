#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D;
// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Type>
struct KeyCollection_t73BC9B9DA2D892ACA669DAC57B83B91371D96F31;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Type>
struct ValueCollection_t5382485BD0FD2BC8845EA671D1D2B752FCF9111E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Type>[]
struct EntryU5BU5D_t8EBF8323DABB362AB13C228019ACB853403B720B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Unity.Burst.CompilerServices.AssumeRangeAttribute
struct AssumeRangeAttribute_t06ACC8EEDB5AB2CE78FDE39A4F36B674A1CE06CA;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D;
// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4;
// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16;
// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1;
// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133;
// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B;
// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013FC6682F27B79F88F9FD6E6D77A97E36BC828C;
IL2CPP_EXTERN_C String_t* _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742;
IL2CPP_EXTERN_C String_t* _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8;
IL2CPP_EXTERN_C String_t* _stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64;
IL2CPP_EXTERN_C String_t* _stringLiteral17490A99BE5820911E7C397A415006E24720C376;
IL2CPP_EXTERN_C String_t* _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492;
IL2CPP_EXTERN_C String_t* _stringLiteral419870EEDCB789FA7F30F9A090D5126C86B866CD;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3;
IL2CPP_EXTERN_C String_t* _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16;
IL2CPP_EXTERN_C String_t* _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16;
IL2CPP_EXTERN_C String_t* _stringLiteral71E0656B4D7E6F065BE6785258C0E7EAAC0EA6FF;
IL2CPP_EXTERN_C String_t* _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB;
IL2CPP_EXTERN_C String_t* _stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230;
IL2CPP_EXTERN_C String_t* _stringLiteralF64621FA894BC5FE3BE4B3D3E62813C72B063F9F;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB1A4D66944DB51DB308B7149DEB327DED7C76DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompileU3Eb__17_0_m7DA44444B7871E3C1F776CE00708ED24B3F5CE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A78175E99B61C7B4022EA3D1E12E92F7F669089 
{
};

// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8EBF8323DABB362AB13C228019ACB853403B720B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t73BC9B9DA2D892ACA669DAC57B83B91371D96F31* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5382485BD0FD2BC8845EA671D1D2B752FCF9111E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8  : public RuntimeObject
{
};

// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9  : public RuntimeObject
{
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstCompilation
	bool ____enableBurstCompilation_3;
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstSafetyChecks
	bool ____enableBurstSafetyChecks_4;
	// System.Boolean Unity.Burst.BurstCompilerOptions::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_5;
	// System.Action Unity.Burst.BurstCompilerOptions::<OptionsChanged>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COptionsChangedU3Ek__BackingField_6;
};

// Unity.Burst.BurstRuntime
struct BurstRuntime_tA87CEB6EE77F6DA708C87C3DAEC7862E3A1B0EA1  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.Common
struct Common_tDDECDFAF526C9D6370A18984BB308C8B8EDD8EF6  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Burst.SharedStatic
struct SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Unity.Burst.Intrinsics.V128DebugView
struct V128DebugView_t71EB17D4E37ED706FEC776C678D8EF3BD122CF85  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.V256DebugView
struct V256DebugView_t266AC2DF58B87283FB62FFFC568DD44563899BC0  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.V64DebugView
struct V64DebugView_t0B1182DE831E8DCC53C85904B1F3D75DC1D7F82F  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Burst.Intrinsics.X86
struct X86_tD56146C8451281BCAFDC46416641110725542EE2  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD  : public RuntimeObject
{
};

// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16  : public RuntimeObject
{
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_0;
};

// Unity.Burst.Intrinsics.X86/Avx
struct Avx_tFFE11A239B4BBA7B845E15FF54F2A28C67A704CD  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse
struct Sse_t1388C7824E01DCC99D081049BA94FD2712BF858B  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse2
struct Sse2_t7D2C1FEA4C8F078FDAE4AFF2DC6276B49F2466CF  : public RuntimeObject
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// Unity.Burst.CompilerServices.AssumeRangeAttribute
struct AssumeRangeAttribute_t06ACC8EEDB5AB2CE78FDE39A4F36B674A1CE06CA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Hash128
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	// System.UInt64 UnityEngine.Hash128::u64_0
	uint64_t ___u64_0_0;
	// System.UInt64 UnityEngine.Hash128::u64_1
	uint64_t ___u64_1_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::reinitType
	Type_t* ___reinitType_0;
};

// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::<FloatMode>k__BackingField
	int32_t ___U3CFloatModeU3Ek__BackingField_0;
	// Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::<FloatPrecision>k__BackingField
	int32_t ___U3CFloatPrecisionU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Unity.Burst.BurstCompileAttribute::_compileSynchronously
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____compileSynchronously_2;
	// System.String[] Unity.Burst.BurstCompileAttribute::<Options>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COptionsU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Unity.Burst.Intrinsics.v256
struct v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v256::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte16_16_OffsetPadding[16];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte16
			uint8_t ___Byte16_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte16_16_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___Byte16_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte17_17_OffsetPadding[17];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte17
			uint8_t ___Byte17_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte17_17_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___Byte17_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte18_18_OffsetPadding[18];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte18
			uint8_t ___Byte18_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte18_18_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___Byte18_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte19_19_OffsetPadding[19];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte19
			uint8_t ___Byte19_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte19_19_OffsetPadding_forAlignmentOnly[19];
			uint8_t ___Byte19_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte20_20_OffsetPadding[20];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte20
			uint8_t ___Byte20_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte20_20_OffsetPadding_forAlignmentOnly[20];
			uint8_t ___Byte20_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte21_21_OffsetPadding[21];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte21
			uint8_t ___Byte21_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte21_21_OffsetPadding_forAlignmentOnly[21];
			uint8_t ___Byte21_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte22_22_OffsetPadding[22];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte22
			uint8_t ___Byte22_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte22_22_OffsetPadding_forAlignmentOnly[22];
			uint8_t ___Byte22_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte23_23_OffsetPadding[23];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte23
			uint8_t ___Byte23_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte23_23_OffsetPadding_forAlignmentOnly[23];
			uint8_t ___Byte23_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte24_24_OffsetPadding[24];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte24
			uint8_t ___Byte24_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte24_24_OffsetPadding_forAlignmentOnly[24];
			uint8_t ___Byte24_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte25_25_OffsetPadding[25];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte25
			uint8_t ___Byte25_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte25_25_OffsetPadding_forAlignmentOnly[25];
			uint8_t ___Byte25_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte26_26_OffsetPadding[26];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte26
			uint8_t ___Byte26_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte26_26_OffsetPadding_forAlignmentOnly[26];
			uint8_t ___Byte26_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte27_27_OffsetPadding[27];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte27
			uint8_t ___Byte27_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte27_27_OffsetPadding_forAlignmentOnly[27];
			uint8_t ___Byte27_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte28_28_OffsetPadding[28];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte28
			uint8_t ___Byte28_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte28_28_OffsetPadding_forAlignmentOnly[28];
			uint8_t ___Byte28_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte29_29_OffsetPadding[29];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte29
			uint8_t ___Byte29_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte29_29_OffsetPadding_forAlignmentOnly[29];
			uint8_t ___Byte29_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte30_30_OffsetPadding[30];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte30
			uint8_t ___Byte30_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte30_30_OffsetPadding_forAlignmentOnly[30];
			uint8_t ___Byte30_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte31_31_OffsetPadding[31];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte31
			uint8_t ___Byte31_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte31_31_OffsetPadding_forAlignmentOnly[31];
			uint8_t ___Byte31_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v256::SByte0
			int8_t ___SByte0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_33_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte1
			int8_t ___SByte1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_33_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_34_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte2
			int8_t ___SByte2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_34_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_35_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte3
			int8_t ___SByte3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_35_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_36_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte4
			int8_t ___SByte4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_36_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_37_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte5
			int8_t ___SByte5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_37_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_38_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte6
			int8_t ___SByte6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_38_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_39_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte7
			int8_t ___SByte7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_39_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_40_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte8
			int8_t ___SByte8_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_40_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_41_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte9
			int8_t ___SByte9_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_41_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_42_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte10
			int8_t ___SByte10_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_42_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_43_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte11
			int8_t ___SByte11_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_43_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_44_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte12
			int8_t ___SByte12_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_44_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_45_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte13
			int8_t ___SByte13_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_45_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_46_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte14
			int8_t ___SByte14_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_46_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_47_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte15
			int8_t ___SByte15_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_47_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte16_48_OffsetPadding[16];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte16
			int8_t ___SByte16_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte16_48_OffsetPadding_forAlignmentOnly[16];
			int8_t ___SByte16_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte17_49_OffsetPadding[17];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte17
			int8_t ___SByte17_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte17_49_OffsetPadding_forAlignmentOnly[17];
			int8_t ___SByte17_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte18_50_OffsetPadding[18];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte18
			int8_t ___SByte18_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte18_50_OffsetPadding_forAlignmentOnly[18];
			int8_t ___SByte18_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte19_51_OffsetPadding[19];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte19
			int8_t ___SByte19_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte19_51_OffsetPadding_forAlignmentOnly[19];
			int8_t ___SByte19_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte20_52_OffsetPadding[20];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte20
			int8_t ___SByte20_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte20_52_OffsetPadding_forAlignmentOnly[20];
			int8_t ___SByte20_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte21_53_OffsetPadding[21];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte21
			int8_t ___SByte21_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte21_53_OffsetPadding_forAlignmentOnly[21];
			int8_t ___SByte21_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte22_54_OffsetPadding[22];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte22
			int8_t ___SByte22_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte22_54_OffsetPadding_forAlignmentOnly[22];
			int8_t ___SByte22_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte23_55_OffsetPadding[23];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte23
			int8_t ___SByte23_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte23_55_OffsetPadding_forAlignmentOnly[23];
			int8_t ___SByte23_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte24_56_OffsetPadding[24];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte24
			int8_t ___SByte24_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte24_56_OffsetPadding_forAlignmentOnly[24];
			int8_t ___SByte24_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte25_57_OffsetPadding[25];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte25
			int8_t ___SByte25_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte25_57_OffsetPadding_forAlignmentOnly[25];
			int8_t ___SByte25_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte26_58_OffsetPadding[26];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte26
			int8_t ___SByte26_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte26_58_OffsetPadding_forAlignmentOnly[26];
			int8_t ___SByte26_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte27_59_OffsetPadding[27];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte27
			int8_t ___SByte27_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte27_59_OffsetPadding_forAlignmentOnly[27];
			int8_t ___SByte27_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte28_60_OffsetPadding[28];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte28
			int8_t ___SByte28_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte28_60_OffsetPadding_forAlignmentOnly[28];
			int8_t ___SByte28_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte29_61_OffsetPadding[29];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte29
			int8_t ___SByte29_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte29_61_OffsetPadding_forAlignmentOnly[29];
			int8_t ___SByte29_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte30_62_OffsetPadding[30];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte30
			int8_t ___SByte30_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte30_62_OffsetPadding_forAlignmentOnly[30];
			int8_t ___SByte30_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte31_63_OffsetPadding[31];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte31
			int8_t ___SByte31_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte31_63_OffsetPadding_forAlignmentOnly[31];
			int8_t ___SByte31_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort0
			uint16_t ___UShort0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_65_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort1
			uint16_t ___UShort1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_65_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_66_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort2
			uint16_t ___UShort2_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_66_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_67_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort3
			uint16_t ___UShort3_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_67_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_67_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_68_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort4
			uint16_t ___UShort4_68;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_68_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_68_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_69_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort5
			uint16_t ___UShort5_69;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_69_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_69_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_70_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort6
			uint16_t ___UShort6_70;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_70_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_70_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_71_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort7
			uint16_t ___UShort7_71;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_71_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_71_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort8_72_OffsetPadding[16];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort8
			uint16_t ___UShort8_72;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort8_72_OffsetPadding_forAlignmentOnly[16];
			uint16_t ___UShort8_72_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort9_73_OffsetPadding[18];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort9
			uint16_t ___UShort9_73;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort9_73_OffsetPadding_forAlignmentOnly[18];
			uint16_t ___UShort9_73_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort10_74_OffsetPadding[20];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort10
			uint16_t ___UShort10_74;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort10_74_OffsetPadding_forAlignmentOnly[20];
			uint16_t ___UShort10_74_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort11_75_OffsetPadding[22];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort11
			uint16_t ___UShort11_75;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort11_75_OffsetPadding_forAlignmentOnly[22];
			uint16_t ___UShort11_75_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort12_76_OffsetPadding[24];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort12
			uint16_t ___UShort12_76;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort12_76_OffsetPadding_forAlignmentOnly[24];
			uint16_t ___UShort12_76_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort13_77_OffsetPadding[26];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort13
			uint16_t ___UShort13_77;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort13_77_OffsetPadding_forAlignmentOnly[26];
			uint16_t ___UShort13_77_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort14_78_OffsetPadding[28];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort14
			uint16_t ___UShort14_78;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort14_78_OffsetPadding_forAlignmentOnly[28];
			uint16_t ___UShort14_78_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort15_79_OffsetPadding[30];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort15
			uint16_t ___UShort15_79;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort15_79_OffsetPadding_forAlignmentOnly[30];
			uint16_t ___UShort15_79_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort0
			int16_t ___SShort0_80;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_80_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_81_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort1
			int16_t ___SShort1_81;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_81_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_81_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_82_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort2
			int16_t ___SShort2_82;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_82_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_82_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_83_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort3
			int16_t ___SShort3_83;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_83_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_83_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_84_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort4
			int16_t ___SShort4_84;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_84_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_84_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_85_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort5
			int16_t ___SShort5_85;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_85_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_85_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_86_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort6
			int16_t ___SShort6_86;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_86_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_86_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_87_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort7
			int16_t ___SShort7_87;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_87_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_87_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort8_88_OffsetPadding[16];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort8
			int16_t ___SShort8_88;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort8_88_OffsetPadding_forAlignmentOnly[16];
			int16_t ___SShort8_88_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort9_89_OffsetPadding[18];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort9
			int16_t ___SShort9_89;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort9_89_OffsetPadding_forAlignmentOnly[18];
			int16_t ___SShort9_89_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort10_90_OffsetPadding[20];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort10
			int16_t ___SShort10_90;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort10_90_OffsetPadding_forAlignmentOnly[20];
			int16_t ___SShort10_90_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort11_91_OffsetPadding[22];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort11
			int16_t ___SShort11_91;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort11_91_OffsetPadding_forAlignmentOnly[22];
			int16_t ___SShort11_91_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort12_92_OffsetPadding[24];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort12
			int16_t ___SShort12_92;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort12_92_OffsetPadding_forAlignmentOnly[24];
			int16_t ___SShort12_92_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort13_93_OffsetPadding[26];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort13
			int16_t ___SShort13_93;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort13_93_OffsetPadding_forAlignmentOnly[26];
			int16_t ___SShort13_93_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort14_94_OffsetPadding[28];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort14
			int16_t ___SShort14_94;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort14_94_OffsetPadding_forAlignmentOnly[28];
			int16_t ___SShort14_94_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort15_95_OffsetPadding[30];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort15
			int16_t ___SShort15_95;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort15_95_OffsetPadding_forAlignmentOnly[30];
			int16_t ___SShort15_95_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt0
			uint32_t ___UInt0_96;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_96_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_97_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt1
			uint32_t ___UInt1_97;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_97_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_97_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_98_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt2
			uint32_t ___UInt2_98;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_98_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_98_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_99_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt3
			uint32_t ___UInt3_99;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_99_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_99_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt4_100_OffsetPadding[16];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt4
			uint32_t ___UInt4_100;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt4_100_OffsetPadding_forAlignmentOnly[16];
			uint32_t ___UInt4_100_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt5_101_OffsetPadding[20];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt5
			uint32_t ___UInt5_101;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt5_101_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___UInt5_101_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt6_102_OffsetPadding[24];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt6
			uint32_t ___UInt6_102;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt6_102_OffsetPadding_forAlignmentOnly[24];
			uint32_t ___UInt6_102_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt7_103_OffsetPadding[28];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt7
			uint32_t ___UInt7_103;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt7_103_OffsetPadding_forAlignmentOnly[28];
			uint32_t ___UInt7_103_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt0
			int32_t ___SInt0_104;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_104_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_105_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt1
			int32_t ___SInt1_105;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_105_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_105_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_106_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt2
			int32_t ___SInt2_106;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_106_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_106_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_107_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt3
			int32_t ___SInt3_107;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_107_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_107_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt4_108_OffsetPadding[16];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt4
			int32_t ___SInt4_108;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt4_108_OffsetPadding_forAlignmentOnly[16];
			int32_t ___SInt4_108_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt5_109_OffsetPadding[20];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt5
			int32_t ___SInt5_109;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt5_109_OffsetPadding_forAlignmentOnly[20];
			int32_t ___SInt5_109_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt6_110_OffsetPadding[24];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt6
			int32_t ___SInt6_110;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt6_110_OffsetPadding_forAlignmentOnly[24];
			int32_t ___SInt6_110_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt7_111_OffsetPadding[28];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt7
			int32_t ___SInt7_111;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt7_111_OffsetPadding_forAlignmentOnly[28];
			int32_t ___SInt7_111_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong0
			uint64_t ___ULong0_112;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_112_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_113_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong1
			uint64_t ___ULong1_113;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_113_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_113_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong2_114_OffsetPadding[16];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong2
			uint64_t ___ULong2_114;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong2_114_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___ULong2_114_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong3_115_OffsetPadding[24];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong3
			uint64_t ___ULong3_115;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong3_115_OffsetPadding_forAlignmentOnly[24];
			uint64_t ___ULong3_115_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong0
			int64_t ___SLong0_116;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_116_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_117_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong1
			int64_t ___SLong1_117;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_117_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_117_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong2_118_OffsetPadding[16];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong2
			int64_t ___SLong2_118;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong2_118_OffsetPadding_forAlignmentOnly[16];
			int64_t ___SLong2_118_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong3_119_OffsetPadding[24];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong3
			int64_t ___SLong3_119;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong3_119_OffsetPadding_forAlignmentOnly[24];
			int64_t ___SLong3_119_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v256::Float0
			float ___Float0_120;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_120_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_121_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v256::Float1
			float ___Float1_121;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_121_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_121_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_122_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v256::Float2
			float ___Float2_122;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_122_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_122_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_123_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v256::Float3
			float ___Float3_123;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_123_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_123_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float4_124_OffsetPadding[16];
			// System.Single Unity.Burst.Intrinsics.v256::Float4
			float ___Float4_124;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float4_124_OffsetPadding_forAlignmentOnly[16];
			float ___Float4_124_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float5_125_OffsetPadding[20];
			// System.Single Unity.Burst.Intrinsics.v256::Float5
			float ___Float5_125;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float5_125_OffsetPadding_forAlignmentOnly[20];
			float ___Float5_125_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float6_126_OffsetPadding[24];
			// System.Single Unity.Burst.Intrinsics.v256::Float6
			float ___Float6_126;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float6_126_OffsetPadding_forAlignmentOnly[24];
			float ___Float6_126_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float7_127_OffsetPadding[28];
			// System.Single Unity.Burst.Intrinsics.v256::Float7
			float ___Float7_127;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float7_127_OffsetPadding_forAlignmentOnly[28];
			float ___Float7_127_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v256::Double0
			double ___Double0_128;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_128_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_129_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v256::Double1
			double ___Double1_129;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_129_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_129_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double2_130_OffsetPadding[16];
			// System.Double Unity.Burst.Intrinsics.v256::Double2
			double ___Double2_130;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double2_130_OffsetPadding_forAlignmentOnly[16];
			double ___Double2_130_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double3_131_OffsetPadding[24];
			// System.Double Unity.Burst.Intrinsics.v256::Double3
			double ___Double3_131;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double3_131_OffsetPadding_forAlignmentOnly[24];
			double ___Double3_131_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Lo128
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Lo128_132;
		};
		#pragma pack(pop, tp)
		struct
		{
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Lo128_132_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi128_133_OffsetPadding[16];
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Hi128
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Hi128_133;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi128_133_OffsetPadding_forAlignmentOnly[16];
			v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___Hi128_133_forAlignmentOnly;
		};
	};
};

// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>

// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Attribute

// System.Attribute

// Unity.Burst.BurstCompiler
struct BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields
{
	// System.Boolean Unity.Burst.BurstCompiler::_IsEnabled
	bool ____IsEnabled_0;
	// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::Options
	BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* ___Options_1;
	// System.Action Unity.Burst.BurstCompiler::OnCompileILPPMethod
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCompileILPPMethod_2;
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler::DummyMethodInfo
	MethodInfo_t* ___DummyMethodInfo_3;
};

// Unity.Burst.BurstCompiler

// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields
{
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceDisableBurstCompilation
	bool ___ForceDisableBurstCompilation_0;
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceBurstCompilationSynchronously
	bool ___ForceBurstCompilationSynchronously_1;
	// System.Boolean Unity.Burst.BurstCompilerOptions::IsSecondaryUnityProcess
	bool ___IsSecondaryUnityProcess_2;
};

// Unity.Burst.BurstCompilerOptions

// Unity.Burst.BurstRuntime

// Unity.Burst.BurstRuntime

// Unity.Burst.Intrinsics.Common

// Unity.Burst.Intrinsics.Common

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Unity.Burst.SharedStatic
struct SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int64,System.Type> Unity.Burst.SharedStatic::HashToType
	Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D* ___HashToType_0;
};

// Unity.Burst.SharedStatic

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.Burst.Intrinsics.V128DebugView

// Unity.Burst.Intrinsics.V128DebugView

// Unity.Burst.Intrinsics.V256DebugView

// Unity.Burst.Intrinsics.V256DebugView

// Unity.Burst.Intrinsics.V64DebugView

// Unity.Burst.Intrinsics.V64DebugView

// Unity.Burst.Intrinsics.X86

// Unity.Burst.Intrinsics.X86

// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields
{
	// Unity.Burst.BurstCompiler/<>c Unity.Burst.BurstCompiler/<>c::<>9
	U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* ___U3CU3E9_0;
	// System.Func`2<System.Attribute,System.Boolean> Unity.Burst.BurstCompiler/<>c::<>9__17_0
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* ___U3CU3E9__17_0_1;
};

// Unity.Burst.BurstCompiler/<>c

// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields
{
	// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabledImpl
	IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* ___IsBurstEnabledImpl_0;
	// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstGenerated
	bool ___IsBurstGenerated_1;
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper

// Unity.Burst.BurstCompiler/FakeDelegate

// Unity.Burst.BurstCompiler/FakeDelegate

// Unity.Burst.Intrinsics.X86/Avx

// Unity.Burst.Intrinsics.X86/Avx

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Sse

// Unity.Burst.Intrinsics.X86/Sse

// Unity.Burst.Intrinsics.X86/Sse2

// Unity.Burst.Intrinsics.X86/Sse2

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// Unity.Burst.CompilerServices.AssumeRangeAttribute

// Unity.Burst.CompilerServices.AssumeRangeAttribute

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// UnityEngine.Hash128

// UnityEngine.Hash128

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// Unity.Burst.Intrinsics.v64

// Unity.Burst.Intrinsics.v64

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute

// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute

// Unity.Burst.BurstRuntime/PreserveAttribute

// Unity.Burst.BurstRuntime/PreserveAttribute

// Unity.Burst.SharedStatic/PreserveAttribute

// Unity.Burst.SharedStatic/PreserveAttribute

// Unity.Burst.BurstCompileAttribute

// Unity.Burst.BurstCompileAttribute

// System.Delegate

// System.Delegate

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.RuntimeMethodHandle

// System.RuntimeMethodHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Burst.Intrinsics.v128

// Unity.Burst.Intrinsics.v128

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Unity.Burst.Intrinsics.v256

// Unity.Burst.Intrinsics.v256

// System.Func`2<System.Attribute,System.Boolean>

// System.Func`2<System.Attribute,System.Boolean>

// System.Action

// System.Action

// System.InvalidOperationException

// System.InvalidOperationException

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate

// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___0_value, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9 (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___0_handle, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___0_type, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, MethodInfo_t* ___0_method, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3 (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, bool ___2_isFunctionPointer, RuntimeObject* ___3_managedFallbackDelegateObj, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785 (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Attribute,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9F3766EBEDA390AF720F7E3FC0B134B818B373C6 (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Attribute>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44 (RuntimeObject* ___0_source, Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared)(___0_source, ___1_predicate, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826 (MemberInfo_t* ___0_member, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80 (RuntimeObject* ___0_delegateMethod, String_t* ___1_compilerOptions, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9 (int32_t ___0_userID, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2 (Delegate_t* ___0_d, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_isGlobal, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131 (const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B (bool* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD (Delegate_t* ___0_del, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9 (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_m7667FD7B8FDBEB8F037F682525B43238504D15A6 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::set_JobCompilerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobsUtility_set_JobCompilerEnabled_m14CB399441AB02D65BE11D74E9CC3E313420D72B (bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685 (MemberInfo_t* ___0_left, MemberInfo_t* ___1_right, const RuntimeMethod* method) ;
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) ;
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BurstCompileAttribute_get_Options_mDE5DC6437C7EA21CD635F1C1C92E3BB3F3113B09_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___0_source, String_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Burst.BurstCompileAttribute>(System.Reflection.MemberInfo)
inline BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) ;
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, bool ___0_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m070F2A783AF072DC0502DDF8B8BA5AC09CAF756B (MemberInfo_t* ___0_member, BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** ___1_attribute, bool ___2_isForEagerCompilation, const RuntimeMethod* method) ;
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) ;
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67 (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m4224BFA55310174B3BD9E0A2F15F3CF85757C253 (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) ;
// System.Void UnityEngine.Hash128::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128__ctor_m0B61E717B3FF7D7BBD8FF12C8C8327C18A2AAAF3 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, uint64_t ___0_u64_0, uint64_t ___1_u64_1, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(UnityEngine.Hash128&,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_m1293EB3119CBEE41DBCC0E3B2235601BD927BFE6 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* ___0_key, uint32_t ___1_size_of, uint32_t ___2_alignment, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Type>::.ctor()
inline void Dictionary_2__ctor_mB1A4D66944DB51DB308B7149DEB327DED7C76DE0 (Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D*, const RuntimeMethod*))Dictionary_2__ctor_m6E4700E09E9816E4C0C88C90C5BB8FAF312B8481_gshared)(__this, method);
}
// System.Void Unity.Burst.Intrinsics.v256::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m267402531F6CFFB7F6B60508FF475D5DF65B20EE (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* __this, int32_t ___0_v, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.v256::.ctor(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* __this, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_lo, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_hi, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_load_ps(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_load_ps_mDEC29DE0AC8C7A62975D63B512D5FD825D83E749 (void* ___0_ptr, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_store_ps(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_store_ps_mAA874350740C462A1059A066894E57E93D7B6697 (void* ___0_ptr, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_val, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::xor_si128(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_xor_si128_m54213FFE7B2D891507E00B3395DB3AC25820A8A9 (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::add_epi64(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_add_epi64_m7F48D1953DDBDBF38CA494BABE0A3390BA6C86BF (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::mul_epu32(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_mul_epu32_mCD9FF71C6DA28E454D1EBE3249DC4F9E99DC11DB (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::slli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_slli_epi64_mB984CF9AA56B47FDD860A6C0D9DCC5CFEC420B4D (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::srli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_srli_epi64_m2B154276738045C80B2C8857CFDB232487262CFD (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::shuffle_epi32(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_shuffle_epi32_m1EA2B8A82D93417EA3B3789381D8117DC635F35F (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1987D9EDD695EB253C5DAAE3909C9FCD69E7681C (EmbeddedAttribute_tB15AE7271F787DA6A515EA05BEC5B218E147E15A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mD2F5692D77429D270289E727F57B341383B57A27 (IsReadOnlyAttribute_t21EB37F7C74C04A9F8DE2EB74773A0D5524A1A0F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => _compileSynchronously = value;
		bool L_0 = ___0_value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____compileSynchronously_2 = L_1;
		return;
	}
}
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BurstCompileAttribute_get_Options_mDE5DC6437C7EA21CD635F1C1C92E3BB3F3113B09 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mFCB7FEAFCE1A2CE6A5268A4EA062E33E5472ABBE (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, const RuntimeMethod* method) 
{
	{
		// public BurstCompileAttribute()
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6 (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) 
{
	{
		// public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// FloatMode = floatMode;
		int32_t L_0 = ___1_floatMode;
		BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline(__this, L_0, NULL);
		// FloatPrecision = floatPrecision;
		int32_t L_1 = ___0_floatPrecision;
		BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline(__this, L_1, NULL);
		// }
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
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsEnabled => _IsEnabled && BurstCompilerHelper.IsBurstGenerated;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->____IsEnabled_0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1;
		return L_1;
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod(System.RuntimeMethodHandle,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___0_burstMethodHandle, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___1_managedMethodHandle, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___2_delegateTypeHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	Delegate_t* V_2 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	{
		// if (burstMethodHandle.Value == IntPtr.Zero)
		intptr_t L_0;
		L_0 = RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline((&___0_burstMethodHandle), NULL);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(burstMethodHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013FC6682F27B79F88F9FD6E6D77A97E36BC828C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F_RuntimeMethod_var)));
	}

IL_001e:
	{
		// if (managedMethodHandle.Value == IntPtr.Zero)
		intptr_t L_4;
		L_4 = RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline((&___1_managedMethodHandle), NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(managedMethodHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71E0656B4D7E6F065BE6785258C0E7EAAC0EA6FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if (delegateTypeHandle.Value == IntPtr.Zero)
		intptr_t L_8;
		L_8 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&___2_delegateTypeHandle), NULL);
		intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_10;
		L_10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(delegateTypeHandle));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF64621FA894BC5FE3BE4B3D3E62813C72B063F9F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F_RuntimeMethod_var)));
	}

IL_005a:
	{
		// OnCompileILPPMethod?.Invoke();
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___OnCompileILPPMethod_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = L_12;
		G_B7_0 = L_13;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_0065;
		}
	}
	{
		goto IL_006a;
	}

IL_0065:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B8_0, NULL);
	}

IL_006a:
	{
		// var burstMethod = (MethodInfo)MethodBase.GetMethodFromHandle(burstMethodHandle);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_14 = ___0_burstMethodHandle;
		MethodBase_t* L_15;
		L_15 = MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9(L_14, NULL);
		V_0 = ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_15, MethodInfo_t_il2cpp_TypeInfo_var));
		// var managedMethod = (MethodInfo)MethodBase.GetMethodFromHandle(managedMethodHandle);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_16 = ___1_managedMethodHandle;
		MethodBase_t* L_17;
		L_17 = MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9(L_16, NULL);
		V_1 = ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_17, MethodInfo_t_il2cpp_TypeInfo_var));
		// var delegateType = Type.GetTypeFromHandle(delegateTypeHandle);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = ___2_delegateTypeHandle;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		// var managedFallbackDelegate = Delegate.CreateDelegate(delegateType, managedMethod);
		MethodInfo_t* L_20 = V_1;
		Delegate_t* L_21;
		L_21 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_19, L_20, NULL);
		V_2 = L_21;
		// return (IntPtr)Compile(new FakeDelegate(burstMethod), burstMethod, isFunctionPointer: true, managedFallbackDelegateObj: managedFallbackDelegate);
		MethodInfo_t* L_22 = V_0;
		FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* L_23 = (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16*)il2cpp_codegen_object_new(FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B(L_23, L_22, NULL);
		MethodInfo_t* L_24 = V_0;
		Delegate_t* L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_26;
		L_26 = BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3(L_23, L_24, (bool)1, L_25, NULL);
		intptr_t L_27;
		L_27 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_26, NULL);
		return L_27;
	}
}
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F (intptr_t ___0_ilppMethod, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ilppMethod == IntPtr.Zero)
		intptr_t L_0 = ___0_ilppMethod;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentNullException(nameof(ilppMethod));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral419870EEDCB789FA7F30F9A090D5126C86B866CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return ilppMethod.ToPointer();
		void* L_4;
		L_4 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_ilppMethod), NULL);
		return L_4;
	}
}
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3 (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, bool ___2_isFunctionPointer, RuntimeObject* ___3_managedFallbackDelegateObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompileU3Eb__17_0_m7DA44444B7871E3C1F776CE00708ED24B3F5CE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	bool V_1 = false;
	Delegate_t* V_2 = NULL;
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		RuntimeObject* L_0 = ___0_delegateObj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (delegateObj.GetType().IsGenericType)
		RuntimeObject* L_2 = ___0_delegateObj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_3);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw new InvalidOperationException($"The delegate type `{delegateObj.GetType()}` must be a non-generic type");
		RuntimeObject* L_5 = ___0_delegateObj;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230)), L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (!methodInfo.IsStatic)
		MethodInfo_t* L_9 = ___1_methodInfo;
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_9, NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be static. Instance methods are not supported");
		MethodInfo_t* L_11 = ___1_methodInfo;
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B)), L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_004a:
	{
		// if (methodInfo.IsGenericMethod)
		MethodInfo_t* L_14 = ___1_methodInfo;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_14);
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be a non-generic method");
		MethodInfo_t* L_16 = ___1_methodInfo;
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_0063:
	{
		// var isILPostProcessing = managedFallbackDelegateObj != null;
		RuntimeObject* L_19 = ___3_managedFallbackDelegateObj;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// if (!isILPostProcessing)
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_006e;
		}
	}
	{
		// managedFallbackDelegateObj = delegateObj;
		RuntimeObject* L_21 = ___0_delegateObj;
		___3_managedFallbackDelegateObj = L_21;
	}

IL_006e:
	{
		// if (isFunctionPointer && !isILPostProcessing &&
		//     methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		bool L_22 = ___2_isFunctionPointer;
		if (!L_22)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_00b0;
		}
	}
	{
		MethodInfo_t* L_24 = ___1_methodInfo;
		RuntimeObject* L_25;
		L_25 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_26 = ((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_27 = L_26;
		G_B13_0 = L_27;
		G_B13_1 = L_25;
		if (L_27)
		{
			G_B14_0 = L_27;
			G_B14_1 = L_25;
			goto IL_0099;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* L_28 = ((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_29 = (Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA*)il2cpp_codegen_object_new(Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_2__ctor_m9F3766EBEDA390AF720F7E3FC0B134B818B373C6(L_29, L_28, (intptr_t)((void*)U3CU3Ec_U3CCompileU3Eb__17_0_m7DA44444B7871E3C1F776CE00708ED24B3F5CE2E_RuntimeMethod_var), NULL);
		Func_2_tDD914A29A2D3A2411F7B18929813C34BC0A6EEBA* L_30 = L_29;
		((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_30);
		G_B14_0 = L_30;
		G_B14_1 = G_B13_1;
	}

IL_0099:
	{
		bool L_31;
		L_31 = Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44(G_B14_1, G_B14_0, Enumerable_All_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m222FE295E7B1277D5D6F5271C96D454E62E52F44_RuntimeMethod_var);
		if (!L_31)
		{
			goto IL_00b0;
		}
	}
	{
		// UnityEngine.Debug.Log($"The method `{methodInfo}` must have `MonoPInvokeCallback` attribute to be compatible with IL2CPP!");
		MethodInfo_t* L_32 = ___1_methodInfo;
		String_t* L_33;
		L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_33, NULL);
	}

IL_00b0:
	{
		// var managedFallbackDelegateMethod = managedFallbackDelegateObj as Delegate;
		RuntimeObject* L_34 = ___3_managedFallbackDelegateObj;
		V_2 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_34, Delegate_t_il2cpp_TypeInfo_var));
		// if (BurstCompilerOptions.HasBurstCompileAttribute(methodInfo))
		MethodInfo_t* L_35 = ___1_methodInfo;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826(L_35, NULL);
		if (!L_36)
		{
			goto IL_0100;
		}
	}
	{
		// if (Options.EnableBurstCompilation && BurstCompilerHelper.IsBurstGenerated)
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* L_37 = ((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1;
		NullCheck(L_37);
		bool L_38;
		L_38 = BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_00e5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		bool L_39 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1;
		if (!L_39)
		{
			goto IL_00e5;
		}
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(delegateObj, string.Empty);
		RuntimeObject* L_40 = ___0_delegateObj;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_42;
		L_42 = BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80(L_40, L_41, NULL);
		// function = Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId);
		void* L_43;
		L_43 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9(L_42, NULL);
		V_0 = L_43;
		goto IL_0111;
	}

IL_00e5:
	{
		// if (isILPostProcessing)
		bool L_44 = V_1;
		if (!L_44)
		{
			goto IL_00eb;
		}
	}
	{
		// return null;
		return (void*)(((uintptr_t)0));
	}

IL_00eb:
	{
		// GCHandle.Alloc(managedFallbackDelegateMethod);
		Delegate_t* L_45 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_46;
		L_46 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_45, NULL);
		// function = (void*)Marshal.GetFunctionPointerForDelegate(managedFallbackDelegateMethod);
		Delegate_t* L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_48;
		L_48 = Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2(L_47, NULL);
		void* L_49;
		L_49 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_48, NULL);
		V_0 = L_49;
		goto IL_0111;
	}

IL_0100:
	{
		// throw new InvalidOperationException($"Burst cannot compile the function pointer `{methodInfo}` because the `[BurstCompile]` attribute is missing");
		MethodInfo_t* L_50 = ___1_methodInfo;
		String_t* L_51;
		L_51 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64)), L_50, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_52 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_52, L_51, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_0111:
	{
		// if (function == null)
		void* L_53 = V_0;
		if ((!(((uintptr_t)L_53) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0127;
		}
	}
	{
		// throw new InvalidOperationException($"Burst failed to compile the function pointer `{methodInfo}`");
		MethodInfo_t* L_54 = ___1_methodInfo;
		String_t* L_55;
		L_55 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17490A99BE5820911E7C397A415006E24720C376)), L_54, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_56 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_56);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_56, L_55, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m121B92840E0EAE7A9296A4A2AEC3DF9900E948C3_RuntimeMethod_var)));
	}

IL_0127:
	{
		// return function;
		void* L_57 = V_0;
		return L_57;
	}
}
// System.Void Unity.Burst.BurstCompiler::DummyMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_DummyMethod_m44E6D413356022A0F6BA962A31026BA4EE5FE95F (const RuntimeMethod* method) 
{
	{
		// private static void DummyMethod() { }
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_mA29CF2918E31D89BB314B5CC1AF842BE93E9EE6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095255162964C376C50DCE630D972167CA5AE0D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly BurstCompilerOptions Options = new BurstCompilerOptions(true);
		BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* L_0 = (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9*)il2cpp_codegen_object_new(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285(L_0, (bool)1, NULL);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___Options_1), (void*)L_0);
		// private static readonly MethodInfo DummyMethodInfo = typeof(BurstCompiler).GetMethod(nameof(DummyMethod), BindingFlags.Static | BindingFlags.NonPublic);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_2, _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8, ((int32_t)40), NULL);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___DummyMethodInfo_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->___DummyMethodInfo_3), (void*)L_3);
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
// System.Void Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTypeReinitAttribute__ctor_m8642643889129E11741654F66EE77046A2A7D1CB (StaticTypeReinitAttribute_tEB18A64CD3B786EA0443D6EC81EC1E70F7AAA3F1* __this, Type_t* ___0_toReinit, const RuntimeMethod* method) 
{
	{
		// public StaticTypeReinitAttribute(Type toReinit)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// reinitType = toReinit;
		Type_t* L_0 = ___0_toReinit;
		__this->___reinitType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reinitType_0), (void*)L_0);
		// }
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
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	returnValue = BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131(NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = true;
		V_0 = (bool)1;
		// DiscardedMethod(ref result);
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B((&V_0), NULL);
		// return result;
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mE9B27FDCAB7B17C7B7496ADACFDBB72E3F155F6B (bool* ___0_value, const RuntimeMethod* method) 
{
	{
		// value = false;
		bool* L_0 = ___0_value;
		*((int8_t*)L_0) = (int8_t)0;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD (Delegate_t* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(del, string.Empty);
		Delegate_t* L_0 = ___0_del;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		int32_t L_2;
		L_2 = BurstCompilerService_CompileAsyncDelegateMethod_mDEA0EF934BF3674C1B47014A7518886D1DC2FE80(L_0, L_1, NULL);
		// return Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId) != (void*)0;
		void* L_3;
		L_3 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_mE6AD1EA0DD647A367102A1330BF4D695E1A796F9(L_2, NULL);
		return (bool)((((int32_t)((((intptr_t)L_3) == ((intptr_t)((intptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_m2B57C7C8A7B5F4CEE1E1DE05C5FC63C10AE37FD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl = new IsBurstEnabledDelegate(IsBurstEnabled);
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* L_0 = (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C*)il2cpp_codegen_object_new(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E(L_0, NULL, (intptr_t)((void*)BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131_RuntimeMethod_var), NULL);
		((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0), (void*)L_0);
		// public static readonly bool IsBurstGenerated = IsCompiledByBurst(IsBurstEnabledImpl);
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* L_1 = ((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl_0;
		bool L_2;
		L_2 = BurstCompilerHelper_IsCompiledByBurst_m0239AE7BCAF7076EE75C46D528F04AC34F3761DD(L_1, NULL);
		((BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_t6F60FCA4EDA9679F1085F70F87D0A8CA75AAA8CD_il2cpp_TypeInfo_var))->___IsBurstGenerated_1 = L_2;
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
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_Multicast(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* currentDelegate = reinterpret_cast<IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenInst(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStatic(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStaticInvoker(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_ClosedStaticInvoker(IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m675CBAB9E803A7723AB3601DEB086E706E98A86E (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65_Multicast;
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m9FA44E7FDC323DE7DF1232200DED8C89A67D7F65 (IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_mC2654CB88A21F64F4C25E02A0C89854E2F74484B (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, MethodInfo_t* ___0_method, const RuntimeMethod* method) 
{
	{
		// public FakeDelegate(MethodInfo method)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Method = method;
		MethodInfo_t* L_0 = ___0_method;
		__this->___U3CMethodU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* FakeDelegate_get_Method_m36F3C3DAC1377B07AF18BAC6EDF28F3FAE5BA828 (FakeDelegate_t659588AB379C77AF08088ED8B2E2A5ECFF38CE16* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo Method { get; }
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField_0;
		return L_0;
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
// System.Void Unity.Burst.BurstCompiler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8FF612FA8632F867C2CA577D7FF7A080320568BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* L_0 = (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4*)il2cpp_codegen_object_new(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9(L_0, NULL);
		((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEC9179CC84E1FA4BB4AB4B39A87C134F481976C9 (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/<>c::<Compile>b__17_0(System.Attribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompileU3Eb__17_0_m7DA44444B7871E3C1F776CE00708ED24B3F5CE2E (U3CU3Ec_tB75BA976B4E99C70F9D85A7B7BD72688F0AD75F4* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_s;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16, NULL);
		return L_3;
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
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m644EA41CAFD4F89CE36074DBD77BAC761C122285 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_isGlobal, const RuntimeMethod* method) 
{
	{
		// internal BurstCompilerOptions(bool isGlobal)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// IsGlobal = isGlobal;
		bool L_0 = ___0_isGlobal;
		__this->___U3CIsGlobalU3Ek__BackingField_5 = L_0;
		// EnableBurstCompilation = true;
		BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849(__this, (bool)1, NULL);
		// EnableBurstSafetyChecks = true;
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->____enableBurstCompilation_3;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_mEDD4E93926B3E03A8E38CA9D483D4E4FD649D849 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		bool L_0;
		L_0 = BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		___0_value = (bool)0;
	}

IL_0012:
	{
		// bool changed = _enableBurstCompilation != value;
		bool L_2 = __this->____enableBurstCompilation_3;
		bool L_3 = ___0_value;
		// if (changed && value)
		int32_t L_4 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = ___0_value;
		G_B4_0 = L_4;
		if (!((int32_t)(L_4&(int32_t)L_5)))
		{
			G_B5_0 = L_4;
			goto IL_0029;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_m7667FD7B8FDBEB8F037F682525B43238504D15A6(__this, NULL);
		G_B5_0 = G_B4_0;
	}

IL_0029:
	{
		// _enableBurstCompilation = value;
		bool L_6 = ___0_value;
		__this->____enableBurstCompilation_3 = L_6;
		// if (IsGlobal)
		bool L_7;
		L_7 = BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline(__this, NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0044;
		}
	}
	{
		// JobsUtility.JobCompilerEnabled = value;
		bool L_8 = ___0_value;
		JobsUtility_set_JobCompilerEnabled_m14CB399441AB02D65BE11D74E9CC3E313420D72B(L_8, NULL);
		// BurstCompiler._IsEnabled = value;
		bool L_9 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		((BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var))->____IsEnabled_0 = L_9;
		G_B7_0 = G_B6_0;
	}

IL_0044:
	{
		// if (changed)
		if (!G_B7_0)
		{
			goto IL_004c;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m2AB857BC80AE1546031305C47F88ADB147A8BB83 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// bool changed = _enableBurstSafetyChecks != value;
		bool L_0 = __this->____enableBurstSafetyChecks_4;
		bool L_1 = ___0_value;
		// if (changed)
		int32_t L_2 = ((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B1_0 = L_2;
		if (!L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_m7667FD7B8FDBEB8F037F682525B43238504D15A6(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0015:
	{
		// _enableBurstSafetyChecks = value;
		bool L_3 = ___0_value;
		__this->____enableBurstSafetyChecks_4 = L_3;
		// if (changed)
		if (!G_B2_0)
		{
			goto IL_002a;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7(__this, NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821(__this, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m070F2A783AF072DC0502DDF8B8BA5AC09CAF756B (MemberInfo_t* ___0_member, BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** ___1_attribute, bool ___2_isForEagerCompilation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// attribute = null;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_0 = ___1_attribute;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (member == null)
		MemberInfo_t* L_1 = ___0_member;
		bool L_2;
		L_2 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_1, (MemberInfo_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// attribute = GetBurstCompileAttribute(member);
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_3 = ___1_attribute;
		MemberInfo_t* L_4 = ___0_member;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_5;
		L_5 = BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		// if (attribute == null)
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_6 = ___1_attribute;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_7 = *((BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D**)L_6);
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// if (isForEagerCompilation && (attribute.Options?.Contains(DoNotEagerCompile) ?? false))
		bool L_8 = ___2_isForEagerCompilation;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D** L_9 = ___1_attribute;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_10 = *((BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D**)L_9);
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = BurstCompileAttribute_get_Options_mDE5DC6437C7EA21CD635F1C1C92E3BB3F3113B09_inline(L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_002d;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0037;
	}

IL_002d:
	{
		bool L_13;
		L_13 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33((RuntimeObject*)G_B7_0, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		G_B8_0 = ((int32_t)(L_13));
	}

IL_0037:
	{
		if (!G_B8_0)
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// return true;
		return (bool)1;
	}
}
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* BurstCompilerOptions_GetBurstCompileAttribute_m9383E7E419C41B6BD078452FC1E2EF94A9AD2972 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	Type_t* V_3 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_4 = NULL;
	PropertyInfo_t* V_5 = NULL;
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_6 = NULL;
	int32_t G_B8_0 = 0;
	{
		// var result = memberInfo.GetCustomAttribute<BurstCompileAttribute>();
		MemberInfo_t* L_0 = ___0_memberInfo;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB(L_0, CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_mAD047DA5EEB378D0343B0C8D2460F32490F9FCBB_RuntimeMethod_var);
		V_0 = L_1;
		// if (result != null)
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return result;
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// foreach (var a in memberInfo.GetCustomAttributes())
		MemberInfo_t* L_4 = ___0_memberInfo;
		RuntimeObject* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Attribute>::GetEnumerator() */, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_00ab;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00ab:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0095_1;
			}

IL_001a_1:
			{
				// foreach (var a in memberInfo.GetCustomAttributes())
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10;
				L_10 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Attribute>::get_Current() */, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				// var attributeType = a.GetType();
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = V_2;
				NullCheck(L_11);
				Type_t* L_12;
				L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
				V_3 = L_12;
				// if (attributeType.FullName == "Burst.Compiler.IL.Tests.TestCompilerAttribute")
				Type_t* L_13 = V_3;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_13);
				bool L_15;
				L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A, NULL);
				if (!L_15)
				{
					goto IL_0095_1;
				}
			}
			{
				// var options = new List<string>();
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_16, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_4 = L_16;
				// var expectCompilerExceptionProperty = attributeType.GetProperty("ExpectCompilerException");
				Type_t* L_17 = V_3;
				NullCheck(L_17);
				PropertyInfo_t* L_18;
				L_18 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_17, _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16, NULL);
				V_5 = L_18;
				// var expectCompilerException = (expectCompilerExceptionProperty != null)
				//     ? (bool)expectCompilerExceptionProperty.GetValue(a)
				//     : false;
				PropertyInfo_t* L_19 = V_5;
				bool L_20;
				L_20 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_19, (PropertyInfo_t*)NULL, NULL);
				if (L_20)
				{
					goto IL_005b_1;
				}
			}
			{
				G_B8_0 = 0;
				goto IL_0068_1;
			}

IL_005b_1:
			{
				PropertyInfo_t* L_21 = V_5;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_22 = V_2;
				NullCheck(L_21);
				RuntimeObject* L_23;
				L_23 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_21, L_22, NULL);
				G_B8_0 = ((int32_t)(((*(bool*)((bool*)(bool*)UnBox(L_23, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
			}

IL_0068_1:
			{
				// if (expectCompilerException)
				if (!G_B8_0)
				{
					goto IL_0076_1;
				}
			}
			{
				// options.Add(DoNotEagerCompile);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_4;
				NullCheck(L_24);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_24, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0076_1:
			{
				// return new BurstCompileAttribute(FloatPrecision.Standard, FloatMode.Default)
				// {
				//     CompileSynchronously = true,
				//     Options = options.ToArray(),
				// };
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_25 = (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D*)il2cpp_codegen_object_new(BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				BurstCompileAttribute__ctor_mBA3EAC7C435927F67F10F2D185F5CBE8F88DC3C6(L_25, 0, 0, NULL);
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_26 = L_25;
				NullCheck(L_26);
				BurstCompileAttribute_set_CompileSynchronously_mED8B25B60ABC1EA5327DE691DCE129C9BD34BD58(L_26, (bool)1, NULL);
				BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_27 = L_26;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = V_4;
				NullCheck(L_28);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29;
				L_29 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_28, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				NullCheck(L_27);
				BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline(L_27, L_29, NULL);
				V_6 = L_27;
				goto IL_00ae;
			}

IL_0095_1:
			{
				// foreach (var a in memberInfo.GetCustomAttributes())
				RuntimeObject* L_30 = V_1;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		// return null;
		return (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D*)NULL;
	}

IL_00ae:
	{
		// }
		BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* L_32 = V_6;
		return L_32;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826 (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* V_0 = NULL;
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		MemberInfo_t* L_0 = ___0_member;
		bool L_1;
		L_1 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_0, (MemberInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompilerOptions_HasBurstCompileAttribute_mC68CA53F4A77780A30D34E895B120188F31F7826_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return TryGetAttribute(member, out attr);
		MemberInfo_t* L_3 = ___0_member;
		il2cpp_codegen_runtime_class_init_inline(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BurstCompilerOptions_TryGetAttribute_m070F2A783AF072DC0502DDF8B8BA5AC09CAF756B(L_3, (&V_0), (bool)0, NULL);
		return L_4;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m20C25705A1D7B2A9C6265D3D5FE2A10A42AAABB7 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// OptionsChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0;
		L_0 = BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mBE68BE4083665B2DE194184223A6BF14CA7F3821 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_m7667FD7B8FDBEB8F037F682525B43238504D15A6 (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m00F05309A6D0721099EBAF2FB553AD1A409815F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_000a:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354, NULL);
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0038;
	}

IL_002a:
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0 = (bool)1;
		// break;
		goto IL_0038;
	}

IL_0032:
	{
		// ForceBurstCompilationSynchronously = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceBurstCompilationSynchronously_1 = (bool)1;
	}

IL_0038:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (CheckIsSecondaryUnityProcess())
		bool L_12;
		L_12 = BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67(NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___ForceDisableBurstCompilation_0 = (bool)1;
		// IsSecondaryUnityProcess = true;
		((BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9_il2cpp_TypeInfo_var))->___IsSecondaryUnityProcess_2 = (bool)1;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_mAA7A85682C937E5FF55B6B9ADCF0F1789F889E67 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
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
// System.Int64 Unity.Burst.BurstRuntime::HashStringWithFNV1A64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_mCC26696CC5168AE7CA59EAA4BD15440F434CB7AD (String_t* ___0_text, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// ulong result = offsetBasis;
		V_0 = ((int64_t)-3750763034362895579LL);
		// foreach (var c in text)
		String_t* L_0 = ___0_text;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		// foreach (var c in text)
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		// result = prime * (result ^ (byte)(c & 255));
		uint64_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_4^((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5&((int32_t)255))))))))));
		// result = prime * (result ^ (byte)(c >> 8));
		uint64_t L_6 = V_0;
		Il2CppChar L_7 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_6^((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7>>8)))))))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0044:
	{
		// foreach (var c in text)
		int32_t L_9 = V_2;
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		// return (long)result;
		uint64_t L_12 = V_0;
		return L_12;
	}
}
// System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_Log_mACD9C0A258B393532ED8AE9DB127D494C14D0E88 (uint8_t* ___0_message, int32_t ___1_logType, uint8_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	{
		// Unity.Burst.LowLevel.BurstCompilerService.Log((byte*) 0, (Unity.Burst.LowLevel.BurstCompilerService.BurstLogType)logType, message, fileName, lineNumber);
		int32_t L_0 = ___1_logType;
		uint8_t* L_1 = ___0_message;
		uint8_t* L_2 = ___2_fileName;
		int32_t L_3 = ___3_lineNumber;
		BurstCompilerService_Log_m4224BFA55310174B3BD9E0A2F15F3CF85757C253((void*)((intptr_t)0), L_0, L_1, L_2, L_3, NULL);
		// }
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
// System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m73E16FAB2119900D63EE60E6A868357D44E175F5 (PreserveAttribute_tA1799B67558808CC16DE11D04CC1D42AAA569133* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m9850783202F2E2DCA43597CD97C129C683D6FEBD (int64_t ___0_getHashCode64, int64_t ___1_getSubHashCode64, uint32_t ___2_sizeOf, uint32_t ___3_alignment, const RuntimeMethod* method) 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var hash128 = new UnityEngine.Hash128((ulong)getHashCode64, (ulong)getSubHashCode64);
		int64_t L_0 = ___0_getHashCode64;
		int64_t L_1 = ___1_getSubHashCode64;
		Hash128__ctor_m0B61E717B3FF7D7BBD8FF12C8C8327C18A2AAAF3((&V_0), L_0, L_1, NULL);
		// var result = Unity.Burst.LowLevel.BurstCompilerService.GetOrCreateSharedMemory(ref hash128, sizeOf, alignment);
		uint32_t L_2 = ___2_sizeOf;
		uint32_t L_3 = ___3_alignment;
		void* L_4;
		L_4 = BurstCompilerService_GetOrCreateSharedMemory_m1293EB3119CBEE41DBCC0E3B2235601BD927BFE6((&V_0), L_2, L_3, NULL);
		// return result;
		return L_4;
	}
}
// System.Void Unity.Burst.SharedStatic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic__cctor_mCC58574BC4693FCAEB7198BFCE30CAD7B96E97FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB1A4D66944DB51DB308B7149DEB327DED7C76DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<long, Type> HashToType = new Dictionary<long, Type>();
		Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D* L_0 = (Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D*)il2cpp_codegen_object_new(Dictionary_2_t7F62A52DA9FAB89914D9BC3BB3467C80867A8A0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB1A4D66944DB51DB308B7149DEB327DED7C76DE0(L_0, Dictionary_2__ctor_mB1A4D66944DB51DB308B7149DEB327DED7C76DE0_RuntimeMethod_var);
		((SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_StaticFields*)il2cpp_codegen_static_fields_for(SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_il2cpp_TypeInfo_var))->___HashToType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_StaticFields*)il2cpp_codegen_static_fields_for(SharedStatic_t83F4045688B6DB97142DC2BCAE88140D165FFE35_il2cpp_TypeInfo_var))->___HashToType_0), (void*)L_0);
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
// System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m5C7C403F74E9EAEB24409A43B4EB60B4A161AB0F (PreserveAttribute_tDEA15EF9DCAB8AC4428ED72A2A1377384FE7C27B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.UInt64 Unity.Burst.Intrinsics.Common::umul128(System.UInt64,System.UInt64,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Common_umul128_m6BE762AD1B87296A151EDD918A0802E9FB0846B7 (uint64_t ___0_x, uint64_t ___1_y, uint64_t* ___2_high, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		// ulong xLo = (uint)x;
		uint64_t L_0 = ___0_x;
		V_0 = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint32_t)L_0)));
		// ulong xHi = x >> 32;
		uint64_t L_1 = ___0_x;
		// ulong yLo = (uint)y;
		uint64_t L_2 = ___1_y;
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint32_t)L_2)));
		// ulong yHi = y >> 32;
		uint64_t L_3 = ___1_y;
		V_2 = ((int64_t)((uint64_t)L_3>>((int32_t)32)));
		// ulong hi = xHi * yHi;
		int64_t L_4 = ((int64_t)((uint64_t)L_1>>((int32_t)32)));
		uint64_t L_5 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_4, (int64_t)L_5));
		// ulong m1 = xHi * yLo;
		uint64_t L_6 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_multiply(L_4, (int64_t)L_6));
		// ulong m2 = yHi * xLo;
		uint64_t L_7 = V_2;
		uint64_t L_8 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)L_8));
		// ulong lo = xLo * yLo;
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_1;
		// ulong m1Lo = (uint)m1;
		uint64_t L_11 = V_4;
		V_6 = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint32_t)L_11)));
		// ulong loHi = lo >> 32;
		V_7 = ((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_9, (int64_t)L_10))>>((int32_t)32)));
		// ulong m1Hi = m1 >> 32;
		uint64_t L_12 = V_4;
		V_8 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		// high = hi + m1Hi + ((loHi + m1Lo + m2) >> 32);
		uint64_t* L_13 = ___2_high;
		uint64_t L_14 = V_3;
		uint64_t L_15 = V_8;
		uint64_t L_16 = V_7;
		uint64_t L_17 = V_6;
		uint64_t L_18 = V_5;
		*((int64_t*)L_13) = (int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)L_15)), ((int64_t)((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)L_17)), (int64_t)L_18))>>((int32_t)32)))));
		// return x * y;
		uint64_t L_19 = ___0_x;
		uint64_t L_20 = ___1_y;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20));
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
// System.Void Unity.Burst.Intrinsics.v256::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m267402531F6CFFB7F6B60508FF475D5DF65B20EE (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* __this, int32_t ___0_v, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// this = default(v256);
		il2cpp_codegen_initobj(__this, sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A));
		// SInt0 = SInt1 = SInt2 = SInt3 = SInt4 = SInt5 = SInt6 = SInt7 = v;
		int32_t L_0 = ___0_v;
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___SInt7_111 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___SInt6_110 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___SInt5_109 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___SInt4_108 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->___SInt3_107 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = L_11;
		__this->___SInt2_106 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->___SInt1_105 = L_13;
		int32_t L_14 = V_0;
		__this->___SInt0_104 = L_14;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void v256__ctor_m267402531F6CFFB7F6B60508FF475D5DF65B20EE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_v, const RuntimeMethod* method)
{
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*>(__this + _offset);
	v256__ctor_m267402531F6CFFB7F6B60508FF475D5DF65B20EE(_thisAdjusted, ___0_v, method);
}
// System.Void Unity.Burst.Intrinsics.v256::.ctor(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* __this, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_lo, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_hi, const RuntimeMethod* method) 
{
	{
		// this = default(v256);
		il2cpp_codegen_initobj(__this, sizeof(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A));
		// Lo128 = lo;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_0 = ___0_lo;
		__this->___Lo128_132 = L_0;
		// Hi128 = hi;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = ___1_hi;
		__this->___Hi128_133 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A_AdjustorThunk (RuntimeObject* __this, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_lo, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_hi, const RuntimeMethod* method)
{
	v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*>(__this + _offset);
	v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A(_thisAdjusted, ___0_lo, ___1_hi, method);
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
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_load_ps(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_load_ps_mDEC29DE0AC8C7A62975D63B512D5FD825D83E749 (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		// return *(v256*)ptr;
		void* L_0 = ___0_ptr;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_1 = (*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_0);
		return L_1;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_store_ps(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_store_ps_mAA874350740C462A1059A066894E57E93D7B6697 (void* ___0_ptr, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_val, const RuntimeMethod* method) 
{
	{
		// *(v256*)ptr = val;
		void* L_0 = ___0_ptr;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_1 = ___1_val;
		*(v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A*)L_0 = L_1;
		// }
		return;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_loadu_si256(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_loadu_si256_m63575B1FA1C174A5D442A2F53E7A1708AC7E7F31 (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		// return mm256_load_ps(ptr);
		void* L_0 = ___0_ptr;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_1;
		L_1 = Avx_mm256_load_ps_mDEC29DE0AC8C7A62975D63B512D5FD825D83E749(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_storeu_si256(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_storeu_si256_m52989726D29436BCF95D32D4319C6CBDF31D11D4 (void* ___0_ptr, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_v, const RuntimeMethod* method) 
{
	{
		// mm256_store_ps(ptr, v);
		void* L_0 = ___0_ptr;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_1 = ___1_v;
		Avx_mm256_store_ps_mAA874350740C462A1059A066894E57E93D7B6697(L_0, L_1, NULL);
		// }
		return;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_set1_epi32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx_mm256_set1_epi32_m326DB72B5F59FC760340BFD50C022F573F032D3C (int32_t ___0_a, const RuntimeMethod* method) 
{
	{
		// return new v256(a);
		int32_t L_0 = ___0_a;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_1;
		memset((&L_1), 0, sizeof(L_1));
		v256__ctor_m267402531F6CFFB7F6B60508FF475D5DF65B20EE((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean Unity.Burst.Intrinsics.X86/Avx2::get_IsAvx2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avx2_get_IsAvx2Supported_mDE53DA491B5B96753F6558B1DF3C5D5A9BB1ADB4 (const RuntimeMethod* method) 
{
	{
		// public static bool IsAvx2Supported { get { return false; } }
		return (bool)0;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_xor_si256(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_xor_si256_mDD46C306F796DE4284677678DB751CC4AD998614 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_b, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.xor_si128(a.Lo128, b.Lo128), Sse2.xor_si128(a.Hi128, b.Hi128));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_2 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3 = L_2.___Lo128_132;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4;
		L_4 = Sse2_xor_si128_m54213FFE7B2D891507E00B3395DB3AC25820A8A9(L_1, L_3, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_5 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = L_5.___Hi128_133;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_7 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = L_7.___Hi128_133;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_9;
		L_9 = Sse2_xor_si128_m54213FFE7B2D891507E00B3395DB3AC25820A8A9(L_6, L_8, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_add_epi64(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_add_epi64_m0312FD16FB80EFA4C0B72A8FBB32C2735285F9B8 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_b, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.add_epi64(a.Lo128, b.Lo128), Sse2.add_epi64(a.Hi128, b.Hi128));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_2 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3 = L_2.___Lo128_132;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4;
		L_4 = Sse2_add_epi64_m7F48D1953DDBDBF38CA494BABE0A3390BA6C86BF(L_1, L_3, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_5 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = L_5.___Hi128_133;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_7 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = L_7.___Hi128_133;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_9;
		L_9 = Sse2_add_epi64_m7F48D1953DDBDBF38CA494BABE0A3390BA6C86BF(L_6, L_8, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_mul_epu32(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_mul_epu32_mBA8AE42AD7D5F226187ECD9FD132F6EC138C6512 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___1_b, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.mul_epu32(a.Lo128, b.Lo128), Sse2.mul_epu32(a.Hi128, b.Hi128));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_2 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3 = L_2.___Lo128_132;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4;
		L_4 = Sse2_mul_epu32_mCD9FF71C6DA28E454D1EBE3249DC4F9E99DC11DB(L_1, L_3, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_5 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = L_5.___Hi128_133;
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_7 = ___1_b;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = L_7.___Hi128_133;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_9;
		L_9 = Sse2_mul_epu32_mCD9FF71C6DA28E454D1EBE3249DC4F9E99DC11DB(L_6, L_8, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_slli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_slli_epi64_m81DB24BED37FB2D8CBDDC0B6B655F920642BB559 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.slli_epi64(a.Lo128, imm8), Sse2.slli_epi64(a.Hi128, imm8));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		int32_t L_2 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3;
		L_3 = Sse2_slli_epi64_mB984CF9AA56B47FDD860A6C0D9DCC5CFEC420B4D(L_1, L_2, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_4 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_5 = L_4.___Hi128_133;
		int32_t L_6 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_7;
		L_7 = Sse2_slli_epi64_mB984CF9AA56B47FDD860A6C0D9DCC5CFEC420B4D(L_5, L_6, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_srli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_srli_epi64_m629ADF7A5EBCAC5A84A2CA773EE8F18FE66DDD58 (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.srli_epi64(a.Lo128, imm8), Sse2.srli_epi64(a.Hi128, imm8));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		int32_t L_2 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3;
		L_3 = Sse2_srli_epi64_m2B154276738045C80B2C8857CFDB232487262CFD(L_1, L_2, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_4 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_5 = L_4.___Hi128_133;
		int32_t L_6 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_7;
		L_7 = Sse2_srli_epi64_m2B154276738045C80B2C8857CFDB232487262CFD(L_5, L_6, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_shuffle_epi32(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A Avx2_mm256_shuffle_epi32_m226985CA8797C3192874F3822295A40BDEEA850B (v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	{
		// return new v256(Sse2.shuffle_epi32(a.Lo128, imm8), Sse2.shuffle_epi32(a.Hi128, imm8));
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_0 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_1 = L_0.___Lo128_132;
		int32_t L_2 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_3;
		L_3 = Sse2_shuffle_epi32_m1EA2B8A82D93417EA3B3789381D8117DC635F35F(L_1, L_2, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_4 = ___0_a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_5 = L_4.___Hi128_133;
		int32_t L_6 = ___1_imm8;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_7;
		L_7 = Sse2_shuffle_epi32_m1EA2B8A82D93417EA3B3789381D8117DC635F35F(L_5, L_6, NULL);
		v256_t770DAF625F113A77DC69DDBA1EDB49B50AADC08A L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_mA9B9CC971837A7F271235EFCFFEA5D12E2E67E4A((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Int32 Unity.Burst.Intrinsics.X86/Sse::SHUFFLE(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse_SHUFFLE_m80B322C7F945F0225AFA5E2995108547DA36391E (int32_t ___0_d, int32_t ___1_c, int32_t ___2_b, int32_t ___3_a, const RuntimeMethod* method) 
{
	{
		// return ((a & 3)) | ((b & 3) << 2) | ((c & 3) << 4) | ((d & 3) << 6);
		int32_t L_0 = ___3_a;
		int32_t L_1 = ___2_b;
		int32_t L_2 = ___1_c;
		int32_t L_3 = ___0_d;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_0&3))|((int32_t)(((int32_t)(L_1&3))<<2))))|((int32_t)(((int32_t)(L_2&3))<<4))))|((int32_t)(((int32_t)(L_3&3))<<6))));
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
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::add_epi64(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_add_epi64_m7F48D1953DDBDBF38CA494BABE0A3390BA6C86BF (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// dst.SLong0 = a.SLong0 + b.SLong0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_0 = ___0_a;
		int64_t L_1 = L_0.___SLong0_58;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_2 = ___1_b;
		int64_t L_3 = L_2.___SLong0_58;
		(&V_0)->___SLong0_58 = ((int64_t)il2cpp_codegen_add(L_1, L_3));
		// dst.SLong1 = a.SLong1 + b.SLong1;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4 = ___0_a;
		int64_t L_5 = L_4.___SLong1_59;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = ___1_b;
		int64_t L_7 = L_6.___SLong1_59;
		(&V_0)->___SLong1_59 = ((int64_t)il2cpp_codegen_add(L_5, L_7));
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::mul_epu32(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_mul_epu32_mCD9FF71C6DA28E454D1EBE3249DC4F9E99DC11DB (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// dst.ULong0 = (ulong)a.UInt0 * (ulong)b.UInt0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_0 = ___0_a;
		uint32_t L_1 = L_0.___UInt0_48;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_2 = ___1_b;
		uint32_t L_3 = L_2.___UInt0_48;
		(&V_0)->___ULong0_56 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_1), ((int64_t)(uint64_t)L_3)));
		// dst.ULong1 = (ulong)a.UInt2 * (ulong)b.UInt2;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4 = ___0_a;
		uint32_t L_5 = L_4.___UInt2_50;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = ___1_b;
		uint32_t L_7 = L_6.___UInt2_50;
		(&V_0)->___ULong1_57 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_7)));
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::slli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_slli_epi64_mB984CF9AA56B47FDD860A6C0D9DCC5CFEC420B4D (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	uint64_t* V_2 = NULL;
	uint64_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// int dist = Math.Min(imm8 & 0xff, 64);
		int32_t L_0 = ___1_imm8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(L_0&((int32_t)255))), ((int32_t)64), NULL);
		V_1 = L_1;
		// ulong* dptr = &dst.ULong0;
		uint64_t* L_2 = (&(&V_0)->___ULong0_56);
		V_2 = (uint64_t*)((uintptr_t)L_2);
		// ulong* aptr = &a.ULong0;
		uint64_t* L_3 = (&(&___0_a)->___ULong0_56);
		V_3 = (uint64_t*)((uintptr_t)L_3);
		// for (int j = 0; j <= 1; j++)
		V_4 = 0;
		goto IL_005a;
	}

IL_002e:
	{
		// if (dist > 63)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)63))))
		{
			goto IL_003f;
		}
	}
	{
		// dptr[j] = 0;
		uint64_t* L_5 = V_2;
		int32_t L_6 = V_4;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 8))))) = (int64_t)((int64_t)0);
		goto IL_0054;
	}

IL_003f:
	{
		// dptr[j] = aptr[j] << dist;
		uint64_t* L_7 = V_2;
		int32_t L_8 = V_4;
		uint64_t* L_9 = V_3;
		int32_t L_10 = V_4;
		int64_t L_11 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 8)))));
		int32_t L_12 = V_1;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 8))))) = (int64_t)((int64_t)(L_11<<((int32_t)(L_12&((int32_t)63)))));
	}

IL_0054:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::srli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_srli_epi64_m2B154276738045C80B2C8857CFDB232487262CFD (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint64_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int dist = Math.Min(imm8 & 0xff, 64);
		int32_t L_0 = ___1_imm8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(L_0&((int32_t)255))), ((int32_t)64), NULL);
		V_0 = L_1;
		// v128 dst = a;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_2 = ___0_a;
		V_1 = L_2;
		// ulong* dptr = &dst.ULong0;
		uint64_t* L_3 = (&(&V_1)->___ULong0_56);
		V_2 = (uint64_t*)((uintptr_t)L_3);
		// if (dist > 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// dist--;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// for (int j = 0; j <= 1; j++)
		V_3 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		// dptr[j] >>= 1;
		uint64_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint64_t* L_8 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 8))));
		int64_t L_9 = *((int64_t*)L_8);
		*((int64_t*)L_8) = (int64_t)((int64_t)((uint64_t)L_9>>1));
		// dptr[j] >>= dist;
		uint64_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint64_t* L_12 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 8))));
		int64_t L_13 = *((int64_t*)L_12);
		int32_t L_14 = V_0;
		*((int64_t*)L_12) = (int64_t)((int64_t)((uint64_t)L_13>>((int32_t)(L_14&((int32_t)63)))));
		// for (int j = 0; j <= 1; j++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0043:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}

IL_0047:
	{
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::xor_si128(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_xor_si128_m54213FFE7B2D891507E00B3395DB3AC25820A8A9 (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___1_b, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// dst.ULong0 = a.ULong0 ^ b.ULong0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_0 = ___0_a;
		uint64_t L_1 = L_0.___ULong0_56;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_2 = ___1_b;
		uint64_t L_3 = L_2.___ULong0_56;
		(&V_0)->___ULong0_56 = ((int64_t)((int64_t)L_1^(int64_t)L_3));
		// dst.ULong1 = a.ULong1 ^ b.ULong1;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_4 = ___0_a;
		uint64_t L_5 = L_4.___ULong1_57;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_6 = ___1_b;
		uint64_t L_7 = L_6.___ULong1_57;
		(&V_0)->___ULong1_57 = ((int64_t)((int64_t)L_5^(int64_t)L_7));
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::shuffle_epi32(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse2_shuffle_epi32_m1EA2B8A82D93417EA3B3789381D8117DC635F35F (v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 ___0_a, int32_t ___1_imm8, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t* V_1 = NULL;
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// uint* dptr = &dst.UInt0;
		uint32_t* L_0 = (&(&V_0)->___UInt0_48);
		// uint* aptr = &a.UInt0;
		uint32_t* L_1 = (&(&___0_a)->___UInt0_48);
		V_1 = (uint32_t*)((uintptr_t)L_1);
		// dptr[0] = aptr[imm8 & 3];
		uintptr_t L_2 = ((uintptr_t)L_0);
		uint32_t* L_3 = V_1;
		int32_t L_4 = ___1_imm8;
		int32_t L_5 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(L_4&3))), 4)))));
		*((int32_t*)L_2) = (int32_t)L_5;
		// dptr[1] = aptr[(imm8 >> 2) & 3];
		uintptr_t L_6 = L_2;
		uint32_t* L_7 = V_1;
		int32_t L_8 = ___1_imm8;
		int32_t L_9 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(((int32_t)(L_8>>2))&3))), 4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_6, 4))) = (int32_t)L_9;
		// dptr[2] = aptr[(imm8 >> 4) & 3];
		uintptr_t L_10 = L_6;
		uint32_t* L_11 = V_1;
		int32_t L_12 = ___1_imm8;
		int32_t L_13 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(((int32_t)(L_12>>4))&3))), 4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)L_13;
		// dptr[3] = aptr[(imm8 >> 6) & 3];
		uint32_t* L_14 = V_1;
		int32_t L_15 = ___1_imm8;
		int32_t L_16 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(((int32_t)(L_15>>6))&3))), 4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)L_16;
		// return dst;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_0;
		return L_17;
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
// System.Void Unity.Burst.CompilerServices.AssumeRangeAttribute::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssumeRangeAttribute__ctor_m079EDF7E5EEC31A177E1B9825784AB0C8192ECE7 (AssumeRangeAttribute_t06ACC8EEDB5AB2CE78FDE39A4F36B674A1CE06CA* __this, int64_t ___0_min, int64_t ___1_max, const RuntimeMethod* method) 
{
	{
		// public AssumeRangeAttribute(long min, long max) { }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public AssumeRangeAttribute(long min, long max) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mFC4C13A636FAF57510757D42EA1017C1A3FA6580_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m62685CD0A4F258FB8779A37BC01DAABB83DFD465_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m0EC577635F04EAB0185051CF6DF2EF0F76127B1F_inline (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mE10DF1EAAF0A56906D9784498FD48EAC1B012CD0_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->____enableBurstCompilation_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m8500610C2E650CFE58411EAD12DEE4F5F49C30B4_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BurstCompileAttribute_get_Options_mDE5DC6437C7EA21CD635F1C1C92E3BB3F3113B09_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_mEC956014E83B4671F431159FE7D1DDD6BE5BC91E_inline (BurstCompileAttribute_t35957F7418CF3B99A40C9E1C66CD3C56094A2C9D* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m073BEAA6F0BA3EA5F42853CE2BB33681D6274C69_inline (BurstCompilerOptions_t5F93118F305E1B0C950C6F9AF8BCA74033DA01C9* __this, const RuntimeMethod* method) 
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}

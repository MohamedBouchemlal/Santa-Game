#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C (void);
// 0x00000003 System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m52D3F12472A2BBC5A28D2F4B5011B19D2E36AC61 (void);
// 0x00000004 System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_mEB18420309DAA2CC710BA123C6996C9FB6FC3798 (void);
// 0x00000005 System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mBEB6E6FDC334118DB679CF2619EBB3FF4FDD7FB5 (void);
// 0x00000006 System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_mD2A9A49DFC8CBDC39F27E2749048ABC91E124519 (void);
// 0x00000007 Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_mAD212C1A7F5295C8987A6C9D7F81E8FF42E0A3BF (void);
// 0x00000008 System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_mF4F0B8CE7B0293504FA12A6F9C4ACFF28B59FF79 (void);
// 0x00000009 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m24A6A4EF594F8909B5677C94C4788F365E02E7F9 (void);
// 0x0000000A System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_m3E94344CB4CD852C9427FE9394EBE4EC36BFEEA1 (void);
// 0x0000000B System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53 (void);
// 0x0000000C System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2 (void);
// 0x0000000D Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63 (void);
// 0x0000000E System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1 (void);
// 0x0000000F Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (void);
// 0x00000010 System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F (void);
// 0x00000011 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (void);
// 0x00000012 Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (void);
// 0x00000013 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (void);
// 0x00000014 System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A (void);
// 0x00000015 System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7 (void);
// 0x00000016 System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08 (void);
// 0x00000017 System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633 (void);
// 0x00000018 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (void);
// 0x00000019 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED (void);
// 0x0000001A System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225 (void);
// 0x0000001B System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558 (void);
// 0x0000001C System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234 (void);
// 0x0000001D System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB (void);
// 0x0000001E System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2 (void);
// 0x0000001F System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000097EU24PostfixBurstDelegate__ctor_m4E3868C8A411DAF57EF8A9D97631E120C2DC6EEE (void);
// 0x00000020 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24PostfixBurstDelegate_Invoke_m324F6448CF4FE9CF56BAB3979C72CD5CE5BE4D70 (void);
// 0x00000021 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_m6AF180EC22A4927E094D972F89051FAFC8BDF1C3 (void);
// 0x00000022 System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointer()
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointer_m4D2948869CAA0149DCB01A4315F0DFC40E219D1D (void);
// 0x00000023 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Constructor()
extern void Try_0000097EU24BurstDirectCall_Constructor_m8FD87B838F183CE09AB64A062D7D78C93C424608 (void);
// 0x00000024 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Initialize()
extern void Try_0000097EU24BurstDirectCall_Initialize_m2D23B74BCC409B0C57771D57257370594D5497E0 (void);
// 0x00000025 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::.cctor()
extern void Try_0000097EU24BurstDirectCall__cctor_m6D9E803E60BC0C4540EB3EDBE1651533D79E0FCC (void);
// 0x00000026 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24BurstDirectCall_Invoke_m565A2C7B059B9E1E870EBC965029DF37E95078BE (void);
// 0x00000027 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612 (void);
// 0x00000028 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD (void);
// 0x00000029 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB (void);
// 0x0000002A System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912 (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA (void);
// 0x0000002C System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000098CU24PostfixBurstDelegate__ctor_m9E6F58E9EB432438802BB51EC7BE4D5D773B6992 (void);
// 0x0000002D System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24PostfixBurstDelegate_Invoke_mDE7805BCAD841995771EE5D737C0F50BA4641218 (void);
// 0x0000002E System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m8FB249CBDAA01BA8D8AC85D9D22498688B0E92CA (void);
// 0x0000002F System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointer()
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointer_mF3FA5FCB8479F11C4B39D2552937D02FAE46A1B8 (void);
// 0x00000030 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Constructor()
extern void Try_0000098CU24BurstDirectCall_Constructor_mE725F91017185E00AF7AA204A918C09DFBD16BC0 (void);
// 0x00000031 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Initialize()
extern void Try_0000098CU24BurstDirectCall_Initialize_m87A200D4BEB001C8D77079AD352265490E07794F (void);
// 0x00000032 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::.cctor()
extern void Try_0000098CU24BurstDirectCall__cctor_m1F66E6693EA996C2DCCF5A5F6B0497A25E2EFAD6 (void);
// 0x00000033 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24BurstDirectCall_Invoke_m43A052ACB256E86A7614CB4817BC28D72FD8F5ED (void);
// 0x00000034 T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x00000035 System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_mCA16889126B2ED5EF69666F8B0376FCC8834FCE1 (void);
// 0x00000036 System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_mE3BC99DF4AF7BC63DE01424848BDC790B53500BA (void);
// 0x00000037 System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264 (void);
// 0x00000038 System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906 (void);
// 0x00000039 System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA (void);
// 0x0000003A System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827 (void);
// 0x0000003B System.Int32 Unity.Collections.CollectionHelper::Align(System.Int32,System.Int32)
extern void CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (void);
// 0x0000003C System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_mFB14DD4BA7288CEDF90E514A9397FB9C27E55293 (void);
// 0x0000003D System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1 (void);
// 0x0000003E System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x0000003F System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x00000040 System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x00000041 System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x00000042 System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x00000043 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000044 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000045 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000046 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000047 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000048 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000049 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000004A System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000004B System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000004C System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000004D System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x0000004E System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000050 System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x00000051 System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x00000052 System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x00000053 System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x00000054 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000055 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000056 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000057 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000058 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000059 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000005A System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000005B System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000005C System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000005D System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000005E System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x0000005F System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000060 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000061 System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x00000062 System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x00000063 System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x00000064 System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x00000065 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000066 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000067 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000068 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000069 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000006A System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000006B System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006C System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006D System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000006E System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000006F System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x00000070 System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000071 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000072 System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x00000073 System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x00000074 System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x00000075 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x00000076 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000077 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000078 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000079 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000007A System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007B System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007C System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000007D System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000007E System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000007F System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000080 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x00000081 System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000082 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000083 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x00000084 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x00000085 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x00000086 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x00000087 System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x00000088 System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x00000089 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000008A System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000008B System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000008C System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000008D System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000008E System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000008F System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000090 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000091 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000092 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000093 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x00000094 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000095 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000096 System.Void Unity.Collections.ListExtensions::RemoveAtSwapBack(System.Collections.Generic.List`1<T>,System.Int32)
// 0x00000097 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (void);
// 0x00000098 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_m09F6EA89F368ED2C9E5EC5EA60C894C4434F4FD1 (void);
// 0x00000099 System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000009A System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m7651BFF84F5AEFA592FEE86C834A85C373DDC126 (void);
// 0x0000009B System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_mB51497D583399092F23AA773ABB64F0780610D82 (void);
// 0x0000009C System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void);
// 0x0000009D T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000009E System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000009F System.Void Unity.Collections.NativeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x000000A0 System.Int32 Unity.Collections.NativeHashMap`2::Count()
// 0x000000A1 System.Boolean Unity.Collections.NativeHashMap`2::TryAdd(TKey,TValue)
// 0x000000A2 System.Boolean Unity.Collections.NativeHashMap`2::Remove(TKey)
// 0x000000A3 System.Boolean Unity.Collections.NativeHashMap`2::ContainsKey(TKey)
// 0x000000A4 TValue Unity.Collections.NativeHashMap`2::get_Item(TKey)
// 0x000000A5 System.Void Unity.Collections.NativeHashMap`2::set_Item(TKey,TValue)
// 0x000000A6 System.Boolean Unity.Collections.NativeHashMap`2::get_IsCreated()
// 0x000000A7 System.Void Unity.Collections.NativeHashMap`2::Dispose()
// 0x000000A8 System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.NativeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x000000A9 System.Collections.IEnumerator Unity.Collections.NativeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x000000AA System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7 (void);
// 0x000000AB System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A (void);
// 0x000000AC System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x000000AD T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x000000AE System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595 (void);
// 0x000000AF System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F (void);
// 0x000000B0 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED (void);
// 0x000000B1 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35 (void);
// 0x000000B2 System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8 (void);
// 0x000000B3 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F (void);
// 0x000000B4 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069 (void);
// 0x000000B5 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F (void);
// 0x000000B6 System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10 (void);
// 0x000000B7 System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC (void);
// 0x000000B8 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_000006E6U24PostfixBurstDelegate__ctor_mA295EC796EC1F185B3169F07893F684A865565C1 (void);
// 0x000000B9 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24PostfixBurstDelegate_Invoke_m55694249E8A0556322798E88394271A1F173150B (void);
// 0x000000BA System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_m1B3F8DD7B28BF2F5F17B13F20E3143119FF635FA (void);
// 0x000000BB System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointer()
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointer_m4E7AEF80846D3FDA028F59DDCAFA2B9D16221D58 (void);
// 0x000000BC System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Constructor()
extern void Try_000006E6U24BurstDirectCall_Constructor_m4069614047B91CE4D9D5E6F6EA146A491DCB16BA (void);
// 0x000000BD System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Initialize()
extern void Try_000006E6U24BurstDirectCall_Initialize_m69C16A383B9323977377D5C1DC99B033C89FF54E (void);
// 0x000000BE System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::.cctor()
extern void Try_000006E6U24BurstDirectCall__cctor_m533758B0BD60C9DD2E2CE71C897C48BAB1C9C56C (void);
// 0x000000BF System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24BurstDirectCall_Invoke_m7B90D503373C6B87DD499837E4800AF754714B13 (void);
// 0x000000C0 System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_mCAEEE715FCB699CA2F1B947BCD252AA0F87D2B15 (void);
// 0x000000C1 System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_m64D8B68219EA3E164A61D2001E0969263CF098CE (void);
// 0x000000C2 System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_mD57A48AB8FB3471A923F64F7C8B52FF8538E791D (void);
// 0x000000C3 System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_mBB4B8AAAA2DC7E6B1350597687C11B82E81CEF06 (void);
// 0x000000C4 System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_m9950702E864DCCD9B8DEAAE23E7CBB5E79D4AC62 (void);
// 0x000000C5 System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_mED9958D31B54E0E0666AAD34A52DE7CDEB802E6F (void);
// 0x000000C6 Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m811AB95294FBBC0F17A5358D0A22669691CE3633 (void);
// 0x000000C7 System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_mD275A5EFD8727CDE8B8E280D4A5D5B82D5E3B195 (void);
// 0x000000C8 System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_m79CC2011BF16363F2338D61BE43E99E6467A9437 (void);
// 0x000000C9 System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m9210E9379305FC38A6D69C698F6E1A30013BC4F5 (void);
// 0x000000CA System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_mF4245CDE1C4AF6B1CC8F57AAE0DA8C7E04673CFC (void);
// 0x000000CB System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_mF59DCB5142027D151F52C7748BFA28C32B3B8F38 (void);
// 0x000000CC System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_m059990B780566C6F04C66700B2BE7817B4FA2F18 (void);
// 0x000000CD System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_mDEB8D0C149D943295B8A3049A437578BE879BED8 (void);
// 0x000000CE System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_mB01ADB1934EDFE8FE3B2AAB13DA6884EB1133A14 (void);
// 0x000000CF System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m9181A3A8DBE8DBEFF1B730ECC9A9AA5E93110F1B (void);
// 0x000000D0 System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_m3D28C5486CC42D31D2D832F40DEFE1A7CF508CA5 (void);
// 0x000000D1 System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mFADF15092DA5379116D3FCCFC4238ADBF48D85D7 (void);
// 0x000000D2 System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_mA46D6E8E1BA4613A50B56C8536B0DA3F50437137 (void);
// 0x000000D3 System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64LongU24BurstManaged_m71E36BBD116CCA46ED23162F80B08D3B2F782B4D (void);
// 0x000000D4 System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128LongU24BurstManaged_m961A07284DAB6ADFF52EB4287E9D105AB971FDF6 (void);
// 0x000000D5 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash64Long_0000071DU24PostfixBurstDelegate__ctor_mAA816B552583BBF0345F3BF9E10146D2BB7F75F4 (void);
// 0x000000D6 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mA703A2BD646351C6FA75259F26F12BC2D9D70BFF (void);
// 0x000000D7 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m7A4CA1217A64D411ED07D1D3A72E6BD5E0C927FE (void);
// 0x000000D8 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointer()
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_m37B0865B8DABAEA1D28D39C36CC2F229EEC54267 (void);
// 0x000000D9 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Constructor()
extern void Hash64Long_0000071DU24BurstDirectCall_Constructor_m1A7B2D63B8EC9BA41ED9BBE30618FAEA9731B3DE (void);
// 0x000000DA System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Initialize()
extern void Hash64Long_0000071DU24BurstDirectCall_Initialize_m995C925DC5918C21563F4FB1B3466A2465020578 (void);
// 0x000000DB System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::.cctor()
extern void Hash64Long_0000071DU24BurstDirectCall__cctor_mD6287194F5736004328B9FA8B9B4C2AC479D9B29 (void);
// 0x000000DC System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24BurstDirectCall_Invoke_mC3A346DEA4D298905A0A1E69BF23B9F04DA41226 (void);
// 0x000000DD System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash128Long_00000724U24PostfixBurstDelegate__ctor_mA70726DF6285E514E02A2874991DCE8560B283D5 (void);
// 0x000000DE System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m90B7C2AED7E18A0776F50E22F830E4E4DBD154CA (void);
// 0x000000DF System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m7E8D0F29A949D77F8911359791501F3652DAE050 (void);
// 0x000000E0 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointer()
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m1B1F6B1005561D04A9C8F5F24DBCD98C83B971CC (void);
// 0x000000E1 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Constructor()
extern void Hash128Long_00000724U24BurstDirectCall_Constructor_mEAF80A4054770022CC3376F289460FF5C628CB24 (void);
// 0x000000E2 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Initialize()
extern void Hash128Long_00000724U24BurstDirectCall_Initialize_m3754CC927F2B00E853721D2A50D2E70662A6EF2C (void);
// 0x000000E3 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::.cctor()
extern void Hash128Long_00000724U24BurstDirectCall__cctor_mF7C0DE50ADCDA3F9CF7CF4B00CD72F5BB4AC7506 (void);
// 0x000000E4 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24BurstDirectCall_Invoke_mE7F31F7F2047C671537BEB603CDEF312ABCBC345 (void);
// 0x000000E5 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetBucketSize(System.Int32)
extern void UnsafeHashMapData_GetBucketSize_m17A5F68A59D412D436867D3C5F0DE92C0A618E66 (void);
// 0x000000E6 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GrowCapacity(System.Int32)
extern void UnsafeHashMapData_GrowCapacity_m9F5FA7B8596A7D1F437808D889FDBA7F857EEB64 (void);
// 0x000000E7 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::AllocateHashMap(System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*&)
// 0x000000E8 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::ReallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,System.Int32,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000E9 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::DeallocateHashMap(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void UnsafeHashMapData_DeallocateHashMap_mB18705656928CE3FFF2F3EFD079F7AF719F03130 (void);
// 0x000000EA System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::CalculateDataSize(System.Int32,System.Int32,System.Int32&,System.Int32&,System.Int32&)
// 0x000000EB System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData::GetCount(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
extern void UnsafeHashMapData_GetCount_m9E897C5011779A3FF8B21473CE767A83393461C7 (void);
// 0x000000EC System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Clear(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*)
// 0x000000ED System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryAdd(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue,System.Boolean,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000EE System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::Remove(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,System.Boolean)
// 0x000000EF System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetFirstValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TKey,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x000000F0 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::TryGetNextValueAtomic(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,TValue&,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&)
// 0x000000F1 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMapBase`2::SetValue(Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData*,Unity.Collections.NativeMultiHashMapIterator`1<TKey>&,TValue&)
// 0x000000F2 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000F3 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Count()
// 0x000000F4 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Clear()
// 0x000000F5 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryAdd(TKey,TValue)
// 0x000000F6 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Remove(TKey)
// 0x000000F7 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::TryGetValue(TKey,TValue&)
// 0x000000F8 System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::ContainsKey(TKey)
// 0x000000F9 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::set_Item(TKey,TValue)
// 0x000000FA System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::get_IsCreated()
// 0x000000FB System.Void Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::Dispose()
// 0x000000FC System.Collections.Generic.IEnumerator`1<Unity.Collections.LowLevel.Unsafe.KeyValue`2<TKey,TValue>> Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator()
// 0x000000FD System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::System.Collections.IEnumerable.GetEnumerator()
// 0x000000FE System.Void $BurstDirectCallInitializer::Initialize()
extern void U24BurstDirectCallInitializer_Initialize_mBB7299DE1F1DF732C60394307234ED45AE14AD82 (void);
static Il2CppMethodPointer s_methodPointers[254] = 
{
	EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404,
	IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C,
	AllocatorManager_CheckDelegate_m52D3F12472A2BBC5A28D2F4B5011B19D2E36AC61,
	AllocatorManager_UseDelegate_mEB18420309DAA2CC710BA123C6996C9FB6FC3798,
	AllocatorManager_allocate_block_mBEB6E6FDC334118DB679CF2619EBB3FF4FDD7FB5,
	AllocatorManager_forward_mono_allocate_block_mD2A9A49DFC8CBDC39F27E2749048ABC91E124519,
	AllocatorManager_LegacyOf_mAD212C1A7F5295C8987A6C9D7F81E8FF42E0A3BF,
	AllocatorManager_TryLegacy_mF4F0B8CE7B0293504FA12A6F9C4ACFF28B59FF79,
	AllocatorManager_Try_m24A6A4EF594F8909B5677C94C4788F365E02E7F9,
	AllocatorManager__cctor_m3E94344CB4CD852C9427FE9394EBE4EC36BFEEA1,
	TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53,
	TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2,
	AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63,
	AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1,
	AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D,
	AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F,
	AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2,
	AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF,
	AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3,
	Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A,
	Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7,
	Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08,
	Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633,
	Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F,
	Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED,
	Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225,
	StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558,
	StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234,
	StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB,
	StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2,
	Try_0000097EU24PostfixBurstDelegate__ctor_m4E3868C8A411DAF57EF8A9D97631E120C2DC6EEE,
	Try_0000097EU24PostfixBurstDelegate_Invoke_m324F6448CF4FE9CF56BAB3979C72CD5CE5BE4D70,
	Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_m6AF180EC22A4927E094D972F89051FAFC8BDF1C3,
	Try_0000097EU24BurstDirectCall_GetFunctionPointer_m4D2948869CAA0149DCB01A4315F0DFC40E219D1D,
	Try_0000097EU24BurstDirectCall_Constructor_m8FD87B838F183CE09AB64A062D7D78C93C424608,
	Try_0000097EU24BurstDirectCall_Initialize_m2D23B74BCC409B0C57771D57257370594D5497E0,
	Try_0000097EU24BurstDirectCall__cctor_m6D9E803E60BC0C4540EB3EDBE1651533D79E0FCC,
	Try_0000097EU24BurstDirectCall_Invoke_m565A2C7B059B9E1E870EBC965029DF37E95078BE,
	SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612,
	SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD,
	SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB,
	SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912,
	SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA,
	Try_0000098CU24PostfixBurstDelegate__ctor_m9E6F58E9EB432438802BB51EC7BE4D5D773B6992,
	Try_0000098CU24PostfixBurstDelegate_Invoke_mDE7805BCAD841995771EE5D737C0F50BA4641218,
	Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m8FB249CBDAA01BA8D8AC85D9D22498688B0E92CA,
	Try_0000098CU24BurstDirectCall_GetFunctionPointer_mF3FA5FCB8479F11C4B39D2552937D02FAE46A1B8,
	Try_0000098CU24BurstDirectCall_Constructor_mE725F91017185E00AF7AA204A918C09DFBD16BC0,
	Try_0000098CU24BurstDirectCall_Initialize_m87A200D4BEB001C8D77079AD352265490E07794F,
	Try_0000098CU24BurstDirectCall__cctor_m1F66E6693EA996C2DCCF5A5F6B0497A25E2EFAD6,
	Try_0000098CU24BurstDirectCall_Invoke_m43A052ACB256E86A7614CB4817BC28D72FD8F5ED,
	NULL,
	TableEntry__cctor_mCA16889126B2ED5EF69666F8B0376FCC8834FCE1,
	Managed__cctor_mE3BC99DF4AF7BC63DE01424848BDC790B53500BA,
	CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264,
	BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906,
	BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA,
	NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827,
	CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F,
	CollectionHelper_Hash_mFB14DD4BA7288CEDF90E514A9397FB9C27E55293,
	CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5,
	Unmanaged_Free_m09F6EA89F368ED2C9E5EC5EA60C894C4434F4FD1,
	NULL,
	Array_IsCustom_m7651BFF84F5AEFA592FEE86C834A85C373DDC126,
	Array_CustomResize_mB51497D583399092F23AA773ABB64F0780610D82,
	Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7,
	Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A,
	NULL,
	NULL,
	RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595,
	RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F,
	RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED,
	RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35,
	RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8,
	MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F,
	MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069,
	MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F,
	MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10,
	MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC,
	Try_000006E6U24PostfixBurstDelegate__ctor_mA295EC796EC1F185B3169F07893F684A865565C1,
	Try_000006E6U24PostfixBurstDelegate_Invoke_m55694249E8A0556322798E88394271A1F173150B,
	Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_m1B3F8DD7B28BF2F5F17B13F20E3143119FF635FA,
	Try_000006E6U24BurstDirectCall_GetFunctionPointer_m4E7AEF80846D3FDA028F59DDCAFA2B9D16221D58,
	Try_000006E6U24BurstDirectCall_Constructor_m4069614047B91CE4D9D5E6F6EA146A491DCB16BA,
	Try_000006E6U24BurstDirectCall_Initialize_m69C16A383B9323977377D5C1DC99B033C89FF54E,
	Try_000006E6U24BurstDirectCall__cctor_m533758B0BD60C9DD2E2CE71C897C48BAB1C9C56C,
	Try_000006E6U24BurstDirectCall_Invoke_m7B90D503373C6B87DD499837E4800AF754714B13,
	xxHash3_Avx2HashLongInternalLoop_mCAEEE715FCB699CA2F1B947BCD252AA0F87D2B15,
	xxHash3_Avx2ScrambleAcc_m64D8B68219EA3E164A61D2001E0969263CF098CE,
	xxHash3_Avx2Accumulate_mD57A48AB8FB3471A923F64F7C8B52FF8538E791D,
	xxHash3_Avx2Accumulate512_mBB4B8AAAA2DC7E6B1350597687C11B82E81CEF06,
	xxHash3_Hash64Long_m9950702E864DCCD9B8DEAAE23E7CBB5E79D4AC62,
	xxHash3_Hash128Long_mED9958D31B54E0E0666AAD34A52DE7CDEB802E6F,
	xxHash3_ToUint4_m811AB95294FBBC0F17A5358D0A22669691CE3633,
	xxHash3_Read64LE_mD275A5EFD8727CDE8B8E280D4A5D5B82D5E3B195,
	xxHash3_Write64LE_m79CC2011BF16363F2338D61BE43E99E6467A9437,
	xxHash3_Mul32To64_m9210E9379305FC38A6D69C698F6E1A30013BC4F5,
	xxHash3_XorShift64_mF4245CDE1C4AF6B1CC8F57AAE0DA8C7E04673CFC,
	xxHash3_Mul128Fold64_mF59DCB5142027D151F52C7748BFA28C32B3B8F38,
	xxHash3_Avalanche_m059990B780566C6F04C66700B2BE7817B4FA2F18,
	xxHash3_Mix2Acc_mDEB8D0C149D943295B8A3049A437578BE879BED8,
	xxHash3_MergeAcc_mB01ADB1934EDFE8FE3B2AAB13DA6884EB1133A14,
	xxHash3_DefaultHashLongInternalLoop_m9181A3A8DBE8DBEFF1B730ECC9A9AA5E93110F1B,
	xxHash3_DefaultAccumulate_m3D28C5486CC42D31D2D832F40DEFE1A7CF508CA5,
	xxHash3_DefaultAccumulate512_mFADF15092DA5379116D3FCCFC4238ADBF48D85D7,
	xxHash3_DefaultScrambleAcc_mA46D6E8E1BA4613A50B56C8536B0DA3F50437137,
	xxHash3_Hash64LongU24BurstManaged_m71E36BBD116CCA46ED23162F80B08D3B2F782B4D,
	xxHash3_Hash128LongU24BurstManaged_m961A07284DAB6ADFF52EB4287E9D105AB971FDF6,
	Hash64Long_0000071DU24PostfixBurstDelegate__ctor_mAA816B552583BBF0345F3BF9E10146D2BB7F75F4,
	Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mA703A2BD646351C6FA75259F26F12BC2D9D70BFF,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m7A4CA1217A64D411ED07D1D3A72E6BD5E0C927FE,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_m37B0865B8DABAEA1D28D39C36CC2F229EEC54267,
	Hash64Long_0000071DU24BurstDirectCall_Constructor_m1A7B2D63B8EC9BA41ED9BBE30618FAEA9731B3DE,
	Hash64Long_0000071DU24BurstDirectCall_Initialize_m995C925DC5918C21563F4FB1B3466A2465020578,
	Hash64Long_0000071DU24BurstDirectCall__cctor_mD6287194F5736004328B9FA8B9B4C2AC479D9B29,
	Hash64Long_0000071DU24BurstDirectCall_Invoke_mC3A346DEA4D298905A0A1E69BF23B9F04DA41226,
	Hash128Long_00000724U24PostfixBurstDelegate__ctor_mA70726DF6285E514E02A2874991DCE8560B283D5,
	Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m90B7C2AED7E18A0776F50E22F830E4E4DBD154CA,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m7E8D0F29A949D77F8911359791501F3652DAE050,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m1B1F6B1005561D04A9C8F5F24DBCD98C83B971CC,
	Hash128Long_00000724U24BurstDirectCall_Constructor_mEAF80A4054770022CC3376F289460FF5C628CB24,
	Hash128Long_00000724U24BurstDirectCall_Initialize_m3754CC927F2B00E853721D2A50D2E70662A6EF2C,
	Hash128Long_00000724U24BurstDirectCall__cctor_mF7C0DE50ADCDA3F9CF7CF4B00CD72F5BB4AC7506,
	Hash128Long_00000724U24BurstDirectCall_Invoke_mE7F31F7F2047C671537BEB603CDEF312ABCBC345,
	UnsafeHashMapData_GetBucketSize_m17A5F68A59D412D436867D3C5F0DE92C0A618E66,
	UnsafeHashMapData_GrowCapacity_m9F5FA7B8596A7D1F437808D889FDBA7F857EEB64,
	NULL,
	NULL,
	UnsafeHashMapData_DeallocateHashMap_mB18705656928CE3FFF2F3EFD079F7AF719F03130,
	NULL,
	UnsafeHashMapData_GetCount_m9E897C5011779A3FF8B21473CE767A83393461C7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U24BurstDirectCallInitializer_Initialize_mBB7299DE1F1DF732C60394307234ED45AE14AD82,
};
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk (void);
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk (void);
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk (void);
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk (void);
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk (void);
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk (void);
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk (void);
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk (void);
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk (void);
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk (void);
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk (void);
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk (void);
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk (void);
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk (void);
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk (void);
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk (void);
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[28] = 
{
	{ 0x0600000D, AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk },
	{ 0x0600000E, AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk },
	{ 0x06000010, AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk },
	{ 0x06000011, AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk },
	{ 0x06000012, AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk },
	{ 0x06000013, AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk },
	{ 0x06000014, Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk },
	{ 0x06000015, Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk },
	{ 0x06000016, Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk },
	{ 0x06000017, Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk },
	{ 0x06000018, Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk },
	{ 0x06000019, Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk },
	{ 0x0600001A, Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk },
	{ 0x0600001B, StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk },
	{ 0x0600001D, StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk },
	{ 0x06000027, SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk },
	{ 0x06000028, SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk },
	{ 0x0600002A, SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk },
	{ 0x060000AA, Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk },
	{ 0x060000AB, Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk },
	{ 0x060000AE, RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk },
	{ 0x060000AF, RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk },
	{ 0x060000B0, RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk },
	{ 0x060000B3, MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk },
	{ 0x060000B4, MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk },
	{ 0x060000B5, MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk },
	{ 0x060000B6, MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk },
	{ 0x060000B7, MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk },
};
static const int32_t s_InvokerIndices[254] = 
{
	4659,
	4659,
	7277,
	7388,
	7019,
	6647,
	7037,
	7019,
	7019,
	7436,
	2103,
	1479,
	4470,
	4659,
	7317,
	4525,
	4675,
	4525,
	4659,
	4659,
	4526,
	4526,
	4525,
	3738,
	4659,
	4525,
	3093,
	6430,
	4659,
	6430,
	2103,
	1479,
	7277,
	7403,
	7436,
	7436,
	7436,
	6430,
	4525,
	3093,
	6430,
	4659,
	6430,
	2103,
	1479,
	7277,
	7403,
	7436,
	7436,
	7436,
	6430,
	0,
	7436,
	7436,
	4659,
	3756,
	4659,
	4659,
	6428,
	6603,
	7026,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5708,
	6657,
	0,
	6949,
	4881,
	4881,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4659,
	4659,
	0,
	0,
	4659,
	4659,
	3093,
	6430,
	6430,
	3739,
	4659,
	4659,
	3093,
	2671,
	2103,
	1479,
	7277,
	7403,
	7436,
	7436,
	7436,
	6430,
	4940,
	6647,
	4939,
	5565,
	5551,
	5202,
	6789,
	7226,
	6654,
	6611,
	6612,
	6613,
	7238,
	5975,
	5973,
	4940,
	4939,
	5199,
	6647,
	5551,
	5202,
	2103,
	697,
	7277,
	7403,
	7436,
	7436,
	7436,
	5551,
	2103,
	373,
	7277,
	7403,
	7436,
	7436,
	7436,
	5202,
	7026,
	7026,
	0,
	0,
	6657,
	0,
	7019,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7436,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x0600001C, 13,  (void**)&StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234_RuntimeMethod_var, 0 },
	{ 0x0600001E, 14,  (void**)&StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2_RuntimeMethod_var, 0 },
	{ 0x06000029, 11,  (void**)&SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB_RuntimeMethod_var, 0 },
	{ 0x0600002B, 12,  (void**)&SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA_RuntimeMethod_var, 0 },
	{ 0x060000B1, 4,  (void**)&RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35_RuntimeMethod_var, 0 },
	{ 0x060000B2, 5,  (void**)&RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[17] = 
{
	{ 0x02000013, { 0, 2 } },
	{ 0x0200001C, { 3, 25 } },
	{ 0x0200001E, { 28, 25 } },
	{ 0x02000020, { 53, 25 } },
	{ 0x02000022, { 78, 25 } },
	{ 0x02000024, { 103, 27 } },
	{ 0x02000030, { 138, 11 } },
	{ 0x02000034, { 149, 2 } },
	{ 0x02000040, { 160, 12 } },
	{ 0x02000042, { 172, 8 } },
	{ 0x0600003E, { 2, 1 } },
	{ 0x06000096, { 130, 5 } },
	{ 0x06000099, { 135, 1 } },
	{ 0x0600009D, { 136, 2 } },
	{ 0x060000E7, { 151, 1 } },
	{ 0x060000E8, { 152, 6 } },
	{ 0x060000EA, { 158, 2 } },
};
extern const uint32_t g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34;
extern const uint32_t g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m224DE97901461C7EFDC5FE9F0AC057A7815ACC92;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184_mA7BC1C40589A53585C6F00F43E6B2FF9C40DBE3B;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m1CA32CEFE1BB9A05D042A6414E2C873CFDDB24FA;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_mF9274D4AE2A751E849E75F7FF15624553335C9E3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F;
extern const uint32_t g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_m9AEE49A539D4229D6C082363CC4750BC3C7BD959;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBEB73D718598A132E3FB38993715F6580F14AAF4;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906;
extern const uint32_t g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mDFFBC1AB4195A6724110DE5980F5E23E6FFBD712;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m69D18CFEBEB2907DF3FAC8CA19E77BE6A657316C;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67;
extern const uint32_t g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE;
extern const uint32_t g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFAB9277A26B57EEBBD96FBFF9A8E348CDF0F3695;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m84508C7415A499FE729E49407F30491D8BA1347B;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42;
extern const uint32_t g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mDF9CEBCF3A941F23B144FCD20FDA1D094151485F;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m866B91A370BB67C092A4B0E5D72A7734F2132F73;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m4521B626F59BBB2321D000869DFCBDC991657E02;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m7E4C5808A41558EDB297D03CF1DE6FE52199AA57;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C;
extern const uint32_t g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6;
extern const uint32_t g_rgctx_List_1_t3C3472161975009365FA89E362C00F350A3574EC;
extern const uint32_t g_rgctx_List_1_get_Count_mC830CB107208BAC234F1D476D41514101D1CD73A;
extern const uint32_t g_rgctx_List_1_get_Item_mF1605DA6443F202D086A404EC82C22C61A04D2CE;
extern const uint32_t g_rgctx_List_1_set_Item_m70A75236BF243BD49AE5630783B3BDA0E4BE3D26;
extern const uint32_t g_rgctx_List_1_RemoveAt_m16EFF24425503AC0D3D6E145C2B182E749D939A7;
extern const uint32_t g_rgctx_Array_Resize_TisT_tA7BC8A9B01B94F56CE3273E1C3F4463BAFDB2774_m40E5359FE293594F47DD50DDB1F2AD213B4A709A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD44E7FDD63803D509A5BB08B506B82CA121DF38A;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD999DEAF969B234226FD5F050A1A8DF99545F7FC;
extern const uint32_t g_rgctx_NativeHashMap_2__ctor_m477E96F08615F8EF61D599D2EF3406D24AF95BE2;
extern const uint32_t g_rgctx_UnsafeHashMap_2_tF3FE093304BF7E939999457F5E224165140D43D1;
extern const uint32_t g_rgctx_UnsafeHashMap_2__ctor_m42C2CD6C2AE9326BFF66FA507C04417FD8CBFC9A;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Count_m07B1716E932AB52E907A400D0BE3E70956DFB88D;
extern const uint32_t g_rgctx_UnsafeHashMap_2_TryAdd_m82D6EEBD6097A7DC5C5E9937FCD9F624F02E15A7;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Remove_mE89E84E11D60DCF3734EA38DD658FDB7A8A65AAE;
extern const uint32_t g_rgctx_UnsafeHashMap_2_ContainsKey_m00C7BED6B375F6C3819971EC61283F58BF182175;
extern const uint32_t g_rgctx_UnsafeHashMap_2_TryGetValue_m90448100C89F021A29C76F693FD8BC1DB8946E0F;
extern const uint32_t g_rgctx_UnsafeHashMap_2_set_Item_m7F2FD20F5B11024CCE78348A9CC58F8C943473E9;
extern const uint32_t g_rgctx_UnsafeHashMap_2_get_IsCreated_m392D5A9F9EBCFCC8EAD9D79F743FE09F0926A848;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Dispose_mC0C1DAD8C9D4E220484DAC753C1A40CB019DB9F4;
extern const uint32_t g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_m80B9E4D5EF4A9B36865D150DF2BAEA934AF4B721;
extern const uint32_t g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F;
extern const uint32_t g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_t17EF52075FE7CA15560F301DE64E24AF43EA4F19_TisTValue_tBE70E8EE37E320734C25647D0F2B7CF66DB91B7B_m7F82433F8ECB937C94A0FAA97605F8B8DC1891FB;
extern const uint32_t g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_m0F9FF1F554484D74178201235DFB11BF53A330D4;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_mD8181BC37B8E3A5AD60C1735D4A39D71B671B8B1;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m39A76C9B0B357A658674F1232E506CD56D37C717;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m83DC3D795D62AB43EAF6609FEB0032B85AD6E66C;
extern const uint32_t g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTValue_t9BEA98065AE85235E2502C5AB0E884FF03C5668F_m6658D3E9BFDC6692972806096D0F143B26CD391A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisTKey_t5F28BA1D306AB8FE2AB2CC71D717C5AEE8486A37_m20D9E73F25A80D1F7774C3A532F7293CAAC95E20;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m891CD2EBFDF79454075F9535E0F2391A485A0A7F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_t809E38EA5ABFD4D49660AB06422F98F857C0906A;
extern const uint32_t g_rgctx_UnsafeHashMapData_ReallocateHashMap_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mEC224ECD6DB5E7E62F714929AF508A4C6E8399AE;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m3DF15E715908753378C09947055FA017C869E1A0;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_m306DE1B20DB1836CC66599BD5481E597D4F864CE;
extern const uint32_t g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m292884B367F1D587D4881715B25D4F31509374A3;
extern const uint32_t g_rgctx_IEquatable_1_t230BC9DF3CC331AD0B7EB67722AF2C2474170EC0;
extern const Il2CppRGCTXConstrainedData g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_IEquatable_1_Equals_mE86769881C8CC395B52D9F9CA8E363EE1D857DA2;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetNextValueAtomic_mE01538BDEB8A97C70A5ED3E0C23BE6DD2346E576;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mDAFD4F9EF96D5299709CF4F978AAB092233CE927;
extern const uint32_t g_rgctx_UnsafeHashMapData_AllocateHashMap_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_TisTValue_t1811826E5E497EF68E35EF1EEBCA743E7CDB0003_mAC824AA05DC02873672ECCB1BCE2578F52F815DE;
extern const uint32_t g_rgctx_UnsafeHashMap_2_Clear_m9D40221AC7B584D82E611989EFC5E32D54ABBF8F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_Clear_mB442EA4307DDAC3DFFEBD74F323FA5518E53350F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_t62F134250F10223C807DAB4EACA0AD4809E0DF8C;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryAdd_m2FE941906C9E69169A4930B1ACC95EFCBA420FD1;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_Remove_m8147EFFB572F3E7962804F33CB317D07287E3AA7;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m08E1BC1E329FCA1586B4525A4D5B10C6E09B5B7F;
extern const uint32_t g_rgctx_UnsafeHashMapBase_2_SetValue_mA9A6DE16AF11EDA580A1979C36D168C3749AD051;
static const Il2CppRGCTXDefinition s_rgctxValues[180] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m224DE97901461C7EFDC5FE9F0AC057A7815ACC92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184_mA7BC1C40589A53585C6F00F43E6B2FF9C40DBE3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m1CA32CEFE1BB9A05D042A6414E2C873CFDDB24FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_mF9274D4AE2A751E849E75F7FF15624553335C9E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_m9AEE49A539D4229D6C082363CC4750BC3C7BD959 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mBEB73D718598A132E3FB38993715F6580F14AAF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_mDFFBC1AB4195A6724110DE5980F5E23E6FFBD712 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m69D18CFEBEB2907DF3FAC8CA19E77BE6A657316C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mFAB9277A26B57EEBBD96FBFF9A8E348CDF0F3695 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m84508C7415A499FE729E49407F30491D8BA1347B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mDF9CEBCF3A941F23B144FCD20FDA1D094151485F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m866B91A370BB67C092A4B0E5D72A7734F2132F73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m4521B626F59BBB2321D000869DFCBDC991657E02 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m7E4C5808A41558EDB297D03CF1DE6FE52199AA57 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t3C3472161975009365FA89E362C00F350A3574EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_mC830CB107208BAC234F1D476D41514101D1CD73A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_mF1605DA6443F202D086A404EC82C22C61A04D2CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_set_Item_m70A75236BF243BD49AE5630783B3BDA0E4BE3D26 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_RemoveAt_m16EFF24425503AC0D3D6E145C2B182E749D939A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Resize_TisT_tA7BC8A9B01B94F56CE3273E1C3F4463BAFDB2774_m40E5359FE293594F47DD50DDB1F2AD213B4A709A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD44E7FDD63803D509A5BB08B506B82CA121DF38A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t4439E68F64AF98A1F1E70993ACB3E0626E7A7954_mD999DEAF969B234226FD5F050A1A8DF99545F7FC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeHashMap_2__ctor_m477E96F08615F8EF61D599D2EF3406D24AF95BE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMap_2_tF3FE093304BF7E939999457F5E224165140D43D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2__ctor_m42C2CD6C2AE9326BFF66FA507C04417FD8CBFC9A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Count_m07B1716E932AB52E907A400D0BE3E70956DFB88D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_TryAdd_m82D6EEBD6097A7DC5C5E9937FCD9F624F02E15A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Remove_mE89E84E11D60DCF3734EA38DD658FDB7A8A65AAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_ContainsKey_m00C7BED6B375F6C3819971EC61283F58BF182175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_TryGetValue_m90448100C89F021A29C76F693FD8BC1DB8946E0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_set_Item_m7F2FD20F5B11024CCE78348A9CC58F8C943473E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_get_IsCreated_m392D5A9F9EBCFCC8EAD9D79F743FE09F0926A848 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Dispose_mC0C1DAD8C9D4E220484DAC753C1A40CB019DB9F4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_m80B9E4D5EF4A9B36865D150DF2BAEA934AF4B721 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_t17EF52075FE7CA15560F301DE64E24AF43EA4F19_TisTValue_tBE70E8EE37E320734C25647D0F2B7CF66DB91B7B_m7F82433F8ECB937C94A0FAA97605F8B8DC1891FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_CalculateDataSize_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_m0F9FF1F554484D74178201235DFB11BF53A330D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTValue_tE31A0268C733C505F35CBD443D14CFD991A47665_mD8181BC37B8E3A5AD60C1735D4A39D71B671B8B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m39A76C9B0B357A658674F1232E506CD56D37C717 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_m83DC3D795D62AB43EAF6609FEB0032B85AD6E66C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTValue_t9BEA98065AE85235E2502C5AB0E884FF03C5668F_m6658D3E9BFDC6692972806096D0F143B26CD391A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisTKey_t5F28BA1D306AB8FE2AB2CC71D717C5AEE8486A37_m20D9E73F25A80D1F7774C3A532F7293CAAC95E20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m891CD2EBFDF79454075F9535E0F2391A485A0A7F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMapBase_2_t809E38EA5ABFD4D49660AB06422F98F857C0906A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_ReallocateHashMap_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mEC224ECD6DB5E7E62F714929AF508A4C6E8399AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m3DF15E715908753378C09947055FA017C869E1A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_m306DE1B20DB1836CC66599BD5481E597D4F864CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_m292884B367F1D587D4881715B25D4F31509374A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEquatable_1_t230BC9DF3CC331AD0B7EB67722AF2C2474170EC0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TKey_t5F9F3D500A3DB63490CA8579B30874975E456C2B_IEquatable_1_Equals_mE86769881C8CC395B52D9F9CA8E363EE1D857DA2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetNextValueAtomic_mE01538BDEB8A97C70A5ED3E0C23BE6DD2346E576 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisTValue_tAFA2E425E810A436A283BAD02D7F0BB9E9C72BBA_mDAFD4F9EF96D5299709CF4F978AAB092233CE927 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapData_AllocateHashMap_TisTKey_t9956810BF50C2A9F06E26DAA0F2BA3122F4B1E98_TisTValue_t1811826E5E497EF68E35EF1EEBCA743E7CDB0003_mAC824AA05DC02873672ECCB1BCE2578F52F815DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMap_2_Clear_m9D40221AC7B584D82E611989EFC5E32D54ABBF8F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_Clear_mB442EA4307DDAC3DFFEBD74F323FA5518E53350F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeHashMapBase_2_t62F134250F10223C807DAB4EACA0AD4809E0DF8C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryAdd_m2FE941906C9E69169A4930B1ACC95EFCBA420FD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_Remove_m8147EFFB572F3E7962804F33CB317D07287E3AA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_TryGetFirstValueAtomic_m08E1BC1E329FCA1586B4525A4D5B10C6E09B5B7F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeHashMapBase_2_SetValue_mA9A6DE16AF11EDA580A1979C36D168C3749AD051 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	254,
	s_methodPointers,
	28,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	17,
	s_rgctxIndices,
	180,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

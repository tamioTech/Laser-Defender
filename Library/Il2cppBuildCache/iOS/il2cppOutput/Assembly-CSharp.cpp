#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<WaveConfig>
struct List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// WaveConfig[]
struct WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// BackgroundScroller
struct BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DamageDealer
struct DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Shredder
struct Shredder_tB4C8A49CC1640133CC5439A03E2236D77DC9DDD8;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WaveConfig
struct WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1;
// enemyPathing
struct enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// EnemySpawner/<SpawnAllEnemiesInWave>d__5
struct U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4;
// EnemySpawner/<SpawnAllWaves>d__4
struct U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26;
// EnemySpawner/<Start>d__3
struct U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248;
// Player/<FireContinuously>d__20
struct U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisenemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A_m2E25909BA2EE2F8F56197AE28F6E6385ED52FDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4972DA385A5D70F06D60432A661E720635EDFEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAF23B53788FF4378EB454334302BACF73C67E9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireContinuouslyU3Ed__20_System_Collections_IEnumerator_Reset_m527A85C3701847454B0F2D6363FAC5ADF0C8DCF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnAllEnemiesInWaveU3Ed__5_System_Collections_IEnumerator_Reset_m74B5AE9D79463938745EF56851EE995A552E79E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mB66395B851EA4577C8171A94BBC9C8C377EF54D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m038F5F0243E8925A6165A04E6057C51511C0B78D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<WaveConfig>
struct  List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____items_1)); }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* get__items_1() const { return ____items_1; }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0_StaticFields, ____emptyArray_5)); }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// EnemySpawner/<SpawnAllEnemiesInWave>d__5
struct  U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner/<SpawnAllEnemiesInWave>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner/<SpawnAllEnemiesInWave>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WaveConfig EnemySpawner/<SpawnAllEnemiesInWave>d__5::waveConfig
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig_2;
	// System.Int32 EnemySpawner/<SpawnAllEnemiesInWave>d__5::<enemyCount>5__2
	int32_t ___U3CenemyCountU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waveConfig_2() { return static_cast<int32_t>(offsetof(U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4, ___waveConfig_2)); }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * get_waveConfig_2() const { return ___waveConfig_2; }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 ** get_address_of_waveConfig_2() { return &___waveConfig_2; }
	inline void set_waveConfig_2(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * value)
	{
		___waveConfig_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveConfig_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CenemyCountU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4, ___U3CenemyCountU3E5__2_3)); }
	inline int32_t get_U3CenemyCountU3E5__2_3() const { return ___U3CenemyCountU3E5__2_3; }
	inline int32_t* get_address_of_U3CenemyCountU3E5__2_3() { return &___U3CenemyCountU3E5__2_3; }
	inline void set_U3CenemyCountU3E5__2_3(int32_t value)
	{
		___U3CenemyCountU3E5__2_3 = value;
	}
};


// EnemySpawner/<SpawnAllWaves>d__4
struct  U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner/<SpawnAllWaves>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner/<SpawnAllWaves>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner/<SpawnAllWaves>d__4::<>4__this
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * ___U3CU3E4__this_2;
	// System.Int32 EnemySpawner/<SpawnAllWaves>d__4::<waveIndex>5__2
	int32_t ___U3CwaveIndexU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26, ___U3CU3E4__this_2)); }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwaveIndexU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26, ___U3CwaveIndexU3E5__2_3)); }
	inline int32_t get_U3CwaveIndexU3E5__2_3() const { return ___U3CwaveIndexU3E5__2_3; }
	inline int32_t* get_address_of_U3CwaveIndexU3E5__2_3() { return &___U3CwaveIndexU3E5__2_3; }
	inline void set_U3CwaveIndexU3E5__2_3(int32_t value)
	{
		___U3CwaveIndexU3E5__2_3 = value;
	}
};


// EnemySpawner/<Start>d__3
struct  U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner/<Start>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner/<Start>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner/<Start>d__3::<>4__this
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248, ___U3CU3E4__this_2)); }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Player/<FireContinuously>d__20
struct  U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3  : public RuntimeObject
{
public:
	// System.Int32 Player/<FireContinuously>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<FireContinuously>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<FireContinuously>d__20::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// WaveConfig
struct  WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.GameObject WaveConfig::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_4;
	// UnityEngine.GameObject WaveConfig::pathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pathPrefab_5;
	// System.Single WaveConfig::timeBetweenSpawns
	float ___timeBetweenSpawns_6;
	// System.Single WaveConfig::spawnRandomFactor
	float ___spawnRandomFactor_7;
	// System.Int32 WaveConfig::numberOfEnemies
	int32_t ___numberOfEnemies_8;
	// System.Single WaveConfig::moveSpeed
	float ___moveSpeed_9;

public:
	inline static int32_t get_offset_of_enemyPrefab_4() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___enemyPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_4() const { return ___enemyPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_4() { return &___enemyPrefab_4; }
	inline void set_enemyPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_pathPrefab_5() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___pathPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pathPrefab_5() const { return ___pathPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pathPrefab_5() { return &___pathPrefab_5; }
	inline void set_pathPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pathPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_6() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___timeBetweenSpawns_6)); }
	inline float get_timeBetweenSpawns_6() const { return ___timeBetweenSpawns_6; }
	inline float* get_address_of_timeBetweenSpawns_6() { return &___timeBetweenSpawns_6; }
	inline void set_timeBetweenSpawns_6(float value)
	{
		___timeBetweenSpawns_6 = value;
	}

	inline static int32_t get_offset_of_spawnRandomFactor_7() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___spawnRandomFactor_7)); }
	inline float get_spawnRandomFactor_7() const { return ___spawnRandomFactor_7; }
	inline float* get_address_of_spawnRandomFactor_7() { return &___spawnRandomFactor_7; }
	inline void set_spawnRandomFactor_7(float value)
	{
		___spawnRandomFactor_7 = value;
	}

	inline static int32_t get_offset_of_numberOfEnemies_8() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___numberOfEnemies_8)); }
	inline int32_t get_numberOfEnemies_8() const { return ___numberOfEnemies_8; }
	inline int32_t* get_address_of_numberOfEnemies_8() { return &___numberOfEnemies_8; }
	inline void set_numberOfEnemies_8(int32_t value)
	{
		___numberOfEnemies_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_9() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___moveSpeed_9)); }
	inline float get_moveSpeed_9() const { return ___moveSpeed_9; }
	inline float* get_address_of_moveSpeed_9() { return &___moveSpeed_9; }
	inline void set_moveSpeed_9(float value)
	{
		___moveSpeed_9 = value;
	}
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BackgroundScroller
struct  BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BackgroundScroller::backgroundScrollSpeed
	float ___backgroundScrollSpeed_4;
	// UnityEngine.Material BackgroundScroller::myMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___myMaterial_5;
	// UnityEngine.Vector2 BackgroundScroller::offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset_6;

public:
	inline static int32_t get_offset_of_backgroundScrollSpeed_4() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___backgroundScrollSpeed_4)); }
	inline float get_backgroundScrollSpeed_4() const { return ___backgroundScrollSpeed_4; }
	inline float* get_address_of_backgroundScrollSpeed_4() { return &___backgroundScrollSpeed_4; }
	inline void set_backgroundScrollSpeed_4(float value)
	{
		___backgroundScrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_myMaterial_5() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___myMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_myMaterial_5() const { return ___myMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_myMaterial_5() { return &___myMaterial_5; }
	inline void set_myMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___myMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___offset_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offset_6() const { return ___offset_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offset_6 = value;
	}
};


// DamageDealer
struct  DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 DamageDealer::damage
	int32_t ___damage_4;

public:
	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Enemy::health
	float ___health_4;
	// System.Single Enemy::shotCounter
	float ___shotCounter_5;
	// System.Single Enemy::minTimeBetweenShots
	float ___minTimeBetweenShots_6;
	// System.Single Enemy::maxTimeBetweenShots
	float ___maxTimeBetweenShots_7;
	// UnityEngine.GameObject Enemy::enemyLaserPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyLaserPrefab_8;
	// System.Single Enemy::enemyProjectileSpeed
	float ___enemyProjectileSpeed_9;
	// UnityEngine.GameObject Enemy::deathVFX
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathVFX_10;
	// System.Single Enemy::durationOfExplosion
	float ___durationOfExplosion_11;
	// UnityEngine.AudioClip Enemy::deathSFX
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___deathSFX_12;
	// System.Single Enemy::deathSoundVolume
	float ___deathSoundVolume_13;
	// UnityEngine.AudioClip Enemy::enemyShootSFX
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___enemyShootSFX_14;
	// System.Single Enemy::enemyShootSFXVolume
	float ___enemyShootSFXVolume_15;
	// UnityEngine.Coroutine Enemy::enemyFiringCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___enemyFiringCoroutine_16;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_shotCounter_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___shotCounter_5)); }
	inline float get_shotCounter_5() const { return ___shotCounter_5; }
	inline float* get_address_of_shotCounter_5() { return &___shotCounter_5; }
	inline void set_shotCounter_5(float value)
	{
		___shotCounter_5 = value;
	}

	inline static int32_t get_offset_of_minTimeBetweenShots_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___minTimeBetweenShots_6)); }
	inline float get_minTimeBetweenShots_6() const { return ___minTimeBetweenShots_6; }
	inline float* get_address_of_minTimeBetweenShots_6() { return &___minTimeBetweenShots_6; }
	inline void set_minTimeBetweenShots_6(float value)
	{
		___minTimeBetweenShots_6 = value;
	}

	inline static int32_t get_offset_of_maxTimeBetweenShots_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxTimeBetweenShots_7)); }
	inline float get_maxTimeBetweenShots_7() const { return ___maxTimeBetweenShots_7; }
	inline float* get_address_of_maxTimeBetweenShots_7() { return &___maxTimeBetweenShots_7; }
	inline void set_maxTimeBetweenShots_7(float value)
	{
		___maxTimeBetweenShots_7 = value;
	}

	inline static int32_t get_offset_of_enemyLaserPrefab_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyLaserPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyLaserPrefab_8() const { return ___enemyLaserPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyLaserPrefab_8() { return &___enemyLaserPrefab_8; }
	inline void set_enemyLaserPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyLaserPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyLaserPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_enemyProjectileSpeed_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyProjectileSpeed_9)); }
	inline float get_enemyProjectileSpeed_9() const { return ___enemyProjectileSpeed_9; }
	inline float* get_address_of_enemyProjectileSpeed_9() { return &___enemyProjectileSpeed_9; }
	inline void set_enemyProjectileSpeed_9(float value)
	{
		___enemyProjectileSpeed_9 = value;
	}

	inline static int32_t get_offset_of_deathVFX_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___deathVFX_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathVFX_10() const { return ___deathVFX_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathVFX_10() { return &___deathVFX_10; }
	inline void set_deathVFX_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathVFX_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathVFX_10), (void*)value);
	}

	inline static int32_t get_offset_of_durationOfExplosion_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___durationOfExplosion_11)); }
	inline float get_durationOfExplosion_11() const { return ___durationOfExplosion_11; }
	inline float* get_address_of_durationOfExplosion_11() { return &___durationOfExplosion_11; }
	inline void set_durationOfExplosion_11(float value)
	{
		___durationOfExplosion_11 = value;
	}

	inline static int32_t get_offset_of_deathSFX_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___deathSFX_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_deathSFX_12() const { return ___deathSFX_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_deathSFX_12() { return &___deathSFX_12; }
	inline void set_deathSFX_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___deathSFX_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathSFX_12), (void*)value);
	}

	inline static int32_t get_offset_of_deathSoundVolume_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___deathSoundVolume_13)); }
	inline float get_deathSoundVolume_13() const { return ___deathSoundVolume_13; }
	inline float* get_address_of_deathSoundVolume_13() { return &___deathSoundVolume_13; }
	inline void set_deathSoundVolume_13(float value)
	{
		___deathSoundVolume_13 = value;
	}

	inline static int32_t get_offset_of_enemyShootSFX_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyShootSFX_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_enemyShootSFX_14() const { return ___enemyShootSFX_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_enemyShootSFX_14() { return &___enemyShootSFX_14; }
	inline void set_enemyShootSFX_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___enemyShootSFX_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyShootSFX_14), (void*)value);
	}

	inline static int32_t get_offset_of_enemyShootSFXVolume_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyShootSFXVolume_15)); }
	inline float get_enemyShootSFXVolume_15() const { return ___enemyShootSFXVolume_15; }
	inline float* get_address_of_enemyShootSFXVolume_15() { return &___enemyShootSFXVolume_15; }
	inline void set_enemyShootSFXVolume_15(float value)
	{
		___enemyShootSFXVolume_15 = value;
	}

	inline static int32_t get_offset_of_enemyFiringCoroutine_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyFiringCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_enemyFiringCoroutine_16() const { return ___enemyFiringCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_enemyFiringCoroutine_16() { return &___enemyFiringCoroutine_16; }
	inline void set_enemyFiringCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___enemyFiringCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyFiringCoroutine_16), (void*)value);
	}
};


// EnemySpawner
struct  EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<WaveConfig> EnemySpawner::waveConfigs
	List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * ___waveConfigs_4;
	// System.Int32 EnemySpawner::startingWave
	int32_t ___startingWave_5;
	// System.Boolean EnemySpawner::looping
	bool ___looping_6;

public:
	inline static int32_t get_offset_of_waveConfigs_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___waveConfigs_4)); }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * get_waveConfigs_4() const { return ___waveConfigs_4; }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 ** get_address_of_waveConfigs_4() { return &___waveConfigs_4; }
	inline void set_waveConfigs_4(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * value)
	{
		___waveConfigs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveConfigs_4), (void*)value);
	}

	inline static int32_t get_offset_of_startingWave_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___startingWave_5)); }
	inline int32_t get_startingWave_5() const { return ___startingWave_5; }
	inline int32_t* get_address_of_startingWave_5() { return &___startingWave_5; }
	inline void set_startingWave_5(int32_t value)
	{
		___startingWave_5 = value;
	}

	inline static int32_t get_offset_of_looping_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___looping_6)); }
	inline bool get_looping_6() const { return ___looping_6; }
	inline bool* get_address_of_looping_6() { return &___looping_6; }
	inline void set_looping_6(bool value)
	{
		___looping_6 = value;
	}
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::moveSpeed1
	float ___moveSpeed1_4;
	// System.Single Player::padding1
	float ___padding1_5;
	// System.Int32 Player::playerHealth
	int32_t ___playerHealth_6;
	// UnityEngine.GameObject Player::laserPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserPrefab_7;
	// System.Single Player::projectileSpeed
	float ___projectileSpeed_8;
	// System.Single Player::projectileFiringPeriod
	float ___projectileFiringPeriod_9;
	// UnityEngine.AudioClip Player::deathSFX
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___deathSFX_10;
	// System.Single Player::deathSFXVolume
	float ___deathSFXVolume_11;
	// UnityEngine.AudioClip Player::playerShootSFX
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___playerShootSFX_12;
	// System.Single Player::playerShootSFXVolume
	float ___playerShootSFXVolume_13;
	// UnityEngine.Coroutine Player::firingCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___firingCoroutine_14;
	// System.Single Player::xMin
	float ___xMin_15;
	// System.Single Player::xMax
	float ___xMax_16;
	// System.Single Player::yMin
	float ___yMin_17;
	// System.Single Player::yMax
	float ___yMax_18;

public:
	inline static int32_t get_offset_of_moveSpeed1_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSpeed1_4)); }
	inline float get_moveSpeed1_4() const { return ___moveSpeed1_4; }
	inline float* get_address_of_moveSpeed1_4() { return &___moveSpeed1_4; }
	inline void set_moveSpeed1_4(float value)
	{
		___moveSpeed1_4 = value;
	}

	inline static int32_t get_offset_of_padding1_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___padding1_5)); }
	inline float get_padding1_5() const { return ___padding1_5; }
	inline float* get_address_of_padding1_5() { return &___padding1_5; }
	inline void set_padding1_5(float value)
	{
		___padding1_5 = value;
	}

	inline static int32_t get_offset_of_playerHealth_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerHealth_6)); }
	inline int32_t get_playerHealth_6() const { return ___playerHealth_6; }
	inline int32_t* get_address_of_playerHealth_6() { return &___playerHealth_6; }
	inline void set_playerHealth_6(int32_t value)
	{
		___playerHealth_6 = value;
	}

	inline static int32_t get_offset_of_laserPrefab_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___laserPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserPrefab_7() const { return ___laserPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserPrefab_7() { return &___laserPrefab_7; }
	inline void set_laserPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_projectileSpeed_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___projectileSpeed_8)); }
	inline float get_projectileSpeed_8() const { return ___projectileSpeed_8; }
	inline float* get_address_of_projectileSpeed_8() { return &___projectileSpeed_8; }
	inline void set_projectileSpeed_8(float value)
	{
		___projectileSpeed_8 = value;
	}

	inline static int32_t get_offset_of_projectileFiringPeriod_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___projectileFiringPeriod_9)); }
	inline float get_projectileFiringPeriod_9() const { return ___projectileFiringPeriod_9; }
	inline float* get_address_of_projectileFiringPeriod_9() { return &___projectileFiringPeriod_9; }
	inline void set_projectileFiringPeriod_9(float value)
	{
		___projectileFiringPeriod_9 = value;
	}

	inline static int32_t get_offset_of_deathSFX_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___deathSFX_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_deathSFX_10() const { return ___deathSFX_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_deathSFX_10() { return &___deathSFX_10; }
	inline void set_deathSFX_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___deathSFX_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathSFX_10), (void*)value);
	}

	inline static int32_t get_offset_of_deathSFXVolume_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___deathSFXVolume_11)); }
	inline float get_deathSFXVolume_11() const { return ___deathSFXVolume_11; }
	inline float* get_address_of_deathSFXVolume_11() { return &___deathSFXVolume_11; }
	inline void set_deathSFXVolume_11(float value)
	{
		___deathSFXVolume_11 = value;
	}

	inline static int32_t get_offset_of_playerShootSFX_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerShootSFX_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_playerShootSFX_12() const { return ___playerShootSFX_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_playerShootSFX_12() { return &___playerShootSFX_12; }
	inline void set_playerShootSFX_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___playerShootSFX_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerShootSFX_12), (void*)value);
	}

	inline static int32_t get_offset_of_playerShootSFXVolume_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerShootSFXVolume_13)); }
	inline float get_playerShootSFXVolume_13() const { return ___playerShootSFXVolume_13; }
	inline float* get_address_of_playerShootSFXVolume_13() { return &___playerShootSFXVolume_13; }
	inline void set_playerShootSFXVolume_13(float value)
	{
		___playerShootSFXVolume_13 = value;
	}

	inline static int32_t get_offset_of_firingCoroutine_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___firingCoroutine_14)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_firingCoroutine_14() const { return ___firingCoroutine_14; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_firingCoroutine_14() { return &___firingCoroutine_14; }
	inline void set_firingCoroutine_14(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___firingCoroutine_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firingCoroutine_14), (void*)value);
	}

	inline static int32_t get_offset_of_xMin_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMin_15)); }
	inline float get_xMin_15() const { return ___xMin_15; }
	inline float* get_address_of_xMin_15() { return &___xMin_15; }
	inline void set_xMin_15(float value)
	{
		___xMin_15 = value;
	}

	inline static int32_t get_offset_of_xMax_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMax_16)); }
	inline float get_xMax_16() const { return ___xMax_16; }
	inline float* get_address_of_xMax_16() { return &___xMax_16; }
	inline void set_xMax_16(float value)
	{
		___xMax_16 = value;
	}

	inline static int32_t get_offset_of_yMin_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___yMin_17)); }
	inline float get_yMin_17() const { return ___yMin_17; }
	inline float* get_address_of_yMin_17() { return &___yMin_17; }
	inline void set_yMin_17(float value)
	{
		___yMin_17 = value;
	}

	inline static int32_t get_offset_of_yMax_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___yMax_18)); }
	inline float get_yMax_18() const { return ___yMax_18; }
	inline float* get_address_of_yMax_18() { return &___yMax_18; }
	inline void set_yMax_18(float value)
	{
		___yMax_18 = value;
	}
};


// SceneLoader
struct  SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Shredder
struct  Shredder_tB4C8A49CC1640133CC5439A03E2236D77DC9DDD8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// enemyPathing
struct  enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// WaveConfig enemyPathing::waveConfig
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> enemyPathing::waypoints
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___waypoints_5;
	// System.Int32 enemyPathing::waypointIndex
	int32_t ___waypointIndex_6;

public:
	inline static int32_t get_offset_of_waveConfig_4() { return static_cast<int32_t>(offsetof(enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A, ___waveConfig_4)); }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * get_waveConfig_4() const { return ___waveConfig_4; }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 ** get_address_of_waveConfig_4() { return &___waveConfig_4; }
	inline void set_waveConfig_4(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * value)
	{
		___waveConfig_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveConfig_4), (void*)value);
	}

	inline static int32_t get_offset_of_waypoints_5() { return static_cast<int32_t>(offsetof(enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A, ___waypoints_5)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_waypoints_5() const { return ___waypoints_5; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_waypoints_5() { return &___waypoints_5; }
	inline void set_waypoints_5(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___waypoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_5), (void*)value);
	}

	inline static int32_t get_offset_of_waypointIndex_6() { return static_cast<int32_t>(offsetof(enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A, ___waypointIndex_6)); }
	inline int32_t get_waypointIndex_6() const { return ___waypointIndex_6; }
	inline int32_t* get_address_of_waypointIndex_6() { return &___waypointIndex_6; }
	inline void set_waypointIndex_6(int32_t value)
	{
		___waypointIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void Enemy::CountDownAndShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, float ___volume2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DamageDealer>()
inline DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Enemy::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ProcessHit_m714BA54942F456BDC7EA7EA121E311FC86FDD939 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___damageDealer0, const RuntimeMethod* method);
// System.Int32 DamageDealer::GetDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method);
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method);
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void EnemySpawner/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m647E1EAA7A13AD90A09929278FAD617B7B53D2E0 (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void EnemySpawner/<SpawnAllWaves>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllWavesU3Ed__4__ctor_m0B6DE5A2028635356162C302C7C37A6F83B4CA78 (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void EnemySpawner/<SpawnAllEnemiesInWave>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllEnemiesInWaveU3Ed__5__ctor_m000E8DCC5595EA5CC04AE0F0D9D9A6F6249CFA36 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Player::SetUpMoveBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___damageDealer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::FireContinuously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_FireContinuously_mFEB1124BEAF482127389BEEDD2BF4B56C800B3BB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void Player/<FireContinuously>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContinuouslyU3Ed__20__ctor_m5BF1F263626EBEE68948D4DD629AFE39469D4734 (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfig::GetWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * WaveConfig_GetWayPoints_m58B59FAA4E03FE26A4ED4EED37C0B46C7410201B (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void enemyPathing::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing_Move_m0E738789963A5E8F4E618DE54884895DD77BBA10 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Single WaveConfig::GetMoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetMoveSpeed_m776D50835ABD888D92FD8FE28FEE346DAD530D35_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject WaveConfig::GetEnemyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GetEnemyPrefab_m3FA01EC667D1DAD66E4A898DD5E04998B41A76C3_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<enemyPathing>()
inline enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * GameObject_GetComponent_TisenemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A_m2E25909BA2EE2F8F56197AE28F6E6385ED52FDC3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void enemyPathing::SetWaveConfig(WaveConfig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void enemyPathing_SetWaveConfig_m08A503CFF11303708460507F99F0FDC763234FF1_inline (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig0, const RuntimeMethod* method);
// System.Single WaveConfig::GetTimeBetweenSpawn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawn_mE2430E02F92574E36F92BFDADAB6BB8855DC62B7_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 WaveConfig::GetNumberOfEnemies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<WaveConfig>::get_Item(System.Int32)
inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * List_1_get_Item_mAF23B53788FF4378EB454334302BACF73C67E9AE_inline (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * (*) (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.IEnumerator EnemySpawner::SpawnAllEnemiesInWave(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnAllEnemiesInWave_m6DB7645886683F29A014B40BDA651AFA7AD333E6 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<WaveConfig>::get_Count()
inline int32_t List_1_get_Count_m4972DA385A5D70F06D60432A661E720635EDFEC3_inline (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator EnemySpawner::SpawnAllWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnAllWaves_m3B39201AEB1114A2EC3657769282592DF1D332BF (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BackgroundScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Start_mE4167530D769FE00F53556574705AE761E4D6544 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMaterial = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_myMaterial_5(L_1);
		// offset = new Vector2(0f, backgroundScrollSpeed);
		float L_2 = __this->get_backgroundScrollSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), L_2, /*hidden argument*/NULL);
		__this->set_offset_6(L_3);
		// }
		return;
	}
}
// System.Void BackgroundScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Update_m4DA04F8EB8FE8ED936C1EAA93EFCB904AA8AA457 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	{
		// myMaterial.mainTextureOffset += offset * Time.deltaTime;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_myMaterial_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_offset_6();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller__ctor_m5694164FDC22FFE5A19A3538CC6A0BA7FE328933 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float backgroundScrollSpeed = 0.2f;
		__this->set_backgroundScrollSpeed_4((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 DamageDealer::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// return damage;
		int32_t L_0 = __this->get_damage_4();
		return L_0;
	}
}
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageDealer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer__ctor_m089537C3DC7DE8C9FE32928F59784268ED3B3F2A (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int damage = 100;
		__this->set_damage_4(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots);
		float L_0 = __this->get_minTimeBetweenShots_6();
		float L_1 = __this->get_maxTimeBetweenShots_7();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_0, L_1, /*hidden argument*/NULL);
		__this->set_shotCounter_5(L_2);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// CountDownAndShoot();
		Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::CountDownAndShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// shotCounter -= Time.deltaTime;
		float L_0 = __this->get_shotCounter_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_shotCounter_5(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(shotCounter <= 0f)
		float L_2 = __this->get_shotCounter_5();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// Fire();
		Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E(__this, /*hidden argument*/NULL);
		// shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots);
		float L_3 = __this->get_minTimeBetweenShots_6();
		float L_4 = __this->get_maxTimeBetweenShots_7();
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_3, L_4, /*hidden argument*/NULL);
		__this->set_shotCounter_5(L_5);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Enemy::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Fire_m3F1F6B559F5C697843C9FDF06E1A7E62691FCF8E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject enemyLaser = Instantiate(
		//                 enemyLaserPrefab, transform.position, Quaternion.identity
		//                 ) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyLaserPrefab_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// enemyLaser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, -enemyProjectileSpeed);
		NullCheck(L_4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5;
		L_5 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_4, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		float L_6 = __this->get_enemyProjectileSpeed_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (0.0f), ((-L_6)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_5, L_7, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(enemyShootSFX, Camera.main.transform.position, enemyShootSFXVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_enemyShootSFX_14();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_enemyShootSFXVolume_15();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_8, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * V_0 = NULL;
	{
		// DamageDealer damageDealer = other.gameObject.GetComponent<DamageDealer>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_2;
		L_2 = GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E(L_1, /*hidden argument*/GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var);
		V_0 = L_2;
		// if (!damageDealer) { return; }
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		// if (!damageDealer) { return; }
		return;
	}

IL_0015:
	{
		// ProcessHit(damageDealer);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_5 = V_0;
		Enemy_ProcessHit_m714BA54942F456BDC7EA7EA121E311FC86FDD939(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_ProcessHit_m714BA54942F456BDC7EA7EA121E311FC86FDD939 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___damageDealer0, const RuntimeMethod* method)
{
	{
		// health -= damageDealer.GetDamage();
		float L_0 = __this->get_health_4();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_1 = ___damageDealer0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline(L_1, /*hidden argument*/NULL);
		__this->set_health_4(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_2)))));
		// damageDealer.Hit();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_3 = ___damageDealer0;
		NullCheck(L_3);
		DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C(L_3, /*hidden argument*/NULL);
		// if (health <= 0)
		float L_4 = __this->get_health_4();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// Die();
		Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);GameObject explosion = Instantiate(deathVFX, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// Destroy(gameObject);GameObject explosion = Instantiate(deathVFX, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_deathVFX_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(explosion, durationOfExplosion);
		float L_7 = __this->get_durationOfExplosion_11();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_6, L_7, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(deathSFX, Camera.main.transform.position, deathSoundVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_deathSFX_12();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_deathSoundVolume_13();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_8, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float health = 100;
		__this->set_health_4((100.0f));
		// [SerializeField] float minTimeBetweenShots = 0.2f;
		__this->set_minTimeBetweenShots_6((0.200000003f));
		// [SerializeField] float maxTimeBetweenShots = 3f;
		__this->set_maxTimeBetweenShots_7((3.0f));
		// [SerializeField] float enemyProjectileSpeed = 10f;
		__this->set_enemyProjectileSpeed_9((10.0f));
		// [SerializeField] float durationOfExplosion = 1f;
		__this->set_durationOfExplosion_11((1.0f));
		// [SerializeField][Range(0,1)] float deathSoundVolume = 0.75f;
		__this->set_deathSoundVolume_13((0.75f));
		// [SerializeField] [Range(0, 1)] float enemyShootSFXVolume = 0.5f;
		__this->set_enemyShootSFXVolume_15((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_Start_m397934BCD27904E015FC514FAF7C940CA672E27F (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * L_0 = (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 *)il2cpp_codegen_object_new(U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248_il2cpp_TypeInfo_var);
		U3CStartU3Ed__3__ctor_m647E1EAA7A13AD90A09929278FAD617B7B53D2E0(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator EnemySpawner::SpawnAllWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnAllWaves_m3B39201AEB1114A2EC3657769282592DF1D332BF (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * L_0 = (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 *)il2cpp_codegen_object_new(U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26_il2cpp_TypeInfo_var);
		U3CSpawnAllWavesU3Ed__4__ctor_m0B6DE5A2028635356162C302C7C37A6F83B4CA78(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator EnemySpawner::SpawnAllEnemiesInWave(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnAllEnemiesInWave_m6DB7645886683F29A014B40BDA651AFA7AD333E6 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * L_0 = (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 *)il2cpp_codegen_object_new(U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4_il2cpp_TypeInfo_var);
		U3CSpawnAllEnemiesInWaveU3Ed__5__ctor_m000E8DCC5595EA5CC04AE0F0D9D9A6F6249CFA36(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * L_1 = L_0;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_2 = ___waveConfig0;
		NullCheck(L_1);
		L_1->set_waveConfig_2(L_2);
		return L_1;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_mED6FECD7E1057991ED710CD104501453BEEDA871 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// SetUpMoveBoundaries();
		Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8(__this, /*hidden argument*/NULL);
		// Fire();
		Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * V_0 = NULL;
	{
		// DamageDealer damageDealer = other.gameObject.GetComponent<DamageDealer>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_2;
		L_2 = GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E(L_1, /*hidden argument*/GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var);
		V_0 = L_2;
		// if (!damageDealer) { return; }
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		// if (!damageDealer) { return; }
		return;
	}

IL_0015:
	{
		// ProcessHit(damageDealer);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_5 = V_0;
		Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___damageDealer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerHealth -= damageDealer.GetDamage();
		int32_t L_0 = __this->get_playerHealth_6();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_1 = ___damageDealer0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline(L_1, /*hidden argument*/NULL);
		__this->set_playerHealth_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2)));
		// damageDealer.Hit();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_3 = ___damageDealer0;
		NullCheck(L_3);
		DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C(L_3, /*hidden argument*/NULL);
		// if (playerHealth <= 0)
		int32_t L_4 = __this->get_playerHealth_6();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(deathSFX, Camera.main.transform.position, deathSFXVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_deathSFX_10();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_deathSFXVolume_11();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_6, L_9, L_10, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Player::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Fire_m85D1A8EF739313CCBDD710A5B5740D9AB4666790 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Fire1"))
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// firingCoroutine = StartCoroutine(FireContinuously());
		RuntimeObject* L_1;
		L_1 = Player_FireContinuously_mFEB1124BEAF482127389BEEDD2BF4B56C800B3BB(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		__this->set_firingCoroutine_14(L_2);
	}

IL_001e:
	{
		// if (Input.GetButtonUp("Fire1"))
		bool L_3;
		L_3 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// StopCoroutine(firingCoroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4 = __this->get_firingCoroutine_14();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::FireContinuously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_FireContinuously_mFEB1124BEAF482127389BEEDD2BF4B56C800B3BB (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * L_0 = (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 *)il2cpp_codegen_object_new(U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3_il2cpp_TypeInfo_var);
		U3CFireContinuouslyU3Ed__20__ctor_m5BF1F263626EBEE68948D4DD629AFE39469D4734(L_0, 0, /*hidden argument*/NULL);
		U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// var deltaX = Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed1;
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2 = __this->get_moveSpeed1_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// var deltaY = Input.GetAxis("Vertical") * Time.deltaTime * moveSpeed1;
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5 = __this->get_moveSpeed1_4();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5));
		// var newXPos = Mathf.Clamp(transform.position.x + deltaX, xMin, xMax);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = V_0;
		float L_10 = __this->get_xMin_15();
		float L_11 = __this->get_xMax_16();
		float L_12;
		L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_8, (float)L_9)), L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// var newYPos = Mathf.Clamp(transform.position.y + deltaY, yMin, yMax);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		float L_16 = V_1;
		float L_17 = __this->get_yMin_17();
		float L_18 = __this->get_yMax_18();
		float L_19;
		L_19 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_15, (float)L_16)), L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		// transform.position = new Vector2(newXPos, newYPos);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_21 = V_2;
		float L_22 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::SetUpMoveBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// Camera gameCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_0;
		// xMin = gameCamera.ViewportToWorldPoint(new Vector3(0, 0, 0)).x + padding1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_padding1_5();
		__this->set_xMin_15(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// xMax = gameCamera.ViewportToWorldPoint(new Vector3(1, 0, 0)).x - padding1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_padding1_5();
		__this->set_xMax_16(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)));
		// yMin = gameCamera.ViewportToWorldPoint(new Vector3(0, 0, 0)).y + padding1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		float L_15 = __this->get_padding1_5();
		__this->set_yMin_17(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
		// yMax = gameCamera.ViewportToWorldPoint(new Vector3(0, 1, 0)).y - padding1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		float L_20 = __this->get_padding1_5();
		__this->set_yMax_18(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float moveSpeed1 = 15f;
		__this->set_moveSpeed1_4((15.0f));
		// [SerializeField] float padding1 = .5f;
		__this->set_padding1_5((0.5f));
		// [SerializeField] int playerHealth = 200;
		__this->set_playerHealth_6(((int32_t)200));
		// [SerializeField] float projectileSpeed = 50f;
		__this->set_projectileSpeed_8((50.0f));
		// [SerializeField] float projectileFiringPeriod = 0.1f;
		__this->set_projectileFiringPeriod_9((0.100000001f));
		// [SerializeField] [Range(0, 1)] float deathSFXVolume = 1f;
		__this->set_deathSFXVolume_11((1.0f));
		// [SerializeField] [Range(0, 1)] float playerShootSFXVolume = 0.5f;
		__this->set_playerShootSFXVolume_13((0.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_m0C1135363F132F29168A105548C5C06AF2B7D682 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Update_m699D11504401E3060B887E522518E26ED63CD5D0 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m8708D080848349110CEA260D8779F30BD5823912 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shredder_OnTriggerEnter2D_m8DC73A33305BB3E2FA7ECE4E020A125D5250F2C3 (Shredder_tB4C8A49CC1640133CC5439A03E2236D77DC9DDD8 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shredder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shredder__ctor_m922786FE7078C6FBE75A0247FCE5375A1FFB1B7D (Shredder_tB4C8A49CC1640133CC5439A03E2236D77DC9DDD8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject WaveConfig::GetEnemyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GetEnemyPrefab_m3FA01EC667D1DAD66E4A898DD5E04998B41A76C3 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GetEnemyPrefab() { return enemyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyPrefab_4();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfig::GetWayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * WaveConfig_GetWayPoints_m58B59FAA4E03FE26A4ED4EED37C0B46C7410201B (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var waveWayPoints = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_0, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Transform child in pathPrefab.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_pathPrefab_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0019:
		{
			// foreach (Transform child in pathPrefab.transform)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// waveWayPoints.Add(child);
			List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_6 = V_0;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_2;
			NullCheck(L_6);
			List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_6, L_7, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (Transform child in pathPrefab.transform)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// return waveWayPoints;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.GameObject WaveConfig::GetPathPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GetPathPrefab_mF5CFF2E4156F8B2171AA31A4CDB756A66BF6B09A (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GetPathPrefab() { return pathPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pathPrefab_5();
		return L_0;
	}
}
// System.Single WaveConfig::GetTimeBetweenSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawn_mE2430E02F92574E36F92BFDADAB6BB8855DC62B7 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public float GetTimeBetweenSpawn() { return timeBetweenSpawns; }
		float L_0 = __this->get_timeBetweenSpawns_6();
		return L_0;
	}
}
// System.Single WaveConfig::GetSpawnRandomFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfig_GetSpawnRandomFactor_mF7DD2FAEAB9F18A76D4C6F266A3F157DCEBE1736 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public float GetSpawnRandomFactor() { return spawnRandomFactor; }
		float L_0 = __this->get_spawnRandomFactor_7();
		return L_0;
	}
}
// System.Int32 WaveConfig::GetNumberOfEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public int GetNumberOfEnemies() { return numberOfEnemies; }
		int32_t L_0 = __this->get_numberOfEnemies_8();
		return L_0;
	}
}
// System.Single WaveConfig::GetMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfig_GetMoveSpeed_m776D50835ABD888D92FD8FE28FEE346DAD530D35 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public float GetMoveSpeed() { return moveSpeed; }
		float L_0 = __this->get_moveSpeed_9();
		return L_0;
	}
}
// System.Void WaveConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveConfig__ctor_mD613D2BF33D5F186EBB6945C1BE31863064896EB (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float timeBetweenSpawns = 0.5f;
		__this->set_timeBetweenSpawns_6((0.5f));
		// [SerializeField] float spawnRandomFactor = 0.3f;
		__this->set_spawnRandomFactor_7((0.300000012f));
		// [SerializeField] int numberOfEnemies = 5;
		__this->set_numberOfEnemies_8(5);
		// [SerializeField] float moveSpeed = 2f;
		__this->set_moveSpeed_9((2.0f));
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void enemyPathing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing_Start_mCDE9040A0376B5997DA11C47903352451AB82208 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waypoints = waveConfig.GetWayPoints();
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = __this->get_waveConfig_4();
		NullCheck(L_0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1;
		L_1 = WaveConfig_GetWayPoints_m58B59FAA4E03FE26A4ED4EED37C0B46C7410201B(L_0, /*hidden argument*/NULL);
		__this->set_waypoints_5(L_1);
		// transform.position = waypoints[waypointIndex].transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_3 = __this->get_waypoints_5();
		int32_t L_4 = __this->get_waypointIndex_6();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyPathing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing_Update_m7DF818997C01D917B7D7A44A5B3E2D557B8FE121 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, const RuntimeMethod* method)
{
	{
		// Move();
		enemyPathing_Move_m0E738789963A5E8F4E618DE54884895DD77BBA10(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyPathing::SetWaveConfig(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing_SetWaveConfig_m08A503CFF11303708460507F99F0FDC763234FF1 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig0, const RuntimeMethod* method)
{
	{
		// this.waveConfig = waveConfig;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = ___waveConfig0;
		__this->set_waveConfig_4(L_0);
		// }
		return;
	}
}
// System.Void enemyPathing::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing_Move_m0E738789963A5E8F4E618DE54884895DD77BBA10 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (waypointIndex <= waypoints.Count - 1)
		int32_t L_0 = __this->get_waypointIndex_6();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1 = __this->get_waypoints_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_1, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_0091;
		}
	}
	{
		// var targetPosition = waypoints[waypointIndex].transform.position;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_3 = __this->get_waypoints_5();
		int32_t L_4 = __this->get_waypointIndex_6();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// var movementThisFrame = waveConfig.GetMoveSpeed() * Time.deltaTime;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_8 = __this->get_waveConfig_4();
		NullCheck(L_8);
		float L_9;
		L_9 = WaveConfig_GetMoveSpeed_m776D50835ABD888D92FD8FE28FEE346DAD530D35_inline(L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// transform.position = Vector2.MoveTowards(transform.position, targetPosition, movementThisFrame);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_19, /*hidden argument*/NULL);
		// if (transform.position == targetPosition)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		bool L_23;
		L_23 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		// waypointIndex++;
		int32_t L_24 = __this->get_waypointIndex_6();
		__this->set_waypointIndex_6(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		// }
		return;
	}

IL_0091:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void enemyPathing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathing__ctor_mF1027D2F1D5AC17E835CE780CFB76F25F1B41B94 (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner/<SpawnAllEnemiesInWave>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllEnemiesInWaveU3Ed__5__ctor_m000E8DCC5595EA5CC04AE0F0D9D9A6F6249CFA36 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner/<SpawnAllEnemiesInWave>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllEnemiesInWaveU3Ed__5_System_IDisposable_Dispose_m515D78EC8AA588E83E1097757B17D2F6DDF06F60 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawner/<SpawnAllEnemiesInWave>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnAllEnemiesInWaveU3Ed__5_MoveNext_m0BB66C4072A850BFE527F79678628162A44106A9 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisenemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A_m2E25909BA2EE2F8F56197AE28F6E6385ED52FDC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int enemyCount = 0; enemyCount < waveConfig.GetNumberOfEnemies(); enemyCount++)
		__this->set_U3CenemyCountU3E5__2_3(0);
		goto IL_0096;
	}

IL_0020:
	{
		// var newEnemy = Instantiate(
		//     waveConfig.GetEnemyPrefab(),
		//     waveConfig.GetWayPoints()[0].transform.position,
		//     Quaternion.identity);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_3 = __this->get_waveConfig_2();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = WaveConfig_GetEnemyPrefab_m3FA01EC667D1DAD66E4A898DD5E04998B41A76C3_inline(L_3, /*hidden argument*/NULL);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_5 = __this->get_waveConfig_2();
		NullCheck(L_5);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_6;
		L_6 = WaveConfig_GetWayPoints_m58B59FAA4E03FE26A4ED4EED37C0B46C7410201B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newEnemy.GetComponent<enemyPathing>().SetWaveConfig(waveConfig);
		NullCheck(L_11);
		enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * L_12;
		L_12 = GameObject_GetComponent_TisenemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A_m2E25909BA2EE2F8F56197AE28F6E6385ED52FDC3(L_11, /*hidden argument*/GameObject_GetComponent_TisenemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A_m2E25909BA2EE2F8F56197AE28F6E6385ED52FDC3_RuntimeMethod_var);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_13 = __this->get_waveConfig_2();
		NullCheck(L_12);
		enemyPathing_SetWaveConfig_m08A503CFF11303708460507F99F0FDC763234FF1_inline(L_12, L_13, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(waveConfig.GetTimeBetweenSpawn());
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_14 = __this->get_waveConfig_2();
		NullCheck(L_14);
		float L_15;
		L_15 = WaveConfig_GetTimeBetweenSpawn_mE2430E02F92574E36F92BFDADAB6BB8855DC62B7_inline(L_14, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int enemyCount = 0; enemyCount < waveConfig.GetNumberOfEnemies(); enemyCount++)
		int32_t L_17 = __this->get_U3CenemyCountU3E5__2_3();
		V_1 = L_17;
		int32_t L_18 = V_1;
		__this->set_U3CenemyCountU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_0096:
	{
		// for (int enemyCount = 0; enemyCount < waveConfig.GetNumberOfEnemies(); enemyCount++)
		int32_t L_19 = __this->get_U3CenemyCountU3E5__2_3();
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_20 = __this->get_waveConfig_2();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner/<SpawnAllEnemiesInWave>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAllEnemiesInWaveU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m97EEE15E788983313918B51AF1F7D7B9EDD29EB5 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner/<SpawnAllEnemiesInWave>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllEnemiesInWaveU3Ed__5_System_Collections_IEnumerator_Reset_m74B5AE9D79463938745EF56851EE995A552E79E6 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnAllEnemiesInWaveU3Ed__5_System_Collections_IEnumerator_Reset_m74B5AE9D79463938745EF56851EE995A552E79E6_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawner/<SpawnAllEnemiesInWave>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAllEnemiesInWaveU3Ed__5_System_Collections_IEnumerator_get_Current_m6BD490AC19D9BEC86F151827779484C1C21776E4 (U3CSpawnAllEnemiesInWaveU3Ed__5_t2110CD75A5DD05286FC8504382079ADD5E3171A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EnemySpawner/<SpawnAllWaves>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllWavesU3Ed__4__ctor_m0B6DE5A2028635356162C302C7C37A6F83B4CA78 (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner/<SpawnAllWaves>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllWavesU3Ed__4_System_IDisposable_Dispose_m560C9F87BBBBDB91C01FF3B236B4B67BA4CE45DB (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawner/<SpawnAllWaves>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnAllWavesU3Ed__4_MoveNext_m700A4BD86B8ACFCB7604EA15DE7C1E73E92EF9E1 (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4972DA385A5D70F06D60432A661E720635EDFEC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAF23B53788FF4378EB454334302BACF73C67E9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * V_1 = NULL;
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int waveIndex = startingWave; waveIndex < waveConfigs.Count; waveIndex++)
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_startingWave_5();
		__this->set_U3CwaveIndexU3E5__2_3(L_5);
		goto IL_0071;
	}

IL_002c:
	{
		// var currentWave = waveConfigs[waveIndex];
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_6 = V_1;
		NullCheck(L_6);
		List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * L_7 = L_6->get_waveConfigs_4();
		int32_t L_8 = __this->get_U3CwaveIndexU3E5__2_3();
		NullCheck(L_7);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_9;
		L_9 = List_1_get_Item_mAF23B53788FF4378EB454334302BACF73C67E9AE_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mAF23B53788FF4378EB454334302BACF73C67E9AE_RuntimeMethod_var);
		V_2 = L_9;
		// yield return StartCoroutine(SpawnAllEnemiesInWave(currentWave));
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_10 = V_1;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_11 = V_1;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = EnemySpawner_SpawnAllEnemiesInWave_m6DB7645886683F29A014B40BDA651AFA7AD333E6(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_10, L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int waveIndex = startingWave; waveIndex < waveConfigs.Count; waveIndex++)
		int32_t L_15 = __this->get_U3CwaveIndexU3E5__2_3();
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->set_U3CwaveIndexU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_0071:
	{
		// for (int waveIndex = startingWave; waveIndex < waveConfigs.Count; waveIndex++)
		int32_t L_17 = __this->get_U3CwaveIndexU3E5__2_3();
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_18 = V_1;
		NullCheck(L_18);
		List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * L_19 = L_18->get_waveConfigs_4();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4972DA385A5D70F06D60432A661E720635EDFEC3_inline(L_19, /*hidden argument*/List_1_get_Count_m4972DA385A5D70F06D60432A661E720635EDFEC3_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_20)))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner/<SpawnAllWaves>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAllWavesU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0BCB3CFB4887D64CAD2F5FAAC54D0AA7E78CDF9 (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner/<SpawnAllWaves>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mB66395B851EA4577C8171A94BBC9C8C377EF54D9 (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mB66395B851EA4577C8171A94BBC9C8C377EF54D9_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawner/<SpawnAllWaves>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnAllWavesU3Ed__4_System_Collections_IEnumerator_get_Current_mBC338CD46B0594483292FC3265A82DFBE19EC91B (U3CSpawnAllWavesU3Ed__4_t328C4D13DE8FDB2FEDA944EE439F413A47811F26 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EnemySpawner/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m647E1EAA7A13AD90A09929278FAD617B7B53D2E0 (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner/<Start>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_IDisposable_Dispose_mA645434661B17CD1372E74AE3069DBAD7777E0B9 (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawner/<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__3_MoveNext_mE30DB9B993F37071C629184B3D4D41B219B42B37 (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return StartCoroutine(SpawnAllWaves());
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_4 = V_1;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = EnemySpawner_SpawnAllWaves_m3B39201AEB1114A2EC3657769282592DF1D332BF(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (looping);
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_looping_6();
		if (L_9)
		{
			goto IL_001e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner/<Start>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED6D643D09437579EBA4CDD938D63F499375D94A (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner/<Start>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m038F5F0243E8925A6165A04E6057C51511C0B78D (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m038F5F0243E8925A6165A04E6057C51511C0B78D_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawner/<Start>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__3_System_Collections_IEnumerator_get_Current_m632697F1F783EB1D610797499CA9C9AADDF3E4E0 (U3CStartU3Ed__3_t5AA038DDEEEE4CA923E7E32FAF1A0965E05E1248 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Player/<FireContinuously>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContinuouslyU3Ed__20__ctor_m5BF1F263626EBEE68948D4DD629AFE39469D4734 (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<FireContinuously>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContinuouslyU3Ed__20_System_IDisposable_Dispose_mDEAB6A3DAC00C38E6B78D5675FE5F8E42387B57B (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<FireContinuously>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireContinuouslyU3Ed__20_MoveNext_m2C84D2C680CDAEA6101A184EB254370FC1402163 (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// AudioSource.PlayClipAtPoint(playerShootSFX, Camera.main.transform.position, playerShootSFXVolume);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = V_1;
		NullCheck(L_4);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = L_4->get_playerShootSFX_12();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_playerShootSFXVolume_13();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_5, L_8, L_10, /*hidden argument*/NULL);
		// GameObject laser = Instantiate(
		//         laserPrefab, transform.position, Quaternion.identity
		//         ) as GameObject;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_11 = V_1;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_laserPrefab_7();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_12, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// laser.GetComponent<Rigidbody2D>().velocity = new Vector2(0, projectileSpeed);
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->get_projectileSpeed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_21), (0.0f), L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_18, L_21, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(projectileFiringPeriod);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->get_projectileFiringPeriod_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, L_23, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object Player/<FireContinuously>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireContinuouslyU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m126ABA56C3F58CB7D2EED7AB6AC18CB6A1BFE45E (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<FireContinuously>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContinuouslyU3Ed__20_System_Collections_IEnumerator_Reset_m527A85C3701847454B0F2D6363FAC5ADF0C8DCF2 (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireContinuouslyU3Ed__20_System_Collections_IEnumerator_Reset_m527A85C3701847454B0F2D6363FAC5ADF0C8DCF2_RuntimeMethod_var)));
	}
}
// System.Object Player/<FireContinuously>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFireContinuouslyU3Ed__20_System_Collections_IEnumerator_get_Current_m0D2E27FA0B425426BA2E23D050A22D4099180D2A (U3CFireContinuouslyU3Ed__20_tA88150553181F202AF5AA258E2DFE6AA433A52D3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// return damage;
		int32_t L_0 = __this->get_damage_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetMoveSpeed_m776D50835ABD888D92FD8FE28FEE346DAD530D35_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public float GetMoveSpeed() { return moveSpeed; }
		float L_0 = __this->get_moveSpeed_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GetEnemyPrefab_m3FA01EC667D1DAD66E4A898DD5E04998B41A76C3_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GetEnemyPrefab() { return enemyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyPrefab_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void enemyPathing_SetWaveConfig_m08A503CFF11303708460507F99F0FDC763234FF1_inline (enemyPathing_tDFA71144859A971D23B60CE91E99A3639C286F3A * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig0, const RuntimeMethod* method)
{
	{
		// this.waveConfig = waveConfig;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = ___waveConfig0;
		__this->set_waveConfig_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawn_mE2430E02F92574E36F92BFDADAB6BB8855DC62B7_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public float GetTimeBetweenSpawn() { return timeBetweenSpawns; }
		float L_0 = __this->get_timeBetweenSpawns_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// public int GetNumberOfEnemies() { return numberOfEnemies; }
		int32_t L_0 = __this->get_numberOfEnemies_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}

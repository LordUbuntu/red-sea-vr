#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_tF3B895913B44A5233F386097973299392788EA81;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E, ____items_1)); }
	inline JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* get__items_1() const { return ____items_1; }
	inline JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E_StaticFields, ____emptyArray_5)); }
	inline JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonValueU5BU5D_t061F6C2DEF60669EB98890ACD2FE0E36E6997882* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815  ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D, ___text_0)); }
	inline Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815  get_text_0() const { return ___text_0; }
	inline Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815 * get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815  value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_hasEscapes_1() { return static_cast<int32_t>(offsetof(JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D, ___hasEscapes_1)); }
	inline bool get_hasEscapes_1() const { return ___hasEscapes_1; }
	inline bool* get_address_of_hasEscapes_1() { return &___hasEscapes_1; }
	inline void set_hasEscapes_1(bool value)
	{
		___hasEscapes_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D_marshaled_pinvoke
{
	Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D_marshaled_com
{
	Substring_t9AD8D12A00743C9AF2A3E122F51B06CCE4615815_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct JsonValueType_tC1693041766D5BCCE3DA251FABD56F8BA8539170 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonValueType_tC1693041766D5BCCE3DA251FABD56F8BA8539170, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F 
{
public:
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D  ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 * ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject * ___anyValue_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_realValue_2() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___realValue_2)); }
	inline double get_realValue_2() const { return ___realValue_2; }
	inline double* get_address_of_realValue_2() { return &___realValue_2; }
	inline void set_realValue_2(double value)
	{
		___realValue_2 = value;
	}

	inline static int32_t get_offset_of_integerValue_3() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___integerValue_3)); }
	inline int64_t get_integerValue_3() const { return ___integerValue_3; }
	inline int64_t* get_address_of_integerValue_3() { return &___integerValue_3; }
	inline void set_integerValue_3(int64_t value)
	{
		___integerValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___stringValue_4)); }
	inline JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D  get_stringValue_4() const { return ___stringValue_4; }
	inline JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D * get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D  value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_arrayValue_5() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___arrayValue_5)); }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * get_arrayValue_5() const { return ___arrayValue_5; }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E ** get_address_of_arrayValue_5() { return &___arrayValue_5; }
	inline void set_arrayValue_5(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * value)
	{
		___arrayValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectValue_6() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___objectValue_6)); }
	inline Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 * get_objectValue_6() const { return ___objectValue_6; }
	inline Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 ** get_address_of_objectValue_6() { return &___objectValue_6; }
	inline void set_objectValue_6(Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 * value)
	{
		___objectValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_anyValue_7() { return static_cast<int32_t>(offsetof(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F, ___anyValue_7)); }
	inline RuntimeObject * get_anyValue_7() const { return ___anyValue_7; }
	inline RuntimeObject ** get_address_of_anyValue_7() { return &___anyValue_7; }
	inline void set_anyValue_7(RuntimeObject * value)
	{
		___anyValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anyValue_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D_marshaled_pinvoke ___stringValue_4;
	List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___arrayValue_5;
	Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE7492E001C8244FE43FD5FE550B2E4471E32364D_marshaled_com ___stringValue_4;
	List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___arrayValue_5;
	Dictionary_2_t6559C3595494ACAFACFBD50DF3795F25E9D5FEB1 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5, ___list_0)); }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * get_list_0() const { return ___list_0; }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5, ___current_3)); }
	inline JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  get_current_3() const { return ___current_3; }
	inline JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___anyValue_7), (void*)NULL);
		#endif
	}
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_tF3B895913B44A5233F386097973299392788EA81  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF3B895913B44A5233F386097973299392788EA81 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A, ___source_3)); }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * get_source_3() const { return ___source_3; }
	inline List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A, ___predicate_4)); }
	inline Func_2_tF3B895913B44A5233F386097973299392788EA81 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF3B895913B44A5233F386097973299392788EA81 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF3B895913B44A5233F386097973299392788EA81 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A, ___selector_5)); }
	inline Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * get_selector_5() const { return ___selector_5; }
	inline Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A, ___enumerator_6)); }
	inline Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___enumerator_6))->___current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___anyValue_7), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  Enumerator_get_Current_m2CA4A39F2A1314A05F12333B1FA769D174943A24_gshared_inline (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m262885D7B2625EA9D3DB985226C942342C65B3F7_gshared (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * __this, const RuntimeMethod* method);

// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  Enumerator_get_Current_m2CA4A39F2A1314A05F12333B1FA769D174943A24_inline (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  (*) (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *, const RuntimeMethod*))Enumerator_get_Current_m2CA4A39F2A1314A05F12333B1FA769D174943A24_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_m262885D7B2625EA9D3DB985226C942342C65B3F7 (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *, const RuntimeMethod*))Enumerator_MoveNext_m262885D7B2625EA9D3DB985226C942342C65B3F7_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD9644AA0F627D94D36FF0BC98489EB37BC67E2C4_gshared (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A * __this, List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * ___source0, Func_2_tF3B895913B44A5233F386097973299392788EA81 * ___predicate1, Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF3B895913B44A5233F386097973299392788EA81 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mFD1C57BE13C598DFF2928021AB01B8402481AD5D_gshared (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A * __this, const RuntimeMethod* method)
{
	{
		List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * L_0 = (List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *)__this->get_source_3();
		Func_2_tF3B895913B44A5233F386097973299392788EA81 * L_1 = (Func_2_tF3B895913B44A5233F386097973299392788EA81 *)__this->get_predicate_4();
		Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * L_2 = (Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *)__this->get_selector_5();
		WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A * L_3 = (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A *, List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *, Func_2_tF3B895913B44A5233F386097973299392788EA81 *, Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *)L_0, (Func_2_tF3B895913B44A5233F386097973299392788EA81 *)L_1, (Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m654ADF799003BFF1B12856BDC327CEED2FEA3EE7_gshared (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E * L_3 = (List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *)__this->get_source_3();
		NullCheck((List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *)L_3);
		Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5  L_4;
		L_4 = ((  Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5  (*) (List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tC2452E93E5B8E31149932C482B9B7286089CB38E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * L_5 = (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)__this->get_address_of_enumerator_6();
		JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  L_6;
		L_6 = Enumerator_get_Current_m2CA4A39F2A1314A05F12333B1FA769D174943A24_inline((Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F )L_6;
		Func_2_tF3B895913B44A5233F386097973299392788EA81 * L_7 = (Func_2_tF3B895913B44A5233F386097973299392788EA81 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF3B895913B44A5233F386097973299392788EA81 * L_8 = (Func_2_tF3B895913B44A5233F386097973299392788EA81 *)__this->get_predicate_4();
		JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  L_9 = V_1;
		NullCheck((Func_2_tF3B895913B44A5233F386097973299392788EA81 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF3B895913B44A5233F386097973299392788EA81 *, JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tF3B895913B44A5233F386097973299392788EA81 *)L_8, (JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC * L_11 = (Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *)__this->get_selector_5();
		JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  L_12 = V_1;
		NullCheck((Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *, JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t7A1E4C1615240DAC38A61126438E687A3D6941BC *)L_11, (JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * L_14 = (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m262885D7B2625EA9D3DB985226C942342C65B3F7((Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)(Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m143B62A3624E848688C31DD4F4950094664984D8_gshared (WhereSelectListIterator_2_tE6E3E17AE3FF9B661DAF4CB47E4959CD94D5896A * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  Enumerator_get_Current_m2CA4A39F2A1314A05F12333B1FA769D174943A24_gshared_inline (Enumerator_tA90A1F128B418F088DA972BE021AF1C339C6A8D5 * __this, const RuntimeMethod* method)
{
	{
		JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F  L_0 = (JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F )__this->get_current_3();
		return (JsonValue_t4A09AABA8A49BE4FD4182C9438D340BC8F38831F )L_0;
	}
}

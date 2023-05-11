#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// UnityGLTF.BinaryWriterWithLessAllocations
struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEEC15D95BAB6A3DF86ECAE506F7A619C302241BB 
{
};
struct Il2CppArrayBounds;

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// UnityGLTF.BinaryWriterWithLessAllocations
struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815  : public BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E
{
};

struct BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields
{
	// System.Byte[] UnityGLTF.BinaryWriterWithLessAllocations::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations__ctor_m553FCC132053944C31EE58781BB3FCEB99D06C79 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___binStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BinaryWriterWithLessAllocations(Stream binStream) : base(binStream) { }
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___binStream0;
		il2cpp_codegen_runtime_class_init_inline(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(__this, L_0, NULL);
		// public BinaryWriterWithLessAllocations(Stream binStream) : base(binStream) { }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::Write(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_mBCFD2E71FB2A2486F4AEDD740F61F1BE949F54B2 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	uint32_t V_3 = 0;
	float V_4 = 0.0f;
	uint32_t V_5 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// foreach (var v in value)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___value0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0053;
	}

IL_000d:
	{
		// foreach (var v in value)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// uint tmpValue = *(uint *)&v;
		int32_t L_6 = *((uint32_t*)((uintptr_t)(&V_2)));
		V_3 = L_6;
		// _buffer[0] = (byte) (tmpValue);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_8 = V_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_8));
		// _buffer[1] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_10 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>8))));
		// _buffer[2] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_12 = V_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_12>>((int32_t)16)))));
		// _buffer[3] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_14 = V_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		// Write(_buffer, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_15, 0, 4);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0053:
	{
		// foreach (var v in value)
		int32_t L_17 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_005a:
	{
		// foreach (var v in value)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = ___value0;
		V_0 = L_19;
		V_1 = 0;
		goto IL_00ac;
	}

IL_0060:
	{
		// foreach (var v in value)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		// uint tmpValue = *(uint *)&v;
		int32_t L_24 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_5 = L_24;
		// _buffer[0] = (byte) (tmpValue >> 24);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_26 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_26>>((int32_t)24)))));
		// _buffer[1] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)16)))));
		// _buffer[2] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_30 = V_5;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_30>>8))));
		// _buffer[3] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_32 = V_5;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_32));
		// Write(_buffer, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_33, 0, 4);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ac:
	{
		// foreach (var v in value)
		int32_t L_35 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_m478F19D1C6FD88C7D50C94144D75A7537AFD67D2 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// uint tmpValue = *(uint *)&value;
		int32_t L_1 = *((uint32_t*)((uintptr_t)(&___value0)));
		V_0 = L_1;
		// _buffer[0] = (byte) (tmpValue);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_3));
		// _buffer[1] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		// _buffer[2] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		// _buffer[3] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		// Write(_buffer, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_10, 0, 4);
		return;
	}

IL_0046:
	{
		// uint tmpValue = *(uint *)&value;
		int32_t L_11 = *((uint32_t*)((uintptr_t)(&___value0)));
		V_1 = L_11;
		// _buffer[0] = (byte) (tmpValue >> 24);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_13 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_13>>((int32_t)24)))));
		// _buffer[1] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_15>>((int32_t)16)))));
		// _buffer[2] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_17 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>8))));
		// _buffer[3] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_19 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_19));
		// Write(_buffer, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_20, 0, 4);
		// }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::Write(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_mBC04F203322EBC95E99314874835308B8DCF9FF5 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	uint32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	uint32_t V_11 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_0132;
		}
	}
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___arr0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0128;
	}

IL_0013:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// float vx = v0.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		float L_7 = L_6.___x_1;
		V_2 = L_7;
		// float vy = v0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = L_6;
		float L_9 = L_8.___y_2;
		V_3 = L_9;
		// float vz = v0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = L_8;
		float L_11 = L_10.___z_3;
		V_4 = L_11;
		// float vw = v0.w;
		float L_12 = L_10.___w_4;
		V_5 = L_12;
		// uint tmpValue = *(uint *)&vx;
		int32_t L_13 = *((uint32_t*)((uintptr_t)(&V_2)));
		V_6 = L_13;
		// _buffer[ 0] = (byte) (tmpValue);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_15 = V_6;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_15));
		// _buffer[ 1] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_17 = V_6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>8))));
		// _buffer[ 2] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_19 = V_6;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_19>>((int32_t)16)))));
		// _buffer[ 3] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_21 = V_6;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_21>>((int32_t)24)))));
		// tmpValue = *(uint *)&vy;
		int32_t L_22 = *((uint32_t*)((uintptr_t)(&V_3)));
		V_6 = L_22;
		// _buffer[ 4] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_24 = V_6;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_24));
		// _buffer[ 5] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_26 = V_6;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_26>>8))));
		// _buffer[ 6] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_28 = V_6;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)16)))));
		// _buffer[ 7] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_30 = V_6;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_30>>((int32_t)24)))));
		// tmpValue = *(uint *)&vz;
		int32_t L_31 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_6 = L_31;
		// _buffer[ 8] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_33 = V_6;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_33));
		// _buffer[ 9] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_35 = V_6;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_35>>8))));
		// _buffer[10] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_37 = V_6;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_37>>((int32_t)16)))));
		// _buffer[11] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_39 = V_6;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_39>>((int32_t)24)))));
		// tmpValue = *(uint *)&vw;
		int32_t L_40 = *((uint32_t*)((uintptr_t)(&V_5)));
		V_6 = L_40;
		// _buffer[12] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_42 = V_6;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)L_42));
		// _buffer[13] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_44 = V_6;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_44>>8))));
		// _buffer[14] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_46 = V_6;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_46>>((int32_t)16)))));
		// _buffer[15] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_48 = V_6;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_48>>((int32_t)24)))));
		// Write(_buffer, 0, 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_49, 0, ((int32_t)16));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0128:
	{
		// foreach (var v0 in arr)
		int32_t L_51 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_52 = V_0;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0132:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_53 = ___arr0;
		V_0 = L_53;
		V_1 = 0;
		goto IL_0252;
	}

IL_013b:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_54 = V_0;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		// float vx = v0.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_58 = L_57;
		float L_59 = L_58.___x_1;
		V_7 = L_59;
		// float vy = v0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = L_58;
		float L_61 = L_60.___y_2;
		V_8 = L_61;
		// float vz = v0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62 = L_60;
		float L_63 = L_62.___z_3;
		V_9 = L_63;
		// float vw = v0.w;
		float L_64 = L_62.___w_4;
		V_10 = L_64;
		// uint tmpValue = *(uint *)&vx;
		int32_t L_65 = *((uint32_t*)((uintptr_t)(&V_7)));
		V_11 = L_65;
		// _buffer[ 0] = (byte) (tmpValue >> 24);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_67 = V_11;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_67>>((int32_t)24)))));
		// _buffer[ 1] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_69 = V_11;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_69>>((int32_t)16)))));
		// _buffer[ 2] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_71 = V_11;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_71>>8))));
		// _buffer[ 3] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_73 = V_11;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_73));
		// tmpValue = *(uint *)&vy;
		int32_t L_74 = *((uint32_t*)((uintptr_t)(&V_8)));
		V_11 = L_74;
		// _buffer[ 4] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_76 = V_11;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_76>>((int32_t)24)))));
		// _buffer[ 5] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_78 = V_11;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>((int32_t)16)))));
		// _buffer[ 6] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_80 = V_11;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_80>>8))));
		// _buffer[ 7] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_82 = V_11;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_82));
		// tmpValue = *(uint *)&vz;
		int32_t L_83 = *((uint32_t*)((uintptr_t)(&V_9)));
		V_11 = L_83;
		// _buffer[ 8] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_85 = V_11;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_85>>((int32_t)24)))));
		// _buffer[ 9] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_87 = V_11;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_87>>((int32_t)16)))));
		// _buffer[10] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_89 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_89>>8))));
		// _buffer[11] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_91 = V_11;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_91));
		// tmpValue = *(uint *)&vw;
		int32_t L_92 = *((uint32_t*)((uintptr_t)(&V_10)));
		V_11 = L_92;
		// _buffer[12] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_94 = V_11;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_94>>((int32_t)24)))));
		// _buffer[13] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_96 = V_11;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_96>>((int32_t)16)))));
		// _buffer[14] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_98 = V_11;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_98>>8))));
		// _buffer[15] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_100 = V_11;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)L_100));
		// Write(_buffer, 0, 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_101, 0, ((int32_t)16));
		int32_t L_102 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0252:
	{
		// foreach (var v0 in arr)
		int32_t L_103 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_104 = V_0;
		NullCheck(L_104);
		if ((((int32_t)L_103) < ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length)))))
		{
			goto IL_013b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::Write(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_Write_m97AB5B604DA287BDCDBF607C1941AE0A77D2F054 (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	uint32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	uint32_t V_9 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_00f0;
		}
	}
	{
		// foreach (var v0 in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___arr0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_00e6;
	}

IL_0013:
	{
		// foreach (var v0 in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// float vx = v0.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		float L_7 = L_6.___x_2;
		V_2 = L_7;
		// float vy = v0.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_6;
		float L_9 = L_8.___y_3;
		V_3 = L_9;
		// float vz = v0.z;
		float L_10 = L_8.___z_4;
		V_4 = L_10;
		// uint tmpValue = *(uint *)&vx;
		int32_t L_11 = *((uint32_t*)((uintptr_t)(&V_2)));
		V_5 = L_11;
		// _buffer[ 0] = (byte) (tmpValue);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_13 = V_5;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_13));
		// _buffer[ 1] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_15 = V_5;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_15>>8))));
		// _buffer[ 2] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_17 = V_5;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_17>>((int32_t)16)))));
		// _buffer[ 3] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_19 = V_5;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_19>>((int32_t)24)))));
		// tmpValue = *(uint *)&vy;
		int32_t L_20 = *((uint32_t*)((uintptr_t)(&V_3)));
		V_5 = L_20;
		// _buffer[ 4] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_22 = V_5;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_22));
		// _buffer[ 5] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_24 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_24>>8))));
		// _buffer[ 6] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_26 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_26>>((int32_t)16)))));
		// _buffer[ 7] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)24)))));
		// tmpValue = *(uint *)&vz;
		int32_t L_29 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_5 = L_29;
		// _buffer[ 8] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_31 = V_5;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_31));
		// _buffer[ 9] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_33 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_33>>8))));
		// _buffer[10] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_35 = V_5;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_35>>((int32_t)16)))));
		// _buffer[11] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_37 = V_5;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_37>>((int32_t)24)))));
		// Write(_buffer, 0, 12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_38, 0, ((int32_t)12));
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00e6:
	{
		// foreach (var v0 in arr)
		int32_t L_40 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = V_0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_00f0:
	{
		// foreach (var v0 in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = ___arr0;
		V_0 = L_42;
		V_1 = 0;
		goto IL_01ce;
	}

IL_00f9:
	{
		// foreach (var v0 in arr)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		// float vx = v0.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46;
		float L_48 = L_47.___x_2;
		V_6 = L_48;
		// float vy = v0.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_47;
		float L_50 = L_49.___y_3;
		V_7 = L_50;
		// float vz = v0.z;
		float L_51 = L_49.___z_4;
		V_8 = L_51;
		// uint tmpValue = *(uint *)&vx;
		int32_t L_52 = *((uint32_t*)((uintptr_t)(&V_6)));
		V_9 = L_52;
		// _buffer[ 0] = (byte) (tmpValue >> 24);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_54 = V_9;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_54>>((int32_t)24)))));
		// _buffer[ 1] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_56 = V_9;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_56>>((int32_t)16)))));
		// _buffer[ 2] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_58 = V_9;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_58>>8))));
		// _buffer[ 3] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_60 = V_9;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_60));
		// tmpValue = *(uint *)&vy;
		int32_t L_61 = *((uint32_t*)((uintptr_t)(&V_7)));
		V_9 = L_61;
		// _buffer[ 4] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_63 = V_9;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_63>>((int32_t)24)))));
		// _buffer[ 5] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_65 = V_9;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16)))));
		// _buffer[ 6] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_67 = V_9;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_67>>8))));
		// _buffer[ 7] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_69 = V_9;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_69));
		// tmpValue = *(uint *)&vz;
		int32_t L_70 = *((uint32_t*)((uintptr_t)(&V_8)));
		V_9 = L_70;
		// _buffer[ 8] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_72 = V_9;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_72>>((int32_t)24)))));
		// _buffer[ 9] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_74 = V_9;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_74>>((int32_t)16)))));
		// _buffer[10] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_76 = V_9;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_76>>8))));
		// _buffer[11] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_78 = V_9;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_78));
		// Write(_buffer, 0, 12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_79, 0, ((int32_t)12));
		int32_t L_80 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01ce:
	{
		// foreach (var v0 in arr)
		int32_t L_81 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = V_0;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_00f9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::WriteNormalizedSwitchHandedness(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations_WriteNormalizedSwitchHandedness_mD7FD30417E03E3AEDC049C5D3D94892D40703FCD (BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___arr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	uint32_t V_7 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	uint32_t V_13 = 0;
	{
		// if (BitConverter.IsLittleEndian)
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_013e;
		}
	}
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___arr0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0134;
	}

IL_0013:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// v0.Normalize();
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline((&V_2), NULL);
		// float vx = -v0.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_2;
		float L_7 = L_6.___x_1;
		V_3 = ((-L_7));
		// float vy = v0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_2;
		float L_9 = L_8.___y_2;
		V_4 = L_9;
		// float vz = v0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_2;
		float L_11 = L_10.___z_3;
		V_5 = L_11;
		// float vw = -v0.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = V_2;
		float L_13 = L_12.___w_4;
		V_6 = ((-L_13));
		// uint tmpValue = *(uint *)&vx;
		int32_t L_14 = *((uint32_t*)((uintptr_t)(&V_3)));
		V_7 = L_14;
		// _buffer[ 0] = (byte) (tmpValue);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_16 = V_7;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_16));
		// _buffer[ 1] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_18 = V_7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_18>>8))));
		// _buffer[ 2] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_20 = V_7;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_20>>((int32_t)16)))));
		// _buffer[ 3] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_22 = V_7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_22>>((int32_t)24)))));
		// tmpValue = *(uint *)&vy;
		int32_t L_23 = *((uint32_t*)((uintptr_t)(&V_4)));
		V_7 = L_23;
		// _buffer[ 4] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_25 = V_7;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)L_25));
		// _buffer[ 5] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_27 = V_7;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_27>>8))));
		// _buffer[ 6] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_29 = V_7;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_29>>((int32_t)16)))));
		// _buffer[ 7] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_31 = V_7;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_31>>((int32_t)24)))));
		// tmpValue = *(uint *)&vz;
		int32_t L_32 = *((uint32_t*)((uintptr_t)(&V_5)));
		V_7 = L_32;
		// _buffer[ 8] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_34 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_34));
		// _buffer[ 9] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_36 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_36>>8))));
		// _buffer[10] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_38 = V_7;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)16)))));
		// _buffer[11] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_40>>((int32_t)24)))));
		// tmpValue = *(uint *)&vw;
		int32_t L_41 = *((uint32_t*)((uintptr_t)(&V_6)));
		V_7 = L_41;
		// _buffer[12] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_43 = V_7;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)L_43));
		// _buffer[13] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_45 = V_7;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_45>>8))));
		// _buffer[14] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_47 = V_7;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_47>>((int32_t)16)))));
		// _buffer[15] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_49 = V_7;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_49>>((int32_t)24)))));
		// Write(_buffer, 0, 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_50, 0, ((int32_t)16));
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0134:
	{
		// foreach (var v0 in arr)
		int32_t L_52 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_53 = V_0;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_013e:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_54 = ___arr0;
		V_0 = L_54;
		V_1 = 0;
		goto IL_026e;
	}

IL_0147:
	{
		// foreach (var v0 in arr)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = V_0;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_8 = L_58;
		// v0.Normalize();
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline((&V_8), NULL);
		// float vx = -v0.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_59 = V_8;
		float L_60 = L_59.___x_1;
		V_9 = ((-L_60));
		// float vy = v0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61 = V_8;
		float L_62 = L_61.___y_2;
		V_10 = L_62;
		// float vz = v0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63 = V_8;
		float L_64 = L_63.___z_3;
		V_11 = L_64;
		// float vw = -v0.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_65 = V_8;
		float L_66 = L_65.___w_4;
		V_12 = ((-L_66));
		// uint tmpValue = *(uint *)&vx;
		int32_t L_67 = *((uint32_t*)((uintptr_t)(&V_9)));
		V_13 = L_67;
		// _buffer[ 0] = (byte) (tmpValue >> 24);
		il2cpp_codegen_runtime_class_init_inline(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_69 = V_13;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_69>>((int32_t)24)))));
		// _buffer[ 1] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_71 = V_13;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_71>>((int32_t)16)))));
		// _buffer[ 2] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_73 = V_13;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_73>>8))));
		// _buffer[ 3] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_75 = V_13;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_75));
		// tmpValue = *(uint *)&vy;
		int32_t L_76 = *((uint32_t*)((uintptr_t)(&V_10)));
		V_13 = L_76;
		// _buffer[ 4] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_78 = V_13;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_78>>((int32_t)24)))));
		// _buffer[ 5] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_80 = V_13;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_80>>((int32_t)16)))));
		// _buffer[ 6] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_82 = V_13;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_82>>8))));
		// _buffer[ 7] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_84 = V_13;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)L_84));
		// tmpValue = *(uint *)&vz;
		int32_t L_85 = *((uint32_t*)((uintptr_t)(&V_11)));
		V_13 = L_85;
		// _buffer[ 8] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_87 = V_13;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_87>>((int32_t)24)))));
		// _buffer[ 9] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_89 = V_13;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_89>>((int32_t)16)))));
		// _buffer[10] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_91 = V_13;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_91>>8))));
		// _buffer[11] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_93 = V_13;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)L_93));
		// tmpValue = *(uint *)&vw;
		int32_t L_94 = *((uint32_t*)((uintptr_t)(&V_12)));
		V_13 = L_94;
		// _buffer[12] = (byte) (tmpValue >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_96 = V_13;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_96>>((int32_t)24)))));
		// _buffer[13] = (byte) (tmpValue >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_98 = V_13;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_98>>((int32_t)16)))));
		// _buffer[14] = (byte) (tmpValue >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_100 = V_13;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_100>>8))));
		// _buffer[15] = (byte) (tmpValue);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		uint32_t L_102 = V_13;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)L_102));
		// Write(_buffer, 0, 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_103, 0, ((int32_t)16));
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_026e:
	{
		// foreach (var v0 in arr)
		int32_t L_105 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_106 = V_0;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0147;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.BinaryWriterWithLessAllocations::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterWithLessAllocations__cctor_m84A827A3C56BC60D0213BD2628D59ABFDD5AEECE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] _buffer = new byte[16];    // temp space for writing primitives to.
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_StaticFields*)il2cpp_codegen_static_fields_for(BinaryWriterWithLessAllocations_t0597571A28D25878AE6E2EDC9EDE681EBB0DC815_il2cpp_TypeInfo_var))->____buffer_8), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_1;
		L_1 = Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_4, L_5, NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___a0;
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}

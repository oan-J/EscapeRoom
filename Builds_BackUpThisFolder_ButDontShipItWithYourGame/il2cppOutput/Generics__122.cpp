﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ICollection_1_t1AB5E7AA7512C5101B732371385CF057B149F3A3;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tA00CD2ADE9B7EDC5728A536E917C6398FDF7F412;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t8A911B5ED8CD36C7E01AF0BA93F4A9C57CACA86C;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IList_1_tC47C390A717A1D471354FBDA55D3A3772B16A7F2;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03;
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5;
struct SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EmptyArray_1_t34302FC8FC4BBA6F1E9A4D91CD8DDCD0C68568CC  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9  : public RuntimeObject
{
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A  : public RuntimeObject
{
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9  : public RuntimeObject
{
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065  : public RuntimeObject
{
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47  : public RuntimeObject
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B  : public RuntimeObject
{
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC  : public RuntimeObject
{
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016  : public RuntimeObject
{
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E  : public RuntimeObject
{
};
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2  : public RuntimeObject
{
	SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ____dict;
};
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5 : public RuntimeObject {};
struct SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___keys;
	ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* ___keyList;
	ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0  : public RuntimeObject
{
	SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ____dict;
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 
{
	intptr_t ____value;
};
struct ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 
{
	intptr_t ____value;
};
struct ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 
{
	intptr_t ____value;
};
struct ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED 
{
	intptr_t ____value;
};
struct ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	intptr_t ____value;
};
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	intptr_t ____value;
};
struct ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 
{
	intptr_t ____value;
};
struct ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 
{
	intptr_t ____value;
};
struct ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 
{
	intptr_t ____value;
};
struct ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 
{
	SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ____sortedList;
	int32_t ____key;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ____value;
	int32_t ____index;
	int32_t ____version;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F 
{
	int32_t ___key;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___value;
};
struct SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03  : public RuntimeObject
{
	SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ____sortedList;
	int32_t ____index;
	int32_t ____version;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ____currentValue;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 ____pointer;
	int32_t ____length;
};
struct Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer;
	int32_t ____length;
};
struct Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer;
	int32_t ____length;
};
struct Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 ____pointer;
	int32_t ____length;
};
struct Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 ____pointer;
	int32_t ____length;
};
struct Span_1_t460D4E78469192619B0075C15897A6987393AAF9 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 ____pointer;
	int32_t ____length;
};
struct Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80_StaticFields
{
	Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* ___defaultComparer;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_t34302FC8FC4BBA6F1E9A4D91CD8DDCD0C68568CC_StaticFields
{
	ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___Value;
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___Value;
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___Value;
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Value;
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Value;
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Value;
};
struct EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___Value;
};
struct EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___Value;
};
struct EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___Value;
};
struct EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC m_Items[1];

	inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
	}
	inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F m_Items[1];

	inline KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___Item1), (void*)NULL);
	}
	inline KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___Item1), (void*)NULL);
	}
};
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
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42  : public RuntimeArray
{
	ALIGN_FIELD (8) Guid_t m_Items[1];

	inline Guid_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
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
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_gshared_inline (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, int32_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, int32_t ___1_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_gshared_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_gshared_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* SortedList_2_GetKeyListHelper_mAC3F638A15BD63CEF03CB7C9F05C1F415C574D58_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyList__ctor_m16E0E2FBE784D189ABA6FB05669B07DB67DBD270_gshared (KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m707C474743CD35EBD2E0D8C7A650B785F271D7D7_gshared (ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m2989B74C6CDEEB642EDA2DE553603B4C92854E2C_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_mA2DB557810E9A09525633DD8AC2ED84C50EF462C_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714_gshared (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_mA52E42BBB515908093C6B343C370779F41ADFDFE_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F_gshared (Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m623B0EE0BF6B1B6817F56EE1FF83DA1160D53C43_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_mF6B0E5C8833FC45AA3F76B320F9BD7FF557B8E0C_gshared (ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* ___0_array, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_mAB63A06BD96D9A9FB3DFC0185BBA76105A5654BC_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m3370DBD0173B09FADBAC1F738CB157934729BA3A_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055_gshared (Guid_t* ___0_destination, Guid_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_gshared_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_gshared_inline (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, const RuntimeMethod*))SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_gshared_inline)(__this, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_inline (const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* (*) (const RuntimeMethod*))Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_gshared_inline)(method);
}
inline Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* (*) (const RuntimeMethod*))Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, int32_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, int32_t ___1_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___2_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634_gshared)(__this, ___0_index, ___1_key, ___2_value, method);
}
inline int32_t KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_gshared_inline)(__this, method);
}
inline ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC (*) (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_gshared_inline)(__this, method);
}
inline void SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline)(method);
}
inline void SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
inline KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* SortedList_2_GetKeyListHelper_mAC3F638A15BD63CEF03CB7C9F05C1F415C574D58 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method)
{
	return ((  KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, const RuntimeMethod*))SortedList_2_GetKeyListHelper_mAC3F638A15BD63CEF03CB7C9F05C1F415C574D58_gshared)(__this, method);
}
inline ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method)
{
	return ((  ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, const RuntimeMethod*))SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00_gshared)(__this, method);
}
inline void KeyList__ctor_m16E0E2FBE784D189ABA6FB05669B07DB67DBD270 (KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2*, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, const RuntimeMethod*))KeyList__ctor_m16E0E2FBE784D189ABA6FB05669B07DB67DBD270_gshared)(__this, ___0_dictionary, method);
}
inline void ValueList__ctor_m707C474743CD35EBD2E0D8C7A650B785F271D7D7 (ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0*, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, const RuntimeMethod*))ValueList__ctor_m707C474743CD35EBD2E0D8C7A650B785F271D7D7_gshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline bool SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5_gshared)(___0_key, method);
}
inline bool SortedList_2_ContainsKey_m2989B74C6CDEEB642EDA2DE553603B4C92854E2C (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_ContainsKey_m2989B74C6CDEEB642EDA2DE553603B4C92854E2C_gshared)(__this, ___0_key, method);
}
inline int32_t SortedList_2_IndexOfValue_mA2DB557810E9A09525633DD8AC2ED84C50EF462C (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))SortedList_2_IndexOfValue_mA2DB557810E9A09525633DD8AC2ED84C50EF462C_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714 (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F*, int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void SortedList_2_set_Capacity_mA52E42BBB515908093C6B343C370779F41ADFDFE (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_set_Capacity_mA52E42BBB515908093C6B343C370779F41ADFDFE_gshared)(__this, ___0_value, method);
}
inline void Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F (Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99*, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F_gshared)(__this, ___0_sortedList, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void SortedList_2_set_Item_m623B0EE0BF6B1B6817F56EE1FF83DA1160D53C43 (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, const RuntimeMethod*))SortedList_2_set_Item_m623B0EE0BF6B1B6817F56EE1FF83DA1160D53C43_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t Array_IndexOf_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_mF6B0E5C8833FC45AA3F76B320F9BD7FF557B8E0C (ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* ___0_array, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468*, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_mF6B0E5C8833FC45AA3F76B320F9BD7FF557B8E0C_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void SortedList_2_EnsureCapacity_mAB63A06BD96D9A9FB3DFC0185BBA76105A5654BC (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_EnsureCapacity_mAB63A06BD96D9A9FB3DFC0185BBA76105A5654BC_gshared)(__this, ___0_min, method);
}
inline bool SortedList_2_Remove_m3370DBD0173B09FADBAC1F738CB157934729BA3A (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7*, int32_t, const RuntimeMethod*))SortedList_2_Remove_m3370DBD0173B09FADBAC1F738CB157934729BA3A_gshared)(__this, ___0_key, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared)(__this, ___0_sortedList, ___1_getEnumeratorRetType, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, const RuntimeMethod*))Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline (const RuntimeMethod* method)
{
	return ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (const RuntimeMethod*))Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline)(method);
}
inline void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, const RuntimeMethod*))Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055 (Guid_t* ___0_destination, Guid_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Guid_t*, Guid_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2*, Guid_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, Guid_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline (const RuntimeMethod* method)
{
	return ((  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* (*) (const RuntimeMethod*))Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline)(method);
}
inline void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278*, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*, const RuntimeMethod*))Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, int32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, const RuntimeMethod*))Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4 (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (int64_t*, int64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC*, int64_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, int64_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline (const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (const RuntimeMethod*))Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline)(method);
}
inline void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955*, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, const RuntimeMethod*))Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, const RuntimeMethod*))Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (intptr_t*, intptr_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC*, intptr_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, intptr_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method)
{
	return ((  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* (*) (const RuntimeMethod*))Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline)(method);
}
inline void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*, const RuntimeMethod*))Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, const RuntimeMethod*))Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, int32_t, const RuntimeMethod*))Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method)
{
	return ((  Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* (*) (const RuntimeMethod*))Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline)(method);
}
inline void Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, const RuntimeMethod*))Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, const RuntimeMethod*))Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_inline (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, const RuntimeMethod*))Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline (const RuntimeMethod* method)
{
	return ((  QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* (*) (const RuntimeMethod*))Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline)(method);
}
inline void Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*, const RuntimeMethod*))Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, float*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, float*, int32_t, const RuntimeMethod*))Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (const RuntimeMethod*))Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline)(method);
}
inline void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, const RuntimeMethod*))Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42 (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint16_t*, uint16_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, uint16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, uint16_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline (const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (const RuntimeMethod*))Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline)(method);
}
inline void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, const RuntimeMethod*))Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, uint32_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, uint32_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (const RuntimeMethod*))Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline)(method);
}
inline void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, const RuntimeMethod*))Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908 (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, uint64_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F*, uint64_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, uint64_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline (const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (const RuntimeMethod*))Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline)(method);
}
inline void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, const RuntimeMethod*))Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_destination, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, int32_t, const RuntimeMethod*))Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline (const RuntimeMethod* method)
{
	return ((  Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* (*) (const RuntimeMethod*))Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline)(method);
}
inline void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5*, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, const RuntimeMethod*))Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, const RuntimeMethod*))Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_destination, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, int32_t, const RuntimeMethod*))Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline (const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline)(method);
}
inline void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460D4E78469192619B0075C15897A6987393AAF9*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, const RuntimeMethod*))Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, const RuntimeMethod*))Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_destination, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, int32_t, const RuntimeMethod*))Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline (const RuntimeMethod* method)
{
	return ((  Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* (*) (const RuntimeMethod*))Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline)(method);
}
inline void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, const RuntimeMethod*))Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline)(__this, ___0_array, method);
}
inline EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator__ctor_mEB72F2CF41E87B58760BDD794A31539BD77A681C_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* ___0_sortedList, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_0 = ___0_sortedList;
		__this->____sortedList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sortedList), (void*)L_0);
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_1 = ___0_sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		__this->____version = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_Dispose_m2B75F0B2AB4064246BEDA0B83895A76B322F5AEB_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, const RuntimeMethod* method) 
{
	{
		__this->____index = 0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_0 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&__this->____currentValue);
		il2cpp_codegen_initobj(L_0, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedListValueEnumerator_MoveNext_mCE6446F2275491988AD9183E58C232BA6C0FF701_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_1 = __this->____sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = __this->____index;
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_5 = __this->____sortedList;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_005d;
		}
	}
	{
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_7 = __this->____sortedList;
		NullCheck(L_7);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_8 = L_7->___values;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->____currentValue = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____currentValue))->___Item1), (void*)NULL);
		int32_t L_12 = __this->____index;
		__this->____index = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return (bool)1;
	}

IL_005d:
	{
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_13 = __this->____sortedList;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->____index = ((int32_t)il2cpp_codegen_add(L_14, 1));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_15 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&__this->____currentValue);
		il2cpp_codegen_initobj(L_15, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC SortedListValueEnumerator_get_Current_m7E6687FCEA57464AC4823DDB7DB0E45056426A50_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = __this->____currentValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedListValueEnumerator_System_Collections_IEnumerator_get_Current_m2566A4FB03DFF3E6700A5424792455360F06268F_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->____index;
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_2 = __this->____sortedList;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_5 = __this->____currentValue;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), &L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_System_Collections_IEnumerator_Reset_mB259970AE7F0B979B4F79838DB2CB7C6F7E19171_gshared (SortedListValueEnumerator_tE70CE65A7F584B7C7D3F65AA53A9710814A49F03* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* L_1 = __this->____sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		__this->____index = 0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_4 = (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(&__this->____currentValue);
		il2cpp_codegen_initobj(L_4, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = ___0_sortedList;
		il2cpp_codegen_write_instance_field_data<SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_0);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = ___0_sortedList;
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_Dispose_mFB3ABFEF03D1F4EDCB2AC4EF569D76C7B0273CCF_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedListValueEnumerator_MoveNext_m8B8542B70014CA3F49F6C3016817A3F538637B56_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_5 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_005d;
		}
	}
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_7 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->___values;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), L_11, SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_005d:
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_13 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), ((int32_t)il2cpp_codegen_add(L_14, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_get_Current_m538A9D804782565A4ED699A8B631BDD07CCEF597_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedListValueEnumerator_System_Collections_IEnumerator_get_Current_m0B34D349731D7759B64AA3C1995A593B1C05B09A_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_2 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator_System_Collections_IEnumerator_Reset_m322EE109C4BBDD4AD3D3568B7FD4EA4E86D34FB6_gshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_1 = *(SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3)))), SizeOf_TValue_tD97A06AA0F2E68B3B8DD39F7B451DF1FCB143DD1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_mD4D644689A46EFEB74B24144410DE96E67670565_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_0);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_1;
		L_1 = Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_1);
		__this->____size = 0;
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_2;
		L_2 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m7D7C6A241AA21DEDB9DF213EEF41809014759A38_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (uint32_t)L_5);
		__this->___keys = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_6);
		int32_t L_7 = ___0_capacity;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_8 = (ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468*)(ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 10), (uint32_t)L_7);
		__this->___values = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_8);
		Comparer_1_t2FF14F26F4D678A8FA199B888FF61A2A9D1D2D80* L_9;
		L_9 = Comparer_1_get_Default_m55220E2A5C7845F68201F047E7DA0D708E8AE051(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0013;
	}

IL_0013:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_key;
		RuntimeObject* L_4 = __this->___comparer;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618(L_1, 0, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = ___0_key;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_8);
		String_t* L_10;
		L_10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_004c:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_14 = ___1_value;
		SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634(__this, ((~L_12)), L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m74CD0080B6BA6EB3B394F0B32717941B99EEA8D1_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_1;
		L_1 = KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF09EF69B9618278077CCC4199AD6D19DB8D6E79E_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8;
		L_8 = KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_3, L_7, L_8);
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC67BB4FB0862A7F4D00CEFDED15773C1978507B8_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8;
		L_8 = KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC >::Invoke(8, L_3, L_7, L_8);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_mA52E42BBB515908093C6B343C370779F41ADFDFE_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* V_1 = NULL;
	{
		int32_t L_0 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = ___0_value;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002d:
	{
		int32_t L_8 = ___0_value;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_9 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (uint32_t)L_9);
		V_0 = L_10;
		int32_t L_11 = ___0_value;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_12 = (ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468*)(ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 10), (uint32_t)L_11);
		V_1 = L_12;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___keys;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		int32_t L_16 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, L_16, NULL);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_17 = __this->___values;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_18 = V_1;
		int32_t L_19 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_19, NULL);
	}

IL_0070:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		__this->___keys = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_20);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_21 = V_1;
		__this->___values = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_21);
		return;
	}

IL_007f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
		L_22 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_22);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_23;
		L_23 = Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_23);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Add_mF80B368C0B29A8E4597C41E7E6DC9E91B7290F67_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_002c:
	{
		RuntimeObject* L_5 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_6 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		String_t* L_9;
		L_9 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_6, (RuntimeObject*)L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0054:
	{
		RuntimeObject* L_11 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 13))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_12 = ___1_value;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_13 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		String_t* L_16;
		L_16 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_13, (RuntimeObject*)L_15, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_17, L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_007f:
	{
		RuntimeObject* L_18 = ___0_key;
		RuntimeObject* L_19 = ___1_value;
		SortedList_2_Add_m7E1D31B8FE8A348F03607B11373BF1C6EC289177(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_18, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 13))))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Keys_m172C33B78751EA61C36EFA8221EB4C6D26F102E7_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* L_0;
		L_0 = SortedList_2_GetKeyListHelper_mAC3F638A15BD63CEF03CB7C9F05C1F415C574D58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_mEBEED70021E09FCC11E8C5BAADBC68816399E1D3_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_0;
		L_0 = SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mC39E2CC577A76E89AD772DC7D7AAB2BD92C2E471_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_0;
		L_0 = SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Values_mF74F6EF577920350D138676801A6DDAA859CD345_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_0;
		L_0 = SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mA71D11F9B283569C7DED856AB177732DA4D2A913_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_0;
		L_0 = SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* SortedList_2_GetKeyListHelper_mAC3F638A15BD63CEF03CB7C9F05C1F415C574D58_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* L_0 = __this->___keyList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* L_1 = (KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		KeyList__ctor_m16E0E2FBE784D189ABA6FB05669B07DB67DBD270(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		__this->___keyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList), (void*)L_1);
	}

IL_0014:
	{
		KeyList_t301D3C162AB34EAF2DF8203BD2A0319FAA4F7FE2* L_2 = __this->___keyList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* SortedList_2_GetValueListHelper_m94475C805993046E3F1BF54FC3EAEF2582D46F00_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_0 = __this->___valueList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_1 = (ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		ValueList__ctor_m707C474743CD35EBD2E0D8C7A650B785F271D7D7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		__this->___valueList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList), (void*)L_1);
	}

IL_0014:
	{
		ValueList_tE25C23EB641DC03A4F975F63DC96F11020EFE0F0* L_2 = __this->___valueList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mAD25B014FAD96EAAB83F659C0C21AE84ADAE7BBD_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsReadOnly_mBC843B6FE75150BE0907442F7CCD3EB73BDE8BA9_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_ICollection_get_IsSynchronized_m2AA96A0F2F89E6A95E0EE230786F90FBE8CE76DF_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_ICollection_get_SyncRoot_m4C8DF32796069332D55A36BA6C49351A5502C4DC_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mB19DD4EF66085AAAEF479AE8195D8C1A219D1540_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0027;
	}

IL_0027:
	{
	}
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_1 = __this->___values;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
	}

IL_0040:
	{
		__this->____size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_Contains_m3C72C18157F958E10F1529289CFD877E36C10161_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = SortedList_2_ContainsKey_m2989B74C6CDEEB642EDA2DE553603B4C92854E2C(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m2989B74C6CDEEB642EDA2DE553603B4C92854E2C_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_m738546064DDC536978F64EE9ED1142E96CDAF5BA_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = ___0_value;
		int32_t L_1;
		L_1 = SortedList_2_IndexOfValue_mA2DB557810E9A09525633DD8AC2ED84C50EF462C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m7FE532D018ECDC222258D6839CF8770F9A2A6410_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11;
		L_11 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___keys;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_17 = __this->___values;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714((&V_1), L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F L_24 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0077:
	{
		int32_t L_26 = V_0;
		int32_t L_27;
		L_27 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_ICollection_CopyTo_mCD53B42424C31989BB2B42988C7794B9CDEBA31E_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_index;
		int32_t L_19;
		L_19 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		RuntimeArray* L_21 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86*)IsInst((RuntimeObject*)L_21, il2cpp_rgctx_data(method->klass->rgctx_data, 44)));
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		V_1 = 0;
		goto IL_00b6;
	}

IL_008c:
	{
		KeyValuePair_2U5BU5D_tEB9CA493A38BDE25A0CA20B86ED9A094EBB73D86* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___keys;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_30 = __this->___values;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F L_34;
		memset((&L_34), 0, sizeof(L_34));
		KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714((&L_34), L_29, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F)L_34);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b6:
	{
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		RuntimeArray* L_38 = ___0_array;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_38, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = V_2;
		if (L_39)
		{
			goto IL_00da;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_40 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
	}

IL_00da:
	{
	}
	try
	{
		{
			V_3 = 0;
			goto IL_010a_1;
		}

IL_00df_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
			int32_t L_42 = V_3;
			int32_t L_43 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->___keys;
			int32_t L_45 = V_3;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_48 = __this->___values;
			int32_t L_49 = V_3;
			NullCheck(L_48);
			int32_t L_50 = L_49;
			ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F L_52;
			memset((&L_52), 0, sizeof(L_52));
			KeyValuePair_2__ctor_m364449725EF37F83F3EF6FF2AABAD39902B9D714((&L_52), L_47, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
			KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F L_53 = L_52;
			RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_53);
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, L_54);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, L_43))), (RuntimeObject*)L_54);
			int32_t L_55 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		}

IL_010a_1:
		{
			int32_t L_56 = V_3;
			int32_t L_57;
			L_57 = SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
			if ((((int32_t)L_56) < ((int32_t)L_57)))
			{
				goto IL_00df_1;
			}
		}
		{
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_58 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_mAB63A06BD96D9A9FB3DFC0185BBA76105A5654BC_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___keys;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0025:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_min;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___0_min;
		V_0 = L_5;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		SortedList_2_set_Capacity_mA52E42BBB515908093C6B343C370779F41ADFDFE(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC SortedList_2_GetByIndex_mDD31AD9AF9F3C01F0BC3EF3B2DA2310D6213A946_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_7 = __this->___values;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_GetEnumerator_m8D8AD045CCE5FF8D2277E6747DC207B15F3DC1B8_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m67154B1E09834301C15DC1321D8FABA08F9615F5_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_GetEnumerator_m98799C36122FF3FCD9F845F6F382C4E5F8BA281B_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IEnumerable_GetEnumerator_m4CD04FD25EDFEEF3D88E95883CD635ABF396EA28_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m74C52976826E66689949A9301DC725F33EBA469F((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Enumerator_t88D5D3979AEC828559D0EEA78AAF2AC6BE1A5F99 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_GetKey_mA68074899C5C4537FEE85FA0F67BD90BDD9B4D5E_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC SortedList_2_get_Item_m9C091C694CAF9EC59938A8912DC7C7FE604708ED_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_3 = __this->___values;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_0019:
	{
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		String_t* L_8;
		L_8 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), (RuntimeObject*)L_7, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_9 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m623B0EE0BF6B1B6817F56EE1FF83DA1160D53C43_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0013;
	}

IL_0013:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_key;
		RuntimeObject* L_4 = __this->___comparer;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618(L_1, 0, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_7 = __this->___values;
		int32_t L_8 = V_0;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_9 = ___1_value;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)L_9);
		int32_t L_10 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}

IL_004d:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___0_key;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_13 = ___1_value;
		SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634(__this, ((~L_11)), L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Item_mEC6A5179000152322D9754CD1D6B9FA842068D30_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_5 = __this->___values;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), &L_9);
		return L_10;
	}

IL_002b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_set_Item_mE932BAD125A553245B4F583F41D2D7E81390D340_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_value;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		RuntimeObject* L_6 = ___0_key;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
	}
	try
	{
		int32_t L_7 = V_0;
		RuntimeObject* L_8 = ___1_value;
		SortedList_2_set_Item_m623B0EE0BF6B1B6817F56EE1FF83DA1160D53C43(__this, L_7, ((*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)UnBox(L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 13))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		String_t* L_13;
		L_13 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_10, (RuntimeObject*)L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0068:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0013;
	}

IL_0013:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_key;
		RuntimeObject* L_4 = __this->___comparer;
		int32_t L_5;
		L_5 = Array_BinarySearch_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC9C8319715804B003E1E2802B394C514987FE618(L_1, 0, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}

IL_0033:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_mA2DB557810E9A09525633DD8AC2ED84C50EF462C_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___0_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_0 = __this->___values;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_1 = ___0_value;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_mF6B0E5C8833FC45AA3F76B320F9BD7FF557B8E0C(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m85F56CC00E71527D093BEF062FE5FBEF63273634_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, int32_t ___1_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___2_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		SortedList_2_EnsureCapacity_mAB63A06BD96D9A9FB3DFC0185BBA76105A5654BC(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0061;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___keys;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_11 = __this->___values;
		int32_t L_12 = ___0_index;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_13 = __this->___values;
		int32_t L_14 = ___0_index;
		int32_t L_15 = __this->____size;
		int32_t L_16 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
	}

IL_0061:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___keys;
		int32_t L_18 = ___0_index;
		int32_t L_19 = ___1_key;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_19);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_20 = __this->___values;
		int32_t L_21 = ___0_index;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_22 = ___2_value;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)L_22);
		int32_t L_23 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_m8794493950EE66043F79ED4A42C762C425B4A04E_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_3 = ___1_value;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)L_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC*)L_3)->___Item1), (void*)NULL);
		return (bool)1;
	}

IL_0020:
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC* L_8 = ___1_value;
		il2cpp_codegen_initobj(L_8, sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___keys;
		int32_t L_11 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___keys;
		int32_t L_13 = ___0_index;
		int32_t L_14 = __this->____size;
		int32_t L_15 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_16 = __this->___values;
		int32_t L_17 = ___0_index;
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_18 = __this->___values;
		int32_t L_19 = ___0_index;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), (RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0074:
	{
		goto IL_0095;
	}

IL_0095:
	{
	}
	{
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_22 = __this->___values;
		int32_t L_23 = __this->____size;
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC));
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_24 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC)L_24);
	}

IL_00b6:
	{
		int32_t L_25 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m3370DBD0173B09FADBAC1F738CB157934729BA3A_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = SortedList_2_IndexOfKey_mF01C277359E2A4B5546D6DFCF1ABACF5608414C9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		SortedList_2_RemoveAt_m9E0D5C9F169CACDB6CE409FF23871DCCDCDA3789(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Remove_m3D1F08D5947B9B370CB783FE5354E92AC31D34F8_gshared (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = SortedList_2_Remove_m3370DBD0173B09FADBAC1F738CB157934729BA3A(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m19061EE25FC31D14DEAAEE5C3C3A8FDBE19C95E5_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m9CDE8A15F6710C47591CDE1AE5C0241C6380306D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_1);
		__this->____size = 0;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_mC39BDB99A3FFA868E24D5FDE5DE0B157AA1A7A09_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (uint32_t)L_5);
		__this->___keys = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_6);
		int32_t L_7 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 10), (uint32_t)L_7);
		__this->___values = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_8);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_9;
		L_9 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_9);
		String_t* L_11;
		L_11 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5E28CD6EF4775439631781B0B8C1C21FB0BCB624_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5B95DE8F62031E2CFF5C1B79AACB9D4A29322B48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3AA632F529E8104E858B38BEBD3E51FADCEA69DE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		int32_t L_0 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = ___0_value;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002d:
	{
		int32_t L_8 = ___0_value;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_9 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (uint32_t)L_9);
		V_0 = L_10;
		int32_t L_11 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 10), (uint32_t)L_11);
		V_1 = L_12;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->___keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		int32_t L_16 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, L_16, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_19, NULL);
	}

IL_0070:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		__this->___keys = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_20);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_1;
		__this->___values = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_21);
		return;
	}

IL_007f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22;
		L_22 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_22);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23;
		L_23 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_23);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Add_m4866D80E4CC9798CB02F14658273996701069A48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_0, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_3);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_7 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_7, (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0054:
	{
		RuntimeObject* L_12 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 13))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_13 = ___1_value;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_14 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_14, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_007f:
	{
		RuntimeObject* L_19 = ___0_key;
		void* L_21 = UnBox_Any(L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_20);
		RuntimeObject* L_22 = ___1_value;
		void* L_24 = UnBox_Any(L_22, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_23);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Keys_m673C0CB55A2E51947BCB364D336A683C1DBDA5A5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_m3629A631F9E91380D33AF97AB0022D43F799F8BA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4D4F34CD5D4C8ACA4F369647D286BA598EA4A091_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Values_m439BF2A831D64DFCA3E25F90533820DD34C025FC_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m15B1319DA31A9A9A5C49D2E540BA1B67F2A34743_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0 = __this->___keyList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_1 = (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		((  void (*) (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		__this->___keyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList), (void*)L_1);
	}

IL_0014:
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_2 = __this->___keyList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0 = __this->___valueList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_1 = (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		((  void (*) (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		__this->___valueList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList), (void*)L_1);
	}

IL_0014:
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_2 = __this->___valueList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m918055FE29F64F5A3829E6B58933240CBD7CF80A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsReadOnly_mC0715D1726D2216C2BBA4C4665DC448D06A40D43_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_ICollection_get_IsSynchronized_m0C699123D6114FF7A6285B60728B72CB9ED2BD64_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_ICollection_get_SyncRoot_m20ED86A54769C61DE751A3952BBDD778D3B1F701_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mD7568EA1182318C8D54FF2F3BD633C7D4B161CE2_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___keys;
		int32_t L_3 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_3, NULL);
	}

IL_0027:
	{
		bool L_4;
		L_4 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0040:
	{
		__this->____size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_Contains_m31D1A606D3202F88790C274AE45023C52D3ABD8A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3BF3B25F198D66132212DE2A3BEEE316C1BDF1AF_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_24 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	int32_t V_0 = 0;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->___keys;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___values;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_20: *(void**)L_20));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		il2cpp_codegen_memcpy(L_24, V_1, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_24, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), (void*)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0077:
	{
		int32_t L_26 = V_0;
		int32_t L_27;
		L_27 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_ICollection_CopyTo_m0DE93E0255FA7B7EC7A5D41A276741CB2A19C133_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_49 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_54 = L_34;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_53 = L_33;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_55 = L_35;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_36 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_56 = L_36;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_index;
		int32_t L_19;
		L_19 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		RuntimeArray* L_21 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_21, il2cpp_rgctx_data(method->klass->rgctx_data, 44)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		V_1 = 0;
		goto IL_00b6;
	}

IL_008c:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->___keys;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = __this->___values;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		memset(L_36, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_34, L_29, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_33), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_36, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 15), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b6:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		RuntimeArray* L_40 = ___0_array;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_40, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
		if (L_41)
		{
			goto IL_00da;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00da:
	{
	}
	try
	{
		{
			V_3 = 0;
			goto IL_010a_1;
		}

IL_00df_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = __this->___keys;
			int32_t L_47 = V_3;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			il2cpp_codegen_memcpy(L_49, (L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = __this->___values;
			int32_t L_51 = V_3;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			il2cpp_codegen_memcpy(L_53, (L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
			memset(L_56, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_54, L_49, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_53), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), L_56);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_57);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, L_45))), (RuntimeObject*)L_57);
			int32_t L_58 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_010a_1:
		{
			int32_t L_59 = V_3;
			int32_t L_60;
			L_60 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00df_1;
			}
		}
		{
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___keys;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0025:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_min;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___0_min;
		V_0 = L_5;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_GetEnumerator_m0C62F4A674E308DEA3A29964E839D9A5C8B1BCA1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11A03CF9E906BAF59C1F708CE0150B89E36F5F32_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_GetEnumerator_m8FDF835FE585FFADB347CDB3EC09F78A53502006_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IEnumerable_GetEnumerator_m7E1C72FB502649A3054AA6D3BCB06BF198E9DF6C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 48), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetKey_m977764A3D57285814E6D5D9B191021BF4DCF8621_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_get_Item_m4B9BA956EABFE4BE97DF5CA24A015A651D09D3A7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___values;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}

IL_0019:
	{
		String_t* L_8;
		L_8 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 11), il2cpp_rgctx_method(method->klass->rgctx_data, 51), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key));
		String_t* L_9;
		L_9 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), (RuntimeObject*)L_8, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_10 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_15 = L_11;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->___values;
		int32_t L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
		int32_t L_12 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Item_m97EC5F8C45891CC6F911F817655589D9203057B4_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_10);
		return L_11;
	}

IL_002b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_set_Item_m8B859F5250231E8D677DF031E5E0FEDFE8C94BF9_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_value;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0031:
	{
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_8);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	}
	try
	{
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_11 = ___1_value;
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_12);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)))));
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_14 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_15 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_15, (RuntimeObject*)L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_19, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0068:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___values;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___keys;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->___values;
		int32_t L_12 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->___values;
		int32_t L_14 = ___0_index;
		int32_t L_15 = __this->____size;
		int32_t L_16 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
	}

IL_0061:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___keys;
		int32_t L_18 = ___0_index;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___1_key : &___1_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_17);
		il2cpp_codegen_memcpy((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), L_19, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), (void*)L_19);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->___values;
		int32_t L_21 = ___0_index;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? ___2_value : &___2_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_20);
		il2cpp_codegen_memcpy((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), L_22, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), (void*)L_22);
		int32_t L_23 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_m6130DC03E87B7D7278E93114284F5B95602AE039_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_7, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_7);
		return (bool)1;
	}

IL_0020:
	{
		Il2CppFullySharedGenericAny* L_8 = ___1_value;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___keys;
		int32_t L_11 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___keys;
		int32_t L_13 = ___0_index;
		int32_t L_14 = __this->____size;
		int32_t L_15 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___values;
		int32_t L_17 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		int32_t L_19 = ___0_index;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), (RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0074:
	{
		bool L_22;
		L_22 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->___keys;
		int32_t L_24 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_25, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), L_25, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), (void*)L_25);
	}

IL_0095:
	{
		bool L_26;
		L_26 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->___values;
		int32_t L_28 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_29, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_27);
		il2cpp_codegen_memcpy((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_29, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_29);
	}

IL_00b6:
	{
		int32_t L_30 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_30, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Remove_m4A5603583AFC8DE869154A5D1B5973C81FADC18D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m61CB4E239F4B8535AE2EB854BD18DDFC1142FD07_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_10);
		int32_t L_12 = ___1_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_11, L_12);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m03647096ABFA9C361BD608B88E888E6D24BD45B6_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((uint8_t*)L_1);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_get_Item_m52CBA5BCE5D91D266DC53BC8CAA58B6B838758C9_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_GetPinnableReference_mEFCAEA30D41DF35EEA06996BF69E98951950937B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCB7BFD6347A5FC9F5C98881FBB6EED05DC7CEAFB_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_0 = __this->____pointer;
		V_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m179EE62D8B2DFC60ADF134F7DF0633D7949836EE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_4 = __this->____pointer;
		V_2 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_12 = __this->____pointer;
		V_2 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_18 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = L_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_33 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_38 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_43 = L_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_48 = L_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_63 = L_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_68 = L_69;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_73 = L_74;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m312B7E6091A77C90731BB4B3B0F9013A0380E8FE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m222A33CADBBA4AE2718BA2E3FB364B9595A83E5E_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 Span_1_op_Implicit_m37C59BB49FE22493B2449536D2487DC02E45B376_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_0 = ___0_span;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2DA66DEE0290DEFDE874C1F418EF5AEB17E8E2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_m0348A44E5418C052C9535570A1DE71BB4AE61E71_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_mE5AD8E826B11284EBF2D856E2D337D31DE34D25B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Span_1_ToArray_m6F8FFA52461A0D5172130CD6B6AF02461326AF5C_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_5);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_7 = __this->____pointer;
		V_0 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB55BD6134EA35A11485DCF408D6D5FFC0BD3F533_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6962C2A5B1AD4080D5573C23E91A19EB6D728CF7_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_op_Implicit_m9C1413FB618ED0B2E091F5EF63CE03A4C0AEC1A2_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0037;
	}

IL_0037:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Guid_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<Guid_t>(L_3);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1FD2C8FB671A09BDE1915A4A379D6974522C4929_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Guid_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<Guid_t>(L_10);
		int32_t L_12 = ___1_start;
		Guid_t* L_13;
		L_13 = il2cpp_unsafe_add<Guid_t,int32_t>(L_11, L_12);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9E5B232968621DE43BE39D11E3256431284486E9_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Guid_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<Guid_t>((uint8_t*)L_1);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t* Span_1_get_Item_m2082DDB5259A72A5F7869FF88984EC82CB2B1FBD_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Guid_t* L_5;
		L_5 = il2cpp_unsafe_add<Guid_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t* Span_1_GetPinnableReference_m8FE2A0B29C5AFC60B234CC1B4E3ABF103AA519A5_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Guid_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<Guid_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mF0D6C557B1FB6DAD98B2DBF72FEE53F69A99CA3C_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_0 = __this->____pointer;
		V_0 = L_0;
		Guid_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Guid_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m2F1C0637BBF5F9AC4322B4A0A3BA0C579F2CCDAA_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Guid_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Guid_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Guid_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_4 = __this->____pointer;
		V_2 = L_4;
		Guid_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_12 = __this->____pointer;
		V_2 = L_12;
		Guid_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Guid_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Guid_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Guid_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Guid_t L_19 = ___0_value;
		*(Guid_t*)L_18 = L_19;
		Guid_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Guid_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Guid_t L_24 = ___0_value;
		*(Guid_t*)L_23 = L_24;
		Guid_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Guid_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Guid_t L_29 = ___0_value;
		*(Guid_t*)L_28 = L_29;
		Guid_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Guid_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Guid_t L_34 = ___0_value;
		*(Guid_t*)L_33 = L_34;
		Guid_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Guid_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Guid_t L_39 = ___0_value;
		*(Guid_t*)L_38 = L_39;
		Guid_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Guid_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Guid_t L_44 = ___0_value;
		*(Guid_t*)L_43 = L_44;
		Guid_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Guid_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Guid_t L_49 = ___0_value;
		*(Guid_t*)L_48 = L_49;
		Guid_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Guid_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Guid_t L_54 = ___0_value;
		*(Guid_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Guid_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Guid_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Guid_t L_64 = ___0_value;
		*(Guid_t*)L_63 = L_64;
		Guid_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Guid_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Guid_t L_69 = ___0_value;
		*(Guid_t*)L_68 = L_69;
		Guid_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Guid_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Guid_t L_74 = ___0_value;
		*(Guid_t*)L_73 = L_74;
		Guid_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Guid_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Guid_t L_79 = ___0_value;
		*(Guid_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Guid_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Guid_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Guid_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Guid_t L_85 = ___0_value;
		*(Guid_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m49D952E77D8D9EA847833A8A0306CF38432F0F60_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_2 = ___0_destination;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3 = L_2.____pointer;
		V_0 = L_3;
		Guid_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_0 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m959BC9DD611B8EA337DA7618376F30C6B751CC82_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_2 = ___0_destination;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_3 = L_2.____pointer;
		V_1 = L_3;
		Guid_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_1 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 Span_1_op_Implicit_mB0979C441C6CA5AF2F3D2F3BB6866482BA194964_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_0 = ___0_span;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1 = L_0.____pointer;
		V_0 = L_1;
		Guid_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mABBFE1E34C99A5BA84456EC966F0754FED7FC4EF_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_1 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_Slice_m4358A6176CDDC4FFD79DCA6A29772ED68E345CC5_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_2 = __this->____pointer;
		V_0 = L_2;
		Guid_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Guid_t* L_5;
		L_5 = il2cpp_unsafe_add<Guid_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_Slice_m8BFF27386523C8A5FAEB97C9C729479BB2AB4606_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5 = __this->____pointer;
		V_0 = L_5;
		Guid_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Guid_t* L_8;
		L_8 = il2cpp_unsafe_add<Guid_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Span_1_ToArray_mBB99E069A568AD6B3A5FD6852BDDBD8E04B8D944_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1;
		L_1 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Guid_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<Guid_t>(L_5);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_7 = __this->____pointer;
		V_0 = L_7;
		Guid_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Guid_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGuid_t_m6CEF4BB2AE7AF961629C875F7D70866BC6681055(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mA1B2CB3B50882EB4E3313F68EBD7C58A3D5E06A6_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBAF2C317CECB3D38449CC875B236CBAB0097A033_gshared (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 Span_1_op_Implicit_m4255A6ACF4534515E8030A70013E8604982A8A49_gshared (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE5D19FF7B2CED496CE41333FF842F490D1F14C03_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int32_t>(L_10);
		int32_t L_12 = ___1_start;
		int32_t* L_13;
		L_13 = il2cpp_unsafe_add<int32_t,int32_t>(L_11, L_12);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m31EE4A5510B5C504DB26DB281BC7D4179B859F2B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_get_Item_m9272911ACF4FC0A82F6053A0DE22CEBC8C10D4E0_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Span_1_GetPinnableReference_mF920821F83971F1D7D3E554CAD596D5902754811_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m36EEDEB219123208E625AC1446BC03AB5A21A001_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_0 = __this->____pointer;
		V_0 = L_0;
		int32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0911D9EBB79D74E3F1442C095DEDB346CBE87340_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_4 = __this->____pointer;
		V_2 = L_4;
		int32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_12 = __this->____pointer;
		V_2 = L_12;
		int32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int32_t L_19 = ___0_value;
		*(int32_t*)L_18 = L_19;
		int32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int32_t L_24 = ___0_value;
		*(int32_t*)L_23 = L_24;
		int32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int32_t L_29 = ___0_value;
		*(int32_t*)L_28 = L_29;
		int32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int32_t L_34 = ___0_value;
		*(int32_t*)L_33 = L_34;
		int32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int32_t L_39 = ___0_value;
		*(int32_t*)L_38 = L_39;
		int32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int32_t L_44 = ___0_value;
		*(int32_t*)L_43 = L_44;
		int32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int32_t L_49 = ___0_value;
		*(int32_t*)L_48 = L_49;
		int32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int32_t L_54 = ___0_value;
		*(int32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int32_t L_64 = ___0_value;
		*(int32_t*)L_63 = L_64;
		int32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int32_t L_69 = ___0_value;
		*(int32_t*)L_68 = L_69;
		int32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int32_t L_74 = ___0_value;
		*(int32_t*)L_73 = L_74;
		int32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int32_t L_79 = ___0_value;
		*(int32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int32_t L_85 = ___0_value;
		*(int32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m197E47790117E2C925FE1A8E051A19AB9CF4260B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m33CBE4497D24B50852F8C5C0924DFF38724969BD_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 Span_1_op_Implicit_m2740023916201D5EB04C52CEB9FB3E175E79FE7A_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_span;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1 = L_0.____pointer;
		V_0 = L_1;
		int32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m71CB64722D92C563993B18D00317C1A3929D259B_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_mEE3E0DF3B0F4D4D2A6CE3587C2919CD859EF4973_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_Slice_m7586DA899BDF88591C3546C39E571CE889D6C098_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Span_1_ToArray_m45051661AD085CCC9DDBA0E5926090B360668450_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1756B3F9D59F21477044E6EE24B20B51BB216F31_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mBB9141DEAC1EA44851C84E0A12B1A3136460B0D4_gshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 Span_1_op_Implicit_m75103E0CA16D9EEB5414F2FA9611149122CF23CC_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int64_t>(L_3);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m63E0AC4D46B359D853FBD38A15D2C6D19ACC99DB_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		int64_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<int64_t>(L_10);
		int32_t L_12 = ___1_start;
		int64_t* L_13;
		L_13 = il2cpp_unsafe_add<int64_t,int32_t>(L_11, L_12);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m57107B0971C215948970E813F419EC87CC0AB443_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int64_t>((uint8_t*)L_1);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Span_1_get_Item_m1D3E337979E0D03E72B7F9290DAF1ABAE018E913_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int64_t* L_5;
		L_5 = il2cpp_unsafe_add<int64_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Span_1_GetPinnableReference_mF59782789C9CFAF154BCACF6AB27D8CFB84EDB44_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int64_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<int64_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6864C2E74199530DEBBE8672C774EF8B41840091_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_0 = __this->____pointer;
		V_0 = L_0;
		int64_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<int64_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m76D13625B09398D11591FF340F0B94F788B32D2A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int64_t V_1 = 0;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	int64_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<int64_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int64_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_4 = __this->____pointer;
		V_2 = L_4;
		int64_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_12 = __this->____pointer;
		V_2 = L_12;
		int64_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<int64_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		int64_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		int64_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		int64_t L_19 = ___0_value;
		*(int64_t*)L_18 = L_19;
		int64_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		int64_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		int64_t L_24 = ___0_value;
		*(int64_t*)L_23 = L_24;
		int64_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		int64_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		int64_t L_29 = ___0_value;
		*(int64_t*)L_28 = L_29;
		int64_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		int64_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		int64_t L_34 = ___0_value;
		*(int64_t*)L_33 = L_34;
		int64_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		int64_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		int64_t L_39 = ___0_value;
		*(int64_t*)L_38 = L_39;
		int64_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		int64_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		int64_t L_44 = ___0_value;
		*(int64_t*)L_43 = L_44;
		int64_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		int64_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		int64_t L_49 = ___0_value;
		*(int64_t*)L_48 = L_49;
		int64_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		int64_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		int64_t L_54 = ___0_value;
		*(int64_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		int64_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		int64_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		int64_t L_64 = ___0_value;
		*(int64_t*)L_63 = L_64;
		int64_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int64_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		int64_t L_69 = ___0_value;
		*(int64_t*)L_68 = L_69;
		int64_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		int64_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		int64_t L_74 = ___0_value;
		*(int64_t*)L_73 = L_74;
		int64_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		int64_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		int64_t L_79 = ___0_value;
		*(int64_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		int64_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		int64_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<int64_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		int64_t L_85 = ___0_value;
		*(int64_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m13F279BEC9B9BB1E2D4D06C1C93F44AECA0EEBD4_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_2 = ___0_destination;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3 = L_2.____pointer;
		V_0 = L_3;
		int64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_0 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB819E6D9660E53A8964BEDACE758DBF652C060B0_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_2 = ___0_destination;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_3 = L_2.____pointer;
		V_1 = L_3;
		int64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_1 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC Span_1_op_Implicit_m4BB3A14D34CF739A36349066EDF43FA836F70DCE_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_0 = ___0_span;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1 = L_0.____pointer;
		V_0 = L_1;
		int64_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m00EA5D946C52A9C065C59F3E5AE77FB049710EE2_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_1 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_Slice_m1D3852AEAC35396DF476C94E7C9FE3B63480A63B_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_2 = __this->____pointer;
		V_0 = L_2;
		int64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int64_t* L_5;
		L_5 = il2cpp_unsafe_add<int64_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_Slice_m99112BD452022D83AFFBA2F394D3F7FC4143FE7D_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5 = __this->____pointer;
		V_0 = L_5;
		int64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int64_t* L_8;
		L_8 = il2cpp_unsafe_add<int64_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Span_1_ToArray_m48970EF6F3DDB984D842A90662327A9D0A999E0E_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int64_t>(L_5);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_7 = __this->____pointer;
		V_0 = L_7;
		int64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mCC4EC36ABDD3020E07A70D7B2BD57CDCC7EE1EE3_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m732077720FEC16C4611EB21EE86797436F47663A_gshared (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 Span_1_op_Implicit_m715E874D8E8E8B7AA91823924610C5854E563216_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0037;
	}

IL_0037:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		intptr_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<intptr_t>(L_3);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m19BF27578A3929BF51739C8DE72736E0B90E0A06_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		intptr_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<intptr_t>(L_10);
		int32_t L_12 = ___1_start;
		intptr_t* L_13;
		L_13 = il2cpp_unsafe_add<intptr_t,int32_t>(L_11, L_12);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1B534D079529960137BFAD24CB9A53E5CC96DCC6_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>((uint8_t*)L_1);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Span_1_get_Item_m8D779F6DBC4D27FC745C8A87E520C09895EAAA37_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Span_1_GetPinnableReference_m75C665E343CCDE131647F0F089008D0DBDBDF8A0_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		intptr_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<intptr_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m463CEF8436AF187272FD7BCBA50A99990D680A08_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_0 = __this->____pointer;
		V_0 = L_0;
		intptr_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<intptr_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m433F1D45EE529EFE032E81CF4ECA1CC829E7006D_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	intptr_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<intptr_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_4 = __this->____pointer;
		V_2 = L_4;
		intptr_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_12 = __this->____pointer;
		V_2 = L_12;
		intptr_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<intptr_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		intptr_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		intptr_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		intptr_t L_19 = ___0_value;
		*(intptr_t*)L_18 = L_19;
		intptr_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		intptr_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		intptr_t L_24 = ___0_value;
		*(intptr_t*)L_23 = L_24;
		intptr_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		intptr_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		intptr_t L_29 = ___0_value;
		*(intptr_t*)L_28 = L_29;
		intptr_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		intptr_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		intptr_t L_34 = ___0_value;
		*(intptr_t*)L_33 = L_34;
		intptr_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		intptr_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		intptr_t L_39 = ___0_value;
		*(intptr_t*)L_38 = L_39;
		intptr_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		intptr_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		intptr_t L_44 = ___0_value;
		*(intptr_t*)L_43 = L_44;
		intptr_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		intptr_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		intptr_t L_49 = ___0_value;
		*(intptr_t*)L_48 = L_49;
		intptr_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		intptr_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		intptr_t L_54 = ___0_value;
		*(intptr_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		intptr_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		intptr_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		intptr_t L_64 = ___0_value;
		*(intptr_t*)L_63 = L_64;
		intptr_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		intptr_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		intptr_t L_69 = ___0_value;
		*(intptr_t*)L_68 = L_69;
		intptr_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		intptr_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		intptr_t L_74 = ___0_value;
		*(intptr_t*)L_73 = L_74;
		intptr_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		intptr_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		intptr_t L_79 = ___0_value;
		*(intptr_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		intptr_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		intptr_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<intptr_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		intptr_t L_85 = ___0_value;
		*(intptr_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA2C7AEB7FB3D5C890DC57D8BB69AE4D7C239CE49_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_0 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m44ABFD3D4731222319AEDAEFEE8AA10E742D4A14_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_1 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC Span_1_op_Implicit_mFE580AC9CB6EEBB7EC9280AC9A61BBE656EA76C2_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_0 = ___0_span;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1 = L_0.____pointer;
		V_0 = L_1;
		intptr_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m2F4953F51578C15DF606507238D710205019E0D2_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_Slice_m9CDBFE2D552F421EFE2F11AA6EA190D3B7E471AC_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_Slice_m1130A040ED84EAA1F6675CCDC8B6A5664266BB95_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		intptr_t* L_8;
		L_8 = il2cpp_unsafe_add<intptr_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Span_1_ToArray_m943618138CD1D4AFACD6D3E92578E3C446C1E531_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1;
		L_1 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		intptr_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<intptr_t>(L_5);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_7 = __this->____pointer;
		V_0 = L_7;
		intptr_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m777599FCB3554E547EE9B6BAD7319A71E2F7B4CE_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m994471F86102D7FA8160BAC8EF25941D20845232_gshared (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 Span_1_op_Implicit_mBBEB8AD9962B5671A463EAD34E4559D7D9F9E80D_gshared (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		goto IL_0037;
	}

IL_0037:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_3);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE8232C06464213067BB867329239510FD481982D_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_11;
		L_11 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_10);
		int32_t L_12 = ___1_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_13;
		L_13 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_11, L_12);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFA501D433BD32705D8D9FF2EFB26C6142C15335E_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2;
		L_2 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>((uint8_t*)L_1);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_ptr;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* Span_1_get_Item_mE80EB19883E5983B4F2A0A1F493A3E732251EAE5_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_2 = __this->____pointer;
		V_0 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5;
		L_5 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* Span_1_GetPinnableReference_m0CBC2A234BD785E004976D3C7F93E98FD46B7F3F_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_1;
		L_1 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_2 = __this->____pointer;
		V_0 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mAF0F4C4CE4CD30E33B1D6FFF8FBE4DE76210FD8B_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_0 = __this->____pointer;
		V_0 = L_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m158D5A684B40EC6186AF52BCE423A646675C4D74_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_4 = __this->____pointer;
		V_2 = L_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_12 = __this->____pointer;
		V_2 = L_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_18 = L_19;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_23 = L_24;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_28 = L_29;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_33 = L_34;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_38 = L_39;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_43 = L_44;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_48 = L_49;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_64 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_63 = L_64;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_69 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_68 = L_69;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_74 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_73 = L_74;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_79 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_85 = ___0_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4E34299873B69CC6C566901C1BD5AC4A09B68569_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_2 = ___0_destination;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3 = L_2.____pointer;
		V_0 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m67BB989E3EEAE61213FB0A489552D36A6B97E5FB_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_2 = ___0_destination;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3 = L_2.____pointer;
		V_1 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_1));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_1 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 Span_1_op_Implicit_m78BFA5BE4F84901CDDD8EDBD8A11C768E4F4C4B4_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_0 = ___0_span;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_1 = L_0.____pointer;
		V_0 = L_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m09572C04D5FA3C869DC7F9AA919C60A410A1BA7B_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_1 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E Span_1_Slice_m08D7385FC8618D2523BABA1E477090665B513CBD_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_2 = __this->____pointer;
		V_0 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5;
		L_5 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E Span_1_Slice_m52E7AE5C2E7A99EB9FE8A479DF09553F7B1DCE3A_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8;
		L_8 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Span_1_ToArray_m0C441D8B8E14F9F8A026B6CDA0046EBE6EE88CE6_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1;
		L_1 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_5);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_7 = __this->____pointer;
		V_0 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mE64D4C033925C505A84A790A772E0540A0F61AF3_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m5A8F470E3D388ADBBAF5FB39A435B081243DC945_gshared (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E Span_1_op_Implicit_m087A8B1A6208B7777EA9342919135633FAD01D6E_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		goto IL_0037;
	}

IL_0037:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_3);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m821D1955B569BA1E9BB3B29FEA7CC17D66F42594_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11;
		L_11 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_10);
		int32_t L_12 = ___1_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13;
		L_13 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_11, L_12);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA6B0A6ED7314F9301B3FC7317CFED015A7DA262B_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2;
		L_2 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>((uint8_t*)L_1);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_ptr;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* Span_1_get_Item_mB7071AA8E33DE4B13D2209840375228A5D52602C_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_2 = __this->____pointer;
		V_0 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5;
		L_5 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* Span_1_GetPinnableReference_mF0A90F1E14D2D9075750CB8B57E0856E89ABB703_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1;
		L_1 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_2 = __this->____pointer;
		V_0 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m5120E1C2F78503B6FE831E8A69AA06459E241F0C_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_0 = __this->____pointer;
		V_0 = L_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mA5A9176D924B9FBDB11B8E951E65559742231354_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_4 = __this->____pointer;
		V_2 = L_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_12 = __this->____pointer;
		V_2 = L_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_18 = L_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_23 = L_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_28 = L_29;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_33 = L_34;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_38 = L_39;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_43 = L_44;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_48 = L_49;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_63 = L_64;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_68 = L_69;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_73 = L_74;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85 = ___0_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mBC7F3CB19BF2E8AC96A8773EFB90DC9F89AE0C72_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_2 = ___0_destination;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3 = L_2.____pointer;
		V_0 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_0 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25D19A09E1378604F3592F7ED4E2DE094D9BC440_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_2 = ___0_destination;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3 = L_2.____pointer;
		V_1 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_1));
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_1 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 Span_1_op_Implicit_mE21E2981C696DB02CB0E18049B031D817317D547_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_0 = ___0_span;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_1 = L_0.____pointer;
		V_0 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF3D8E1E5EA313C7E290DB9D2BB7965F37CAC636_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_1 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 Span_1_Slice_mB913DB356E234CA0CE4661552D59F4E25DD6064F_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_2 = __this->____pointer;
		V_0 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5;
		L_5 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 Span_1_Slice_m5C925CE26B575DD918DAA01AA3068C77FEFFD75C_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_0 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8;
		L_8 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Span_1_ToArray_mA7A7BA36A340E11528D00699E69C6462A0699FEC_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_5);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_7 = __this->____pointer;
		V_0 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8072BD76486FAF990AA853EDF3DD7D6DAD3A73E1_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6591A32DB538CC39A12E9DBD8F4D4ADE893B8905_gshared (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 Span_1_op_Implicit_m3E30E82D4B94AA655E6A43528AEDADFE08D35455_gshared (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method) 
{
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___0_array;
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC2731788C7CB616BDD9477D53265DA06DC788E1F_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		float* L_11;
		L_11 = il2cpp_unsafe_as_ref<float>(L_10);
		int32_t L_12 = ___1_start;
		float* L_13;
		L_13 = il2cpp_unsafe_add<float,int32_t>(L_11, L_12);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7DF6F0480C6904A216270964E3639CEA4F419C40_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_get_Item_mF6350A5455E12C7AFF2E3C3452232B73A5343BEE_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* Span_1_GetPinnableReference_mB3EA4E5E6B70A51EC51C563EBB60BA9A8DE4D1A0_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float* L_1;
		L_1 = il2cpp_unsafe_as_ref<float>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m521D995DEFD6B372D62A2D4ED58CB615A656E0E2_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_0 = __this->____pointer;
		V_0 = L_0;
		float* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<float>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mE5F739A0ED3DE473A64BBCEB9D204A86179900BB_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	float V_1 = 0.0f;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	float* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<float>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		float L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_4 = __this->____pointer;
		V_2 = L_4;
		float* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_12 = __this->____pointer;
		V_2 = L_12;
		float* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<float>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		float* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		float* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		float L_19 = ___0_value;
		*(float*)L_18 = L_19;
		float* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		float* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		float L_24 = ___0_value;
		*(float*)L_23 = L_24;
		float* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		float* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		float L_29 = ___0_value;
		*(float*)L_28 = L_29;
		float* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		float* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		float L_34 = ___0_value;
		*(float*)L_33 = L_34;
		float* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		float* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		float L_39 = ___0_value;
		*(float*)L_38 = L_39;
		float* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		float* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		float L_44 = ___0_value;
		*(float*)L_43 = L_44;
		float* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		float* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		float L_49 = ___0_value;
		*(float*)L_48 = L_49;
		float* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		float* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		float L_54 = ___0_value;
		*(float*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		float* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		float* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		float L_64 = ___0_value;
		*(float*)L_63 = L_64;
		float* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		float* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		float L_69 = ___0_value;
		*(float*)L_68 = L_69;
		float* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		float* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		float L_74 = ___0_value;
		*(float*)L_73 = L_74;
		float* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		float* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		float L_79 = ___0_value;
		*(float*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		float* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		float* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<float,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		float L_85 = ___0_value;
		*(float*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m622FEA536F071E2F732664FEE4C3F49F60720853_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_0 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA8236BB567B98CE0F6BB0EED9CF1E27D53611B28_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_1 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_1 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_0 = ___0_span;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1 = L_0.____pointer;
		V_0 = L_1;
		float* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD58A3F7E334C1E37B8F2E2266DE89A2E67A68574_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_1 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_Slice_mD2575575D9ACF2D548DE2DA6DB1FFB36CD923508_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_Slice_mBA215A512B958A2D696F1FC47073FA9453553B8E_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		float* L_8;
		L_8 = il2cpp_unsafe_add<float,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Span_1_ToArray_mAAE4DC737A5BF9A5A29F336EDA790C8AFADA2CDE_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7EE91A3706295633E217636FE45CBB5DD8A76404_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF2A430BCD36FB8331FD4CE77443388F381319EC1_gshared (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C Span_1_op_Implicit_m1CCE9A46E23410F893315674231D60515AB767A8_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88D9BE6D0BF5FDFDF1EC95538768786944AA873A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint16_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint16_t>(L_10);
		int32_t L_12 = ___1_start;
		uint16_t* L_13;
		L_13 = il2cpp_unsafe_add<uint16_t,int32_t>(L_11, L_12);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB886029FDB28A19EF15C463DD88A08470033D192_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint16_t>((uint8_t*)L_1);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_get_Item_m51DF8F9B68EB998FCFF5DE6A753DEC3D3BE61D30_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Span_1_GetPinnableReference_m2084184F17A5461CA1BD4D2364E1423E83775299_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint16_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint16_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0935AE3C29451F430E10E1C162F4B2767137CC57_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_0 = __this->____pointer;
		V_0 = L_0;
		uint16_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint16_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m1739BAAE7DCB30488B41A98BE7F70F2C3E2A683B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint16_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint16_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint16_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4 = __this->____pointer;
		V_2 = L_4;
		uint16_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_12 = __this->____pointer;
		V_2 = L_12;
		uint16_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint16_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint16_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint16_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint16_t L_19 = ___0_value;
		*(uint16_t*)L_18 = L_19;
		uint16_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint16_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint16_t L_24 = ___0_value;
		*(uint16_t*)L_23 = L_24;
		uint16_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint16_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint16_t L_29 = ___0_value;
		*(uint16_t*)L_28 = L_29;
		uint16_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint16_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint16_t L_34 = ___0_value;
		*(uint16_t*)L_33 = L_34;
		uint16_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint16_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint16_t L_39 = ___0_value;
		*(uint16_t*)L_38 = L_39;
		uint16_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint16_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint16_t L_44 = ___0_value;
		*(uint16_t*)L_43 = L_44;
		uint16_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint16_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint16_t L_49 = ___0_value;
		*(uint16_t*)L_48 = L_49;
		uint16_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint16_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint16_t L_54 = ___0_value;
		*(uint16_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint16_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint16_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint16_t L_64 = ___0_value;
		*(uint16_t*)L_63 = L_64;
		uint16_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint16_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint16_t L_69 = ___0_value;
		*(uint16_t*)L_68 = L_69;
		uint16_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint16_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint16_t L_74 = ___0_value;
		*(uint16_t*)L_73 = L_74;
		uint16_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint16_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint16_t L_79 = ___0_value;
		*(uint16_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint16_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint16_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint16_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint16_t L_85 = ___0_value;
		*(uint16_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m1E3344EA531D3CEBB2D498C960EA1E11D3042E89_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_0 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m8B92037E39DBEC33F5EFF019B694C6F8422F6254_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_2 = ___0_destination;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_3 = L_2.____pointer;
		V_1 = L_3;
		uint16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F Span_1_op_Implicit_m2BCA68E89516F4E0AD7CF9A9513466D4837140F8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_0 = ___0_span;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1 = L_0.____pointer;
		V_0 = L_1;
		uint16_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC92A31A501B7BC12A11981C1C3D653971D37E35C_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_1 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_m60CA4425F69A57B604820588F7299CE6056B9BF7_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_2 = __this->____pointer;
		V_0 = L_2;
		uint16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint16_t* L_5;
		L_5 = il2cpp_unsafe_add<uint16_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_Slice_mD475695D1F124D1A5F0514CB93BF8B2D12FFF09A_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5 = __this->____pointer;
		V_0 = L_5;
		uint16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint16_t* L_8;
		L_8 = il2cpp_unsafe_add<uint16_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Span_1_ToArray_m69B5996786351756E80F75F1F46A6D8D14817044_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1;
		L_1 = Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint16_t>(L_5);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_7 = __this->____pointer;
		V_0 = L_7;
		uint16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m658BC08F24940E68B344C2623996A8BAA8506DFF_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m0DD2A2BE777631909AB6BC8EB9C8C50A65227EF8_gshared (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D Span_1_op_Implicit_mDFEC7007D8B0366E7FB8FA350AC4D3F3EAFB4EA7_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m660EEF593C35EC36D687474C6F23E166CD9F31D9_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint32_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint32_t>(L_10);
		int32_t L_12 = ___1_start;
		uint32_t* L_13;
		L_13 = il2cpp_unsafe_add<uint32_t,int32_t>(L_11, L_12);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m999E2C05EC97317809898828AF892B8C79ACC7C1_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint32_t>((uint8_t*)L_1);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_get_Item_m02A8F30DBE1911D7E5357E864D231529455D1963_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Span_1_GetPinnableReference_m296F8EBB04F54E3973579C184284BEFAA947B759_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint32_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint32_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m2B78C0269CD984BA3EDE84E92E7D0405F534E396_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_0 = __this->____pointer;
		V_0 = L_0;
		uint32_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint32_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m8EC6942077811D5BDD7FE56421443067FD9B57B8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint32_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint32_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint32_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_4 = __this->____pointer;
		V_2 = L_4;
		uint32_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_12 = __this->____pointer;
		V_2 = L_12;
		uint32_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint32_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint32_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint32_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint32_t L_19 = ___0_value;
		*(uint32_t*)L_18 = L_19;
		uint32_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint32_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint32_t L_24 = ___0_value;
		*(uint32_t*)L_23 = L_24;
		uint32_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint32_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint32_t L_29 = ___0_value;
		*(uint32_t*)L_28 = L_29;
		uint32_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint32_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint32_t L_34 = ___0_value;
		*(uint32_t*)L_33 = L_34;
		uint32_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint32_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint32_t L_39 = ___0_value;
		*(uint32_t*)L_38 = L_39;
		uint32_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint32_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint32_t L_44 = ___0_value;
		*(uint32_t*)L_43 = L_44;
		uint32_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint32_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint32_t L_49 = ___0_value;
		*(uint32_t*)L_48 = L_49;
		uint32_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint32_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint32_t L_54 = ___0_value;
		*(uint32_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint32_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint32_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint32_t L_64 = ___0_value;
		*(uint32_t*)L_63 = L_64;
		uint32_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint32_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint32_t L_69 = ___0_value;
		*(uint32_t*)L_68 = L_69;
		uint32_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint32_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint32_t L_74 = ___0_value;
		*(uint32_t*)L_73 = L_74;
		uint32_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint32_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint32_t L_79 = ___0_value;
		*(uint32_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint32_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint32_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint32_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint32_t L_85 = ___0_value;
		*(uint32_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m45ED9076CBEDB2D4CA30A83E16D9BEE75626A9FF_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44CEE930589FCECFE9020025FFB505DD707B2D5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_2 = ___0_destination;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 Span_1_op_Implicit_m030D7D0A16134F1819235F6051864FF9A776A1F6_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_0 = ___0_span;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint32_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD3E4D84FCE98C375E6C9F2162A57B2395B398873_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_1 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_m0F9C99478BF7174C4DDEA1889C51F3FA1B7A0234_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_2 = __this->____pointer;
		V_0 = L_2;
		uint32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint32_t* L_5;
		L_5 = il2cpp_unsafe_add<uint32_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_Slice_mD2B8E011F70C9E2504AF31237A6738E6BDB321A5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5 = __this->____pointer;
		V_0 = L_5;
		uint32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Span_1_ToArray_m69464A7BA0B38D8637E326F94C6FBBB031DF39C4_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint32_t>(L_5);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_7 = __this->____pointer;
		V_0 = L_7;
		uint32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mBCA1DE3F35219C89B8834EC233C51D4CF12DF5A8_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m8ADDE3CC62F09D09699842E5024D67145223201D_gshared (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA Span_1_op_Implicit_m5689B5F42218BA135D8CF5E828BF56EFB7FF7FBD_gshared (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mACE9723FAD4FABB5DB3492127924E7DED70D581F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint64_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint64_t>(L_10);
		int32_t L_12 = ___1_start;
		uint64_t* L_13;
		L_13 = il2cpp_unsafe_add<uint64_t,int32_t>(L_11, L_12);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m88AFBBE67F3E951762332D952D09441CB09F29B8_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint64_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint64_t>((uint8_t*)L_1);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_get_Item_m30051484137413775875E0518C56A0F7562A62AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Span_1_GetPinnableReference_m8E9CCA07F04C35E18E9D852F9221816617DFF043_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint64_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint64_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE1DD2BC27D0EE4070148EC36656CB584143712DD_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_0 = __this->____pointer;
		V_0 = L_0;
		uint64_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint64_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mDA5F8A3B92B36549BDE83CCF74C6B56A77B077AF_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint64_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint64_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint64_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_4 = __this->____pointer;
		V_2 = L_4;
		uint64_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_12 = __this->____pointer;
		V_2 = L_12;
		uint64_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint64_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint64_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint64_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint64_t L_19 = ___0_value;
		*(uint64_t*)L_18 = L_19;
		uint64_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint64_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint64_t L_24 = ___0_value;
		*(uint64_t*)L_23 = L_24;
		uint64_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint64_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint64_t L_29 = ___0_value;
		*(uint64_t*)L_28 = L_29;
		uint64_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint64_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint64_t L_34 = ___0_value;
		*(uint64_t*)L_33 = L_34;
		uint64_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint64_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint64_t L_39 = ___0_value;
		*(uint64_t*)L_38 = L_39;
		uint64_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint64_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint64_t L_44 = ___0_value;
		*(uint64_t*)L_43 = L_44;
		uint64_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint64_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint64_t L_49 = ___0_value;
		*(uint64_t*)L_48 = L_49;
		uint64_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint64_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint64_t L_54 = ___0_value;
		*(uint64_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint64_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint64_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint64_t L_64 = ___0_value;
		*(uint64_t*)L_63 = L_64;
		uint64_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint64_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint64_t L_69 = ___0_value;
		*(uint64_t*)L_68 = L_69;
		uint64_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint64_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint64_t L_74 = ___0_value;
		*(uint64_t*)L_73 = L_74;
		uint64_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint64_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint64_t L_79 = ___0_value;
		*(uint64_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint64_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint64_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint64_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint64_t L_85 = ___0_value;
		*(uint64_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4F011B6E94BE67BF00E6EEF0F52FC07C6143590D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_0 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mAB8D99AE7F7B967B3A5381D38CA35D489ED76345_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_2 = ___0_destination;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_3 = L_2.____pointer;
		V_1 = L_3;
		uint64_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F Span_1_op_Implicit_mF533047803AD7D0C594E51DBD4C261DA5D5E370D_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_0 = ___0_span;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1 = L_0.____pointer;
		V_0 = L_1;
		uint64_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6E70F419212ED46A47A2900761157E051D0A88D7_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_1 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m0B26EE6F75B6659A26656BAF1AE818DD4FF1C376_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_2 = __this->____pointer;
		V_0 = L_2;
		uint64_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint64_t* L_5;
		L_5 = il2cpp_unsafe_add<uint64_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_Slice_m66C540ED824CAA1711823B4BF222E5F30BC81573_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5 = __this->____pointer;
		V_0 = L_5;
		uint64_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint64_t* L_8;
		L_8 = il2cpp_unsafe_add<uint64_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Span_1_ToArray_mE0817125C69F368855E8B03DE0BA9F37FA32377E_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint64_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint64_t>(L_5);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_7 = __this->____pointer;
		V_0 = L_7;
		uint64_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint64_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m96D35BF7B64CE4FB8444E07FC1FC616FFD98825F_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m315CB2A6699FD8608FEA6FFEC966216869215960_gshared (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 Span_1_op_Implicit_m921D52D34E89E0735644236C2846D3DC7A41B774_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0037;
	}

IL_0037:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_3);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD3D10FEB32F6598A9C692F522A03F2DF9C84A52F_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_10);
		int32_t L_12 = ___1_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13;
		L_13 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_11, L_12);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m50C1AB8CF970B0E296CD917975C18DCB815D193B_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((uint8_t*)L_1);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Span_1_get_Item_m7922C29DD6AD6F5538B02AEF310A87693B613C1B_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Span_1_GetPinnableReference_m38F959B29A2F632B0CA4808E2A43254C2F3F1909_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m23EDA188CB4C8D35FE357FE4156D378DB59A0790_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mB6442ABF2572024464E692A429812C329CAA45D7_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_18 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_23 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_28 = L_29;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_33 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_38 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_43 = L_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_48 = L_49;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_63 = L_64;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_68 = L_69;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_73 = L_74;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = ___0_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD459AF4C30451D2A2FFC5BC60AE00E34A40674D6_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_2 = ___0_destination;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m1EB7E00A8CB10619B7C5320F7552188DFD901ED1_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_2 = ___0_destination;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 Span_1_op_Implicit_mFF4CF6C646BD1388C5469609B35694481F190D34_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_0 = ___0_span;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8BA75E501BB27747260AE8DD0BBC717C33B3D52F_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_Slice_m3BEF57FA4B42A4B9D97C73BD248E636F043D73D7_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5;
		L_5 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_Slice_m2CE72E2E7D6CBF7552506BAB0A542ADF2B073C84_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8;
		L_8 = il2cpp_unsafe_add<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Span_1_ToArray_m32DA34FCDE6D7AB9EA941ABF7CE26FEE26AEA49C_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1;
		L_1 = Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_5);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m121CA4B55102E3C616B73459B4EB23BEE8C327CB(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m2E85F7D3362C21B7B40F534C4961F7E625F6CD9A_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m34BC4ED94EC9796150BF4B171D9CEB22D4685775_gshared (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 Span_1_op_Implicit_mECFBEDE427C7F8B60CFE22C08246B66E1E62AB18_gshared (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_3);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8185F6B96EDF20580766D2EB6ACB212C7B2AF23C_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_10);
		int32_t L_12 = ___1_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13;
		L_13 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_11, L_12);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCCDE317B7EF9509DB97AFE5968CF15240BB7DE03_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((uint8_t*)L_1);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Span_1_get_Item_m3314C5CC3CAE6E7D226566CE0DC46BC4C79DAC8F_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Span_1_GetPinnableReference_m6592220ED6E9E21535C79DAD2B5C7411440CE238_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6E7824DAEA34E2FE4D5FCE78B65604233DC05050_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m617F7A3B9E7E3B0C5C66871FBB8BC05D5190FD48_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_23 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_33 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_43 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_48 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_63 = L_64;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_68 = L_69;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_73 = L_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___0_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0F08E3E374BC97DFF1704281DD48947FD3C36583_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE22F2A768A1050E6BFB3CD8B4AEC7B819C991C36_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_2 = ___0_destination;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE Span_1_op_Implicit_m5D47150C8F313F781084C0B7AB26B085FA5BFA1D_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_0 = ___0_span;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF3BF6D62DF3F7F4ADB18BC40C16BA8E73DABBBB9_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_Slice_mC6EDEB2937854A25EE8250D473E51F3B43A568D5_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5;
		L_5 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_Slice_mEC63F7379D6B0247C3FAD97651111BEB91D13893_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = il2cpp_unsafe_add<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Span_1_ToArray_m2E6BEE60BD48A117C372CF405F27139869922A06_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_5);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5E3924B178120F38353E13C8B4545C90C49D6CED(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m16593C3984238ABD5B94D35774829B067CC1DBD0_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m2159E9A9023A510BCD9320B5D5DDB55AC7389D3A_gshared (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460D4E78469192619B0075C15897A6987393AAF9 Span_1_op_Implicit_mA24A1765CD7932C77A7F028A1BECC4BFEF99B500_gshared (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		Span_1_t460D4E78469192619B0075C15897A6987393AAF9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0037;
	}

IL_0037:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_3);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBD13783731F5CE12D3824A742A6F37FF0EFBF139_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_10);
		int32_t L_12 = ___1_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13;
		L_13 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_11, L_12);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m35263B255C49C34B49026B8D2239D90D20A46BAE_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((uint8_t*)L_1);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Span_1_get_Item_m2DFA2B85FB075E58BA5021D896690B31B690B80D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* Span_1_GetPinnableReference_mBF14517FF606BD747D2DD8885385789A26767C2F_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mA09977AEE1D388C1C3A3966A7151E911C47ECCF0_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mBE7EC04AC3A0DC15DE392CD681C434F697A4EA64_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_18 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_23 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_28 = L_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_33 = L_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_38 = L_39;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_43 = L_44;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_48 = L_49;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_63 = L_64;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_68 = L_69;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_73 = L_74;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85 = ___0_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m670DC4E7C30A0C96F3B2B7612F36300AE7E90FDB_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mD09579F8AC876D558285930EEBD15C694BAFDD55_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_2 = ___0_destination;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 Span_1_op_Implicit_mCB521CF5F0CBBAEB087B4C41C1C78DD0A2248B0D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_0 = ___0_span;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8050611093AAA741E5B0948A4DA294F80F36F5B0_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_Slice_mB9AF404874235AA4BEE8017E88A336EEA2E6301D_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5;
		L_5 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_Slice_mC06C0132DC9F1F52318186B696F160B63C8C9C18_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = il2cpp_unsafe_add<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Span_1_ToArray_mBCD2D9E7C594EAF63CC33D62601F3BCEB8F9BA68_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1;
		L_1 = Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_5);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C574D3870D087AA0B03CE7E94375833C6C6BC2C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF25ED9C4F124E1CA15E2A39394C815167ED64950_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mD6046C7E35966467678B3A8D24D5074808C6B68F_gshared (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 Span_1_op_Implicit_m53CD60E0213B1955B43645EE79190E82F50D072A_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m73A4314072E235F81E8A9082848504D9774BF5BF_gshared_inline (SortedList_2_tC7AE2B2BAEE7B263E99BEF399E612D5CBF0E5CA7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* Array_Empty_TisValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC_m3A3AFAA43B0D8FF6C08669BEB87B12FE4F6A2B40_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ValueTuple_2U5BU5D_t110F884211ABF43A43543A6BF0C2969D0C080468* L_0 = ((EmptyArray_1_t34302FC8FC4BBA6F1E9A4D91CD8DDCD0C68568CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9EDC1432A690EB5D78CFD8FB67CE925C2EE5E116_gshared_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC KeyValuePair_2_get_Value_m32B7660D4EDA4D31E99AD273C5E1DD2A4214DA0C_gshared_inline (KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* EqualityComparer_1_get_Default_m50F560DEA8CA55EC57A79EEDB8854DDF4D57FBB9_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* V_0 = NULL;
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_0 = ((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2F55975C1EE571640B2F505FBA95C2D028B95AF9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1BF9348A446C48450B4A36C39A2C5FEC19BBE2C5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ((EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m57CB59784EF1B10751F3011844D5BCC65E58B237_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6FFCB367D863881288474F8A683F411FE78CE764_gshared_inline (ReadOnlySpan_1_tE16340BFEDC9894F220E3B177BCF56DF174E8CE2* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD08E3EDCFA74A68E7F489180D378E5741DE374C8_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, Guid_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = ___0_ptr;
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ((EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5386487441E3C924F0637CEF338578008D062083_gshared_inline (Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278* __this, GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F7C948A2AC62689AAC2FF10FC3B0B2F16FB9278));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t));
		goto IL_0037;
	}

IL_0037:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Guid_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<Guid_t>(L_3);
		ByReference_1_t667BB0B2C4539D2BFBB3FCD3D70150000F4AB39F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_gshared_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m89B8042F831A4ACF35D15B29B8141AE29CFFDF84_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_ptr;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m176441CFA181B7C6097611CC13C24C5ED7F14CFF_gshared_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int32_t>(L_3);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C26EE24C8AB486BBD48D1BBB32574FB0B5CD91_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3960AA4B8AD179BE83BBC4B4A67B3FB75BD6365A_gshared_inline (ReadOnlySpan_1_t6CE9C0CA1262A820428D86548CAE80352AAA12AC* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m180D886432C6474539833ED47A77D2740E7FCD8A_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, int64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_ptr;
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ((EmptyArray_1_t63074FE3C78EACBE204FE82D30DB508A9EB6268A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m177A8208F7F1C1028420E224BF257E30597C717B_gshared_inline (Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t51050A3216B664417A9CDCC78BD6ED5C1081F955));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		goto IL_0037;
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		int64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<int64_t>(L_3);
		ByReference_1_t6A55347AE8EB06C276344D40457E427873BFD1D0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_gshared_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m387ED7C1B291A33DF98CF62A51CF5B4AFD36F8E9_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_ptr;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5FD20B3976541A2A758D81ED28834B6718B75A5_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(intptr_t));
		goto IL_0037;
	}

IL_0037:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		intptr_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<intptr_t>(L_3);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_gshared_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_ptr;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9CE783DFCFC72DBE92BFC1B9C472CD7C2B866F1C_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_ptr;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74E96BD621130C9E18186E0E25CF0958E8A0A827_gshared_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		goto IL_0037;
	}

IL_0037:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_3);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_gshared_inline (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_ptr;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mEB88C92980CFEB47188FEFC02935CCC0C1E57C7F_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_ptr;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ((EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC41D37A4EC24675FE88E07FC2AD929915407785C_gshared_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		goto IL_0037;
	}

IL_0037:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_3);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_gshared_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1B5237AB31EC7CA6AB6981E961491177242F4A55_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_ptr;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_gshared_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD173AF2E3688317C8AB9621F7626A2A34DE8F56B_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCBA8EFCAA8102765E34B993A8177EE752D80890F_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m458FB27AA0EB3527A73C9D6305D452A062D2ABC4_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, uint16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_ptr;
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* Array_Empty_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA9FE4AE132DC76B02E8B39B5052CBA643CFF7220_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((EmptyArray_1_tA0524EFBAA750B3D1DCF60FE6F2B25DE798675AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC892A665B48BA9CD149DA76F26EA3607C7859792_gshared_inline (Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3C28155FFD2FA88D962FCE88A14C370626303A8D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint16_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint16_t>(L_3);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC3EBBD1CE9C5025EB30AFDE84FCCCFB3FE794EC5_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m44A796B80A3B7B5E228B0865F02AC548FA1E7567_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1161A3B3850C22A54C838C62FB009355039C28ED_gshared_inline (Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC47CA3FDABAC657528EC838C3FEB05AA0D4480EA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint32_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint32_t>(L_3);
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m62F446B5508B032A22CD1BA21D998626E6B8A5CC_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC03446F4F48AEBD20B80591766ACE9CE79048BCE_gshared_inline (ReadOnlySpan_1_tD579EC24AE7548EFE16428C9DC0EE0423C0FDA0F* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3C68BA129DD44A3486C6B57A99412947A16855F6_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_ptr;
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Array_Empty_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m696D3DE2D89DD613C8C0EB15BE627EABEF780255_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((EmptyArray_1_tA1B9390A54D6283BFF40643DC2A697126A16E63B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC83E2FCB4929477ACCB736B25B9E2F89FF2A07CF_gshared_inline (Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2EECFBFD7BF99470FF5E3884902CE388B17BBDD3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		goto IL_0037;
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint64_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint64_t>(L_3);
		ByReference_1_tC177AF8388672C5485D5AAD1C913963A8C7B4548 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFBDFEEEF1A619162D612EC6564DE47BB0A018FD9_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FEF0E91D60DF5F8905D4DAB78CEB48CDF99EFAA_gshared_inline (ReadOnlySpan_1_t30635DB490E7110B945ABB8301B19F8955AD4B64* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m56BE0F54100AF7686F960CA4E18540A35B12420E_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_ptr;
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Array_Empty_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mD846707560FDEBAA9B2BE9F40C7BE2F42A59BAA9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ((EmptyArray_1_t541233638A05830B22F809CD9B22404F5D2777BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0F2A60856E23C8A9DC58E03191363DF4E8A6F1B3_gshared_inline (Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t176257933B4F95507A92292ED5363CE3EFE12BB5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		goto IL_0037;
	}

IL_0037:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7>(L_3);
		ByReference_1_tC00E272CA69BF0EE3939D1F6DB60E788290A8313 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m556440A32F0A1EB65C95120CEC693B9AC4DFD52B_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m682BD3D57C99591BB5B14A415A7F8F4D5B14241F_gshared_inline (ReadOnlySpan_1_t8C2C24B6B10C9EAC8D8A8C92BED569A12615C2AE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m150E0E8C32CF01F22FFC539541D9F6EA05DB6967_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_ptr;
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Array_Empty_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE64AD477B9A8397B2CCC3FD2565DCA5B2F0A1F6_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((EmptyArray_1_tF91FBA61857F9D60B55FD121DEADC9788D1FE016_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mCC34AC618271C9F9C196DA22BA5DB8C6D8AD477D_gshared_inline (Span_1_t460D4E78469192619B0075C15897A6987393AAF9* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460D4E78469192619B0075C15897A6987393AAF9));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>(L_3);
		ByReference_1_t81E3F5607EE2CA97897E6361C9CAE9862DC3DED6 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m63B951643F7F819BFFB479C5BA2A8052CC19650C_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m622AB9D2827B0280526D71584B733E49B439579B_gshared_inline (ReadOnlySpan_1_tBB5A0F9CEA726E10BE8D59F79D891AC9218E61F6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1E1947C8E67BCAA48B27C9C86207CD561C1B9B4B_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_ptr;
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Array_Empty_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mC82FBEFAE1DCBACBA78974694D57EE7988F95DB8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ((EmptyArray_1_tF700941B1D2574A82BF40EA9058FBF99EBE14C5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD3AD596A514C9F73EAFB0946FB4E0CCD88223C72_gshared_inline (Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t993DF21D9162C9A28F81991FA4EABACF87A3BAD1));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		goto IL_0037;
	}

IL_0037:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3>(L_3);
		ByReference_1_t4244D12B217F7C5BB8CD15E4BCAD5F8865A82C39 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}

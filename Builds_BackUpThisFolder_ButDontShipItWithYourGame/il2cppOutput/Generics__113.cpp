﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct Action_1_t1F978816E2B8892C14C13F6C4EE165697EB0ADC2;
struct Action_2_tB837CD89C6EC79617C6007D8D55874B2AF612459;
struct Action_2_t5D4D2A6703175A7B487DD524FD6A095A232B713B;
struct Action_2_t8E8D99AFAA767F04D5615E17E38BB9A33110845D;
struct Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A;
struct Action_2_t2D5BB7E00DFDD7BB920BD9299371F517FFA33B8E;
struct Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C;
struct Action_2_t12BEFF8AF58302DA0D61AB194A52E2A37EAB2E57;
struct Action_2_t3790601E9C79798E05EA194D0FA60251E87A2567;
struct Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC;
struct Dictionary_2_t5D427A690EEE896949E0A152379EF90ABAA82C79;
struct Dictionary_2_tAAF1D66DE90AC7CB79BA2DFFCA390C28F3B65667;
struct Dictionary_2_t27B2BCE398FD3834CD637C121935AB9EE8A43728;
struct Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC;
struct Dictionary_2_t3B293FC3B2F512060DC3C44DE8A83C9F9935815C;
struct Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64;
struct Dictionary_2_tAB6ED76928B53FB2823E0487E74A6479FD61EFFB;
struct Dictionary_2_t2B664AA3A531F64637BDB1C178164217213C321B;
struct Dictionary_2_tB493A7A15F71BD27DCE8CE90DADC76831E9096DF;
struct Dictionary_2_tF8AA4E647B38708140CF2D05882603B7B1EEA930;
struct Dictionary_2_t7A7944CAE76AFC8EB9D8CD206AC98E5845498011;
struct Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E;
struct Dictionary_2_t073FEA2AB8B6C98329BEF55FAD558C75CBFD5335;
struct Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA;
struct Dictionary_2_t8B0C96F655CBF93E395562B1D1B5818F48B8B3F8;
struct Dictionary_2_t3B55BE8DEBC9DCB41C2A7DB9CA9426D8EF9AC45D;
struct Dictionary_2_tE80C8EE027791B25DC7744B8B09CBDEFDD8850B0;
struct Dictionary_2_t2C26166187ECA14C31485FE63913FBA33EE1CBA3;
struct Dictionary_2_t6CB1C7DC8CABF8E4876AF6357BDD2852A1E35C95;
struct Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3;
struct Dictionary_2_tAC0BFE65F7B99B0F62467459AC52F0F9E8022DEE;
struct Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2;
struct Dictionary_2_tA1B96ED776FE272D16422E2E5ADDC16EBB5352DD;
struct Dictionary_2_tEE9AE243684EBB1FF4C1F03E1AD339FF8F2B99B0;
struct Dictionary_2_t74F30E2E03DABE03D84410DA278CF86B3CC29F5D;
struct Dictionary_2_t5AC024330D3C77A012EB279270BCEB64EF27A5BD;
struct Dictionary_2_tFE37DEC9F1AA3BCFDA9DB0A0E12CD1C685FF9A7E;
struct Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA;
struct Dictionary_2_tE82728234AF2E45074EA095D00CAB275F66BC80A;
struct Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1;
struct Dictionary_2_t42D933938AECB62D7B1ADBB631AAEA5E67560735;
struct Dictionary_2_tBC86C9820585F513055C386886221D0A00842CB4;
struct Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1;
struct Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E;
struct Dictionary_2_t041684CC0BA4AE0C00920227679FFF884E35DEF8;
struct Dictionary_2_tAD25198AD028F0AFEE12EA9C62046AA42ACC94DB;
struct Dictionary_2_tE12848B898237002EC066CDECBAE1F7D52D8E674;
struct Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5;
struct Dictionary_2_t84B5B27EB6375403829E80D5A6BC8D1F9DE58AEB;
struct Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE;
struct Dictionary_2_tB12F6F9A20886B084D25CBBD0A5AE32188EE0E9A;
struct Dictionary_2_tE51E73834912D672956B6CB83297706D67440E86;
struct Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B;
struct Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8;
struct Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920;
struct Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4;
struct Dictionary_2_t81EC1905AEBE415EEA3E0AB65E421CA1E7AE7094;
struct Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0;
struct Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A;
struct Dictionary_2_t37C86FB16966DBED7080F53D707236C3E6B7A341;
struct Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4;
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
struct IEnumerator_1_t8525DF09AFEEF6C3D7355BC39E40106C1FE4AFCF;
struct IEnumerator_1_tD7959F1026E18904E5BFD4F8848865EB7095DB55;
struct IEnumerator_1_t7F45368C6D804DCAE4014A7F6EF5EEC65C342E04;
struct IEnumerator_1_t97B9A33E7171BD98B934B2B6E1AC00583B9E8395;
struct IEnumerator_1_t539891EA6EFF66E11229BFFAC1B5ED4C37A24EB6;
struct IEnumerator_1_t1AA6338E6545167B7D56B24BE64CDDF38B743516;
struct IEnumerator_1_t4C2072CA2F00EB2B12D1D63CE96AA6D400FA2B7A;
struct IEnumerator_1_tBD70CCB213E5E6757D632E37DBE8A4BC473C3AC5;
struct IEnumerator_1_tFD837E68750CC3A00627AB46B84859E4228BEAE4;
struct IEnumerator_1_tFA517B7B218E968D3F2A0F4FE60F5C9EA319A05A;
struct IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1;
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
struct IEnumerator_1_t488F9FA82247BF8D2DC5E133C1C3F9366CDED9B0;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t96C69FC6D3BFF990C18CFAF5A304D4D336E5DD32;
struct IEnumerator_1_tE9D1C7A5287039A2077BA3B539B100F0E12F3A6C;
struct IEnumerator_1_t30023716BAD8A1096DAEB9214E766D9B4EFEBAC3;
struct IEnumerator_1_tF08BC34B9F6847658C70264BA39BB29268763935;
struct IEnumerator_1_tFCF5861BCE7790E8247892E6658C0C4803690160;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IPropertyBag_1_t9CE20305E04AC1EB512CCC226C03A84714030C34;
struct IPropertyBag_1_tF3ED76A0B3B3C7C939F96D3F9D303DAD0210804D;
struct IPropertyBag_1_t87438811C2F2F5EDBD73279779C029EED554B3CB;
struct IPropertyBag_1_tBBDD5A5B3F8E9F119138331A16572F6626C67749;
struct KeyCollection_t2317CD9DDEF7EE770B41C24577DF6E01E3DC4DA9;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075;
struct PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593;
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2;
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601;
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471;
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D;
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED;
struct Property_2_t4214D5666464CEE51F044573A59C738C2D562085;
struct Property_2_t4395571972396AEE0D2671461D1603BB8D296451;
struct Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56;
struct Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46;
struct Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F;
struct Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA;
struct Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1;
struct Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B;
struct ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E;
struct Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F;
struct Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F;
struct Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7;
struct Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9;
struct Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43;
struct Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC;
struct Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D;
struct Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05;
struct Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF;
struct Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0;
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
struct Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F;
struct Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46;
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E;
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75;
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct ValueCollection_tE5201B4304003A2284C992653C07A7C1159E8668;
struct EntryU5BU5D_tF97BCF5AB961E783E48CD9752462290604C8A15D;
struct OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78;
struct OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD;
struct OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2;
struct OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB;
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831;
struct OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D;
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F;
struct OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469;
struct OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305;
struct ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518;
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ControllerU5BU5D_t8EB63B14867E85252CCB5FA008C772BA27225B5F;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct ITypeVisitor_tCB238D641EEE5D928DA9FEF70EDB7C2C13ED1599;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177;
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct PointerHandler_tADCE6189E3576A83D2398A5B07062A7180A9FDF7;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
struct ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2;
struct ScrollViewport_t445EE45E83E2FEFFAD610165B38495BE5A7C2177;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral61D82A6D056F63D8FBEA0F6047658030510B2383;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral9D7AED08930F52B5AAB58B2CBC3E9482D298B52C;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC1ECDF2A921E0F4F2600A3DA4CB634588E28A8;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47;
IL2CPP_EXTERN_C String_t* _stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* Controller_Append_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m5F5CC98DC700BE5FE6F75BBEE55FE04D0B2E6B74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Controller_Prepend_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m54AF080287502D4983695E212BE176B3E460AF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m460E56A56A2070B338EEF6EFF101A8C4BB381AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6C1A074F5C634FC95C16588C5963426CA1E98EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78;
struct OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD;
struct OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2;
struct OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB;
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831;
struct OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D;
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F;
struct OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469;
struct OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305;
struct ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF97BCF5AB961E783E48CD9752462290604C8A15D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2317CD9DDEF7EE770B41C24577DF6E01E3DC4DA9* ____keys;
	ValueCollection_tE5201B4304003A2284C992653C07A7C1159E8668* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_t92AB15D84E13F4CEE56DD27BD452ED9C7DDF6A20  : public RuntimeObject
{
};
struct EmptyArray_1_t14B3B8C7B0C3119CAF041E52F63B8DAC33E54C9E  : public RuntimeObject
{
};
struct EmptyArray_1_t0A9748A511935707A8D2E56A879B85BB065DD0B2  : public RuntimeObject
{
};
struct EmptyArray_1_t06680E6528D99817AC66CF3BE48705828B98D7ED  : public RuntimeObject
{
};
struct EmptyArray_1_t395DA88F3CA7150E2ECF9C03F4CEE0FE287FE190  : public RuntimeObject
{
};
struct EmptyArray_1_t253B6D9474560F2BAB95F2532B8568F840B2C2BA  : public RuntimeObject
{
};
struct EmptyArray_1_t21460394D7149559800E9046EF95623AEF636AE8  : public RuntimeObject
{
};
struct EmptyArray_1_tA0281C748E43D136B59AC6E87B04F112F6124B3A  : public RuntimeObject
{
};
struct EmptyArray_1_tF7C58D13043F6170E9639EF4028E34B021E3C22C  : public RuntimeObject
{
};
struct EmptyArray_1_t7C1DF3C46D6A3160B8727C4B673CD69B00774606  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
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
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF  : public RuntimeObject
{
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07  : public RuntimeObject
{
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715  : public RuntimeObject
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD  : public RuntimeObject
{
	ControllerU5BU5D_t8EB63B14867E85252CCB5FA008C772BA27225B5F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4214D5666464CEE51F044573A59C738C2D562085  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4395571972396AEE0D2671461D1603BB8D296451  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B  : public RuntimeObject
{
	RuntimeObject* ___U3CTargetU3Ek__BackingField;
};
struct ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E  : public RuntimeObject
{
	int32_t ____maximumNumberOfProxies;
	Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* ____targetsDictionary;
	ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* ____scrollView;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____proxyChildren;
	bool ___U3CDirtyU3Ek__BackingField;
	Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* ____before;
	Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* ____after;
	LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* ____childrenLayoutStyle;
	float ____lastScroll;
};
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E  : public RuntimeObject
{
};
struct Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F  : public RuntimeObject
{
	OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F  : public RuntimeObject
{
	OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7  : public RuntimeObject
{
	OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9  : public RuntimeObject
{
	OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43  : public RuntimeObject
{
	OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC  : public RuntimeObject
{
	OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D  : public RuntimeObject
{
	OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05  : public RuntimeObject
{
	OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF  : public RuntimeObject
{
	OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77  : public RuntimeObject
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0  : public RuntimeObject
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F  : public RuntimeObject
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46  : public RuntimeObject
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E  : public RuntimeObject
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75  : public RuntimeObject
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43  : public RuntimeObject
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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
struct Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 
{
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____q;
	int32_t ____version;
	int32_t ____index;
	bool ____currentElement;
};
struct Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 
{
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 
{
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ____q;
	int32_t ____version;
	int32_t ____index;
	int64_t ____currentElement;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____currentElement;
};
struct QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33 
{
	union
	{
		struct
		{
		};
		uint8_t QuaternionCompositeComparer_tB9B33B549A8BC21247D26B8DFC6C150150CDB4AA__padding[1];
	};
};
struct QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B 
{
	union
	{
		struct
		{
		};
		uint8_t QuaternionCompositeComparer_tB9B33B549A8BC21247D26B8DFC6C150150CDB4AA__padding[1];
	};
};
struct QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31 
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ____queue;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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
struct OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F 
{
	uint64_t ____handle;
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
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 
{
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ____q;
	int32_t ____version;
	int32_t ____index;
	Guid_t ____currentElement;
};
struct Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C 
{
	Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* ____q;
	int32_t ____version;
	int32_t ____index;
	intptr_t ____currentElement;
};
struct Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 
{
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ____currentElement;
};
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	bool ___hasValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value;
};
struct OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 
{
	Guid_t ____id;
};
struct OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 
{
	Guid_t ____id;
};
struct OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB 
{
	Guid_t ____id;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 
{
	Guid_t ____id;
};
struct OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 
{
	Guid_t ____id;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F 
{
	Guid_t ____id;
};
struct OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 
{
	Guid_t ____id;
};
struct OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B 
{
	Guid_t ____id;
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
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	int32_t ___value__;
};
struct Direction_t940245D4C9E1BEE6C2123B3E1B8E4197F47CDF80 
{
	int32_t ___value__;
};
struct Layout_tEBBB5CB65F4C78943CADCEB3A5BDF0D4474010C6 
{
	int32_t ___value__;
};
struct RotationType_tD58F7B6EB01892B0375178D9775F6185D4E2DC0F 
{
	int32_t ___value__;
};
struct TranslationType_t97D4BABD1EDD1C5D0030103150399BD6255EF5CB 
{
	int32_t ___value__;
};
struct Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 
{
	Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 ____currentElement;
};
struct Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 
{
	Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 ____currentElement;
};
struct Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD 
{
	Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB ____currentElement;
};
struct Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A 
{
	Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 ____currentElement;
};
struct Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C 
{
	Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 ____currentElement;
};
struct Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 
{
	Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F ____currentElement;
};
struct Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 
{
	Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 ____currentElement;
};
struct Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A 
{
	Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B ____currentElement;
};
struct Enumerator_tA37D160544C06A884B929716C584D345827D7F82 
{
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____currentElement;
};
struct OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 
{
	bool ____initialized;
	RuntimeObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 
{
	int32_t ___Item1;
	uint64_t ___Item2;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 
{
	int32_t ___U3CIdentifierU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField;
	int32_t ___U3CTranslationU3Ek__BackingField;
	int32_t ___U3CRotationU3Ek__BackingField;
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F 
{
	Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ____currentElement;
};
struct Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 
{
	Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 ____currentElement;
};
struct Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 
{
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ____q;
	int32_t ____version;
	int32_t ____index;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ____currentElement;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Style_t1ACF71D8CE624B6C200BFE88DC68A0BE85086ADA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ____instantiated;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177  : public Style_t1ACF71D8CE624B6C200BFE88DC68A0BE85086ADA
{
	int32_t ___flexDirection;
	int32_t ___layout;
	int32_t ___anchor;
	int32_t ___pivot;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___margin;
	bool ___useBottomRightMargin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightMargin;
	float ___spacing;
	bool ___masks;
	bool ___adaptHeight;
	bool ___autoFitChildren;
	bool ___isOverlayCanvas;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};
struct Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ____visibility;
	bool ____refreshLayoutRequested;
	bool ____hasRectTransform;
	bool ____layoutStyleHasChanged;
	LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* ____layoutStyle;
	List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* ____children;
	Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* ___U3COwnerU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___U3CRectTransformU3Ek__BackingField;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CGameObjectU3Ek__BackingField;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ____mask;
	Action_1_t1F978816E2B8892C14C13F6C4EE165697EB0ADC2* ___OnVisibilityChangedEvent;
};
struct Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959  : public Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____sizeDelta;
	ScrollViewport_t445EE45E83E2FEFFAD610165B38495BE5A7C2177* ___U3CScrollViewportU3Ek__BackingField;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ____previousAnchoredPosition;
};
struct InteractableController_t1DF46ADEA6149C1858D760E9679093B575F6C5A7  : public Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386
{
	PointerHandler_tADCE6189E3576A83D2398A5B07062A7180A9FDF7* ____handler;
	bool ____hover;
};
struct ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2  : public InteractableController_t1DF46ADEA6149C1858D760E9679093B575F6C5A7
{
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____scrollRect;
	ScrollViewport_t445EE45E83E2FEFFAD610165B38495BE5A7C2177* ____viewport;
	Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* ____mask;
	float ____previousProgress;
};
struct EmptyArray_1_t92AB15D84E13F4CEE56DD27BD452ED9C7DDF6A20_StaticFields
{
	OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* ___Value;
};
struct EmptyArray_1_t14B3B8C7B0C3119CAF041E52F63B8DAC33E54C9E_StaticFields
{
	OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* ___Value;
};
struct EmptyArray_1_t0A9748A511935707A8D2E56A879B85BB065DD0B2_StaticFields
{
	OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* ___Value;
};
struct EmptyArray_1_t06680E6528D99817AC66CF3BE48705828B98D7ED_StaticFields
{
	OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* ___Value;
};
struct EmptyArray_1_t395DA88F3CA7150E2ECF9C03F4CEE0FE287FE190_StaticFields
{
	OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* ___Value;
};
struct EmptyArray_1_t253B6D9474560F2BAB95F2532B8568F840B2C2BA_StaticFields
{
	OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* ___Value;
};
struct EmptyArray_1_t21460394D7149559800E9046EF95623AEF636AE8_StaticFields
{
	OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* ___Value;
};
struct EmptyArray_1_tA0281C748E43D136B59AC6E87B04F112F6124B3A_StaticFields
{
	OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* ___Value;
};
struct EmptyArray_1_tF7C58D13043F6170E9639EF4028E34B021E3C22C_StaticFields
{
	OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* ___Value;
};
struct EmptyArray_1_t7C1DF3C46D6A3160B8727C4B673CD69B00774606_StaticFields
{
	ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
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
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ___Value;
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ___Value;
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ___Value;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_StaticFields
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___s_emptyArray;
};
struct List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD_StaticFields
{
	ControllerU5BU5D_t8EB63B14867E85252CCB5FA008C772BA27225B5F* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
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
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t041684CC0BA4AE0C00920227679FFF884E35DEF8* ___Sources;
	Dictionary_2_t5D427A690EEE896949E0A152379EF90ABAA82C79* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tB493A7A15F71BD27DCE8CE90DADC76831E9096DF* ___ContinueWithInvokers;
	Dictionary_2_tE80C8EE027791B25DC7744B8B09CBDEFDD8850B0* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t74F30E2E03DABE03D84410DA278CF86B3CC29F5D* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_tB837CD89C6EC79617C6007D8D55874B2AF612459* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tAD25198AD028F0AFEE12EA9C62046AA42ACC94DB* ___Sources;
	Dictionary_2_tAAF1D66DE90AC7CB79BA2DFFCA390C28F3B65667* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tF8AA4E647B38708140CF2D05882603B7B1EEA930* ___ContinueWithInvokers;
	Dictionary_2_t2C26166187ECA14C31485FE63913FBA33EE1CBA3* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t5AC024330D3C77A012EB279270BCEB64EF27A5BD* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t5D4D2A6703175A7B487DD524FD6A095A232B713B* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tE12848B898237002EC066CDECBAE1F7D52D8E674* ___Sources;
	Dictionary_2_t27B2BCE398FD3834CD637C121935AB9EE8A43728* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t7A7944CAE76AFC8EB9D8CD206AC98E5845498011* ___ContinueWithInvokers;
	Dictionary_2_t6CB1C7DC8CABF8E4876AF6357BDD2852A1E35C95* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tFE37DEC9F1AA3BCFDA9DB0A0E12CD1C685FF9A7E* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t8E8D99AFAA767F04D5615E17E38BB9A33110845D* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5* ___Sources;
	Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E* ___ContinueWithInvokers;
	Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t81EC1905AEBE415EEA3E0AB65E421CA1E7AE7094* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t84B5B27EB6375403829E80D5A6BC8D1F9DE58AEB* ___Sources;
	Dictionary_2_t3B293FC3B2F512060DC3C44DE8A83C9F9935815C* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t073FEA2AB8B6C98329BEF55FAD558C75CBFD5335* ___ContinueWithInvokers;
	Dictionary_2_tAC0BFE65F7B99B0F62467459AC52F0F9E8022DEE* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tE82728234AF2E45074EA095D00CAB275F66BC80A* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t2D5BB7E00DFDD7BB920BD9299371F517FFA33B8E* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE* ___Sources;
	Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA* ___ContinueWithInvokers;
	Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t9283A2526EFCCE82F0B8EBAF55887B5456F4480A* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tB12F6F9A20886B084D25CBBD0A5AE32188EE0E9A* ___Sources;
	Dictionary_2_tAB6ED76928B53FB2823E0487E74A6479FD61EFFB* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t8B0C96F655CBF93E395562B1D1B5818F48B8B3F8* ___ContinueWithInvokers;
	Dictionary_2_tA1B96ED776FE272D16422E2E5ADDC16EBB5352DD* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t42D933938AECB62D7B1ADBB631AAEA5E67560735* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t12BEFF8AF58302DA0D61AB194A52E2A37EAB2E57* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t37C86FB16966DBED7080F53D707236C3E6B7A341* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tE51E73834912D672956B6CB83297706D67440E86* ___Sources;
	Dictionary_2_t2B664AA3A531F64637BDB1C178164217213C321B* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t3B55BE8DEBC9DCB41C2A7DB9CA9426D8EF9AC45D* ___ContinueWithInvokers;
	Dictionary_2_tEE9AE243684EBB1FF4C1F03E1AD339FF8F2B99B0* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tBC86C9820585F513055C386886221D0A00842CB4* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t3790601E9C79798E05EA194D0FA60251E87A2567* ____onCombinedTaskCompleted;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
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
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 m_Items[1];

	inline OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
	}
	inline OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
	}
};
struct OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 m_Items[1];

	inline OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 m_Items[1];

	inline OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB m_Items[1];

	inline OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 m_Items[1];

	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 m_Items[1];

	inline OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F m_Items[1];

	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 m_Items[1];

	inline OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B m_Items[1];

	inline OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B value)
	{
		m_Items[index] = value;
	}
};
struct ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 m_Items[1];

	inline ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E  : public RuntimeArray
{
	ALIGN_FIELD (8) LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 m_Items[1];

	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		m_Items[index] = value;
	}
};
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 m_Items[1];

	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		m_Items[index] = value;
	}
};
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F m_Items[1];

	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		m_Items[index] = value;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m94ABB7AD8E4660E9B40DD87F208D439871B3013A_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEEC118AAB9B470A8AFA6BBFE4EFF243FBFBB68D7_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4_gshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_gshared_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_gshared_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Controller_Append_TisRuntimeObject_m518A2CC0F82FDCFA762886E92EE278D94BCDFC58_gshared (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, String_t* ___0_childName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Controller_Prepend_TisRuntimeObject_m6D25F45966C05BB0B22015EB4ACEB9565DDB29B4_gshared (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, String_t* ___0_childName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Style_Instantiate_TisRuntimeObject_m99F87725D6363765C117159B023C77516AB72098_gshared (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_RemoveProxy_mED3ED66352C931411B27E86970DCD6E49745E6DD_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, RuntimeObject* ___0_proxy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OVRObjectPool_Get_TisRuntimeObject_m4C4607A6D063CCEB8FFE7317FC0AC3A536AEFD1C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_gshared_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyFlex_2_HasScrolledEnough_mA5E3D8229EFE259E4F6E7FD062B70E5EA14B65A6_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_gshared_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_Fill_m5363CC231A12F72452CE002700DE20FE3E5CA1EB_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeStartHeightFromProgress_m1BA73A53F65E067B94627CC22ADD0344F2786561_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_progress, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_GetItemIndexAtHeight_m50E175AD4D5BBE55649AAB63E8FE2AEAAB8C51F6_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyController_1_Fill_m2A94FC3DAF15CBCF1682A8DCE1FD3A25D21CA41F_gshared (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_target, Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* ___1_targets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, int32_t ___0_startIndex, int32_t ___1_endIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeTotalHeight_m9CF46AD14E76E18892C511EC39C9962D0510B357_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeTotalUsefulHeight_m97AE74A58F07AC4DCE6045BA9FB380BE31DA2254_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C_gshared (QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_gshared (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314_gshared (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___0_queue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38_gshared (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mE889EE536934192D7B627F03C6F06D6966704277_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA_gshared (Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F* __this, Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mBCA1FC3B5E29839D3B277A082274D71C3DE898BB_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F_gshared (Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052* __this, Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m37F6A993C0CCF102114746C2109678CD93FB6094_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8_gshared (Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166* __this, Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m616BC11DE9D0B2D766BA425B63BC09AC561CA076_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E_gshared (Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD* __this, Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m81808A978BBE54521C2C0EBD440BE16F41CB2B02_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22_gshared (Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A* __this, Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC2398ADC0E3E033F5B4CB3948471EFAB7B9D7E65_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35_gshared (Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C* __this, Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCDE40747018DCE83AA3BC3B9255BB1604245545A_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B_gshared (Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19* __this, Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mA04C4970EBE3C44C145A0A7DFFEE6CDE8C01738D_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C_gshared (Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4* __this, Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1ABAD77A5F3811492AC118763DCD299C1C955838_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6_gshared (Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A* __this, Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mFE94EB1806309A4E86534D08369631ECE5244848_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF_gshared (Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8* __this, Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49_gshared (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8* __this, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A_gshared (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149* __this, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6_gshared (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59* __this, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCF829028C6E50451432B17CB73C1E304F2D30D2A_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC_gshared (Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C* __this, Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void PropertyBagStore_AddPropertyBag_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m94ABB7AD8E4660E9B40DD87F208D439871B3013A (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m94ABB7AD8E4660E9B40DD87F208D439871B3013A_gshared)(___0_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void PropertyBagStore_AddPropertyBag_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEEC118AAB9B470A8AFA6BBFE4EFF243FBFBB68D7 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEEC118AAB9B470A8AFA6BBFE4EFF243FBFBB68D7_gshared)(___0_propertyBag, method);
}
inline void PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08_gshared)(___0_propertyBag, method);
}
inline void PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4 (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4_gshared)(___0_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66 (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool Dictionary_2_TryGetValue_m99C1FCBBD4A04E9F2EC939B73976EB8065A02DA1 (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* __this, RuntimeObject* ___0_key, ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14*, RuntimeObject*, ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_set_Item_mA36AAD49C81D0725CB2C71C0CE29099B7E23CFD1 (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* __this, RuntimeObject* ___0_key, ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14*, RuntimeObject*, ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*, RuntimeObject*, const RuntimeMethod*))ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_gshared_inline)(__this, ___0_value, method);
}
inline RuntimeObject* ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*, const RuntimeMethod*))ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_RefreshLayout_m643C7D1573F29B77944420A7C8D07726134EB323 (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* ScrollView_get_Flex_m2F16B41C44A871C1F3BC7681767193AF9897717E (ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* Controller_get_Children_mF2E5D2651D061A486CB8C6C75ABFD8F3E28D570C_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m460E56A56A2070B338EEF6EFF101A8C4BB381AEF_inline (List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m040334778F703A4CA208A25F9E9974705A19760D (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
inline RuntimeObject* Controller_Append_TisRuntimeObject_m518A2CC0F82FDCFA762886E92EE278D94BCDFC58 (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, String_t* ___0_childName, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*, String_t*, const RuntimeMethod*))Controller_Append_TisRuntimeObject_m518A2CC0F82FDCFA762886E92EE278D94BCDFC58_gshared)(__this, ___0_childName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_set_LayoutStyle_m0DCC79A5F6FC2F3FFC366CB1295A37661B0DD89A (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* ___0_value, const RuntimeMethod* method) ;
inline Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* Controller_Prepend_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m54AF080287502D4983695E212BE176B3E460AF9D (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, String_t* ___0_childName, const RuntimeMethod* method)
{
	return ((  Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* (*) (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*, String_t*, const RuntimeMethod*))Controller_Prepend_TisRuntimeObject_m6D25F45966C05BB0B22015EB4ACEB9565DDB29B4_gshared)(__this, ___0_childName, method);
}
inline LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C (String_t* ___0_name, const RuntimeMethod* method)
{
	return ((  LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* (*) (String_t*, const RuntimeMethod*))Style_Instantiate_TisRuntimeObject_m99F87725D6363765C117159B023C77516AB72098_gshared)(___0_name, method);
}
inline Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* Controller_Append_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m5F5CC98DC700BE5FE6F75BBEE55FE04D0B2E6B74 (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, String_t* ___0_childName, const RuntimeMethod* method)
{
	return ((  Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* (*) (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*, String_t*, const RuntimeMethod*))Controller_Append_TisRuntimeObject_m518A2CC0F82FDCFA762886E92EE278D94BCDFC58_gshared)(__this, ___0_childName, method);
}
inline int32_t ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC_gshared)(__this, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void ProxyFlex_2_RemoveProxy_mED3ED66352C931411B27E86970DCD6E49745E6DD (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, RuntimeObject* ___0_proxy, const RuntimeMethod* method)
{
	((  void (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, RuntimeObject*, const RuntimeMethod*))ProxyFlex_2_RemoveProxy_mED3ED66352C931411B27E86970DCD6E49745E6DD_gshared)(__this, ___0_proxy, method);
}
inline RuntimeObject* OVRObjectPool_Get_TisRuntimeObject_m4C4607A6D063CCEB8FFE7317FC0AC3A536AEFD1C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))OVRObjectPool_Get_TisRuntimeObject_m4C4607A6D063CCEB8FFE7317FC0AC3A536AEFD1C_gshared)(method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, bool, const RuntimeMethod*))ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_gshared_inline)(__this, ___0_value, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline void OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519 (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519_gshared)(___0_obj, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
inline bool ProxyFlex_2_HasScrolledEnough_mA5E3D8229EFE259E4F6E7FD062B70E5EA14B65A6 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_HasScrolledEnough_mA5E3D8229EFE259E4F6E7FD062B70E5EA14B65A6_gshared)(__this, method);
}
inline bool ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_gshared_inline)(__this, method);
}
inline void ProxyFlex_2_Fill_m5363CC231A12F72452CE002700DE20FE3E5CA1EB (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	((  void (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_Fill_m5363CC231A12F72452CE002700DE20FE3E5CA1EB_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Controller_get_RectTransform_mBBC871C7A4C81DA04D35132421487DAAA892BB6C_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollView_get_Progress_mEC5DB1FD0EFD3511E173B065C19719ACF0F5B75F (ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* __this, const RuntimeMethod* method) ;
inline float ProxyFlex_2_ComputeStartHeightFromProgress_m1BA73A53F65E067B94627CC22ADD0344F2786561 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_progress, const RuntimeMethod* method)
{
	return ((  float (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, float, const RuntimeMethod*))ProxyFlex_2_ComputeStartHeightFromProgress_m1BA73A53F65E067B94627CC22ADD0344F2786561_gshared)(__this, ___0_progress, method);
}
inline int32_t ProxyFlex_2_GetItemIndexAtHeight_m50E175AD4D5BBE55649AAB63E8FE2AEAAB8C51F6 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_height, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, float, const RuntimeMethod*))ProxyFlex_2_GetItemIndexAtHeight_m50E175AD4D5BBE55649AAB63E8FE2AEAAB8C51F6_gshared)(__this, ___0_height, method);
}
inline int32_t ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* List_1_get_Item_m6C1A074F5C634FC95C16588C5963426CA1E98EE2 (List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* (*) (List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void ProxyController_1_Fill_m2A94FC3DAF15CBCF1682A8DCE1FD3A25D21CA41F (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_target, Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* ___1_targets, const RuntimeMethod* method)
{
	((  void (*) (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*, RuntimeObject*, Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14*, const RuntimeMethod*))ProxyController_1_Fill_m2A94FC3DAF15CBCF1682A8DCE1FD3A25D21CA41F_gshared)(__this, ___0_target, ___1_targets, method);
}
inline float ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, int32_t ___0_startIndex, int32_t ___1_endIndex, const RuntimeMethod* method)
{
	return ((  float (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, int32_t, int32_t, const RuntimeMethod*))ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768_gshared)(__this, ___0_startIndex, ___1_endIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_SetHeight_m00D0A61737400182889A4E221AF4C511C2B05EA7 (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, float ___0_height, const RuntimeMethod* method) ;
inline float ProxyFlex_2_ComputeTotalHeight_m9CF46AD14E76E18892C511EC39C9962D0510B357 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  float (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_ComputeTotalHeight_m9CF46AD14E76E18892C511EC39C9962D0510B357_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* Controller_get_LayoutStyle_m1D58B0FBB0CBF0F04B67A746336BD1F309E49405_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) ;
inline float ProxyFlex_2_ComputeTotalUsefulHeight_m97AE74A58F07AC4DCE6045BA9FB380BE31DA2254 (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method)
{
	return ((  float (*) (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E*, const RuntimeMethod*))ProxyFlex_2_ComputeTotalUsefulHeight_m97AE74A58F07AC4DCE6045BA9FB380BE31DA2254_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
inline int32_t QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C (QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C_gshared)(__this, ___0_x, ___1_y, method);
}
inline int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_gshared)(__this, ___0_x, ___1_y, method);
}
inline void QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314 (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___0_queue, const RuntimeMethod* method)
{
	((  void (*) (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**, const RuntimeMethod*))QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314_gshared)(__this, ___0_queue, method);
}
inline void QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38 (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, const RuntimeMethod* method)
{
	((  void (*) (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31*, const RuntimeMethod*))QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38_gshared)(__this, method);
}
inline OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_inline (const RuntimeMethod* method)
{
	return ((  OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* (*) (const RuntimeMethod*))Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_mE889EE536934192D7B627F03C6F06D6966704277 (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mE889EE536934192D7B627F03C6F06D6966704277_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA (Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F* __this, Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F*, Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F*, const RuntimeMethod*))Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mBCA1FC3B5E29839D3B277A082274D71C3DE898BB (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mBCA1FC3B5E29839D3B277A082274D71C3DE898BB_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9 (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F (Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052* __this, Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052*, Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F*, const RuntimeMethod*))Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m37F6A993C0CCF102114746C2109678CD93FB6094 (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m37F6A993C0CCF102114746C2109678CD93FB6094_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511 (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8 (Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166* __this, Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166*, Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7*, const RuntimeMethod*))Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m616BC11DE9D0B2D766BA425B63BC09AC561CA076 (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m616BC11DE9D0B2D766BA425B63BC09AC561CA076_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596 (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E (Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD* __this, Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD*, Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9*, const RuntimeMethod*))Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42 (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m81808A978BBE54521C2C0EBD440BE16F41CB2B02 (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m81808A978BBE54521C2C0EBD440BE16F41CB2B02_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76 (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22 (Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A* __this, Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A*, Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43*, const RuntimeMethod*))Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC2398ADC0E3E033F5B4CB3948471EFAB7B9D7E65 (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC2398ADC0E3E033F5B4CB3948471EFAB7B9D7E65_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35 (Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C* __this, Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C*, Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC*, const RuntimeMethod*))Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395 (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mCDE40747018DCE83AA3BC3B9255BB1604245545A (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mCDE40747018DCE83AA3BC3B9255BB1604245545A_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B (Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19* __this, Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19*, Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D*, const RuntimeMethod*))Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694 (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mA04C4970EBE3C44C145A0A7DFFEE6CDE8C01738D (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mA04C4970EBE3C44C145A0A7DFFEE6CDE8C01738D_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055 (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C (Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4* __this, Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4*, Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05*, const RuntimeMethod*))Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F_gshared)(__this, method);
}
inline OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_inline (const RuntimeMethod* method)
{
	return ((  OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* (*) (const RuntimeMethod*))Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1ABAD77A5F3811492AC118763DCD299C1C955838 (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1ABAD77A5F3811492AC118763DCD299C1C955838_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973 (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6 (Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A* __this, Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A*, Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF*, const RuntimeMethod*))Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264 (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264_gshared)(__this, method);
}
inline ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_inline (const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* (*) (const RuntimeMethod*))Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mFE94EB1806309A4E86534D08369631ECE5244848 (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mFE94EB1806309A4E86534D08369631ECE5244848_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196 (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF (Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8* __this, Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8*, Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0*, const RuntimeMethod*))Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18 (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18_gshared)(__this, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49 (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8* __this, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8*, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared)(__this, method);
}
inline GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline (const RuntimeMethod* method)
{
	return ((  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* (*) (const RuntimeMethod*))Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64 (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149* __this, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149*, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, const RuntimeMethod*))Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8 (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared)(__this, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0*, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared)(__this, method);
}
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline (const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (const RuntimeMethod*))Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6 (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59* __this, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59*, Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, const RuntimeMethod*))Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6 (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared)(__this, method);
}
inline IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method)
{
	return ((  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* (*) (const RuntimeMethod*))Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mCF829028C6E50451432B17CB73C1E304F2D30D2A (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mCF829028C6E50451432B17CB73C1E304F2D30D2A_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC (Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C* __this, Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C*, Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46*, const RuntimeMethod*))Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6 (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6_gshared)(__this, method);
}
inline LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline (const RuntimeMethod* method)
{
	return ((  LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* (*) (const RuntimeMethod*))Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832 (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06*, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared)(__this, method);
}
inline OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline (const RuntimeMethod* method)
{
	return ((  OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* (*) (const RuntimeMethod*))Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA37D160544C06A884B929716C584D345827D7F82*, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared)(__this, method);
}
inline OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline (const RuntimeMethod* method)
{
	return ((  OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* (*) (const RuntimeMethod*))Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9 (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560*, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared)(__this, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A*, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m76F12C160693327FF42D53431B8352C394CA62D6_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m834877F18BDC030D89192EC9C58EC49F2598186E_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m94ABB7AD8E4660E9B40DD87F208D439871B3013A((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_m727E7AFCE2FBACF8248B41EC244D3CF46219309A_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_mBB98B3FBE8493907A041077AF9C5E488813053E2_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_mA4FB254889766F7AB6A8473C9905B8919E0A665B_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		L_0 = VirtualFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_mBC7037BF04B6E84E2F5793256B1D3D91ED87E341_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A PropertyBag_1_Instantiate_mF9AC3729C4EA2C7F467365A0E825773AAC3529D7_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mAA213442673F9B9A5948AD7385D832A08475D93B_gshared (PropertyBag_1_tA16FBB091D74A21AC539D829F65E5E8FAF2DB075* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m2FE96593B9A4453C5F0D5DA63DDF678CF606251A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_mEE00591831FE54C79A4275345EB4C5D9423B0F82_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mEEC118AAB9B470A8AFA6BBFE4EFF243FBFBB68D7((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_m9597C9612EDB47643EEB2BC0D0D6789B5C796BC4_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m877B1175839D35FE12EE261178D8EDF9E6647AAC_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m398968223DF8DFB38795603B96B736FCE7ECD320_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m4EE050DE8AE6B1BB509DAAB5B83D6F28E2CD47CC_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PropertyBag_1_Instantiate_m9B4B115709DC97539D6A9EEB88AEBE7DF5BD3020_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mF2FC0A3F27C3D8D1F403D7433F4782CB01E4E6D4_gshared (PropertyBag_1_t91378217184AE0BD640D9A003EF2CB208071D593* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m2958ED82CEF56432EC7BAF0F4A587DE1797112B5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_mF593692302390A953382E45778CD235A6FC1920F_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m088CAA80782DB09175102114FED732B85F56DC08((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mA628F9A279F3A24B9A812D09E092987972FF3923_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_mEEEC3DE040379D6D9823A2A625785113D203E4E1_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m9B35EAAF17096B8F01DF18990590252DC81D2F70_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = VirtualFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m7402A24E2472C5124BFDE138D0EDF5FC3B20D8B5_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 PropertyBag_1_Instantiate_m3C7BC7872E94EB0B081F947A87DA48616CB0D583_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mD0545EB6A8F30FF94E8C8CE7AD6A4F0DF32CBE7C_gshared (PropertyBag_1_tDA117C10FEABA385803A90E976050FB2D270FAD2* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m95401D85FD87F50D9ACC186628CD00BC5FBEFA2C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m4CF374C66D129D382D608700B9E0193E8C0A8BE8_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		PropertyBagStore_AddPropertyBag_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6EDE42258DCE4DF0A4C10E8D44D305FA6C59AEB4((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mD9D7F588A62865ADE0AA83C22B1683BB6C7DDC5A_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m92A84318FA2F65E1CF4FA7C7766DD63231BC602E_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m01ABC746751E70540A71993D9965CC3B451A38C5_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = VirtualFuncInvoker0< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(9, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m2D65A5B8843379129FB04EEF94AFB8A4FCA8E846_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PropertyBag_1_Instantiate_mFA7DB211D8B2000F91C0C88D745E98841087BE6F_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mB6FF3A98CDA8C851BC0FC108F95BF41644471439_gshared (PropertyBag_1_tD11940BE9DAD74F61B141A397F3D5722E7FF2601* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__cctor_m7132EB86C61D9CFCD8D60094ABF4791FCB0CD0B5_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFD0F59F9F38A92660652CA5BE172EFCA8501E47)), (RuntimeObject*)L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_Internal_IPropertyBagRegister_Register_m54B6F69083B35A3F7C301A639D48050B235A6D7F_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Accept_mB0872E61EC1AD02FC6F72F936F04557118FF271A_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, RuntimeObject* ___0_visitor, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_visitor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC23725EE1ACD9996F8909AD0C76D39D2B4CB3ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_visitor;
		NullCheck(L_3);
		GenericInterfaceActionInvoker0::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_Unity_Properties_IConstructor_get_InstantiationKind_m2C299F894780F5CCB18B26BEF99C95EAC40D2C95_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Unity_Properties_IConstructorU3CTContainerU3E_Instantiate_m8AB68F3EC8FB382C1A64FD54DF8E23CC2543E5EA_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	{
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(9, __this, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyBag_1_get_InstantiationKind_m12E943B094001EC2736190825F084562FBE84235_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CInstantiationKindU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1_Instantiate_mD74F4CF48BC2E122C974C038AB838190C3988783_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	const Il2CppFullySharedGenericAny L_1 = L_0;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_0, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	memset(V_1, 0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(V_1, L_0, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		goto IL_000d;
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TContainer_tDD41E5BDFD434E31190676C56EDFF26DCF9FB837);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_1__ctor_mF9D3CBA5488FDEB46B255A12E5CF4DDF4BD76175_gshared (PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CInstantiationKindU3Ek__BackingField = (int32_t)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_Multicast(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* currentDelegate = reinterpret_cast<PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenStaticInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedStaticInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedInstInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, il2cppRetVal);
}
void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenInstInvoker(PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGetter_2__ctor_m3AA8F13AEB7368CF6AF57CA2D8F429F95D2DB765_gshared (PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGetter_2_Invoke_mA2DF6F1F8E7DF2AC8C5BFD7384AD0F1548DDA94C_gshared (PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_Multicast(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* currentDelegate = reinterpret_cast<PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenStaticInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedStaticInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedInstInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, ___1_value);
}
void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenInstInvoker(PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	NullCheck(___0_container);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySetter_2__ctor_m869A0AE0095C563945302012D5189CD7C774B6BC_gshared (PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySetter_2_Invoke_m4C2974B5500110AB1BE6A4E2F9448507587CE314_gshared (PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m0E06B95AFD3BFB6407F535ADA0C5A0B76748CBE4_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m011369AEEC9CA572386584337F188363DCA56E7A_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m3836B58FE89ECA189011D47FD206A8B791A7789E_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m269A7A54BAE146A1DE03EB54B68201AA66FFA4EC_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m674D80F86F95E8F4BE851109285AAC13B4DDEB0F_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m6D93F660253A4C7EC344945B11B74A1EC5E2052B_gshared (Property_2_tC4748332B44E20FE7C498E90E74A718F89F44471* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m952FA1152B004F3B2BE8C76BE3716E5514090240_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m999BF052A1A6E31093707D665302D69489EE22AD_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mE71253D52DB9483B2AACB0F68D9570BEE3E964A6_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m252115A8DB29A80FE01E2F40F6478D522B0F72E1_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m5269B25965C17B7537C2F8C272504A58872B737E_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m6CCA84842C767E1068B2F635177225E05FFE539B_gshared (Property_2_tAB010676E84B6005B47BB524D152BA4859373D2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mD93FC21A0D7134E235380B4B10EF986E636E930B_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m2C016149BFFF085B859EF01E53CB23D09A61966D_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m9C9FFA86F4E0054E6833148483FF697C9C8E949B_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m71997087D28ECDDACD6019ED56CE72BA0CA9F1D6_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m1FCAF0DBF98FB2028C4F0B96936E64D51EA7B798_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m9DFCB7BFC31E1148DCB249D7707DF37707F6268F_gshared (Property_2_tBEC632CE0FBA6F323B365C780F1F4C4C62A850ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m64BAB5094CE737076AEEAE6A2881DF20B8BA4DA0_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m7BE72727942237415CA702C9A13E7BB9CB108E58_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m333EA61400D181A83535545399D085C68413EFBB_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m345D4F0D3ED55A1D83A17B712F821CDF258BC9AA_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m454C34A3F222DC0B4F5C9DD9D80153752ADD2BEF_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m8513F2C4ED671798A7491909C328236F38A1AEB3_gshared (Property_2_t4214D5666464CEE51F044573A59C738C2D562085* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m9837C29A8649CFB5A5CBD7592F84F61C215D7657_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m3808B038B63C06DC35A66E3C3E2BB18386239895_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m5FD19C7D09DA98F7AA368E44B649D628D7A73F4C_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mF1228649AC75A47102FCF1982FEC2EC8E94A25C0_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m629086C478AEDD6249C9FFED051EA5243F5D13A7_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m5FD6858E5CA7D5DCC0B4B383932EA1FA640FD0C0_gshared (Property_2_t4395571972396AEE0D2671461D1603BB8D296451* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC26036EF975DB6194706EB4411FC0716BEF15214_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m66C5635D4F91525B79203E7D07D3C217E851A494_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mBB05DEFF1CD139A50252C2081C49019A8B8ADF04_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m670C119823F5BB0686D7CC65FF23C33D358A576E_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mE0EC056FE9207666C6751BA2ED86E0B66154117C_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m9FB84C0814943DA6AF990699BADA5411E3D18230_gshared (Property_2_tE0D61821CEE6E9C49C6C1BCAD5F62D78A24F7A56* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mF21F8284BDB1E79EA44744245D8E8D336D1D4052_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m6A4E40DA5C1A5058C132C0264020730F2C11286A_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mBC4A4358132996CDD6D8B2D5142D5BB99249C6B5_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m5514D57B752F4F1903E78467DC8AE5F66ADF14A4_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mDE7B7780A40869E6CC54EF9237D37A466BEB3687_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_mE2253FF920B6B8BA104EB3F4C6E8A871A34892E7_gshared (Property_2_t4CA8B837C8B5E5C163CFFA715548D9980679EC46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m46F2F242BBEA29441FDEF387FCCB0BF10EBC33D0_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mFDF973FEBA5997D0BF372E207E91B40309CE71FE_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m4E31070937A76E016C2FB59C32C841F51E4CB6A6_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mDEC30180332501C4D9B62ED9628E21924A7BB03B_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m857969E020EE8BD0EB990E73A3028486DF5DE4FA_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m0053E84A8D6B34BFDAB7795833421AF8A4F0BAEE_gshared (Property_2_tC1A1D28677DB791F77E60F16E0A734BE3616141F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m09BF4AD760E2B656D5E47875008A72E2DE3E9288_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m3890685C371BB749CAC70097ED86C21D465EBAB7_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_mA1D41E751B76604F9C28B265B4C61B5A9FBA9227_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m8A9B28E0C604C908B6B82B14BCA8FEF04864A87E_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mA0C2C6D7CBE60CC4AA3395C2E07F240DD4328F18_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m00887E3260117C76E2592EEB152472A442E5ECFF_gshared (Property_2_tDFB93AAC56F8B372E59EEACF0AD971295487CCEA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mD8F107C8F0A6717C0EC3626A712FCF81500B3DC5_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mC32A7C2E4B84CBF2D68D081A4CFC8BC6B47067FC_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m00858C4ADF153B82B94BB64B8DE1639655A9A901_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m777B7E27071EFD266198FB94EDD873DABAC6E633_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_mB7BD4C5BD69A4B294423591F3FB25A0E09B32A7E_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m3D03E5489D8244E706F51006F1B0D0C5250A7A86_gshared (Property_2_t69BB6E67D83C59343BA1D7DCC6BDE82B297986D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC8A124D0B663BBBDAA581419478046BDCC556924_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_mB6205269D9F09BBDD2C7D73EDF7AFE257C063332_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m913F23BA7DC31CD1F1A6CF9B604D0EDBE75A8CCD_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m4ECD796AB78621A969CE7424FE8234E5C2D6A36F_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m6C04AB2D5CD2E6A35A2270F4EE83A99713CC87CB_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_mB4377AC3DECCB9DF801451D8D3D612717EFA30BA_gshared (Property_2_tD234CECBCBBAF0E5115582B104A904CB400D927F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m75165CE23F4A7B2FD33F74E1A314A52E08EB1F86_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m254A38D0DF492D61248F7D514EDB66AD2D326B88_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m9E71F32C6B3BEF8989578C42B418007964A3DB3C_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		NullCheck((RuntimeObject*)L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_7 = __this->___m_Attributes;
		V_1 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_9, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_9);
	}

IL_003a:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_10 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11 = ___0_attribute;
		NullCheck(L_10);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_10, L_11, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m90125868491C6BC90AE0CF95472AAC2567340CD5_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_2, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_2);
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___0_attributes;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck((RuntimeObject*)L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0023_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8;
				L_8 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0045_1;
				}
			}
			{
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_2;
				NullCheck((RuntimeObject*)L_10);
				Type_t* L_11;
				L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_10, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				bool L_14;
				L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
				G_B7_0 = ((int32_t)(L_14));
				goto IL_0046_1;
			}

IL_0045_1:
			{
				G_B7_0 = 1;
			}

IL_0046_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004c_1:
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_16 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_2;
				NullCheck(L_16);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_16, L_17, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_005a_1:
			{
				RuntimeObject* L_18 = V_1;
				NullCheck((RuntimeObject*)L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
				if (L_19)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_gshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_gshared (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTargetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_gshared (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyController_1_Fill_m2A94FC3DAF15CBCF1682A8DCE1FD3A25D21CA41F_gshared (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_target, Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* ___1_targets, const RuntimeMethod* method) 
{
	ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* V_0 = NULL;
	{
		Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* L_0 = ___1_targets;
		RuntimeObject* L_1 = ___0_target;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m99C1FCBBD4A04E9F2EC939B73976EB8065A02DA1(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* L_3 = V_0;
		if ((!(((RuntimeObject*)(ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*)L_3) == ((RuntimeObject*)(ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*)__this))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* L_4 = ___1_targets;
		RuntimeObject* L_5 = ___0_target;
		NullCheck(L_4);
		Dictionary_2_set_Item_mA36AAD49C81D0725CB2C71C0CE29099B7E23CFD1(L_4, L_5, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		RuntimeObject* L_6 = ___0_target;
		ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_inline(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		VirtualActionInvoker0::Invoke(4, __this);
		RuntimeObject* L_7;
		L_7 = ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_7);
		Controller_RefreshLayout_m643C7D1573F29B77944420A7C8D07726134EB323((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyController_1__ctor_mCBCFE85664143F48510C7477AFEC68C48D6577B5_gshared (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDirtyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDirtyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* L_0 = __this->____scrollView;
		NullCheck(L_0);
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_1;
		L_1 = ScrollView_get_Flex_m2F16B41C44A871C1F3BC7681767193AF9897717E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____proxyChildren;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m460E56A56A2070B338EEF6EFF101A8C4BB381AEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_0;
		L_0 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0);
		List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* L_1;
		L_1 = Controller_get_Children_mF2E5D2651D061A486CB8C6C75ABFD8F3E28D570C_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m460E56A56A2070B338EEF6EFF101A8C4BB381AEF_inline(L_1, List_1_get_Count_m460E56A56A2070B338EEF6EFF101A8C4BB381AEF_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_2, 2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2__ctor_mFEBBB3E39F34D7F8FA75D9478D0B5ACADE2C52C6_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, int32_t ___0_numberOfInstantiatedControllers, int32_t ___1_maximumNumberOfProxies, LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* ___2_layoutStyle, ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* ___3_scrollView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_Append_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m5F5CC98DC700BE5FE6F75BBEE55FE04D0B2E6B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_Prepend_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m54AF080287502D4983695E212BE176B3E460AF9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61D82A6D056F63D8FBEA0F6047658030510B2383);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D7AED08930F52B5AAB58B2CBC3E9482D298B52C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC1ECDF2A921E0F4F2600A3DA4CB634588E28A8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* L_0 = (Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		Dictionary_2__ctor_m040334778F703A4CA208A25F9E9974705A19760D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____targetsDictionary = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetsDictionary), (void*)L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->____proxyChildren = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____proxyChildren), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* L_2 = ___3_scrollView;
		__this->____scrollView = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scrollView), (void*)L_2);
		V_0 = 0;
		goto IL_0049;
	}

IL_0028:
	{
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_3;
		L_3 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_3);
		RuntimeObject* L_5;
		L_5 = Controller_Append_TisRuntimeObject_m518A2CC0F82FDCFA762886E92EE278D94BCDFC58((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_6 = ___2_layoutStyle;
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_5);
		Controller_set_LayoutStyle_m0DCC79A5F6FC2F3FFC366CB1295A37661B0DD89A((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_5, L_6, NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0049:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_numberOfInstantiatedControllers;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_10 = ___1_maximumNumberOfProxies;
		__this->____maximumNumberOfProxies = L_10;
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_11 = ___2_layoutStyle;
		__this->____childrenLayoutStyle = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childrenLayoutStyle), (void*)L_11);
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_12;
		L_12 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_12);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_13;
		L_13 = Controller_Prepend_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m54AF080287502D4983695E212BE176B3E460AF9D((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_12, _stringLiteralBCC1ECDF2A921E0F4F2600A3DA4CB634588E28A8, Controller_Prepend_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m54AF080287502D4983695E212BE176B3E460AF9D_RuntimeMethod_var);
		__this->____before = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____before), (void*)L_13);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_14 = __this->____before;
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_15;
		L_15 = Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C(_stringLiteral9D7AED08930F52B5AAB58B2CBC3E9482D298B52C, Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C_RuntimeMethod_var);
		NullCheck(L_14);
		Controller_set_LayoutStyle_m0DCC79A5F6FC2F3FFC366CB1295A37661B0DD89A(L_14, L_15, NULL);
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_16;
		L_16 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_16);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_17;
		L_17 = Controller_Append_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m5F5CC98DC700BE5FE6F75BBEE55FE04D0B2E6B74((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_16, _stringLiteral61D82A6D056F63D8FBEA0F6047658030510B2383, Controller_Append_TisController_tD1D864C815FC4FCDC85F17939716E36A88B39386_m5F5CC98DC700BE5FE6F75BBEE55FE04D0B2E6B74_RuntimeMethod_var);
		__this->____after = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____after), (void*)L_17);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_18 = __this->____after;
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_19;
		L_19 = Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C(_stringLiteral9D7AED08930F52B5AAB58B2CBC3E9482D298B52C, Style_Instantiate_TisLayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177_mDCDAD7E4DCED4864DBCE3EB0E1605BE75517692C_RuntimeMethod_var);
		NullCheck(L_18);
		Controller_set_LayoutStyle_m0DCC79A5F6FC2F3FFC366CB1295A37661B0DD89A(L_18, L_19, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProxyFlex_2_AppendProxy_mABC8B847802C43C6B2AD80463A4DCE3480D60870_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_1 = __this->____maximumNumberOfProxies;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = __this->____proxyChildren;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_2, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ProxyFlex_2_RemoveProxy_mED3ED66352C931411B27E86970DCD6E49745E6DD(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0020:
	{
		RuntimeObject* L_4;
		L_4 = OVRObjectPool_Get_TisRuntimeObject_m4C4607A6D063CCEB8FFE7317FC0AC3A536AEFD1C(il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_4;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = __this->____proxyChildren;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_RemoveProxy_mED3ED66352C931411B27E86970DCD6E49745E6DD_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, RuntimeObject* ___0_proxy, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____proxyChildren;
		RuntimeObject* L_1 = ___0_proxy;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		RuntimeObject* L_3 = ___0_proxy;
		OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_Clear_m3A2A4CCE792B749B593291EA675B382BFE3A5BEC_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->____proxyChildren;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				return;
			}
		});
		try
		{
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				OVRObjectPool_Return_TisRuntimeObject_m59E9AEA1458F1459886C344546AFF3482B15F519(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			}

IL_001a_1:
			{
				bool L_3;
				L_3 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->____proxyChildren;
		NullCheck(L_4);
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_Update_mBC2BDDF013AC675CC2721D10007091D63391327E_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ProxyFlex_2_HasScrolledEnough_mA5E3D8229EFE259E4F6E7FD062B70E5EA14B65A6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_000f:
	{
		bool L_1;
		L_1 = ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ProxyFlex_2_Fill_m5363CC231A12F72452CE002700DE20FE3E5CA1EB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_inline(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyFlex_2_HasScrolledEnough_mA5E3D8229EFE259E4F6E7FD062B70E5EA14B65A6_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_0;
		L_0 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Controller_get_RectTransform_mBBC871C7A4C81DA04D35132421487DAAA892BB6C_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = L_2.___y;
		float L_4 = __this->____lastScroll;
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract(L_3, L_4)));
		return (bool)((((float)L_5) > ((float)(1.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyFlex_2_Fill_m5363CC231A12F72452CE002700DE20FE3E5CA1EB_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C1A074F5C634FC95C16588C5963426CA1E98EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	{
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_0;
		L_0 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Controller_get_RectTransform_mBBC871C7A4C81DA04D35132421487DAAA892BB6C_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		float L_3 = L_2.___y;
		__this->____lastScroll = L_3;
		ScrollView_tC06FCC2C5F7056B74C2A6D7F5976897DA63B1FA2* L_4 = __this->____scrollView;
		NullCheck(L_4);
		float L_5;
		L_5 = ScrollView_get_Progress_mEC5DB1FD0EFD3511E173B065C19719ACF0F5B75F(L_4, NULL);
		float L_6;
		L_6 = ProxyFlex_2_ComputeStartHeightFromProgress_m1BA73A53F65E067B94627CC22ADD0344F2786561(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_0 = L_6;
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_7;
		L_7 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_7);
		List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* L_8;
		L_8 = Controller_get_Children_mF2E5D2651D061A486CB8C6C75ABFD8F3E28D570C_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_7, NULL);
		V_1 = L_8;
		float L_9 = V_0;
		int32_t L_10;
		L_10 = ProxyFlex_2_GetItemIndexAtHeight_m50E175AD4D5BBE55649AAB63E8FE2AEAAB8C51F6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_2 = L_10;
		int32_t L_11 = V_2;
		int32_t L_12;
		L_12 = ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1));
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), L_15, NULL);
		int32_t L_17;
		L_17 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_16, NULL);
		V_4 = L_17;
		int32_t L_18 = V_2;
		int32_t L_19 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		V_5 = 1;
		int32_t L_22 = V_2;
		V_8 = L_22;
		goto IL_00bc;
	}

IL_0074:
	{
		int32_t L_23 = V_8;
		int32_t L_24;
		L_24 = ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00b6;
		}
	}
	{
		List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_28;
		L_28 = List_1_get_Item_m6C1A074F5C634FC95C16588C5963426CA1E98EE2(L_25, L_27, List_1_get_Item_m6C1A074F5C634FC95C16588C5963426CA1E98EE2_RuntimeMethod_var);
		V_9 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_28, il2cpp_rgctx_data(method->klass->rgctx_data, 8))), il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_29 = __this->____proxyChildren;
		int32_t L_30 = V_8;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		RuntimeObject* L_32 = V_9;
		Dictionary_2_t48022136DBC46545B3C1414CAD949CE29D56FA14* L_33 = __this->____targetsDictionary;
		NullCheck((ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*)L_31);
		ProxyController_1_Fill_m2A94FC3DAF15CBCF1682A8DCE1FD3A25D21CA41F((ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B*)L_31, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
	}

IL_00b6:
	{
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00bc:
	{
		int32_t L_35 = V_8;
		int32_t L_36 = V_3;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_37 = V_2;
		float L_38;
		L_38 = ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768(__this, 0, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_6 = L_38;
		int32_t L_39 = V_3;
		int32_t L_40;
		L_40 = ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		float L_41;
		L_41 = ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768(__this, ((int32_t)il2cpp_codegen_add(L_39, 1)), ((int32_t)il2cpp_codegen_subtract(L_40, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_7 = L_41;
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_42 = __this->____before;
		float L_43 = V_6;
		NullCheck(L_42);
		Controller_SetHeight_m00D0A61737400182889A4E221AF4C511C2B05EA7(L_42, L_43, NULL);
		Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* L_44 = __this->____after;
		float L_45 = V_7;
		NullCheck(L_44);
		Controller_SetHeight_m00D0A61737400182889A4E221AF4C511C2B05EA7(L_44, L_45, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeTotalHeight_m9CF46AD14E76E18892C511EC39C9962D0510B357_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ProxyFlex_2_get_NumberOfProxies_m6BC120F1064C214B4A722CB56F56A0F9E95168DC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_1;
		L_1 = ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_subtract(L_0, 1)), ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		float L_3;
		L_3 = ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768(__this, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeTotalUsefulHeight_m97AE74A58F07AC4DCE6045BA9FB380BE31DA2254_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = ProxyFlex_2_ComputeTotalHeight_m9CF46AD14E76E18892C511EC39C9962D0510B357(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_1;
		L_1 = ProxyFlex_2_get_NumberOfControllers_m3BB265EEAA112FD1045C5ADB44D2C9AB2A737113(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		float L_2;
		L_2 = ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768(__this, 1, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_3;
		L_3 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_3);
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_4;
		L_4 = Controller_get_LayoutStyle_m1D58B0FBB0CBF0F04B67A746336BD1F309E49405_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_3, NULL);
		NullCheck(L_4);
		float L_5 = L_4->___spacing;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_0, L_2)), L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeStartHeightFromProgress_m1BA73A53F65E067B94627CC22ADD0344F2786561_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_progress;
		float L_1;
		L_1 = ProxyFlex_2_ComputeTotalUsefulHeight_m97AE74A58F07AC4DCE6045BA9FB380BE31DA2254(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_0)), L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProxyFlex_2_GetItemIndexAtHeight_m50E175AD4D5BBE55649AAB63E8FE2AEAAB8C51F6_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, float ___0_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_height;
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_1 = __this->____childrenLayoutStyle;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_1->___size);
		float L_3 = L_2->___y;
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_4;
		L_4 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_4);
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_5;
		L_5 = Controller_get_LayoutStyle_m1D58B0FBB0CBF0F04B67A746336BD1F309E49405_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_4, NULL);
		NullCheck(L_5);
		float L_6 = L_5->___spacing;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_0/((float)il2cpp_codegen_add(L_3, L_6)))));
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProxyFlex_2_ComputeHeight_m8D5150D6A5F15E570874B42364DB0BBD42FCD768_gshared (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, int32_t ___0_startIndex, int32_t ___1_endIndex, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___1_endIndex;
		int32_t L_1 = ___0_startIndex;
		Flex_tD790FC07CC2A01F924A9CD8B271FA2FBF86EE959* L_2;
		L_2 = ProxyFlex_2_get_Flex_m7CFF7F1F1C822256E9511C1D59BB3A0AEDFC9D5A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_2);
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_3;
		L_3 = Controller_get_LayoutStyle_m1D58B0FBB0CBF0F04B67A746336BD1F309E49405_inline((Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386*)L_2, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___spacing;
		V_0 = L_4;
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_5 = __this->____childrenLayoutStyle;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_5->___size);
		float L_7 = L_6->___y;
		float L_8 = V_0;
		float L_9 = V_0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1))), ((float)il2cpp_codegen_add(L_7, L_8)))), L_9));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C_gshared (QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_5;
		L_5 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		return (-1);
	}

IL_001e:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QuaternionCompositeComparer_t021E6DC8E7FE8C9C8CC75C2512807E2F9ACA4E33*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = QuaternionCompositeComparer_Compare_mFB7911382D99A8FC584E494EFEBECE486BFE439C(_thisAdjusted, ___0_x, ___1_y, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_gshared (QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___1_y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_5;
		L_5 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		return (-1);
	}

IL_001e:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_x, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_y, const RuntimeMethod* method)
{
	QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QuaternionCompositeComparer_t226CF0226C9A2F5DA3083FF966A2A8328E1B140B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = QuaternionCompositeComparer_Compare_m48A2A3D93D4585D34F05490E96B4C8581DB7B69F(_thisAdjusted, ___0_x, ___1_y, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314_gshared (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___0_queue, const RuntimeMethod* method) 
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* V_0 = NULL;
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** L_0 = ___0_queue;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1;
		L_1 = ((  Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = L_1;
		V_0 = L_2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = V_0;
		__this->____queue = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queue), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314_AdjustorThunk (RuntimeObject* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** ___0_queue, const RuntimeMethod* method)
{
	QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31*>(__this + _offset);
	QueueScope_1__ctor_mD5515AA4F1D24FAA4377BAC80B4AC176C963E314(_thisAdjusted, ___0_queue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38_gshared (QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* __this, const RuntimeMethod* method) 
{
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = __this->____queue;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<QueueScope_1_tD44324E04FFBAD59B89ABAF179A818FAE7446C31*>(__this + _offset);
	QueueScope_1_Dispose_m131CAC63A1B39029AFD7A5140B7147FC60C40D38(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB3CA5B9CF9B11A85AD2D3796FC279F20F9A6E0A2_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_0;
		L_0 = Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mDF24516902F7CED53ACC12E9C1098D8016C90EAB_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_6 = (OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)(OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE008317803889463BDC17AD4FB84F589978AFE67_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m22B044A63F17B074119D0D3160193A3E072A0D9A_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mFBBD5BA00B710DDD20AA4B5C1E1363D99D9B2DC4_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mFA7C81B7A1519F5700CEA5FC02A1D0919167CC4E_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF2D7377240BB16495FAB706B3E7744EB6183200E_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m786953B1DE9C05F37E5B6B230F19386644DD946B_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mE889EE536934192D7B627F03C6F06D6966704277(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F Queue_1_GetEnumerator_m093F49AE17FB531B363B25125E865691716170CA_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31DE2C0756C5E223EE3A590DD907319AC409B382_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0167859E5143D25481E4031F64E8CE879A23F642_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF46689CDD4B7A588AD31160642182D5E7D89D9EA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tACB4DAFC10ABBCA7CFDB139F1803244ECCD2CD2F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 Queue_1_Dequeue_mC2502AC9F686BC69FB7CAD936164F6D2856E5B16_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* V_1 = NULL;
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 Queue_1_Peek_m4E5CA15E771560D5439FB12916DA33A39D373B75_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* Queue_1_ToArray_m2EC4FE4B9ED796F88D128A2BDB343A1E7DBD5D52_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_1;
		L_1 = Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_3 = (OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)(OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_12 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_15 = __this->____array;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_16 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mE889EE536934192D7B627F03C6F06D6966704277_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* V_0 = NULL;
	Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* G_B6_0 = NULL;
	Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_1 = (OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)(OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_11 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_14 = __this->____array;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_15 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m7A08202C5C7942AE6684EAF57A9774BCC6E017BE_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mA5FD17808FF1CC2DE85FE52846D1A41F9A5DB2AD_gshared (Queue_1_t6C05EEB4896FC7C31BAFCBC3CB596FAC1DE0804F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB00869660C0183FD1C64C672EFF5C75EC216D815_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_0;
		L_0 = Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m0C91F679B728D276A9BC80907C6B29D5026F8132_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_6 = (OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)(OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m09BC3ACA3B6BCA0CC5C52C6DA96A4B66DB8356BB_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m540F0EE9BB149B771C8891535E39B9F809F0F029_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m47C0C0DB42C8A9541E8BFA099E962736CA308E57_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m02C9F3ABB12EACAF386078E2A45B0A08FA873E92_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF188C24DDF6AE249F0E9FD00A4C0D9671FDA1B14_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4E0C2403891858BB1EA0FE310FA33F8B4AF94688_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mBCA1FC3B5E29839D3B277A082274D71C3DE898BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 Queue_1_GetEnumerator_m619A48595F4C01EDBC5A2A80F30B8518E68B1847_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m58272581F1F25FF71955A4B245E1E0E1B8FF9EEB_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m7597727425F750A03008EECDBDBAF7EE32BC51F1_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m600FC984294A67887207F5D85F38CF79D758F04F((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t2D9B2777A8E714046B45C3BC57ED72798581C052 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 Queue_1_Dequeue_m7363009D31997C0787093F4AAFB2BD2B2882D3FF_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* V_1 = NULL;
	OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 Queue_1_Peek_m94950B12576F31A1B535F8038AD19974C1004762_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* Queue_1_ToArray_m7BFBE6356944A6460EAA45E36B3A464B04305E3C_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_1;
		L_1 = Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_3 = (OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)(OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_12 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_15 = __this->____array;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_16 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mBCA1FC3B5E29839D3B277A082274D71C3DE898BB_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* V_0 = NULL;
	Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* G_B6_0 = NULL;
	Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_1 = (OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)(OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_11 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_14 = __this->____array;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_15 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF306397B0D11C6F1011A02A8DE6C41F837721ED9_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m799A050494346279CBCC4877154C5610A8A491CF_gshared (Queue_1_tE840FB5D8A745A3789B22BDE70B88BDFC89E040F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m646DB909AA528A1553DEE2608CF9322545A1C282_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_0;
		L_0 = Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m9E453E4CE5091DA9B0ED8AA9229B96A21657CB31_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_6 = (OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)(OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m9273B8B80D0D3DE5CC477894F03F04B08D59C93C_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m383E30D1F8CCA317C04ECC226403B3BC7B779E0A_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m42751BCAFAC289B0816C0EA74792FB029A14E5D2_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m2B444875AF6D4D32F395784B5FDC6EF27B122B5A_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m12B410AA28DB4B986356BF4ED5A73371E1BCCA13_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m960CD9AF1D1A97071D01A233A713844D01A7DCB2_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m37F6A993C0CCF102114746C2109678CD93FB6094(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 Queue_1_GetEnumerator_m3BD64D1CDA1A34F5CCB16DEE4C22216B83706F47_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0B3A4F42AF330394B26ED5E27FB370A798F37B48_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m5DF952F95316E15C30C04F6D9F74FD36650BF1F0_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15AD271B1EF505E9691EEDD778F766FD175163B8((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tB6BB39E899F4F42E7924352E036A153DB0BE9166 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 Queue_1_Dequeue_mB01FAE2B19DD1E58DC54ADDB7D8A7895A79C3992_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* V_1 = NULL;
	OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 Queue_1_Peek_m9032501BC2F10BF97D9A3A6F6260B0F0582196BB_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* Queue_1_ToArray_m470381A62B57BB9965688D80DE1270FFA5653C62_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_1;
		L_1 = Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_3 = (OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)(OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_12 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_15 = __this->____array;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_16 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m37F6A993C0CCF102114746C2109678CD93FB6094_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* V_0 = NULL;
	Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* G_B6_0 = NULL;
	Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_1 = (OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)(OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_11 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_14 = __this->____array;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_15 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF2BC54D7E39355EA03738659C45499C8815EB511_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m594B06A510E2834CF22DB6D815BFCA2DD8EF33FD_gshared (Queue_1_t615D399EDB990CC36CB9973D75BDE2590BA08EE7* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF6B0E0ABCED6385D38F07DAE297BD7F44EA87BBC_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_0;
		L_0 = Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCDA6277269D041BFBA62100CEB08BBED874054DF_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_6 = (OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)(OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD04142F4A215EF15A7AF43D0072B970221EEB35A_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m75517E89A30AB07645E0E1CC804374B516A597E4_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE864B83873316BE97448E35D6195CDD1DD0781D3_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m3EA800835A0118C7ADECBEAE795F5CD33A7FDFCD_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m714D27FAD2D2FB2BE871CD042DA894B8236979A6_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m94DC87E3374137BDAEC75765514965BAAFC7552A_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m616BC11DE9D0B2D766BA425B63BC09AC561CA076(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD Queue_1_GetEnumerator_m79FC691F2D72BC8835058200E607F8D116B348A2_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA16D04CEABAA120DE6D61A7675B82D9D1833070B_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m9D1652999A482FF15C8179331F64CA66199760CB_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F53417A09422A568E566C15EF169B3B5C7ECD5E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t076AFBC6BDDED9C145F59E3656E42D220E67C7AD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB Queue_1_Dequeue_m4EDDD52994D70251E1B007AB507B7586B580DC98_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* V_1 = NULL;
	OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB Queue_1_Peek_m4BB133546BFE7787D926BC73600BF8487C6E2DDE_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* Queue_1_ToArray_mECCC8B0F76F2BC6ECE3D6E31B7E29DEEC5253481_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_1;
		L_1 = Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_3 = (OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)(OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_12 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_15 = __this->____array;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_16 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m616BC11DE9D0B2D766BA425B63BC09AC561CA076_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* V_0 = NULL;
	Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* G_B6_0 = NULL;
	Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_1 = (OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)(OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_11 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_14 = __this->____array;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_15 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0B1E9A42FCC8676DF5A49575FA3B3B8E9CA15596_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m577F7851D1140E5216F4D58762F72BE0B2B76A42_gshared (Queue_1_t5E4B9CD1131D1C6EDE259920C3F8FED411CB72B9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m4965897394E7CA46B3A583BC11DA606FF8C7FCE2_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_0;
		L_0 = Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m01419302F4E42F1E9C1FBFF15DDA7D63A3882783_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_6 = (OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)(OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mBF9275D98FDF6A63CB22486A9F7C1FB5B97577C6_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mC1DE51B00DDE1A7D542F33F44BC8562D2B531A5F_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m85110F22D20A9AF153F49422A3D40A37FBF12653_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mBE51DAB058C38426B4A466788CDB9DE42B9AD84E_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m9FE996204A2E24C73BEDB80B3F2E71CB78D2D9B3_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mE15EA858550C4DD8FB5BA759173486771019E5D9_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m81808A978BBE54521C2C0EBD440BE16F41CB2B02(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A Queue_1_GetEnumerator_m20D36EAE25F776ABABBA3A6F17122923AE6619B3_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF4C8148C4415E005A3191F0220F9F95BCF54139D_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m798AC5ED14E554CFBC06AD11EF033512CBE13810_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD3224E412FDA5BD1592FBAE287FBBD4FFF905B22((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t344B08A9473426E6C360608701EABF43ECB0F79A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 Queue_1_Dequeue_mB0316FA0337623296B5AC5F09A674A4CD4068F80_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* V_1 = NULL;
	OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 Queue_1_Peek_mB01BAF91FCACE442FD2068B407C527D4DC82C2BA_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* Queue_1_ToArray_mDA451CC6EE69F5DEC896761FF82C337164248A77_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_1;
		L_1 = Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_3 = (OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)(OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_12 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_15 = __this->____array;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_16 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m81808A978BBE54521C2C0EBD440BE16F41CB2B02_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* V_0 = NULL;
	Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* G_B6_0 = NULL;
	Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_1 = (OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)(OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_11 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_14 = __this->____array;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_15 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m2C63237017A2D182D344E45568486948227C8D76_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF47B366AAE5CACA89C6F63F846BC76A2BA48D83D_gshared (Queue_1_t772A9362634C45A79D8534BBB76A535BF46FBD43* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCF5F7F0AC545845D78FBD103C1BB24F885C6406F_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_0;
		L_0 = Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE9D50527820B000305C872E8766AA93D1939D97C_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_6 = (OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)(OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m8C6AEE2FA379946180714408EECDF90C74E3240A_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m6601F0EF3F978ADF524B1ECDDD90669E6F73E929_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m788C48CCEB2DDF9DB83CBBEAA98ADB0998A72E2B_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA9499D8A7E0EFB2DA194D85C78F81400E4E9F315_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mA92A4D240C2B5412A42E6B35942C9EDBD70E8851_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m2EBD3C15DE648D66433A31FE4920DC37489B42CF_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC2398ADC0E3E033F5B4CB3948471EFAB7B9D7E65(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C Queue_1_GetEnumerator_mF829BB0A9E3E7638819F5E2C719CD93190B8D636_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m358FABA369F64C3E5E2F22157945FF8028416F69_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m5988B881B65828FF54EB0BCD0CA8902B9A9AD6F2_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEAF34A494916892C5F9B963E2067E66C150ECF35((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC26DB3F3E75384839DE663AF87D7A985C4E8DC5C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 Queue_1_Dequeue_m76255C10FC612CCC9F06515685B5889642BED16A_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* V_1 = NULL;
	OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 Queue_1_Peek_m00C3E32FEC807051BB0521435F445E18AEBE075C_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* Queue_1_ToArray_mE21DE206DE7CF391D3B36BCCF471556173EE892F_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_1;
		L_1 = Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_3 = (OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)(OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_12 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_15 = __this->____array;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_16 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC2398ADC0E3E033F5B4CB3948471EFAB7B9D7E65_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* V_0 = NULL;
	Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* G_B6_0 = NULL;
	Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_1 = (OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)(OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_11 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_14 = __this->____array;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_15 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m52105EFAE17DA849203123AB1757B213B1BCCC7B_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mB41E7645B7F68667866EAF8EF3B6A47C8FD61395_gshared (Queue_1_tA7BCF327FAE9D0B75CB2DBD918CCD0DF0C8185EC* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m803C1F5D3BABBDF1AB5864AD6CA14BC6E23EC17F_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_0;
		L_0 = Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5AE388FF5AAAA4D57C8239D2D0AEDAEBE23BC234_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_6 = (OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)(OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m5C7CF2AD671F1FB1446DE1E6C308D09D43032071_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mFF039794BF894AB19D969E132325B369AA6CF640_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mA470BA809FFCBEA1535E33483C383479FBEA2933_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mC301A85A93CA7CEE15E09266D158C8906B7B799F_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m826B4D73913D7E0E5625C094A37F469FC1B7B1FA_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m20BA4DFE0C175FA3478E5D3DA4EBB14868E1CEC6_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mCDE40747018DCE83AA3BC3B9255BB1604245545A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 Queue_1_GetEnumerator_mE9EB6B58D64A7DB5DCCBE9351C1D15957617A955_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55033431804888032790FFA61614FA862CA3E31C_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m915D6DCE58A3CD9B4037B44D4556F9B5E0896BEF_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD0166D747F9CEDE1B5FA8B3F678D6116840AE85B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t18161A188FAF4ACE696765D3674C6028A821CF19 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F Queue_1_Dequeue_mB2F3B1F591C3BBD21A65DFC2F05DC9444B40CA7A_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* V_1 = NULL;
	OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F Queue_1_Peek_m0217AE68A9124DBA6FAF162F1ED7DBD47A82FC23_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* Queue_1_ToArray_m4F073E2E1F0367488B9210CB53FFE21D7CE5F756_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_1;
		L_1 = Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_3 = (OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)(OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_12 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_15 = __this->____array;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_16 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCDE40747018DCE83AA3BC3B9255BB1604245545A_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* V_0 = NULL;
	Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* G_B6_0 = NULL;
	Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_1 = (OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)(OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_11 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_14 = __this->____array;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_15 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m04F2D2B9A37E65A2CB33C61647F383BBBC1DBEBF_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4DC2B73F7E79D61D755E44C56AD27A6B89D69694_gshared (Queue_1_t45892AF3E4B7B0D47987BCFD4F83387EB331D06D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB474F9782A504EEDF5CAE85420EA2A9F8A94A5D6_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_0;
		L_0 = Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m38E821D25CFFA4E08AA62E9F54E8A440AB2841FC_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_6 = (OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)(OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA54E97F76B0B9321883FDD8A9D1F4279D6D1840D_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1372F21E9E7A331F513A2BBE38C4C460FCED62A9_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8B54B7FD083F8C2198D595FAECB49B3D13DE0A82_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mC467821C0335E70A72E4437B2A1E312E0FE6A80C_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8FEB7261F1E70D3253825928254653D72EBC2F38_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mE279907410B0B4CAE212502C948CDDB22BFF37CB_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mA04C4970EBE3C44C145A0A7DFFEE6CDE8C01738D(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 Queue_1_GetEnumerator_m3D1D9CD589CE3A9A1CF0A73023A7136B26A04CF6_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8ACDC25C727589F44137FD8036011D2648EA8976_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m3936E6E01745C50C0276BD2096E995784072FE73_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m84FC8FD01D4FFA0319546ECB57F2E98BE497A52C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t5504499ACB4331CE2B0E5963C162094C192289A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 Queue_1_Dequeue_m072FFAE3569E78BCFC7C3761BA7B7D907A57CFFD_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* V_1 = NULL;
	OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 Queue_1_Peek_m96D3A6E6B48A93612E876E382AABEABDAD119F5C_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* Queue_1_ToArray_mFA6DE3C292E61198D6DBA1CE3E6E1C2263CC409E_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_1;
		L_1 = Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_3 = (OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)(OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_12 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_15 = __this->____array;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_16 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mA04C4970EBE3C44C145A0A7DFFEE6CDE8C01738D_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* V_0 = NULL;
	Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* G_B6_0 = NULL;
	Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_1 = (OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)(OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_11 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_14 = __this->____array;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_15 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mED81090FD207D5972393ADDFE53FC5B76DB07055_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m80CFB0035C23F75069A43F9875F1E846FF62DF7F_gshared (Queue_1_t01934F7F0F2DE4D55DF850021E811B6D09A29E05* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m11214151BCB6003CCFD9B3B483320E40CFF33958_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_0;
		L_0 = Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5E8F9F6E23650AC564580475230EB30820F23B4B_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_6 = (OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)(OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mCCE1F2444FE45A400F5AF7EB69222DE76851BECD_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mBCB87E4AC38D0643EC1D3325C96BE3A21D9F61C7_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE3317BCEAAC76969DE76EC02EFC3FCE1A599AE20_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mD49C1AB087283D49F99EDC9B1B58237B43C18836_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mB0E02F298241FC55D28FC3AFCF11DCAB35C29A45_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m81DF19ABEAB62A28EA041DCFE789B1136BEEABB2_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m1ABAD77A5F3811492AC118763DCD299C1C955838(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A Queue_1_GetEnumerator_mBDC2AE9287D8E2BB5034F2B77AA82336131A6125_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9A2AFF553D30817B9B03ECCC9CF8B51151DCEB6D_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mDDA5BE462D2E5C036A15ADB1AE9B9D4022CBBE5D_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0062E9F5EEB8A0770DDA2F61A849B717CE9BFFF6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t49540E559C8CCBD778FDBA0C0234EC6C3A81C12A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B Queue_1_Dequeue_mEE84B6F420ABB10F92FC9F4E37E984F0ECBAD77B_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* V_1 = NULL;
	OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B Queue_1_Peek_mB5821DD2C4810DD403D1DB09C7CDEBB7B52C1BC9_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* Queue_1_ToArray_mF44417F9F84B5A588BE84223858D8A4D454C69FA_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_1;
		L_1 = Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_3 = (OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)(OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_12 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_15 = __this->____array;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_16 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1ABAD77A5F3811492AC118763DCD299C1C955838_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* V_0 = NULL;
	Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* G_B6_0 = NULL;
	Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_1 = (OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)(OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_11 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_14 = __this->____array;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_15 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0E7AD3ED804DF0985BE8CCEB77C8131F7B04E973_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2E4C5D236EA59439F3779E6105E908E27841264_gshared (Queue_1_t7C6D499176B633F814E3AB314F668EEFF5F2DDEF* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6831E8102D7B773C9C5F794446353245E47928E4_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_0;
		L_0 = Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m4BFCFD68402BEFB26DD517E7F545C38FECD33CFE_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_6 = (ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)(ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m8690FE9B776C361C5151D3D32A66BBB3D52798E6_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m6831A2E11249E0DD505EE6007525BDE360EF5EEF_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m5591545527C2E75C9A575F693C19ABF9BA148CAD_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m71003CE167995C3F0ACB5AA005448F49F0EAE38D_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m98558CE379E7C7F6ECE05264EE1B9FCA1DCFDBE5_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m61B5903C8197A8E0A6EED87008FC65358F50E352_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mFE94EB1806309A4E86534D08369631ECE5244848(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 Queue_1_GetEnumerator_m14558816947D9337F53145EC1F1C66629DA8CB7E_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC0E63E307BA20CD3FA5BE662928556FE8B1A931C_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA6780D0D8B7AC177599991D70078B104F17352FE_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m88E0878F3478FECF7B15BB7938C6796963090ECF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t50E7E8B9552E0276698748218168247CDA6DA1A8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 Queue_1_Dequeue_mD4A7B0903E96C0228E7DCB543EB1EC51AE44B769_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* V_1 = NULL;
	ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 Queue_1_Peek_m5B15B66CF8EF1B659BA62E141E2995573A13A720_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* Queue_1_ToArray_m2A6833C7781B7E6CFAEA751AD7F0646E797211F5_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_1;
		L_1 = Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_3 = (ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)(ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_12 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_15 = __this->____array;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_16 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mFE94EB1806309A4E86534D08369631ECE5244848_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* V_0 = NULL;
	Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* G_B6_0 = NULL;
	Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_1 = (ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)(ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_11 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_14 = __this->____array;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_15 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m34E79FC05C03582C2EFFB56400BA6811987B8196_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4DB292AEF39DDA85D7A520ACB2B1C616E9DA3D18_gshared (Queue_1_t1909BCE2BF98FB995C6BFF55F3428951532982A0* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0;
		L_0 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF5C2BF5A3985407B01FE4BF2710F746C987206F5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mB12CE14EB61C66D2D293AB230C704E0E98EAFA92_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m04D29851319CD6D4DAB5237DF8EC3230AED1F4CB_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m8E837CE2FDA767EF5EBAEC77647D2A031B581723_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m18C68C247A23383ACD5C5C1CC5019B2A91DA9F0B_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, bool ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		bool L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (bool)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 Queue_1_GetEnumerator_m2A0D11E6CE6745C8DC9CFC25896DD2DEA153E3E2_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEB5F33C0F22D52CD6FE392F1C1BBF390E03A3C46_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m152BA96A6D5C204280A7CE6A320A8B0601436D10_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	bool V_2 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		bool L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Peek_mE5657C08B172C19E88354345689C5A00952EA440_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		bool L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Queue_1_ToArray_mA6A6459F9CD38BEADC8EA8A32CA9BC0281EBDAD6_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = __this->____array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B6_0 = NULL;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1C6D335888FBF2EC65421D47EEE67CAC8D498913_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0;
		L_0 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6F75B38CDAF3DAFE933386F32A9A226939C9D65B_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE442C16C0D93D0DA9E9E22D06D274787BB19364C_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mC1A1218D170C71732335132BF285B7E4850D4BDE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mEC9C5E172A02C4AEB80962618B96C11D71E8DDF1_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1369C5316A92A273CF455A93B2C4B6C5519430BA_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7894AFF06FB237832EE4CD409D9A3FC01FAEE303_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4E3484A11DA06BE790F19AC5BAA741488CF3DFBF_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		Guid_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Guid_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 Queue_1_GetEnumerator_m58240FDDC3E87C9D63437F60DF4AE5B4EC4CCEC6_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8B29039B08FAEC3E376823665779F6A9B952847A_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mEEA83855C4A0EACEE09899C81C962EAB9FC36B4E_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Queue_1_Dequeue_m800C401EB7D30246FBEC930B640A78DBFB3290FB_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Guid_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Guid_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Queue_1_Peek_m090986F33DA324227CED6DB6C23476031BEEB119_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Guid_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Queue_1_ToArray_mA2599DF9D45500EB1AEFF3A873277BEE36620159_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1;
		L_1 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_12 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_15 = __this->____array;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_16 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_0 = NULL;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B6_0 = NULL;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_11 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_14 = __this->____array;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_15 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFBB78D8B30A0F7F62B7B13B48794314CF472D4D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m64927F70EEDD608787495C8CD045AB0538528178_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB126A5C4AEA0618F16C39571027DA9CD47379039_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m951B065722F6BAD8756DF930F0E77EFC01865B73_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 Queue_1_GetEnumerator_mC56A5519A861A13B2DFF0857D4908B7A495970D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00D02E02E64C0C3A402468A862ED63F52FC4360D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB64344DD889D2DA18EA20A979560574BBB7CCE0B_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m670D85E9DC1BD3A794F6006EE07A20E4AC33C08C_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Queue_1_ToArray_mCB86607434F2C40D8E444E595A9748C0E72255BA_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B6_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m60A167651813E16E347BB6F6326D15EEC2D7C3E9_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0;
		L_0 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98C020CB734DA837256F0BF71B12CB86A38403E3_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m606FA806D37C8A32C6A8CF96B04D6A5EBD46A53F_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m657E5EDE6D703717F454E58B3166FEB7A46AB6F7_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m6CA582B17EEEDB1A34BB946A8ADB399D63F15976_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m88088E5F25AC9DE4B68B702B31EE422120E833D6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mDA1322AE300B782C5205479714D64AF700E17EE6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m3E56A641964731223283A496BA994132F8E7D2E7_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int64_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int64_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int64_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 Queue_1_GetEnumerator_m897204CA04E7D77BAC5AA2383E355011B3FBB3A6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m020022486AE715DC27FD4BA3E99E0E1095369C7B_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mBA2082FC10C6F4A3F848D10DB6E6326490EC372E_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC0C523A80770B284D329CCF99486B88188E233A6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3A2BEE14D5FE0A114E84E54AF0950D383F54BA59 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Queue_1_Dequeue_m5BD792C6489FA537738671E14D26357DE3A186C1_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	int64_t V_2 = 0;
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Queue_1_Peek_mC9D7A3417E929FC0BBC0689B1F13382A1985EC12_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Queue_1_ToArray_m6F196F97AE3653B18403DD5398C4F8792CC81FFC_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Array_Empty_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4569050419CDB52F3B7303ED823142E9C0F12A6C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = __this->____array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5B33535B6D6A5692A29B49CC4D76FC22A0D3A7BB_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B6_0 = NULL;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = __this->____array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m261256FDA5B46BF37459649A341979B01EF829AF_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m490495991F81528A6F8CDBE72D6C7CF25EF218E6_gshared (Queue_1_t868713CFD8F1753EF129641B4EAEC12191C1F00F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8D87FB8870BC2E4C0B387F5D24F276F42AEBFC09_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0;
		L_0 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m7A2E8188FB21D9B6E7A81BEF583D4118103B4C3B_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m92B97824CA6DEABA681441DE446D1132185CA89D_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF3831ED19052049B51DFEB1605FC08481F460A99_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m29122F32695A1F0683401A3C5FB6A0148AA08FFB_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m7477241D27932594081D1743AF4A5529014D00A7_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mBEED4FD6EE0FD131EAF434055BADB12B53CD3BDA_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m737B7C20F873FE592A2B06AA74D1E09FE003F5D4_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, intptr_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mCF829028C6E50451432B17CB73C1E304F2D30D2A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		intptr_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (intptr_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C Queue_1_GetEnumerator_m4A3DE082FD8E1EF4432DE477498D548236DD5465_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAFEB8F2F02181E17B1256FB91867EF1A8FED7619_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD7D9EA3508B720026B6D0E89800AA4CC4FB12782_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8B7681403CEB3FB0E653F373A4F6FE96701521BC((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t522048E448FEAC63A0BC94EAB1574A070446A58C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Queue_1_Dequeue_m1D93725D90E5F5A75F901FD0B78F259011DC5148_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		intptr_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Queue_1_Peek_m04B3B06740DA22420C7C559A3BA0D8837C59AEE1_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		intptr_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Queue_1_ToArray_m7BA18B23B5D9A24B433D3FE0A2239FB478FFB0A2_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1;
		L_1 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_15 = __this->____array;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_16 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCF829028C6E50451432B17CB73C1E304F2D30D2A_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_0 = NULL;
	Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* G_B6_0 = NULL;
	Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_11 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_14 = __this->____array;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_15 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4A953901A586452A71CB274C56F2E2287B590CDA_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6CC19A3078FDE948198B8D82B63E9127A48DD4E6_gshared (Queue_1_tCDB43FBC14C8D0320685FBFB70DCF0F850D80A46* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m65412F74A4DE5C6DA1535E080CB9CAD2748DC04B_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0;
		L_0 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98722C43B633C81AA2CD0A702C5701AF1B8AAD46_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA169C0D025767536F39AA8566078224AFC27B0D6_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m76FDCF58D46DC1A6EF39452983B841CE5B6522E0_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m67ED59890D29357814FEF2202508A508F6F565DF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mB299B67924A84D46D4F9C75933B51F8C66D8ED25_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5F8E104F63F733938DE6E2EF6264392C1F8AD7FF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m231519D2D72DE9DE09CFA2C647A8202B6C822C9D_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 Queue_1_GetEnumerator_m2F5A9416761312E275123FA5ED5E5DC8B74764BD_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5C5C34E168F1114E4D68D9A79BE6F8388519154C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m89458DE8DBF69059F2FD6098F5D04358316B65E3_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Dequeue_m86FF00059068ADD8879AFAD576D8A676DA0C3DDC_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_1 = NULL;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Peek_m378FF8A44A937ADF61A0EF090C8CCBB7EBC483E1_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Queue_1_ToArray_m20AF66CD55943562DE1A3DCFB00860F56D19496C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1;
		L_1 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B6_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_11 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_14 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F2F10F939D04078D011752BA3FEFB86D658D793_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0;
		L_0 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF3CF3FAEB079855302E475A49CEEE333E21C3DAD_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m30D59F53639B7FF3678657C63D0B12F7148C673B_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mAD7C2360CEC0AE6A3186B368D29BAC2A20229925_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m443A495069FE49E8AA3800BD47DEF5F2663EB2B0_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m0597182AB0372D1CF6D2AFB93605048F60355D0E_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m46ED975B5C3765B87B0CEB2C891E462FDBFA91C5_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mA53241B877A400D032C4488776CF7C264FA2C458_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA37D160544C06A884B929716C584D345827D7F82 Queue_1_GetEnumerator_m3EED06CB1D51AF328036F21B798A4EEFFF6D4D70_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0FB520F274B17CF126395A59B4D778E350351AE2_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m301DB6D58060A3ECE16C07F5F914780A0D275060_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Dequeue_m0B6C3646FE49D7A6FA9CAE5EC1E0659D2142965D_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_1 = NULL;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Peek_mFE28DF19F37FC57A1506768905A255556BD5D05F_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Queue_1_ToArray_m3192A80A808ED4CB42DFA1EE350571632F8C6C17_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1;
		L_1 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B6_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_11 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_14 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B1A01E37AF78AC402E6D909C972C725310C37B1_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0;
		L_0 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m604B474F22E225066E4B20D4978D379073B31832_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m93EFA300D31BDFE65CA5692E859D9918F45CE51D_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mD96A41ADE9C53A163A66E01A74B17B0867CF285C_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE9E3E861EB9A7CB5198D2207752A588E4B0E929C_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1262DAC5C511E921516C7944D4ACE10A1CABD3E3_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m41933D3BB808C26663FD89F827B9169DE26CBD1F_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7E14B3B59FE321E1E42FE89D0BC66635A948F123_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 Queue_1_GetEnumerator_m609EBA9693AAB1495DC3C2FB14089D93EC15474B_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EAD05BF1EB86B70F4F35A5C8D34E176F2E5AE64_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFA64E96618CD1B89900CDBB1FB3A1AB8EF8738A0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Dequeue_m3A29168D768746E5F6477A30C49A9100AC12EC75_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_1 = NULL;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Peek_m98DEC1D002C6536D1251F4090205A68BF5DD6A19_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Queue_1_ToArray_mAC64FD3C52A9EBF8E392EB8AE9D57AF0B03B47FD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1;
		L_1 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B6_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_11 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_14 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m053714A9E6478AFE7CD493D962FCBB5E58A24A86_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m10E1293E4A4BE4403DA68CFCAB5494FED197110C_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
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
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7EC23B77294ABA74E78B728FBA0C420C959CE4A0_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
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
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RuntimeObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4DF91611354D7FE1796A09DCB101AF5E70805793_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m36EBE55DAAC29B841CC02D968AC0E41A5D64DADB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B6_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* Controller_get_Children_mF2E5D2651D061A486CB8C6C75ABFD8F3E28D570C_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF69BC40AD4F6D8D2D7B94894BC2B913F64D28DBD* L_0 = __this->____children;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Controller_get_RectTransform_mBBC871C7A4C81DA04D35132421487DAAA892BB6C_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) 
{
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___U3CRectTransformU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* Controller_get_LayoutStyle_m1D58B0FBB0CBF0F04B67A746336BD1F309E49405_inline (Controller_tD1D864C815FC4FCDC85F17939716E36A88B39386* __this, const RuntimeMethod* method) 
{
	{
		LayoutStyle_t051DD646A1EC305B160B3C7F8ACB75795A57F177* L_0 = __this->____layoutStyle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyController_1_set_Target_mF5EE24279BDFECCA5095043393760AA5ABB2C74D_gshared_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProxyController_1_get_Target_mDEB57D2EA165195A74C99A3ABFB0ABF4265B5FCD_gshared_inline (ProxyController_1_t9D95B3757E5A4E271BE96F94E513D1026B11E01B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTargetU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProxyFlex_2_set_Dirty_mF7C08236B0490A93A382C2D6D504B8F1CF7A7985_gshared_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CDirtyU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyFlex_2_get_Dirty_m338DE268E44D8B4751EFFDE31FB1E62970152322_gshared_inline (ProxyFlex_2_tD878579AD8618DD877E6A5822C0B719BFF3BD13E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CDirtyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* Array_Empty_TisOVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7_mDB87A360806210C3C8C37A3E2B34DF6C0465A4A9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRResult_2U5BU5D_t6485764E9FC5558B1184C4B6EFB0548975012A78* L_0 = ((EmptyArray_1_t92AB15D84E13F4CEE56DD27BD452ED9C7DDF6A20_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* Array_Empty_TisOVRTask_1_t0886E5D46C79EB24804DFE785921AC9A00FED515_m16E8B649F333F3F8CF438175C948A3300643B0AD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_t369B8C04A763B9B31FE12DF076C10C96F9D4B1DD* L_0 = ((EmptyArray_1_t14B3B8C7B0C3119CAF041E52F63B8DAC33E54C9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* Array_Empty_TisOVRTask_1_t1EDA6C082F76BEE1245BA20E8F6B2C4F5DB80D31_mBBC61FBC2D0CC5E25DBEC0A37CF27B84DE029820_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_t9321EDD28A181C595C1303448550EF23602A38B2* L_0 = ((EmptyArray_1_t0A9748A511935707A8D2E56A879B85BB065DD0B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* Array_Empty_TisOVRTask_1_tC3C8FFB8BFF6F7B87C37F1EA01927656DC1623DB_mE3E45CBA02AC7C391F299383C4FAACC5CCABAA12_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_tFE78D5EE6CA00D1175118F3B2948E07DB42C4BBB* L_0 = ((EmptyArray_1_t06680E6528D99817AC66CF3BE48705828B98D7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* Array_Empty_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m3E27C9A6EEDC44BF3F4F7A8BFAD01C384F4A5302_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_0 = ((EmptyArray_1_t395DA88F3CA7150E2ECF9C03F4CEE0FE287FE190_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* Array_Empty_TisOVRTask_1_t7D6DD029D05718977D4569BA1CCC7E341B848C29_mF0AF48EB095A967AD028A1138CA2062FF9390DA4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_t27A97D9A899B09F7275E527ACF3855D78C81FD2D* L_0 = ((EmptyArray_1_t253B6D9474560F2BAB95F2532B8568F840B2C2BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* Array_Empty_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m21228AF12A2D697058B3C7FAFCA932BFC17026C3_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_0 = ((EmptyArray_1_t21460394D7149559800E9046EF95623AEF636AE8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* Array_Empty_TisOVRTask_1_t003E5D0FEDE751D213594F21DBEB8E3169305FE9_m1C1CD88036ABDCA4C6C54D9355981FE2AE7DB07F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_t06CB7A63026E836BBFF5E12E12A0477CD6428469* L_0 = ((EmptyArray_1_tA0281C748E43D136B59AC6E87B04F112F6124B3A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* Array_Empty_TisOVRTask_1_t3D3407ACB2498675C0BA86EA95A0555717E8569B_m8FEE0932038483695ED26D29B5F9D1906E9C328F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRTask_1U5BU5D_t53E4B19DEFE5018E887E05BA43D8F1A996A8A305* L_0 = ((EmptyArray_1_tF7C58D13043F6170E9639EF4028E34B021E3C22C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* Array_Empty_TisValueTuple_2_tC9B4B02DAF93E68EEE7C0B473E4E92E07AAAA2C3_m630ED8FEFF1A4898B1A8ECFFA79D533FF4194D3B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ValueTuple_2U5BU5D_t9B0F9839B0AF63FFEFD44E2F443B1898531A6518* L_0 = ((EmptyArray_1_t7C1DF3C46D6A3160B8727C4B673CD69B00774606_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0 = ((EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0 = ((EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0 = ((EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}

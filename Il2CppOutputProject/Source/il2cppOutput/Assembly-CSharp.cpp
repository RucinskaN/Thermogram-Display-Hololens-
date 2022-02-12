#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Double[0...,0...]
struct DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Drawing.Bitmap
struct Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Windows.Storage.Pickers.FileOpenPicker
struct FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// IActivationFactory
struct Il2CppIActivationFactory;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Windows.Storage.Pickers.IFileOpenPickerStatics
struct IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1;
// Windows.Storage.Pickers.IFileOpenPickerStatics2
struct IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
// Windows.Storage.IStorageFileStatics2
struct IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
// System.Drawing.Image
struct Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA;
// System.Drawing.Imaging.ImageFormat
struct ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// allFrames
struct allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC;
// backButton
struct backButton_t4288E1E636F463612A394509731FFF600189D0B7;
// createTexture
struct createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717;
// fileManager
struct fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1;
// infoButton
struct infoButton_tBE13D404DDA090E30BD89398A18F95EF5B27217C;
// ironColormap
struct ironColormap_t531053161E288F47B725085D597D8756D5DA6D38;
// loadImg
struct loadImg_t405FC0C77C84EA5EF580111225A05D25C0A06D0F;
// nextFrame
struct nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7;
// previousFrame
struct previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E;
// readSeq
struct readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6;
// seqFileManager
struct seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674;
// spectrumColormap
struct spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// allFrames/<startPlay>d__4
struct U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985;
// fileManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264;
// fileManager/<LoadImage>d__3
struct U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276;
// seqFileManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65;

IL2CPP_EXTERN_C RuntimeClass* AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00641DF40236E6544902EF8A59BE90ED4051B888;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D0A9EF07955EDE166FE0D4DB15C7D6F6F6F6268;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11;
IL2CPP_EXTERN_C String_t* _stringLiteral6AF4815E826FA634347BE75DBC3BC09F7AF34928;
IL2CPP_EXTERN_C String_t* _stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED;
IL2CPP_EXTERN_C String_t* _stringLiteral8F842A8F619989EBF3051D1110532603B715F045;
IL2CPP_EXTERN_C String_t* _stringLiteral9B37489359EFEFC3A2EE4A6D6FDACADD9DA8BE7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6BEFDFC14C5667D1CD7F99356B252AFDE3FEDF;
IL2CPP_EXTERN_C String_t* _stringLiteralB53D88EDE6FB9D285C0148CB76E088F56687EEE5;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD71CE2496BE0BEBEB5D4E99DD2C704A0AFAB36;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605;
IL2CPP_EXTERN_C String_t* _stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060;
IL2CPP_EXTERN_C String_t* _stringLiteralF276BC8C63572622EF0EFCCA09ACBEA7B38B2B16;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mCEA340209DB3D66F72A69CC74643E9A2643CB974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m5773B48D5D2BA9C470F21D78E04D8E5DE5EA4922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__3_System_Collections_IEnumerator_Reset_mE0785474666BAC0CC8F1DDB7976EE3C7A142EAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3COpenFileBrowserU3Eb__1_m8DCC5CEE05AC5A6BE2B66CC90B7EE94554094015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenFileBrowserU3Eb__1_mA19057D73C61FBD7255530399F0593DBA745D1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CstartPlayU3Ed__4_System_Collections_IEnumerator_Reset_m34ACAF49DCCA72F46486C4AF4CE9F9AEE26E83B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fileManager_U3COpenFileBrowserU3Eb__2_0_m934F1DAD5F010BAF86E2B244EE748EDD749B44AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* seqFileManager_U3COpenFileBrowserU3Eb__5_0_m1140B6A5CBE636509C67EDDB432D3B2C3B027599_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IFileOpenPicker_t65BF2086B99AE9D3F78F6AFBB8707FA32C6F3DB2;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};

// Windows.Storage.Pickers.IFileOpenPickerStatics
struct NOVTABLE IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFileOpenPickerStatics_U24__Stripped0_ResumePickSingleFileAsync_mC3A118148E31562F02D07C9E8281FFD8A63FA6D7() = 0;
};
// Windows.Storage.Pickers.IFileOpenPickerStatics2
struct NOVTABLE IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFileOpenPickerStatics2_U24__Stripped0_CreateForUser_mF111B85E12398E79A3E4D6372BB74C010989CA20() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_GetFileFromPathAsync_mA5DD9BB3BEE88251EA4F76F7D065EA8AA97842F0(Il2CppHString ___path0, IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromApplicationUriAsync_mA130F9405BF6DFAFE3A7A5655D0E448B565AAC25() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_CreateStreamedFileAsync_mC210197BD102173EEBF26FBC1B487806933E2487() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_ReplaceWithStreamedFileAsync_mC3906DC246F9F645E7AEE5B1B35817A006FA5A8D() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_CreateStreamedFileFromUriAsync_m5A19ECE1A7FC0A0519E0593D8A5CAAC590909285() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_ReplaceWithStreamedFileFromUriAsync_mD500AAFE3DE80D11B598BAAAB9FA704A5219C558() = 0;
};
// Windows.Storage.IStorageFileStatics2
struct NOVTABLE IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics2_U24__Stripped0_GetFileFromPathForUserAsync_m5A8E30130D34379E1839986B2C9B36B50A4A3A88() = 0;
};

// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// System.__Il2CppComObject


// allFrames/<startPlay>d__4
struct U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985  : public RuntimeObject
{
public:
	// System.Int32 allFrames/<startPlay>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object allFrames/<startPlay>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// allFrames allFrames/<startPlay>d__4::<>4__this
	allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * ___U3CU3E4__this_2;
	// System.Int32 allFrames/<startPlay>d__4::<flagBuff>5__2
	int32_t ___U3CflagBuffU3E5__2_3;
	// System.String allFrames/<startPlay>d__4::<path>5__3
	String_t* ___U3CpathU3E5__3_4;
	// System.Int32 allFrames/<startPlay>d__4::<l_klatek>5__4
	int32_t ___U3Cl_klatekU3E5__4_5;
	// System.Int32 allFrames/<startPlay>d__4::<klatka>5__5
	int32_t ___U3CklatkaU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CU3E4__this_2)); }
	inline allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CflagBuffU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CflagBuffU3E5__2_3)); }
	inline int32_t get_U3CflagBuffU3E5__2_3() const { return ___U3CflagBuffU3E5__2_3; }
	inline int32_t* get_address_of_U3CflagBuffU3E5__2_3() { return &___U3CflagBuffU3E5__2_3; }
	inline void set_U3CflagBuffU3E5__2_3(int32_t value)
	{
		___U3CflagBuffU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CpathU3E5__3_4)); }
	inline String_t* get_U3CpathU3E5__3_4() const { return ___U3CpathU3E5__3_4; }
	inline String_t** get_address_of_U3CpathU3E5__3_4() { return &___U3CpathU3E5__3_4; }
	inline void set_U3CpathU3E5__3_4(String_t* value)
	{
		___U3CpathU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpathU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cl_klatekU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3Cl_klatekU3E5__4_5)); }
	inline int32_t get_U3Cl_klatekU3E5__4_5() const { return ___U3Cl_klatekU3E5__4_5; }
	inline int32_t* get_address_of_U3Cl_klatekU3E5__4_5() { return &___U3Cl_klatekU3E5__4_5; }
	inline void set_U3Cl_klatekU3E5__4_5(int32_t value)
	{
		___U3Cl_klatekU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CklatkaU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985, ___U3CklatkaU3E5__5_6)); }
	inline int32_t get_U3CklatkaU3E5__5_6() const { return ___U3CklatkaU3E5__5_6; }
	inline int32_t* get_address_of_U3CklatkaU3E5__5_6() { return &___U3CklatkaU3E5__5_6; }
	inline void set_U3CklatkaU3E5__5_6(int32_t value)
	{
		___U3CklatkaU3E5__5_6 = value;
	}
};


// fileManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264  : public RuntimeObject
{
public:
	// Windows.Storage.StorageFile fileManager/<>c__DisplayClass2_0::file
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___file_0;
	// fileManager fileManager/<>c__DisplayClass2_0::<>4__this
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_file_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264, ___file_0)); }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * get_file_0() const { return ___file_0; }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF ** get_address_of_file_0() { return &___file_0; }
	inline void set_file_0(StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * value)
	{
		___file_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264, ___U3CU3E4__this_1)); }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// fileManager/<LoadImage>d__3
struct U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276  : public RuntimeObject
{
public:
	// System.Int32 fileManager/<LoadImage>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object fileManager/<LoadImage>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String fileManager/<LoadImage>d__3::path
	String_t* ___path_2;
	// fileManager fileManager/<LoadImage>d__3::<>4__this
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276, ___U3CU3E4__this_3)); }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// seqFileManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65  : public RuntimeObject
{
public:
	// Windows.Storage.StorageFile seqFileManager/<>c__DisplayClass5_0::file
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___file_0;
	// seqFileManager seqFileManager/<>c__DisplayClass5_0::<>4__this
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_file_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65, ___file_0)); }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * get_file_0() const { return ___file_0; }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF ** get_address_of_file_0() { return &___file_0; }
	inline void set_file_0(StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * value)
	{
		___file_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65, ___U3CU3E4__this_1)); }
	inline seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>
struct TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531, ___m_task_0)); }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Drawing.Color
struct Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E 
{
public:
	// System.Int64 System.Drawing.Color::value
	int64_t ___value_0;
	// System.Int16 System.Drawing.Color::state
	int16_t ___state_1;
	// System.Int16 System.Drawing.Color::knownColor
	int16_t ___knownColor_2;
	// System.String System.Drawing.Color::name
	String_t* ___name_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E, ___state_1)); }
	inline int16_t get_state_1() const { return ___state_1; }
	inline int16_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int16_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_knownColor_2() { return static_cast<int32_t>(offsetof(Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E, ___knownColor_2)); }
	inline int16_t get_knownColor_2() const { return ___knownColor_2; }
	inline int16_t* get_address_of_knownColor_2() { return &___knownColor_2; }
	inline void set_knownColor_2(int16_t value)
	{
		___knownColor_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Drawing.Color
struct Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E_marshaled_pinvoke
{
	int64_t ___value_0;
	int16_t ___state_1;
	int16_t ___knownColor_2;
	char* ___name_3;
};
// Native definition for COM marshalling of System.Drawing.Color
struct Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E_marshaled_com
{
	int64_t ___value_0;
	int16_t ___state_1;
	int16_t ___knownColor_2;
	Il2CppChar* ___name_3;
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// Windows.Storage.Pickers.FileOpenPicker
struct FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF  : public Il2CppComObject
{
public:

public:
};

struct FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Pickers.IFileOpenPickerStatics2
	IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D* ____ifileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D;
	// Cached pointer to Windows.Storage.Pickers.IFileOpenPickerStatics
	IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1* ____ifileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Pickers.FileOpenPicker"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D* get_____ifileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D()
	{
		IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D* returnValue = ____ifileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ifileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ifileOpenPickerStatics2_tB41628605B2D494498171A761BEFD15DD2B82A4D;
			}
		}
		return returnValue;
	}

	inline IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1* get_____ifileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1()
	{
		IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1* returnValue = ____ifileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ifileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ifileOpenPickerStatics_tF278FC758017A6E40CAC546589FC8BCDAF5ED5B1;
			}
		}
		return returnValue;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF  : public Il2CppComObject
{
public:

public:
};

struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics2
	IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* get_____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314()
	{
		IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* get_____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0()
	{
		IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
			}
		}
		return returnValue;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
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


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// System.Exception
struct Exception_t  : public RuntimeObject
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Drawing.Image
struct Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Drawing.Image::nativeObject
	intptr_t ___nativeObject_1;
	// System.IO.Stream System.Drawing.Image::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_2;

public:
	inline static int32_t get_offset_of_nativeObject_1() { return static_cast<int32_t>(offsetof(Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA, ___nativeObject_1)); }
	inline intptr_t get_nativeObject_1() const { return ___nativeObject_1; }
	inline intptr_t* get_address_of_nativeObject_1() { return &___nativeObject_1; }
	inline void set_nativeObject_1(intptr_t value)
	{
		___nativeObject_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA, ___stream_2)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_2() const { return ___stream_2; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}
};


// System.Drawing.Imaging.ImageFormat
struct ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726  : public RuntimeObject
{
public:
	// System.Guid System.Drawing.Imaging.ImageFormat::guid
	Guid_t  ___guid_0;
	// System.String System.Drawing.Imaging.ImageFormat::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};

struct ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_StaticFields
{
public:
	// System.Object System.Drawing.Imaging.ImageFormat::locker
	RuntimeObject * ___locker_2;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::PngImageFormat
	ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * ___PngImageFormat_3;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::MemoryBmpImageFormat
	ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * ___MemoryBmpImageFormat_4;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::IconImageFormat
	ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * ___IconImageFormat_5;

public:
	inline static int32_t get_offset_of_locker_2() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_StaticFields, ___locker_2)); }
	inline RuntimeObject * get_locker_2() const { return ___locker_2; }
	inline RuntimeObject ** get_address_of_locker_2() { return &___locker_2; }
	inline void set_locker_2(RuntimeObject * value)
	{
		___locker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_2), (void*)value);
	}

	inline static int32_t get_offset_of_PngImageFormat_3() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_StaticFields, ___PngImageFormat_3)); }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * get_PngImageFormat_3() const { return ___PngImageFormat_3; }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 ** get_address_of_PngImageFormat_3() { return &___PngImageFormat_3; }
	inline void set_PngImageFormat_3(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * value)
	{
		___PngImageFormat_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PngImageFormat_3), (void*)value);
	}

	inline static int32_t get_offset_of_MemoryBmpImageFormat_4() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_StaticFields, ___MemoryBmpImageFormat_4)); }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * get_MemoryBmpImageFormat_4() const { return ___MemoryBmpImageFormat_4; }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 ** get_address_of_MemoryBmpImageFormat_4() { return &___MemoryBmpImageFormat_4; }
	inline void set_MemoryBmpImageFormat_4(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * value)
	{
		___MemoryBmpImageFormat_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemoryBmpImageFormat_4), (void*)value);
	}

	inline static int32_t get_offset_of_IconImageFormat_5() { return static_cast<int32_t>(offsetof(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_StaticFields, ___IconImageFormat_5)); }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * get_IconImageFormat_5() const { return ___IconImageFormat_5; }
	inline ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 ** get_address_of_IconImageFormat_5() { return &___IconImageFormat_5; }
	inline void set_IconImageFormat_5(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * value)
	{
		___IconImageFormat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IconImageFormat_5), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.Drawing.Bitmap
struct Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95  : public Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// fileManager/<<OpenFileBrowser>b__2_0>d
struct U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B 
{
public:
	// System.Int32 fileManager/<<OpenFileBrowser>b__2_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder fileManager/<<OpenFileBrowser>b__2_0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// fileManager fileManager/<<OpenFileBrowser>b__2_0>d::<>4__this
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * ___U3CU3E4__this_2;
	// fileManager/<>c__DisplayClass2_0 fileManager/<<OpenFileBrowser>b__2_0>d::<>8__1
	U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * ___U3CU3E8__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> fileManager/<<OpenFileBrowser>b__2_0>d::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B, ___U3CU3E4__this_2)); }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// seqFileManager/<<OpenFileBrowser>b__5_0>d
struct U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA 
{
public:
	// System.Int32 seqFileManager/<<OpenFileBrowser>b__5_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder seqFileManager/<<OpenFileBrowser>b__5_0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// seqFileManager seqFileManager/<<OpenFileBrowser>b__5_0>d::<>4__this
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * ___U3CU3E4__this_2;
	// seqFileManager/<>c__DisplayClass5_0 seqFileManager/<<OpenFileBrowser>b__5_0>d::<>8__1
	U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * ___U3CU3E8__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> seqFileManager/<<OpenFileBrowser>b__5_0>d::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA, ___U3CU3E4__this_2)); }
	inline seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// allFrames
struct allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// readSeq allFrames::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_4;
	// spectrumColormap allFrames::spectrumColor
	spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * ___spectrumColor_5;
	// ironColormap allFrames::ironColor
	ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * ___ironColor_6;

public:
	inline static int32_t get_offset_of_readS_4() { return static_cast<int32_t>(offsetof(allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC, ___readS_4)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_4() const { return ___readS_4; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_4() { return &___readS_4; }
	inline void set_readS_4(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_4), (void*)value);
	}

	inline static int32_t get_offset_of_spectrumColor_5() { return static_cast<int32_t>(offsetof(allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC, ___spectrumColor_5)); }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * get_spectrumColor_5() const { return ___spectrumColor_5; }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 ** get_address_of_spectrumColor_5() { return &___spectrumColor_5; }
	inline void set_spectrumColor_5(spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * value)
	{
		___spectrumColor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spectrumColor_5), (void*)value);
	}

	inline static int32_t get_offset_of_ironColor_6() { return static_cast<int32_t>(offsetof(allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC, ___ironColor_6)); }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * get_ironColor_6() const { return ___ironColor_6; }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 ** get_address_of_ironColor_6() { return &___ironColor_6; }
	inline void set_ironColor_6(ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * value)
	{
		___ironColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ironColor_6), (void*)value);
	}
};


// backButton
struct backButton_t4288E1E636F463612A394509731FFF600189D0B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// createTexture
struct createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage createTexture::rawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___rawImage_4;

public:
	inline static int32_t get_offset_of_rawImage_4() { return static_cast<int32_t>(offsetof(createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717, ___rawImage_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_rawImage_4() const { return ___rawImage_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_rawImage_4() { return &___rawImage_4; }
	inline void set_rawImage_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___rawImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImage_4), (void*)value);
	}
};


// fileManager
struct fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage fileManager::rawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___rawImage_4;
	// System.String fileManager::path
	String_t* ___path_5;

public:
	inline static int32_t get_offset_of_rawImage_4() { return static_cast<int32_t>(offsetof(fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1, ___rawImage_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_rawImage_4() const { return ___rawImage_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_rawImage_4() { return &___rawImage_4; }
	inline void set_rawImage_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___rawImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_5), (void*)value);
	}
};


// infoButton
struct infoButton_tBE13D404DDA090E30BD89398A18F95EF5B27217C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ironColormap
struct ironColormap_t531053161E288F47B725085D597D8756D5DA6D38  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// readSeq ironColormap::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_4;
	// createTexture ironColormap::createTex
	createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * ___createTex_5;

public:
	inline static int32_t get_offset_of_readS_4() { return static_cast<int32_t>(offsetof(ironColormap_t531053161E288F47B725085D597D8756D5DA6D38, ___readS_4)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_4() const { return ___readS_4; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_4() { return &___readS_4; }
	inline void set_readS_4(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_4), (void*)value);
	}

	inline static int32_t get_offset_of_createTex_5() { return static_cast<int32_t>(offsetof(ironColormap_t531053161E288F47B725085D597D8756D5DA6D38, ___createTex_5)); }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * get_createTex_5() const { return ___createTex_5; }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 ** get_address_of_createTex_5() { return &___createTex_5; }
	inline void set_createTex_5(createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * value)
	{
		___createTex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createTex_5), (void*)value);
	}
};


// loadImg
struct loadImg_t405FC0C77C84EA5EF580111225A05D25C0A06D0F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage loadImg::rawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___rawImage_4;

public:
	inline static int32_t get_offset_of_rawImage_4() { return static_cast<int32_t>(offsetof(loadImg_t405FC0C77C84EA5EF580111225A05D25C0A06D0F, ___rawImage_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_rawImage_4() const { return ___rawImage_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_rawImage_4() { return &___rawImage_4; }
	inline void set_rawImage_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___rawImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImage_4), (void*)value);
	}
};


// nextFrame
struct nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// readSeq nextFrame::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_4;
	// spectrumColormap nextFrame::spectrumColor
	spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * ___spectrumColor_5;
	// ironColormap nextFrame::ironColor
	ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * ___ironColor_6;

public:
	inline static int32_t get_offset_of_readS_4() { return static_cast<int32_t>(offsetof(nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7, ___readS_4)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_4() const { return ___readS_4; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_4() { return &___readS_4; }
	inline void set_readS_4(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_4), (void*)value);
	}

	inline static int32_t get_offset_of_spectrumColor_5() { return static_cast<int32_t>(offsetof(nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7, ___spectrumColor_5)); }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * get_spectrumColor_5() const { return ___spectrumColor_5; }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 ** get_address_of_spectrumColor_5() { return &___spectrumColor_5; }
	inline void set_spectrumColor_5(spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * value)
	{
		___spectrumColor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spectrumColor_5), (void*)value);
	}

	inline static int32_t get_offset_of_ironColor_6() { return static_cast<int32_t>(offsetof(nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7, ___ironColor_6)); }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * get_ironColor_6() const { return ___ironColor_6; }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 ** get_address_of_ironColor_6() { return &___ironColor_6; }
	inline void set_ironColor_6(ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * value)
	{
		___ironColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ironColor_6), (void*)value);
	}
};


// previousFrame
struct previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// readSeq previousFrame::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_4;
	// spectrumColormap previousFrame::spectrumColor
	spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * ___spectrumColor_5;
	// ironColormap previousFrame::ironColor
	ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * ___ironColor_6;

public:
	inline static int32_t get_offset_of_readS_4() { return static_cast<int32_t>(offsetof(previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E, ___readS_4)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_4() const { return ___readS_4; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_4() { return &___readS_4; }
	inline void set_readS_4(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_4), (void*)value);
	}

	inline static int32_t get_offset_of_spectrumColor_5() { return static_cast<int32_t>(offsetof(previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E, ___spectrumColor_5)); }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * get_spectrumColor_5() const { return ___spectrumColor_5; }
	inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 ** get_address_of_spectrumColor_5() { return &___spectrumColor_5; }
	inline void set_spectrumColor_5(spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * value)
	{
		___spectrumColor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spectrumColor_5), (void*)value);
	}

	inline static int32_t get_offset_of_ironColor_6() { return static_cast<int32_t>(offsetof(previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E, ___ironColor_6)); }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * get_ironColor_6() const { return ___ironColor_6; }
	inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 ** get_address_of_ironColor_6() { return &___ironColor_6; }
	inline void set_ironColor_6(ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * value)
	{
		___ironColor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ironColor_6), (void*)value);
	}
};


// readSeq
struct readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text readSeq::text_Lklatek
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_Lklatek_4;
	// UnityEngine.UI.Text readSeq::text_klatka
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_klatka_5;
	// System.Int32[0...,0...] readSeq::macierzGreyInt
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierzGreyInt_6;
	// System.String readSeq::pathBuff
	String_t* ___pathBuff_7;
	// System.Int32 readSeq::nr_klatkiBuff
	int32_t ___nr_klatkiBuff_8;
	// System.Int32 readSeq::l_klatek
	int32_t ___l_klatek_9;
	// System.Int32 readSeq::flag
	int32_t ___flag_10;
	// createTexture readSeq::createTex
	createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * ___createTex_11;

public:
	inline static int32_t get_offset_of_text_Lklatek_4() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___text_Lklatek_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_Lklatek_4() const { return ___text_Lklatek_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_Lklatek_4() { return &___text_Lklatek_4; }
	inline void set_text_Lklatek_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_Lklatek_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_Lklatek_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_klatka_5() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___text_klatka_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_klatka_5() const { return ___text_klatka_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_klatka_5() { return &___text_klatka_5; }
	inline void set_text_klatka_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_klatka_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_klatka_5), (void*)value);
	}

	inline static int32_t get_offset_of_macierzGreyInt_6() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___macierzGreyInt_6)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_macierzGreyInt_6() const { return ___macierzGreyInt_6; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_macierzGreyInt_6() { return &___macierzGreyInt_6; }
	inline void set_macierzGreyInt_6(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___macierzGreyInt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___macierzGreyInt_6), (void*)value);
	}

	inline static int32_t get_offset_of_pathBuff_7() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___pathBuff_7)); }
	inline String_t* get_pathBuff_7() const { return ___pathBuff_7; }
	inline String_t** get_address_of_pathBuff_7() { return &___pathBuff_7; }
	inline void set_pathBuff_7(String_t* value)
	{
		___pathBuff_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathBuff_7), (void*)value);
	}

	inline static int32_t get_offset_of_nr_klatkiBuff_8() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___nr_klatkiBuff_8)); }
	inline int32_t get_nr_klatkiBuff_8() const { return ___nr_klatkiBuff_8; }
	inline int32_t* get_address_of_nr_klatkiBuff_8() { return &___nr_klatkiBuff_8; }
	inline void set_nr_klatkiBuff_8(int32_t value)
	{
		___nr_klatkiBuff_8 = value;
	}

	inline static int32_t get_offset_of_l_klatek_9() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___l_klatek_9)); }
	inline int32_t get_l_klatek_9() const { return ___l_klatek_9; }
	inline int32_t* get_address_of_l_klatek_9() { return &___l_klatek_9; }
	inline void set_l_klatek_9(int32_t value)
	{
		___l_klatek_9 = value;
	}

	inline static int32_t get_offset_of_flag_10() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___flag_10)); }
	inline int32_t get_flag_10() const { return ___flag_10; }
	inline int32_t* get_address_of_flag_10() { return &___flag_10; }
	inline void set_flag_10(int32_t value)
	{
		___flag_10 = value;
	}

	inline static int32_t get_offset_of_createTex_11() { return static_cast<int32_t>(offsetof(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6, ___createTex_11)); }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * get_createTex_11() const { return ___createTex_11; }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 ** get_address_of_createTex_11() { return &___createTex_11; }
	inline void set_createTex_11(createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * value)
	{
		___createTex_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createTex_11), (void*)value);
	}
};


// seqFileManager
struct seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String seqFileManager::path
	String_t* ___path_4;
	// System.Int32 seqFileManager::nr_klatki
	int32_t ___nr_klatki_5;
	// UnityEngine.UI.Text seqFileManager::textLoad
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textLoad_6;
	// UnityEngine.UI.Text seqFileManager::textPath
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPath_7;
	// readSeq seqFileManager::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_8;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_nr_klatki_5() { return static_cast<int32_t>(offsetof(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674, ___nr_klatki_5)); }
	inline int32_t get_nr_klatki_5() const { return ___nr_klatki_5; }
	inline int32_t* get_address_of_nr_klatki_5() { return &___nr_klatki_5; }
	inline void set_nr_klatki_5(int32_t value)
	{
		___nr_klatki_5 = value;
	}

	inline static int32_t get_offset_of_textLoad_6() { return static_cast<int32_t>(offsetof(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674, ___textLoad_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textLoad_6() const { return ___textLoad_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textLoad_6() { return &___textLoad_6; }
	inline void set_textLoad_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textLoad_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textLoad_6), (void*)value);
	}

	inline static int32_t get_offset_of_textPath_7() { return static_cast<int32_t>(offsetof(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674, ___textPath_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPath_7() const { return ___textPath_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPath_7() { return &___textPath_7; }
	inline void set_textPath_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPath_7), (void*)value);
	}

	inline static int32_t get_offset_of_readS_8() { return static_cast<int32_t>(offsetof(seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674, ___readS_8)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_8() const { return ___readS_8; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_8() { return &___readS_8; }
	inline void set_readS_8(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_8), (void*)value);
	}
};


// spectrumColormap
struct spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// readSeq spectrumColormap::readS
	readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * ___readS_4;
	// createTexture spectrumColormap::createTex
	createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * ___createTex_5;

public:
	inline static int32_t get_offset_of_readS_4() { return static_cast<int32_t>(offsetof(spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3, ___readS_4)); }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * get_readS_4() const { return ___readS_4; }
	inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 ** get_address_of_readS_4() { return &___readS_4; }
	inline void set_readS_4(readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * value)
	{
		___readS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readS_4), (void*)value);
	}

	inline static int32_t get_offset_of_createTex_5() { return static_cast<int32_t>(offsetof(spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3, ___createTex_5)); }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * get_createTex_5() const { return ___createTex_5; }
	inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 ** get_address_of_createTex_5() { return &___createTex_5; }
	inline void set_createTex_5(createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * value)
	{
		___createTex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createTex_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Double[0...,0...]
struct DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<fileManager/<<OpenFileBrowser>b__2_0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<seqFileManager/<<OpenFileBrowser>b__5_0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,fileManager/<<OpenFileBrowser>b__2_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mE85D9F572C8186A494E0709A34C83DE66F06E110_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,seqFileManager/<<OpenFileBrowser>b__5_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m844A9939DA095D0BDCA112C0451FAB4AB741B2FD_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * ___stateMachine1, const RuntimeMethod* method);

// System.Collections.IEnumerator allFrames::startPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* allFrames_startPlay_m0356380C042638E6816AB3A21E335C7CC7265CF8 (allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void allFrames/<startPlay>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartPlayU3Ed__4__ctor_m60EE33023D9C121B87A50424F714134286838CF2 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Png()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * ImageFormat_get_Png_m408EAF5F30AECAEF2DC70C9569D23E9F61A3698A (const RuntimeMethod* method);
// System.Void System.Drawing.Image::Save(System.IO.Stream,System.Drawing.Imaging.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Save_m52ABCF7030E2363363C81B62F7AE78581D7E20EE (Image_t53F1FEE01B1E44D218B0C9CC42499DF8389359BA * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * ___format1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Application::InvokeOnUIThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnUIThread_m4013116AFAB872FBFD84F2CE06CF3B812D068130 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// System.Void fileManager/<LoadImage>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__3__ctor_m52710F2EF2539CBC7E039D1CAD26592E1C170800 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<fileManager/<<OpenFileBrowser>b__2_0>d>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<readSeq>()
inline readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Drawing.Bitmap::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m30917A1CFF9B152159C76253E838B855416A6376 (Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ironColormap::getIron(System.Int32[0...,0...],System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ironColormap_getIron_m885DCF219FA7D5959486F557146AAFF46346C185 (ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz0, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmpIron1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<createTexture>()
inline createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void createTexture::create(System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D (createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * __this, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmp0, const RuntimeMethod* method);
// System.Drawing.Color System.Drawing.Color::FromArgb(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  Color_FromArgb_m7DB349553BA39DED4C797A67189A1ADB88108542 (int32_t ___alpha0, int32_t ___red1, int32_t ___green2, int32_t ___blue3, const RuntimeMethod* method);
// System.Void System.Drawing.Bitmap::SetPixel(System.Int32,System.Int32,System.Drawing.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap_SetPixel_mD4FAABA4131F5048788214C81037807468B17DC8 (Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * __this, int32_t ___x0, int32_t ___y1, Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  ___color2, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void readSeq::getImage(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, String_t* ___path0, int32_t ___nr_klatki1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<spectrumColormap>()
inline spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void spectrumColormap::setMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spectrumColormap_setMap_mC8B5DCF6AD7EBB5B0E4149914C7C5213C8E2B731 (spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ironColormap>()
inline ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ironColormap::setMapIron()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ironColormap_setMapIron_m848AF0F9250FF10FD86E2F7D386F0CADD696367B (ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * __this, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___destination0, const RuntimeMethod* method);
// System.Int32 readSeq::getInt(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t readSeq_getInt_m9664AA793DD489DD687210E8721AE16BBC2CE909 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, double ___bajt10, double ___bajt21, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void readSeq::getGrey(System.Int32[0...,0...],System.Double[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void readSeq_getGrey_m05F4E735EA7818D9C1B854484641D002093D6F66 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz2D0, DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* ___macierzGrey1, int32_t ___min2, int32_t ___max3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<seqFileManager/<<OpenFileBrowser>b__5_0>d>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C_gshared)(__this, ___stateMachine0, method);
}
// System.Void spectrumColormap::getSpectrum(System.Int32[0...,0...],System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spectrumColormap_getSpectrum_mB5C427EE8FDB5CD6CC70F2AE18AE73D5AC178C7D (spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz0, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmpSpectrum1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void fileManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mEDF540E1D94C5A1460706D3030B4A0B8E32D4519 (U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * __this, const RuntimeMethod* method);
// System.Void Windows.Storage.Pickers.FileOpenPicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenPicker__ctor_m1ED648D3308B6E8D27B3000C228C071F24BE5278 (FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.String> Windows.Storage.Pickers.FileOpenPicker::get_FileTypeFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F (FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.Pickers.FileOpenPicker::PickSingleFileAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenPicker_PickSingleFileAsync_m1B9DBF6AD5FCA507A10EC65F4C61D60786309FB8 (FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.StorageFile>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,fileManager/<<OpenFileBrowser>b__2_0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mCEA340209DB3D66F72A69CC74643E9A2643CB974 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mE85D9F572C8186A494E0709A34C83DE66F06E110_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::GetResult()
inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void UnityEngine.WSA.Application::InvokeOnAppThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnAppThread_m2CCF5404E2DB2740277299D0DB455C895AF0053B (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void fileManager/<<OpenFileBrowser>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_MoveNext_mBF9E2129DB7B5E401C1A7AC56D8D9E0E9AD19A02 (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void fileManager/<<OpenFileBrowser>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_SetStateMachine_mFDC1150A09906D03C15206835F192C58A3EBA7F0 (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String Windows.Storage.StorageFile::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageFile_get_Path_m4A58E7365AAD2A3771DFC04915F54014B8CEE48B (StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator fileManager::LoadImage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fileManager_LoadImage_m8F13C804B4B05A5C337F71DB04F5EA1219D9BDD3 (fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4 (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method);
// System.Void seqFileManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC2BD3394DDC8510BBF2938D012C7780B5415DB2D (U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,seqFileManager/<<OpenFileBrowser>b__5_0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m5773B48D5D2BA9C470F21D78E04D8E5DE5EA4922 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m844A9939DA095D0BDCA112C0451FAB4AB741B2FD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void seqFileManager/<<OpenFileBrowser>b__5_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_MoveNext_mB2C87AF64C8D42D16CFB03CF10D53D2B67CC728E (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * __this, const RuntimeMethod* method);
// System.Void seqFileManager/<<OpenFileBrowser>b__5_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_SetStateMachine_m8DCFBDBC39CD9120B8AEB0A46DC932347D759095 (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void allFrames::play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void allFrames_play_mD42EE9B8ADA612AD6E886BE7974E0CD31AD297AD (allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(startPlay());
		RuntimeObject* L_0;
		L_0 = allFrames_startPlay_m0356380C042638E6816AB3A21E335C7CC7265CF8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator allFrames::startPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* allFrames_startPlay_m0356380C042638E6816AB3A21E335C7CC7265CF8 (allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * L_0 = (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 *)il2cpp_codegen_object_new(U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985_il2cpp_TypeInfo_var);
		U3CstartPlayU3Ed__4__ctor_m60EE33023D9C121B87A50424F714134286838CF2(L_0, 0, /*hidden argument*/NULL);
		U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void allFrames::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void allFrames__ctor_mD54A8BFEF26A6538859157A6D397B811A553B419 (allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * __this, const RuntimeMethod* method)
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
// System.Void backButton::switchScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void backButton_switchScene_m5BF6121024BC92A7FA0A7A12EE99EB6ACCCE68EB (backButton_t4288E1E636F463612A394509731FFF600189D0B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF276BC8C63572622EF0EFCCA09ACBEA7B38B2B16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadSceneAsync("Scenes/Main", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0;
		L_0 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748(_stringLiteralF276BC8C63572622EF0EFCCA09ACBEA7B38B2B16, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void backButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void backButton__ctor_m710AD778ECAFD9F7B73ADA2118609223107DFF7F (backButton_t4288E1E636F463612A394509731FFF600189D0B7 * __this, const RuntimeMethod* method)
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
// System.Void createTexture::create(System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D (createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * __this, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// MemoryStream _ms = new MemoryStream();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// bmp.Save(_ms, ImageFormat.Png);
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_1 = ___bmp0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726_il2cpp_TypeInfo_var);
		ImageFormat_tC565D344489D7523967C79D1AB1AFB7063EC7726 * L_3;
		L_3 = ImageFormat_get_Png_m408EAF5F30AECAEF2DC70C9569D23E9F61A3698A(/*hidden argument*/NULL);
		NullCheck(L_1);
		Image_Save_m52ABCF7030E2363363C81B62F7AE78581D7E20EE(L_1, L_2, L_3, /*hidden argument*/NULL);
		// var _buffer = new byte[_ms.Length];
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		if ((int64_t)(L_5) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_5));
		V_1 = L_6;
		// _ms.Position = 0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_7, ((int64_t)((int64_t)0)));
		// _ms.Read(_buffer, 0, _buffer.Length);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))));
		// Texture2D thisTexture = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_12, 1, 1, /*hidden argument*/NULL);
		V_2 = L_12;
		// thisTexture.LoadImage(_buffer);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		bool L_15;
		L_15 = ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477(L_13, L_14, /*hidden argument*/NULL);
		// int wth = thisTexture.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		V_3 = L_17;
		// int hgt = thisTexture.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		V_4 = L_19;
		// rawImage.GetComponent<RectTransform>().sizeDelta = new Vector2(wth, hgt);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_20 = __this->get_rawImage_4();
		NullCheck(L_20);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21;
		L_21 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_20, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), ((float)((float)L_22)), ((float)((float)L_23)), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_21, L_24, /*hidden argument*/NULL);
		// rawImage.texture = thisTexture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_25 = __this->get_rawImage_4();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_2;
		NullCheck(L_25);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_25, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void createTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createTexture__ctor_m366E29DE2FA7207817469ED74761EF639931336E (createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * __this, const RuntimeMethod* method)
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
// System.Void fileManager::OpenFileBrowser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fileManager_OpenFileBrowser_m5E4E88D4815FBAB9F56EA924648EBF7A9BBC528C (fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fileManager_U3COpenFileBrowserU3Eb__2_0_m934F1DAD5F010BAF86E2B244EE748EDD749B44AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
		// {
		//     var filepicker = new FileOpenPicker();
		//     filepicker.FileTypeFilter.Add(".jpg");
		//     filepicker.FileTypeFilter.Add(".jpeg");
		//     filepicker.FileTypeFilter.Add(".png");
		// 
		//     var file = await filepicker.PickSingleFileAsync();
		//     UnityEngine.WSA.Application.InvokeOnAppThread(() =>
		//     {
		//         path = (file != null) ? file.Path : "No data";
		// 
		//         StartCoroutine(LoadImage(path));
		// 
		//     }, false);
		// }, false);
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_0 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_0, __this, (intptr_t)((intptr_t)fileManager_U3COpenFileBrowserU3Eb__2_0_m934F1DAD5F010BAF86E2B244EE748EDD749B44AF_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_InvokeOnUIThread_m4013116AFAB872FBFD84F2CE06CF3B812D068130(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator fileManager::LoadImage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fileManager_LoadImage_m8F13C804B4B05A5C337F71DB04F5EA1219D9BDD3 (fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * L_0 = (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 *)il2cpp_codegen_object_new(U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276_il2cpp_TypeInfo_var);
		U3CLoadImageU3Ed__3__ctor_m52710F2EF2539CBC7E039D1CAD26592E1C170800(L_0, 0, /*hidden argument*/NULL);
		U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * L_2 = L_1;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->set_path_2(L_3);
		return L_2;
	}
}
// System.Void fileManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fileManager__ctor_m99F1E9A3E1AC128B353389B25C732F94FD3F2620 (fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void fileManager::<OpenFileBrowser>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fileManager_U3COpenFileBrowserU3Eb__2_0_m934F1DAD5F010BAF86E2B244EE748EDD749B44AF (fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_m8921E83FBD2C27F51371C3BD15FC5FBA09F36D62_RuntimeMethod_var);
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
// System.Void infoButton::switchScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infoButton_switchScene_m41AB2450918466BC9C45A0CBB9D8025EDC6127B8 (infoButton_tBE13D404DDA090E30BD89398A18F95EF5B27217C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F842A8F619989EBF3051D1110532603B715F045);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadSceneAsync("Scenes/Info", LoadSceneMode.Single);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0;
		L_0 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748(_stringLiteral8F842A8F619989EBF3051D1110532603B715F045, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void infoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void infoButton__ctor_mB2298E25DE71EF2B100ACD6B8CA91540DDAE652B (infoButton_tBE13D404DDA090E30BD89398A18F95EF5B27217C * __this, const RuntimeMethod* method)
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
// System.Void ironColormap::setMapIron()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ironColormap_setMapIron_m848AF0F9250FF10FD86E2F7D386F0CADD696367B (ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6BEFDFC14C5667D1CD7F99356B252AFDE3FEDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_0);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_1;
		L_1 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_0, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		__this->set_readS_4(L_1);
		// macierzGrey = readS.macierzGreyInt;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_2 = __this->get_readS_4();
		NullCheck(L_2);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_3 = L_2->get_macierzGreyInt_6();
		V_0 = L_3;
		// Bitmap bmpIron = new Bitmap(640, 480);
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_4 = (Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 *)il2cpp_codegen_object_new(Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95_il2cpp_TypeInfo_var);
		Bitmap__ctor_m30917A1CFF9B152159C76253E838B855416A6376(L_4, ((int32_t)640), ((int32_t)480), /*hidden argument*/NULL);
		V_1 = L_4;
		// getIron(macierzGrey, bmpIron);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_5 = V_0;
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_6 = V_1;
		ironColormap_getIron_m885DCF219FA7D5959486F557146AAFF46346C185(__this, L_5, L_6, /*hidden argument*/NULL);
		// int flagBuff = 3;
		V_2 = 3;
		// readS.flag = flagBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_7 = __this->get_readS_4();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		L_7->set_flag_10(L_8);
		// createTex = GameObject.FindGameObjectWithTag("TagTex").GetComponent<createTexture>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAE6BEFDFC14C5667D1CD7F99356B252AFDE3FEDF, /*hidden argument*/NULL);
		NullCheck(L_9);
		createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * L_10;
		L_10 = GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC(L_9, /*hidden argument*/GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC_RuntimeMethod_var);
		__this->set_createTex_5(L_10);
		// createTex.create(bmpIron);
		createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * L_11 = __this->get_createTex_5();
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_12 = V_1;
		NullCheck(L_11);
		createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ironColormap::getIron(System.Int32[0...,0...],System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ironColormap_getIron_m885DCF219FA7D5959486F557146AAFF46346C185 (ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz0, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmpIron1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// int t = 0;
		V_0 = 0;
		// int[] r = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_0;
		// int[] g = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_2 = L_1;
		// int[] b = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_3 = L_2;
		// for(int bb = 0; bb < 128; bb++)
		V_5 = 0;
		goto IL_0044;
	}

IL_0028:
	{
		// r[bb] = t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = V_1;
		int32_t L_4 = V_5;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		// g[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = V_2;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)0);
		// b[bb] = g[bb];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = V_3;
		int32_t L_9 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_2;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_13);
		// t = t + 2;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
		// for(int bb = 0; bb < 128; bb++)
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		// for(int bb = 0; bb < 128; bb++)
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)128))))
		{
			goto IL_0028;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for(int bb = 128; bb < 256; bb++)
		V_6 = ((int32_t)128);
		goto IL_0075;
	}

IL_0058:
	{
		// r[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = V_1;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)((int32_t)255));
		// g[bb] = t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_2;
		int32_t L_20 = V_6;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_21);
		// b[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = V_3;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)0);
		// t = t + 2;
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2));
		// for(int bb = 128; bb < 256; bb++)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0075:
	{
		// for(int bb = 128; bb < 256; bb++)
		int32_t L_26 = V_6;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)256))))
		{
			goto IL_0058;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for(int bb = 191; bb < 255; bb++)
		V_7 = ((int32_t)191);
		goto IL_0098;
	}

IL_0089:
	{
		// b[bb] = t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_3;
		int32_t L_28 = V_7;
		int32_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_29);
		// t = t + 4;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)4));
		// for(int bb = 191; bb < 255; bb++)
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0098:
	{
		// for(int bb = 191; bb < 255; bb++)
		int32_t L_32 = V_7;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)255))))
		{
			goto IL_0089;
		}
	}
	{
		// b[255] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)255)), (int32_t)((int32_t)255));
		// for(int nr_y = 0; nr_y < 480; nr_y++)
		V_8 = 0;
		goto IL_00fc;
	}

IL_00b2:
	{
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		V_9 = 0;
		goto IL_00ed;
	}

IL_00b7:
	{
		// index = macierz[nr_y, nr_x];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_34 = ___macierz0;
		int32_t L_35 = V_8;
		int32_t L_36 = V_9;
		NullCheck(L_34);
		int32_t L_37;
		L_37 = (L_34)->GetAt(L_35, L_36);
		V_4 = L_37;
		// System.Drawing.Color c = System.Drawing.Color.FromArgb(255, r[index], g[index], b[index]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_1;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_2;
		int32_t L_43 = V_4;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = V_3;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  L_50;
		L_50 = Color_FromArgb_m7DB349553BA39DED4C797A67189A1ADB88108542(((int32_t)255), L_41, L_45, L_49, /*hidden argument*/NULL);
		V_10 = L_50;
		// bmpIron.SetPixel(nr_x, nr_y, c);
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_51 = ___bmpIron1;
		int32_t L_52 = V_9;
		int32_t L_53 = V_8;
		Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  L_54 = V_10;
		NullCheck(L_51);
		Bitmap_SetPixel_mD4FAABA4131F5048788214C81037807468B17DC8(L_51, L_52, L_53, L_54, /*hidden argument*/NULL);
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_00ed:
	{
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		int32_t L_56 = V_9;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)640))))
		{
			goto IL_00b7;
		}
	}
	{
		// for(int nr_y = 0; nr_y < 480; nr_y++)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_00fc:
	{
		// for(int nr_y = 0; nr_y < 480; nr_y++)
		int32_t L_58 = V_8;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)480))))
		{
			goto IL_00b2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ironColormap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ironColormap__ctor_mDFF4AF3AE0CB2422D1ACDCA7E636C7196EE820F1 (ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * __this, const RuntimeMethod* method)
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
// System.Void loadImg::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadImg_Start_mDA29E119D9E8B6C871150F813C661B375F8869B5 (loadImg_t405FC0C77C84EA5EF580111225A05D25C0A06D0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D0A9EF07955EDE166FE0D4DB15C7D6F6F6F6268);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	{
		// var texture = Resources.Load<Texture2D>("instrukcja/instrukcjaImg");
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0;
		L_0 = Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539(_stringLiteral2D0A9EF07955EDE166FE0D4DB15C7D6F6F6F6268, /*hidden argument*/Resources_Load_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m950B73E56D22F280CC666EB873D4EF6AAE011539_RuntimeMethod_var);
		V_0 = L_0;
		// rawImage.texture = texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_1 = __this->get_rawImage_4();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = V_0;
		NullCheck(L_1);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void loadImg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadImg__ctor_mE32771DB873544A7B92764249C0E5C713822E536 (loadImg_t405FC0C77C84EA5EF580111225A05D25C0A06D0F * __this, const RuntimeMethod* method)
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
// System.Void nextFrame::next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextFrame_next_m502F44DF5BD1F295E9B0162FCBCF82D96A88F006 (nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_0);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_1;
		L_1 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_0, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		__this->set_readS_4(L_1);
		// flagBuff = readS.flag;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_2 = __this->get_readS_4();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_flag_10();
		// string path = readS.pathBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_4 = __this->get_readS_4();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_pathBuff_7();
		V_0 = L_5;
		// int nr_klatki = readS.nr_klatkiBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_6 = __this->get_readS_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_nr_klatkiBuff_8();
		V_1 = L_7;
		// int l_klatek = readS.l_klatek;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_8 = __this->get_readS_4();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_l_klatek_9();
		V_2 = L_9;
		// if(flagBuff == 1)
		int32_t L_10 = L_3;
		G_B1_0 = L_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B3_0 = L_10;
			goto IL_005f;
		}
	}
	{
		// if (nr_klatki < (l_klatek - 1))
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_005f;
		}
	}
	{
		// nr_klatki = nr_klatki + 1;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_14 = __this->get_readS_4();
		String_t* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_14);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_14, L_15, L_16, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_005f:
	{
		// if(flagBuff == 2)
		int32_t L_17 = G_B3_0;
		G_B4_0 = L_17;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			G_B6_0 = L_17;
			goto IL_009a;
		}
	}
	{
		// if (nr_klatki < (l_klatek - 1))
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))))
		{
			G_B6_0 = G_B4_0;
			goto IL_009a;
		}
	}
	{
		// nr_klatki = nr_klatki + 1;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_21 = __this->get_readS_4();
		String_t* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_21, L_22, L_23, /*hidden argument*/NULL);
		// spectrumColor = GameObject.FindGameObjectWithTag("TagSpect").GetComponent<spectrumColormap>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060, /*hidden argument*/NULL);
		NullCheck(L_24);
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_25;
		L_25 = GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3(L_24, /*hidden argument*/GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		__this->set_spectrumColor_5(L_25);
		// spectrumColor.setMap();
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_26 = __this->get_spectrumColor_5();
		NullCheck(L_26);
		spectrumColormap_setMap_mC8B5DCF6AD7EBB5B0E4149914C7C5213C8E2B731(L_26, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_009a:
	{
		// if (flagBuff == 3)
		if ((!(((uint32_t)G_B6_0) == ((uint32_t)3))))
		{
			goto IL_00d4;
		}
	}
	{
		// if (nr_klatki < (l_klatek - 1))
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)))))
		{
			goto IL_00d4;
		}
	}
	{
		// nr_klatki = nr_klatki + 1;
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_30 = __this->get_readS_4();
		String_t* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_30);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_30, L_31, L_32, /*hidden argument*/NULL);
		// ironColor = GameObject.FindGameObjectWithTag("TagIron").GetComponent<ironColormap>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11, /*hidden argument*/NULL);
		NullCheck(L_33);
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_34;
		L_34 = GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219(L_33, /*hidden argument*/GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		__this->set_ironColor_6(L_34);
		// ironColor.setMapIron();
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_35 = __this->get_ironColor_6();
		NullCheck(L_35);
		ironColormap_setMapIron_m848AF0F9250FF10FD86E2F7D386F0CADD696367B(L_35, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void nextFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void nextFrame__ctor_mBE3DEC1AB00244D1ABC45F3C3D444D4C0DF4A17F (nextFrame_tCAEA2D0E533561A4375ED242AC6398301AD4D7E7 * __this, const RuntimeMethod* method)
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
// System.Void previousFrame::previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void previousFrame_previous_m8A15FA6913FF21DACB705C8F2E843153CA8C8A06 (previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	{
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_0);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_1;
		L_1 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_0, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		__this->set_readS_4(L_1);
		// flagBuff = readS.flag;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_2 = __this->get_readS_4();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_flag_10();
		// string path = readS.pathBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_4 = __this->get_readS_4();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_pathBuff_7();
		V_0 = L_5;
		// int nr_klatki = readS.nr_klatkiBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_6 = __this->get_readS_4();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_nr_klatkiBuff_8();
		V_1 = L_7;
		// int l_klatek = readS.l_klatek;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_8 = __this->get_readS_4();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_l_klatek_9();
		// if (flagBuff == 1)
		int32_t L_10 = L_3;
		G_B1_0 = L_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B3_0 = L_10;
			goto IL_005d;
		}
	}
	{
		// if (nr_klatki > 1)
		int32_t L_11 = V_1;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			G_B3_0 = G_B1_0;
			goto IL_005d;
		}
	}
	{
		// nr_klatki = nr_klatki - 1;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_13 = __this->get_readS_4();
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_13, L_14, L_15, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_005d:
	{
		// if (flagBuff == 2)
		int32_t L_16 = G_B3_0;
		G_B4_0 = L_16;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			G_B6_0 = L_16;
			goto IL_0096;
		}
	}
	{
		// if (nr_klatki > 1)
		int32_t L_17 = V_1;
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			G_B6_0 = G_B4_0;
			goto IL_0096;
		}
	}
	{
		// nr_klatki = nr_klatki - 1;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_19 = __this->get_readS_4();
		String_t* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_19, L_20, L_21, /*hidden argument*/NULL);
		// spectrumColor = GameObject.FindGameObjectWithTag("TagSpect").GetComponent<spectrumColormap>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060, /*hidden argument*/NULL);
		NullCheck(L_22);
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_23;
		L_23 = GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3(L_22, /*hidden argument*/GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		__this->set_spectrumColor_5(L_23);
		// spectrumColor.setMap();
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_24 = __this->get_spectrumColor_5();
		NullCheck(L_24);
		spectrumColormap_setMap_mC8B5DCF6AD7EBB5B0E4149914C7C5213C8E2B731(L_24, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0096:
	{
		// if (flagBuff == 3)
		if ((!(((uint32_t)G_B6_0) == ((uint32_t)3))))
		{
			goto IL_00ce;
		}
	}
	{
		// if (nr_klatki > 1)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)1)))
		{
			goto IL_00ce;
		}
	}
	{
		// nr_klatki = nr_klatki - 1;
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		// readS.getImage(path, nr_klatki);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_27 = __this->get_readS_4();
		String_t* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_27);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_27, L_28, L_29, /*hidden argument*/NULL);
		// ironColor = GameObject.FindGameObjectWithTag("TagIron").GetComponent<ironColormap>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11, /*hidden argument*/NULL);
		NullCheck(L_30);
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_31;
		L_31 = GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219(L_30, /*hidden argument*/GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		__this->set_ironColor_6(L_31);
		// ironColor.setMapIron();
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_32 = __this->get_ironColor_6();
		NullCheck(L_32);
		ironColormap_setMapIron_m848AF0F9250FF10FD86E2F7D386F0CADD696367B(L_32, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void previousFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void previousFrame__ctor_mCE990B5CD457C1E0EC289A9390C54F07B6640DCF (previousFrame_tC7BE4C32520B52B61ACB3DED7C1C81D9A029673E * __this, const RuntimeMethod* method)
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
// System.Void readSeq::getImage(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, String_t* ___path0, int32_t ___nr_klatki1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53D88EDE6FB9D285C0148CB76E088F56687EEE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD71CE2496BE0BEBEB5D4E99DD2C704A0AFAB36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* V_5 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// pathBuff = path;
		String_t* L_0 = ___path0;
		__this->set_pathBuff_7(L_0);
		// nr_klatkiBuff = nr_klatki;
		int32_t L_1 = ___nr_klatki1;
		__this->set_nr_klatkiBuff_8(L_1);
		// int offset = 2781;
		V_1 = ((int32_t)2781);
		// int[,] macierz2D = new int[480, 640];
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)((int32_t)480), (il2cpp_array_size_t)((int32_t)640) };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_2 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_3);
		V_2 = L_2;
		// using(FileStream fs = new FileStream(path, FileMode.Open, FileAccess.Read))
		String_t* L_4 = ___path0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D(L_5, L_4, 3, 1, /*hidden argument*/NULL);
		V_6 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			// l_bajtow = (int)fs.Length;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_6;
			NullCheck(L_6);
			int64_t L_7;
			L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
			V_0 = ((int32_t)((int32_t)L_7));
			// l_klatek = (l_bajtow - 617180) / 617052 + 1;
			int32_t L_8 = V_0;
			__this->set_l_klatek_9(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)617180)))/(int32_t)((int32_t)617052))), (int32_t)1)));
			// byte[] bytes = new byte[l_bajtow];
			int32_t L_9 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_9);
			V_7 = L_10;
			// if(nr_klatki > 1)
			int32_t L_11 = ___nr_klatki1;
			if ((((int32_t)L_11) <= ((int32_t)1)))
			{
				goto IL_006e;
			}
		}

IL_0058:
		{
			// offset = (nr_klatki - 2) * 617052 + 617180 + 2653;
			int32_t L_12 = ___nr_klatki1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2)), (int32_t)((int32_t)617052))), (int32_t)((int32_t)617180))), (int32_t)((int32_t)2653)));
		}

IL_006e:
		{
			// using (MemoryStream ms = new MemoryStream())
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_13 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
			MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_13, /*hidden argument*/NULL);
			V_8 = L_13;
		}

IL_0075:
		try
		{ // begin try (depth: 2)
			// fs.CopyTo(ms);
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = V_6;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = V_8;
			NullCheck(L_14);
			Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421(L_14, L_15, /*hidden argument*/NULL);
			// bytes = ms.ToArray();
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_16 = V_8;
			NullCheck(L_16);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
			L_17 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_16);
			V_7 = L_17;
			// }
			IL2CPP_LEAVE(0x95, FINALLY_0089);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0089;
		}

FINALLY_0089:
		{ // begin finally (depth: 2)
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_18 = V_8;
				if (!L_18)
				{
					goto IL_0094;
				}
			}

IL_008d:
			{
				MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_19 = V_8;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0094:
			{
				IL2CPP_END_FINALLY(137)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(137)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x95, IL_0095)
		}

IL_0095:
		{
			// for(int nr_y = 0; nr_y < 480; nr_y++)
			V_9 = 0;
			goto IL_00d8;
		}

IL_009a:
		{
			// for(int nr_x = 0; nr_x < 640; nr_x++)
			V_10 = 0;
			goto IL_00c9;
		}

IL_009f:
		{
			// int wartosc = getInt(bytes[offset], bytes[offset + 1]);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_7;
			int32_t L_21 = V_1;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_7;
			int32_t L_25 = V_1;
			NullCheck(L_24);
			int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
			uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			int32_t L_28;
			L_28 = readSeq_getInt_m9664AA793DD489DD687210E8721AE16BBC2CE909(__this, ((double)((double)L_23)), ((double)((double)L_27)), /*hidden argument*/NULL);
			V_11 = L_28;
			// macierz2D[nr_y, nr_x] = wartosc;
			Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_29 = V_2;
			int32_t L_30 = V_9;
			int32_t L_31 = V_10;
			int32_t L_32 = V_11;
			NullCheck(L_29);
			(L_29)->SetAt(L_30, L_31, L_32);
			// offset = offset + 2;
			int32_t L_33 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2));
			// for(int nr_x = 0; nr_x < 640; nr_x++)
			int32_t L_34 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		}

IL_00c9:
		{
			// for(int nr_x = 0; nr_x < 640; nr_x++)
			int32_t L_35 = V_10;
			if ((((int32_t)L_35) < ((int32_t)((int32_t)640))))
			{
				goto IL_009f;
			}
		}

IL_00d2:
		{
			// for(int nr_y = 0; nr_y < 480; nr_y++)
			int32_t L_36 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_00d8:
		{
			// for(int nr_y = 0; nr_y < 480; nr_y++)
			int32_t L_37 = V_9;
			if ((((int32_t)L_37) < ((int32_t)((int32_t)480))))
			{
				goto IL_009a;
			}
		}

IL_00e1:
		{
			// text_klatka.text = $"Wy�wietlana klatka: {nr_klatki}";
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_text_klatka_5();
			int32_t L_39 = ___nr_klatki1;
			int32_t L_40 = L_39;
			RuntimeObject * L_41 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_40);
			String_t* L_42;
			L_42 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB53D88EDE6FB9D285C0148CB76E088F56687EEE5, L_41, /*hidden argument*/NULL);
			NullCheck(L_38);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_42);
			// text_Lklatek.text = $"Liczba klatek: {l_klatek - 1}";
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_43 = __this->get_text_Lklatek_4();
			int32_t L_44 = __this->get_l_klatek_9();
			int32_t L_45 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
			RuntimeObject * L_46 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_45);
			String_t* L_47;
			L_47 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralBBD71CE2496BE0BEBEB5D4E99DD2C704A0AFAB36, L_46, /*hidden argument*/NULL);
			NullCheck(L_43);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_47);
			// flag = 1;
			__this->set_flag_10(1);
			// Array.Clear(bytes, 0, l_bajtow);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = V_7;
			int32_t L_49 = V_0;
			Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_48, 0, L_49, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x13C, FINALLY_0130);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0130;
	}

FINALLY_0130:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_50 = V_6;
			if (!L_50)
			{
				goto IL_013b;
			}
		}

IL_0134:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_51 = V_6;
			NullCheck(L_51);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_51);
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(304)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(304)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13C, IL_013c)
	}

IL_013c:
	{
		// int w_minimalna = macierz2D[0, 0];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = (L_52)->GetAt(0, 0);
		V_3 = L_53;
		// int w_maksymalna = macierz2D[0, 0];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = (L_54)->GetAt(0, 0);
		V_4 = L_55;
		// for (int y = 0; y < 480; y++)
		V_12 = 0;
		goto IL_01a0;
	}

IL_0154:
	{
		// for (int x = 0; x < 640; x++)
		V_13 = 0;
		goto IL_0191;
	}

IL_0159:
	{
		// if (w_minimalna > macierz2D[y, x])
		int32_t L_56 = V_3;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_57 = V_2;
		int32_t L_58 = V_12;
		int32_t L_59 = V_13;
		NullCheck(L_57);
		int32_t L_60;
		L_60 = (L_57)->GetAt(L_58, L_59);
		if ((((int32_t)L_56) <= ((int32_t)L_60)))
		{
			goto IL_0171;
		}
	}
	{
		// w_minimalna = macierz2D[y, x];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_61 = V_2;
		int32_t L_62 = V_12;
		int32_t L_63 = V_13;
		NullCheck(L_61);
		int32_t L_64;
		L_64 = (L_61)->GetAt(L_62, L_63);
		V_3 = L_64;
	}

IL_0171:
	{
		// if(w_maksymalna < macierz2D[y, x])
		int32_t L_65 = V_4;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_66 = V_2;
		int32_t L_67 = V_12;
		int32_t L_68 = V_13;
		NullCheck(L_66);
		int32_t L_69;
		L_69 = (L_66)->GetAt(L_67, L_68);
		if ((((int32_t)L_65) >= ((int32_t)L_69)))
		{
			goto IL_018b;
		}
	}
	{
		// w_maksymalna = macierz2D[y, x];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = V_13;
		NullCheck(L_70);
		int32_t L_73;
		L_73 = (L_70)->GetAt(L_71, L_72);
		V_4 = L_73;
	}

IL_018b:
	{
		// for (int x = 0; x < 640; x++)
		int32_t L_74 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0191:
	{
		// for (int x = 0; x < 640; x++)
		int32_t L_75 = V_13;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)640))))
		{
			goto IL_0159;
		}
	}
	{
		// for (int y = 0; y < 480; y++)
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01a0:
	{
		// for (int y = 0; y < 480; y++)
		int32_t L_77 = V_12;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)480))))
		{
			goto IL_0154;
		}
	}
	{
		// double[,] macierzGrey = new double[480, 640];
		il2cpp_array_size_t L_79[] = { (il2cpp_array_size_t)((int32_t)480), (il2cpp_array_size_t)((int32_t)640) };
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_78 = (DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E*)GenArrayNew(DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E_il2cpp_TypeInfo_var, L_79);
		V_5 = L_78;
		// getGrey(macierz2D, macierzGrey, w_minimalna, w_maksymalna);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_80 = V_2;
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_81 = V_5;
		int32_t L_82 = V_3;
		int32_t L_83 = V_4;
		readSeq_getGrey_m05F4E735EA7818D9C1B854484641D002093D6F66(__this, L_80, L_81, L_82, L_83, /*hidden argument*/NULL);
		// for (int i = 0; i < 480; i++)
		V_14 = 0;
		goto IL_0200;
	}

IL_01cb:
	{
		// for (int j = 0; j < 640; j++)
		V_15 = 0;
		goto IL_01f1;
	}

IL_01d0:
	{
		// macierzGreyInt[i, j] = (int)macierzGrey[i, j];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_84 = __this->get_macierzGreyInt_6();
		int32_t L_85 = V_14;
		int32_t L_86 = V_15;
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_87 = V_5;
		int32_t L_88 = V_14;
		int32_t L_89 = V_15;
		NullCheck(L_87);
		double L_90;
		L_90 = (L_87)->GetAt(L_88, L_89);
		NullCheck(L_84);
		(L_84)->SetAt(L_85, L_86, il2cpp_codegen_cast_double_to_int<int32_t>(L_90));
		// for (int j = 0; j < 640; j++)
		int32_t L_91 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_01f1:
	{
		// for (int j = 0; j < 640; j++)
		int32_t L_92 = V_15;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)640))))
		{
			goto IL_01d0;
		}
	}
	{
		// for (int i = 0; i < 480; i++)
		int32_t L_93 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0200:
	{
		// for (int i = 0; i < 480; i++)
		int32_t L_94 = V_14;
		if ((((int32_t)L_94) < ((int32_t)((int32_t)480))))
		{
			goto IL_01cb;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 readSeq::getInt(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t readSeq_getInt_m9664AA793DD489DD687210E8721AE16BBC2CE909 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, double ___bajt10, double ___bajt21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double lsb = bajt1;
		double L_0 = ___bajt10;
		V_0 = L_0;
		// double msb = bajt2;
		double L_1 = ___bajt21;
		V_1 = L_1;
		// if(lsb < 0)
		double L_2 = V_0;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_001c;
		}
	}
	{
		// lsb = lsb + 256;
		double L_3 = V_0;
		V_0 = ((double)il2cpp_codegen_add((double)L_3, (double)(256.0)));
	}

IL_001c:
	{
		// if(msb < 0)
		double L_4 = V_1;
		if ((!(((double)L_4) < ((double)(0.0)))))
		{
			goto IL_0034;
		}
	}
	{
		// msb = msb + 256;
		double L_5 = V_1;
		V_1 = ((double)il2cpp_codegen_add((double)L_5, (double)(256.0)));
	}

IL_0034:
	{
		// int wynik = ((int)lsb << 8) + (int)msb;
		double L_6 = V_0;
		double L_7 = V_1;
		// return wynik;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_6)<<(int32_t)8)), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_7)));
	}
}
// System.Void readSeq::getGrey(System.Int32[0...,0...],System.Double[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void readSeq_getGrey_m05F4E735EA7818D9C1B854484641D002093D6F66 (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz2D0, DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* ___macierzGrey1, int32_t ___min2, int32_t ___max3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// a = 255 / ((double)max - (double)min);
		int32_t L_0 = ___max3;
		int32_t L_1 = ___min2;
		V_0 = ((double)((double)(255.0)/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_0)), (double)((double)((double)L_1))))));
		// b = (-a) * (double)min;
		double L_2 = V_0;
		int32_t L_3 = ___min2;
		V_1 = ((double)il2cpp_codegen_multiply((double)((-L_2)), (double)((double)((double)L_3))));
		// for (int i = 0; i < 480; i++)
		V_2 = 0;
		goto IL_0044;
	}

IL_001b:
	{
		// for (int j = 0; j < 640; j++)
		V_3 = 0;
		goto IL_0038;
	}

IL_001f:
	{
		// macierzGrey[i, j] = (a * (double)macierz2D[i, j]) + b;
		DoubleU5BU2CU5D_t469708E84B24DAB3E509BDEC941060C69370193E* L_4 = ___macierzGrey1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		double L_7 = V_0;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_8 = ___macierz2D0;
		int32_t L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		double L_12 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(L_5, L_6, ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_7, (double)((double)((double)L_11)))), (double)L_12)));
		// for (int j = 0; j < 640; j++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0038:
	{
		// for (int j = 0; j < 640; j++)
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)640))))
		{
			goto IL_001f;
		}
	}
	{
		// for (int i = 0; i < 480; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 0; i < 480; i++)
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)480))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void readSeq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void readSeq__ctor_m1BB135472C044455ED5F7DA30B860CA8E91CC4CC (readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[,] macierzGreyInt = new int[480, 640];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)480), (il2cpp_array_size_t)((int32_t)640) };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_0 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_1);
		__this->set_macierzGreyInt_6(L_0);
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
// System.Void seqFileManager::OpenFileBrowser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void seqFileManager_OpenFileBrowser_mC1A035F368CE68983F066E32EA812D2DCD85FBAE (seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&seqFileManager_U3COpenFileBrowserU3Eb__5_0_m1140B6A5CBE636509C67EDDB432D3B2C3B027599_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
		// {
		//     var filepicker = new FileOpenPicker();
		//     filepicker.FileTypeFilter.Add(".seq");
		//     filepicker.FileTypeFilter.Add(".raw");
		// 
		//     var file = await filepicker.PickSingleFileAsync();
		//     UnityEngine.WSA.Application.InvokeOnAppThread(() =>
		//     {
		// 
		//         path = (file != null) ? file.Path : "No data";
		//         readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		//         readS.getImage(path, nr_klatki);
		//         textLoad.text="WCZYTANO PLIK SEQ";
		//         textPath.text = path;
		// 
		// 
		//     }, false);
		// }, false);
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_0 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_0, __this, (intptr_t)((intptr_t)seqFileManager_U3COpenFileBrowserU3Eb__5_0_m1140B6A5CBE636509C67EDDB432D3B2C3B027599_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_InvokeOnUIThread_m4013116AFAB872FBFD84F2CE06CF3B812D068130(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void seqFileManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void seqFileManager__ctor_m781D6FA70D2DAB2DE4397106FE89B7A11B07E416 (seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * __this, const RuntimeMethod* method)
{
	{
		// public int nr_klatki = 1;
		__this->set_nr_klatki_5(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void seqFileManager::<OpenFileBrowser>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void seqFileManager_U3COpenFileBrowserU3Eb__5_0_m1140B6A5CBE636509C67EDDB432D3B2C3B027599 (seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_mEB649F3B9CADCAE8996A33C478F1305360BED32C_RuntimeMethod_var);
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
// System.Void spectrumColormap::setMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spectrumColormap_setMap_mC8B5DCF6AD7EBB5B0E4149914C7C5213C8E2B731 (spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6BEFDFC14C5667D1CD7F99356B252AFDE3FEDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_0);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_1;
		L_1 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_0, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		__this->set_readS_4(L_1);
		// macierzGrey = readS.macierzGreyInt;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_2 = __this->get_readS_4();
		NullCheck(L_2);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_3 = L_2->get_macierzGreyInt_6();
		V_0 = L_3;
		// Bitmap bmpSpectrum = new Bitmap(640,480);
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_4 = (Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 *)il2cpp_codegen_object_new(Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95_il2cpp_TypeInfo_var);
		Bitmap__ctor_m30917A1CFF9B152159C76253E838B855416A6376(L_4, ((int32_t)640), ((int32_t)480), /*hidden argument*/NULL);
		V_1 = L_4;
		// getSpectrum(macierzGrey, bmpSpectrum);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_5 = V_0;
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_6 = V_1;
		spectrumColormap_getSpectrum_mB5C427EE8FDB5CD6CC70F2AE18AE73D5AC178C7D(__this, L_5, L_6, /*hidden argument*/NULL);
		// int flagBuff = 2;
		V_2 = 2;
		// readS.flag = flagBuff;
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_7 = __this->get_readS_4();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		L_7->set_flag_10(L_8);
		// createTex = GameObject.FindGameObjectWithTag("TagTex").GetComponent<createTexture>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAE6BEFDFC14C5667D1CD7F99356B252AFDE3FEDF, /*hidden argument*/NULL);
		NullCheck(L_9);
		createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * L_10;
		L_10 = GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC(L_9, /*hidden argument*/GameObject_GetComponent_TiscreateTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717_mF867E7856EF8B09538C3E7B89546EE96D6EF8ACC_RuntimeMethod_var);
		__this->set_createTex_5(L_10);
		// createTex.create(bmpSpectrum);
		createTexture_t1729EC4B18B35BE4F6A28EA7B3B5F62351860717 * L_11 = __this->get_createTex_5();
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_12 = V_1;
		NullCheck(L_11);
		createTexture_create_m13C042DB68665CEAD6B197657B576C93D5E1B46D(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void spectrumColormap::getSpectrum(System.Int32[0...,0...],System.Drawing.Bitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spectrumColormap_getSpectrum_mB5C427EE8FDB5CD6CC70F2AE18AE73D5AC178C7D (spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * __this, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___macierz0, Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * ___bmpSpectrum1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// int t = 0;
		V_0 = 0;
		// int[] r = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_0;
		// int[] g = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_2 = L_1;
		// int[] b = new int[256];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_3 = L_2;
		// for (int bb = 0; bb < 51; bb++)
		V_5 = 0;
		goto IL_004b;
	}

IL_0028:
	{
		// r[bb] = 255 - t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = V_1;
		int32_t L_4 = V_5;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_5)));
		// g[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = V_2;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)0);
		// b[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = V_3;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)((int32_t)255));
		// t = t + 5;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)5));
		// for (int bb = 0; bb < 51; bb++)
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004b:
	{
		// for (int bb = 0; bb < 51; bb++)
		int32_t L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)51))))
		{
			goto IL_0028;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for (int bb = 51; bb < 102; bb++)
		V_6 = ((int32_t)51);
		goto IL_0076;
	}

IL_0059:
	{
		// r[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_1;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)0);
		// g[bb] = t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = V_2;
		int32_t L_16 = V_6;
		int32_t L_17 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		// b[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = V_3;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)255));
		// t = t + 5;
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)5));
		// for (int bb = 51; bb < 102; bb++)
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0076:
	{
		// for (int bb = 51; bb < 102; bb++)
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)102))))
		{
			goto IL_0059;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for (int bb = 102; bb < 153; bb++)
		V_7 = ((int32_t)102);
		goto IL_00a7;
	}

IL_0084:
	{
		// r[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_1;
		int32_t L_24 = V_7;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int32_t)0);
		// g[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = V_2;
		int32_t L_26 = V_7;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)((int32_t)255));
		// b[bb] = 255 - t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_3;
		int32_t L_28 = V_7;
		int32_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_29)));
		// t = t + 5;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)5));
		// for (int bb = 102; bb < 153; bb++)
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00a7:
	{
		// for (int bb = 102; bb < 153; bb++)
		int32_t L_32 = V_7;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)153))))
		{
			goto IL_0084;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for (int bb = 153; bb < 204; bb++)
		V_8 = ((int32_t)153);
		goto IL_00d8;
	}

IL_00bb:
	{
		// r[bb] = t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = V_1;
		int32_t L_34 = V_8;
		int32_t L_35 = V_0;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (int32_t)L_35);
		// g[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = V_2;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)255));
		// b[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_3;
		int32_t L_39 = V_8;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)0);
		// t = t + 5;
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)5));
		// for (int bb = 153; bb < 204; bb++)
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d8:
	{
		// for (int bb = 153; bb < 204; bb++)
		int32_t L_42 = V_8;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)204))))
		{
			goto IL_00bb;
		}
	}
	{
		// t = 0;
		V_0 = 0;
		// for (int bb = 204; bb < 256; bb++)
		V_9 = ((int32_t)204);
		goto IL_010f;
	}

IL_00ec:
	{
		// r[bb] = 255;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = V_1;
		int32_t L_44 = V_9;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)255));
		// g[bb] = 255 - t;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = V_2;
		int32_t L_46 = V_9;
		int32_t L_47 = V_0;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_47)));
		// b[bb] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_3;
		int32_t L_49 = V_9;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)0);
		// t = t + 5;
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)5));
		// for (int bb = 204; bb < 256; bb++)
		int32_t L_51 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_010f:
	{
		// for (int bb = 204; bb < 256; bb++)
		int32_t L_52 = V_9;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)256))))
		{
			goto IL_00ec;
		}
	}
	{
		// for( int nr_y = 0; nr_y < 480; nr_y++)
		V_10 = 0;
		goto IL_0167;
	}

IL_011d:
	{
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		V_11 = 0;
		goto IL_0158;
	}

IL_0122:
	{
		// index = macierz[nr_y, nr_x];
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_53 = ___macierz0;
		int32_t L_54 = V_10;
		int32_t L_55 = V_11;
		NullCheck(L_53);
		int32_t L_56;
		L_56 = (L_53)->GetAt(L_54, L_55);
		V_4 = L_56;
		// System.Drawing.Color c = System.Drawing.Color.FromArgb(255, r[index], g[index], b[index]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_1;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = V_2;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = V_3;
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  L_69;
		L_69 = Color_FromArgb_m7DB349553BA39DED4C797A67189A1ADB88108542(((int32_t)255), L_60, L_64, L_68, /*hidden argument*/NULL);
		V_12 = L_69;
		// bmpSpectrum.SetPixel(nr_x, nr_y, c);
		Bitmap_tF00A14AB0CB7EA196A7ADF62AA9B5CA130244E95 * L_70 = ___bmpSpectrum1;
		int32_t L_71 = V_11;
		int32_t L_72 = V_10;
		Color_tA07799668742A7F041BB4323837B4F3FF8FEB44E  L_73 = V_12;
		NullCheck(L_70);
		Bitmap_SetPixel_mD4FAABA4131F5048788214C81037807468B17DC8(L_70, L_71, L_72, L_73, /*hidden argument*/NULL);
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0158:
	{
		// for(int nr_x = 0; nr_x < 640; nr_x++)
		int32_t L_75 = V_11;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)640))))
		{
			goto IL_0122;
		}
	}
	{
		// for( int nr_y = 0; nr_y < 480; nr_y++)
		int32_t L_76 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0167:
	{
		// for( int nr_y = 0; nr_y < 480; nr_y++)
		int32_t L_77 = V_10;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)480))))
		{
			goto IL_011d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void spectrumColormap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void spectrumColormap__ctor_mEE1220095360758994CA27A8E20CE8D3E21ED0E3 (spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * __this, const RuntimeMethod* method)
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
// System.Void allFrames/<startPlay>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartPlayU3Ed__4__ctor_m60EE33023D9C121B87A50424F714134286838CF2 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void allFrames/<startPlay>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartPlayU3Ed__4_System_IDisposable_Dispose_m64DBA1A42007F90642299939D3A2D89B22788AE8 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean allFrames/<startPlay>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CstartPlayU3Ed__4_MoveNext_m53DEDC1AEB596A20F6DB58D01796231D11B00048 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_00b7;
			}
			case 2:
			{
				goto IL_013e;
			}
			case 3:
			{
				goto IL_01c5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_3 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_4);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_5;
		L_5 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_4, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_readS_4(L_5);
		// flagBuff = readS.flag;
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_6 = V_1;
		NullCheck(L_6);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_7 = L_6->get_readS_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_flag_10();
		__this->set_U3CflagBuffU3E5__2_3(L_8);
		// string path = readS.pathBuff;
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_9 = V_1;
		NullCheck(L_9);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_10 = L_9->get_readS_4();
		NullCheck(L_10);
		String_t* L_11 = L_10->get_pathBuff_7();
		__this->set_U3CpathU3E5__3_4(L_11);
		// int l_klatek = readS.l_klatek;
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_12 = V_1;
		NullCheck(L_12);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_13 = L_12->get_readS_4();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_l_klatek_9();
		__this->set_U3Cl_klatekU3E5__4_5(L_14);
		// if (flagBuff == 1)
		int32_t L_15 = __this->get_U3CflagBuffU3E5__2_3();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00dc;
		}
	}
	{
		// for (int klatka = 1; klatka < l_klatek ; klatka++)
		__this->set_U3CklatkaU3E5__5_6(1);
		goto IL_00ce;
	}

IL_0087:
	{
		// readS.getImage(path, klatka);
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_16 = V_1;
		NullCheck(L_16);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_17 = L_16->get_readS_4();
		String_t* L_18 = __this->get_U3CpathU3E5__3_4();
		int32_t L_19 = __this->get_U3CklatkaU3E5__5_6();
		NullCheck(L_17);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_17, L_18, L_19, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_20, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b7:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int klatka = 1; klatka < l_klatek ; klatka++)
		int32_t L_21 = __this->get_U3CklatkaU3E5__5_6();
		V_2 = L_21;
		int32_t L_22 = V_2;
		__this->set_U3CklatkaU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
	}

IL_00ce:
	{
		// for (int klatka = 1; klatka < l_klatek ; klatka++)
		int32_t L_23 = __this->get_U3CklatkaU3E5__5_6();
		int32_t L_24 = __this->get_U3Cl_klatekU3E5__4_5();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0087;
		}
	}

IL_00dc:
	{
		// if(flagBuff == 2)
		int32_t L_25 = __this->get_U3CflagBuffU3E5__2_3();
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_0163;
		}
	}
	{
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		__this->set_U3CklatkaU3E5__5_6(1);
		goto IL_0155;
	}

IL_00ee:
	{
		// readS.getImage(path, klatka);
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_26 = V_1;
		NullCheck(L_26);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_27 = L_26->get_readS_4();
		String_t* L_28 = __this->get_U3CpathU3E5__3_4();
		int32_t L_29 = __this->get_U3CklatkaU3E5__5_6();
		NullCheck(L_27);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_27, L_28, L_29, /*hidden argument*/NULL);
		// spectrumColor = GameObject.FindGameObjectWithTag("TagSpect").GetComponent<spectrumColormap>();
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_30 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralEEBA3379DC4B8365E89B372FC4E18C10FDD1E060, /*hidden argument*/NULL);
		NullCheck(L_31);
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_32;
		L_32 = GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3(L_31, /*hidden argument*/GameObject_GetComponent_TisspectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3_mD198C8C4CD873B2A6B9D298111767D8575A39AB3_RuntimeMethod_var);
		NullCheck(L_30);
		L_30->set_spectrumColor_5(L_32);
		// spectrumColor.setMap();
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_33 = V_1;
		NullCheck(L_33);
		spectrumColormap_t5C5E350892C83F7315521EB482DD0DB0021D21C3 * L_34 = L_33->get_spectrumColor_5();
		NullCheck(L_34);
		spectrumColormap_setMap_mC8B5DCF6AD7EBB5B0E4149914C7C5213C8E2B731(L_34, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_35 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_35, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_013e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		int32_t L_36 = __this->get_U3CklatkaU3E5__5_6();
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->set_U3CklatkaU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_0155:
	{
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		int32_t L_38 = __this->get_U3CklatkaU3E5__5_6();
		int32_t L_39 = __this->get_U3Cl_klatekU3E5__4_5();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00ee;
		}
	}

IL_0163:
	{
		// if(flagBuff == 3)
		int32_t L_40 = __this->get_U3CflagBuffU3E5__2_3();
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_01ea;
		}
	}
	{
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		__this->set_U3CklatkaU3E5__5_6(1);
		goto IL_01dc;
	}

IL_0175:
	{
		// readS.getImage(path, klatka);
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_41 = V_1;
		NullCheck(L_41);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_42 = L_41->get_readS_4();
		String_t* L_43 = __this->get_U3CpathU3E5__3_4();
		int32_t L_44 = __this->get_U3CklatkaU3E5__5_6();
		NullCheck(L_42);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_42, L_43, L_44, /*hidden argument*/NULL);
		// ironColor = GameObject.FindGameObjectWithTag("TagIron").GetComponent<ironColormap>();
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_45 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral66357977DCD95AD2E7C2BB590B85A3A0D36B7A11, /*hidden argument*/NULL);
		NullCheck(L_46);
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_47;
		L_47 = GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219(L_46, /*hidden argument*/GameObject_GetComponent_TisironColormap_t531053161E288F47B725085D597D8756D5DA6D38_m30F493E74149B6F645237DDEBB117E8F6AF30219_RuntimeMethod_var);
		NullCheck(L_45);
		L_45->set_ironColor_6(L_47);
		// ironColor.setMapIron();
		allFrames_t85CDE6CCF1990EA7FAC1D62430ADD82E3BA713FC * L_48 = V_1;
		NullCheck(L_48);
		ironColormap_t531053161E288F47B725085D597D8756D5DA6D38 * L_49 = L_48->get_ironColor_6();
		NullCheck(L_49);
		ironColormap_setMapIron_m848AF0F9250FF10FD86E2F7D386F0CADD696367B(L_49, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_50 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_50, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01c5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		int32_t L_51 = __this->get_U3CklatkaU3E5__5_6();
		V_2 = L_51;
		int32_t L_52 = V_2;
		__this->set_U3CklatkaU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
	}

IL_01dc:
	{
		// for(int klatka = 1; klatka < l_klatek; klatka++)
		int32_t L_53 = __this->get_U3CklatkaU3E5__5_6();
		int32_t L_54 = __this->get_U3Cl_klatekU3E5__4_5();
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0175;
		}
	}

IL_01ea:
	{
		// }
		return (bool)0;
	}
}
// System.Object allFrames/<startPlay>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartPlayU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m960AF18256043FF8AEFD9059D62576A4A9BE8613 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void allFrames/<startPlay>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartPlayU3Ed__4_System_Collections_IEnumerator_Reset_m34ACAF49DCCA72F46486C4AF4CE9F9AEE26E83B5 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CstartPlayU3Ed__4_System_Collections_IEnumerator_Reset_m34ACAF49DCCA72F46486C4AF4CE9F9AEE26E83B5_RuntimeMethod_var)));
	}
}
// System.Object allFrames/<startPlay>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartPlayU3Ed__4_System_Collections_IEnumerator_get_Current_mA94BA31AD78CD7354B777C0FC67C2717C3D7EC23 (U3CstartPlayU3Ed__4_t98E2616DCBF5094A850D6065F1B8C1E6C947F985 * __this, const RuntimeMethod* method)
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
// System.Void fileManager/<<OpenFileBrowser>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_MoveNext_mBF9E2129DB7B5E401C1A7AC56D8D9E0E9AD19A02 (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mCEA340209DB3D66F72A69CC74643E9A2643CB974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3COpenFileBrowserU3Eb__1_m8DCC5CEE05AC5A6BE2B66CC90B7EE94554094015_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * V_1 = NULL;
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * V_2 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0097;
			}
		}

IL_0014:
		{
			U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * L_3 = (U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass2_0__ctor_mEDF540E1D94C5A1460706D3030B4A0B8E32D4519(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_3(L_3);
			U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * L_4 = __this->get_U3CU3E8__1_3();
			fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_5 = V_1;
			NullCheck(L_4);
			L_4->set_U3CU3E4__this_1(L_5);
			// var filepicker = new FileOpenPicker();
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_6 = (FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF *)il2cpp_codegen_object_new(FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_il2cpp_TypeInfo_var);
			FileOpenPicker__ctor_m1ED648D3308B6E8D27B3000C228C071F24BE5278(L_6, /*hidden argument*/NULL);
			// filepicker.FileTypeFilter.Add(".jpg");
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_7 = L_6;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_8, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
			// filepicker.FileTypeFilter.Add(".jpeg");
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_9 = L_7;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_10, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
			// filepicker.FileTypeFilter.Add(".png");
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_11 = L_9;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_12, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
			// var file = await filepicker.PickSingleFileAsync();
			NullCheck(L_11);
			RuntimeObject* L_13;
			L_13 = FileOpenPicker_PickSingleFileAsync_m1B9DBF6AD5FCA507A10EC65F4C61D60786309FB8(L_11, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_14;
			L_14 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_13, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_3 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00b3;
			}
		}

IL_0074:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_17 = V_3;
			__this->set_U3CU3Eu__1_4(L_17);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mCEA340209DB3D66F72A69CC74643E9A2643CB974((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B_mCEA340209DB3D66F72A69CC74643E9A2643CB974_RuntimeMethod_var);
			goto IL_011a;
		}

IL_0097:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_19 = __this->get_U3CU3Eu__1_4();
			V_3 = L_19;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_20 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_00b3:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_22;
			L_22 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			V_2 = L_22;
			U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * L_23 = __this->get_U3CU3E8__1_3();
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_24 = V_2;
			NullCheck(L_23);
			L_23->set_file_0(L_24);
			// UnityEngine.WSA.Application.InvokeOnAppThread(() =>
			// {
			//     path = (file != null) ? file.Path : "No data";
			// 
			//     StartCoroutine(LoadImage(path));
			// 
			// }, false);
			U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * L_25 = __this->get_U3CU3E8__1_3();
			AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_26 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
			AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3COpenFileBrowserU3Eb__1_m8DCC5CEE05AC5A6BE2B66CC90B7EE94554094015_RuntimeMethod_var), /*hidden argument*/NULL);
			Application_InvokeOnAppThread_m2CCF5404E2DB2740277299D0DB455C895AF0053B(L_26, (bool)0, /*hidden argument*/NULL);
			goto IL_0100;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e0;
		}
		throw e;
	}

CATCH_00e0:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_27, L_28, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011a;
	} // end catch (depth: 1)

IL_0100:
	{
		// }, false);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_29, /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_MoveNext_mBF9E2129DB7B5E401C1A7AC56D8D9E0E9AD19A02_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * _thisAdjusted = reinterpret_cast<U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *>(__this + _offset);
	U3CU3COpenFileBrowserU3Eb__2_0U3Ed_MoveNext_mBF9E2129DB7B5E401C1A7AC56D8D9E0E9AD19A02(_thisAdjusted, method);
}
// System.Void fileManager/<<OpenFileBrowser>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_SetStateMachine_mFDC1150A09906D03C15206835F192C58A3EBA7F0 (U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3COpenFileBrowserU3Eb__2_0U3Ed_SetStateMachine_mFDC1150A09906D03C15206835F192C58A3EBA7F0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B * _thisAdjusted = reinterpret_cast<U3CU3COpenFileBrowserU3Eb__2_0U3Ed_tE947271801251E0AD26FFE3ACF4C7E8B2823773B *>(__this + _offset);
	U3CU3COpenFileBrowserU3Eb__2_0U3Ed_SetStateMachine_mFDC1150A09906D03C15206835F192C58A3EBA7F0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void fileManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mEDF540E1D94C5A1460706D3030B4A0B8E32D4519 (U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void fileManager/<>c__DisplayClass2_0::<OpenFileBrowser>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COpenFileBrowserU3Eb__1_m8DCC5CEE05AC5A6BE2B66CC90B7EE94554094015 (U3CU3Ec__DisplayClass2_0_t4A6DD620AC7135861B2001757D2C75A6687C1264 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		s_Il2CppMethodInitialized = true;
	}
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * G_B2_0 = NULL;
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * G_B3_1 = NULL;
	{
		// path = (file != null) ? file.Path : "No data";
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_0 = __this->get_U3CU3E4__this_1();
		StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_1 = __this->get_file_0();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0015:
	{
		StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_2 = __this->get_file_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = StorageFile_get_Path_m4A58E7365AAD2A3771DFC04915F54014B8CEE48B(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_path_5(G_B3_0);
		// StartCoroutine(LoadImage(path));
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_4 = __this->get_U3CU3E4__this_1();
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_5 = __this->get_U3CU3E4__this_1();
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_6 = __this->get_U3CU3E4__this_1();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_path_5();
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = fileManager_LoadImage_m8F13C804B4B05A5C337F71DB04F5EA1219D9BDD3(L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_8, /*hidden argument*/NULL);
		// }, false);
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
// System.Void fileManager/<LoadImage>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__3__ctor_m52710F2EF2539CBC7E039D1CAD26592E1C170800 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void fileManager/<LoadImage>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__3_System_IDisposable_Dispose_m0BA0E03536AA4587014F11B0945F02C754B53509 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean fileManager/<LoadImage>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__3_MoveNext_m24CD8C11FBB1DBBC52DAC7F467E05AC1A15D38D7 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * V_1 = NULL;
	WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWW www = new WWW("file:///" + path);
		String_t* L_4 = __this->get_path_2();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral876BA9D37F5B3B86B1953A81D0C931AE6AFB2BED, L_4, /*hidden argument*/NULL);
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_6 = (WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 *)il2cpp_codegen_object_new(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_il2cpp_TypeInfo_var);
		WWW__ctor_mE77AD6C372CC76F48A893C5E2F91A81193A9F8C5(L_6, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// rawImage.texture = www.texture;
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_7 = V_1;
		NullCheck(L_7);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_8 = L_7->get_rawImage_4();
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_9 = V_2;
		NullCheck(L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10;
		L_10 = WWW_get_texture_mC23FF88883698F3E6F7BED2733A2DB3B18F788E4(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_8, L_10, /*hidden argument*/NULL);
		// int wth = rawImage.texture.width;
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_11 = V_1;
		NullCheck(L_11);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_12 = L_11->get_rawImage_4();
		NullCheck(L_12);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_13;
		L_13 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		V_3 = L_14;
		// int hgt = rawImage.texture.height;
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_15 = V_1;
		NullCheck(L_15);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_16 = L_15->get_rawImage_4();
		NullCheck(L_16);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_17;
		L_17 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		V_4 = L_18;
		// rawImage.GetComponent<RectTransform>().sizeDelta = new Vector2(wth, hgt);
		fileManager_t18596C2DDBA4B32699F25D13F74267BC41CD3AD1 * L_19 = V_1;
		NullCheck(L_19);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_20 = L_19->get_rawImage_4();
		NullCheck(L_20);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21;
		L_21 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_20, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), ((float)((float)L_22)), ((float)((float)L_23)), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_21, L_24, /*hidden argument*/NULL);
		// yield return www;
		WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2 * L_25 = V_2;
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0092:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object fileManager/<LoadImage>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9EF61D11AFE1593CC621BC30CBA49165B2C71C3C (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void fileManager/<LoadImage>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__3_System_Collections_IEnumerator_Reset_mE0785474666BAC0CC8F1DDB7976EE3C7A142EAF7 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageU3Ed__3_System_Collections_IEnumerator_Reset_mE0785474666BAC0CC8F1DDB7976EE3C7A142EAF7_RuntimeMethod_var)));
	}
}
// System.Object fileManager/<LoadImage>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__3_System_Collections_IEnumerator_get_Current_m1DE81ABFFCC3805BA1FA8E6FF4ED935926431EB6 (U3CLoadImageU3Ed__3_tCF902FB2DE0861BF03DA26A085A364724B0B3276 * __this, const RuntimeMethod* method)
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
// System.Void seqFileManager/<<OpenFileBrowser>b__5_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_MoveNext_mB2C87AF64C8D42D16CFB03CF10D53D2B67CC728E (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m5773B48D5D2BA9C470F21D78E04D8E5DE5EA4922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenFileBrowserU3Eb__1_mA19057D73C61FBD7255530399F0593DBA745D1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00641DF40236E6544902EF8A59BE90ED4051B888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AF4815E826FA634347BE75DBC3BC09F7AF34928);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * V_1 = NULL;
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * V_2 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0084;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * L_3 = (U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass5_0__ctor_mC2BD3394DDC8510BBF2938D012C7780B5415DB2D(L_3, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_3(L_3);
			U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * L_4 = __this->get_U3CU3E8__1_3();
			seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_5 = V_1;
			NullCheck(L_4);
			L_4->set_U3CU3E4__this_1(L_5);
			// var filepicker = new FileOpenPicker();
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_6 = (FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF *)il2cpp_codegen_object_new(FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF_il2cpp_TypeInfo_var);
			FileOpenPicker__ctor_m1ED648D3308B6E8D27B3000C228C071F24BE5278(L_6, /*hidden argument*/NULL);
			// filepicker.FileTypeFilter.Add(".seq");
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_7 = L_6;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_8, _stringLiteral6AF4815E826FA634347BE75DBC3BC09F7AF34928);
			// filepicker.FileTypeFilter.Add(".raw");
			FileOpenPicker_t913A153D28837724A6A90DAA20DA3D6EB69403DF * L_9 = L_7;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = FileOpenPicker_get_FileTypeFilter_m4AC4FF0F5AC06F48CA3FDB8166BDF28B1286719F(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_10, _stringLiteral00641DF40236E6544902EF8A59BE90ED4051B888);
			// var file = await filepicker.PickSingleFileAsync();
			NullCheck(L_9);
			RuntimeObject* L_11;
			L_11 = FileOpenPicker_PickSingleFileAsync_m1B9DBF6AD5FCA507A10EC65F4C61D60786309FB8(L_9, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_12;
			L_12 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_11, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_0061:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_15 = V_3;
			__this->set_U3CU3Eu__1_4(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m5773B48D5D2BA9C470F21D78E04D8E5DE5EA4922((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA_m5773B48D5D2BA9C470F21D78E04D8E5DE5EA4922_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0084:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_17 = __this->get_U3CU3Eu__1_4();
			V_3 = L_17;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_18 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a0:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_20;
			L_20 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			V_2 = L_20;
			U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * L_21 = __this->get_U3CU3E8__1_3();
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_22 = V_2;
			NullCheck(L_21);
			L_21->set_file_0(L_22);
			// UnityEngine.WSA.Application.InvokeOnAppThread(() =>
			// {
			// 
			//     path = (file != null) ? file.Path : "No data";
			//     readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
			//     readS.getImage(path, nr_klatki);
			//     textLoad.text="WCZYTANO PLIK SEQ";
			//     textPath.text = path;
			// 
			// 
			// }, false);
			U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * L_23 = __this->get_U3CU3E8__1_3();
			AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_24 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
			AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COpenFileBrowserU3Eb__1_mA19057D73C61FBD7255530399F0593DBA745D1A9_RuntimeMethod_var), /*hidden argument*/NULL);
			Application_InvokeOnAppThread_m2CCF5404E2DB2740277299D0DB455C895AF0053B(L_24, (bool)0, /*hidden argument*/NULL);
			goto IL_00ed;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0107;
	} // end catch (depth: 1)

IL_00ed:
	{
		// }, false);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 *)NULL);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_27, /*hidden argument*/NULL);
	}

IL_0107:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_MoveNext_mB2C87AF64C8D42D16CFB03CF10D53D2B67CC728E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * _thisAdjusted = reinterpret_cast<U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *>(__this + _offset);
	U3CU3COpenFileBrowserU3Eb__5_0U3Ed_MoveNext_mB2C87AF64C8D42D16CFB03CF10D53D2B67CC728E(_thisAdjusted, method);
}
// System.Void seqFileManager/<<OpenFileBrowser>b__5_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_SetStateMachine_m8DCFBDBC39CD9120B8AEB0A46DC932347D759095 (U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3COpenFileBrowserU3Eb__5_0U3Ed_SetStateMachine_m8DCFBDBC39CD9120B8AEB0A46DC932347D759095_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA * _thisAdjusted = reinterpret_cast<U3CU3COpenFileBrowserU3Eb__5_0U3Ed_tB07A8879186FC8A9CF83FC1190CD07D6B5D25ABA *>(__this + _offset);
	U3CU3COpenFileBrowserU3Eb__5_0U3Ed_SetStateMachine_m8DCFBDBC39CD9120B8AEB0A46DC932347D759095(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void seqFileManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mC2BD3394DDC8510BBF2938D012C7780B5415DB2D (U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void seqFileManager/<>c__DisplayClass5_0::<OpenFileBrowser>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COpenFileBrowserU3Eb__1_mA19057D73C61FBD7255530399F0593DBA745D1A9 (U3CU3Ec__DisplayClass5_0_t93CC6C324AC46949227A85A5D5C0CCF1B96AEA65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B37489359EFEFC3A2EE4A6D6FDACADD9DA8BE7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605);
		s_Il2CppMethodInitialized = true;
	}
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * G_B2_0 = NULL;
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * G_B3_1 = NULL;
	{
		// path = (file != null) ? file.Path : "No data";
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_0 = __this->get_U3CU3E4__this_1();
		StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_1 = __this->get_file_0();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0015:
	{
		StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_2 = __this->get_file_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = StorageFile_get_Path_m4A58E7365AAD2A3771DFC04915F54014B8CEE48B(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_path_4(G_B3_0);
		// readS = GameObject.FindGameObjectWithTag("TagSeq").GetComponent<readSeq>();
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_4 = __this->get_U3CU3E4__this_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD3C2C45A94D1BB6EADD58F453841BFD54E215605, /*hidden argument*/NULL);
		NullCheck(L_5);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_6;
		L_6 = GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2(L_5, /*hidden argument*/GameObject_GetComponent_TisreadSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6_mE21EB334F0F8C33C0FF5D6DAA206B9FF07D1CAD2_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_readS_8(L_6);
		// readS.getImage(path, nr_klatki);
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_7 = __this->get_U3CU3E4__this_1();
		NullCheck(L_7);
		readSeq_t7C53CC8BFAD145301CE30EBD7511E5C3CBEC83C6 * L_8 = L_7->get_readS_8();
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_9 = __this->get_U3CU3E4__this_1();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_path_4();
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_11 = __this->get_U3CU3E4__this_1();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_nr_klatki_5();
		NullCheck(L_8);
		readSeq_getImage_m8D919380AD6375E437F0701CBA62016A7EE63F90(L_8, L_10, L_12, /*hidden argument*/NULL);
		// textLoad.text="WCZYTANO PLIK SEQ";
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_13 = __this->get_U3CU3E4__this_1();
		NullCheck(L_13);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = L_13->get_textLoad_6();
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral9B37489359EFEFC3A2EE4A6D6FDACADD9DA8BE7D);
		// textPath.text = path;
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_15 = __this->get_U3CU3E4__this_1();
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_textPath_7();
		seqFileManager_t2FE27E9E2C4C9EC87848F5192E9017960CB28674 * L_17 = __this->get_U3CU3E4__this_1();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_path_4();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		// }, false);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method)
{
	{
		// return m_Texture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_m_Texture_36();
		return L_0;
	}
}

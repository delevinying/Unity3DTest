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

// CameraController
struct CameraController_t3555666667;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3555666667.h"
#include "AssemblyU2DCSharp_CameraController3555666667MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "AssemblyU2DCSharp_PlayerController4148409433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m3279944138 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m2156540118 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_player_2();
		NullCheck(L_2);
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m2583016047 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_1 = __this->get_player_2();
		NullCheck(L_1);
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = __this->get_offset_3();
		Vector3_t2243707580  L_5 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m2469242620(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t PlayerController_Start_m3606284888_MetadataUsageId;
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m3606284888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		__this->set_rb_3(L_0);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern const uint32_t PlayerController_FixedUpdate_m1756102567_MetadataUsageId;
extern "C"  void PlayerController_FixedUpdate_m1756102567 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m1756102567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2638739322((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_4 = __this->get_rb_3();
		Vector3_t2243707580  L_5 = V_2;
		float L_6 = __this->get_speed_2();
		Vector3_t2243707580  L_7 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_m2836187433(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

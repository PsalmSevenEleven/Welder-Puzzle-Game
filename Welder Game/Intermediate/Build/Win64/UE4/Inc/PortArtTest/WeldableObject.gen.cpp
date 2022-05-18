// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortArtTest/Public/WeldableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeldableObject() {}
// Cross Module References
	PORTARTTEST_API UClass* Z_Construct_UClass_AWeldableObject_NoRegister();
	PORTARTTEST_API UClass* Z_Construct_UClass_AWeldableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PortArtTest();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeldableObject::execSetAsMainParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsMainParent();
		P_NATIVE_END;
	}
	static FName NAME_AWeldableObject_ReverseChain = FName(TEXT("ReverseChain"));
	void AWeldableObject::ReverseChain()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeldableObject_ReverseChain),NULL);
	}
	static FName NAME_AWeldableObject_Weld_Implementation = FName(TEXT("Weld_Implementation"));
	void AWeldableObject::Weld_Implementation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeldableObject_Weld_Implementation),NULL);
	}
	void AWeldableObject::StaticRegisterNativesAWeldableObject()
	{
		UClass* Class = AWeldableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAsMainParent", &AWeldableObject::execSetAsMainParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meep" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeldableObject, nullptr, "ReverseChain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeldableObject_ReverseChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeldableObject_ReverseChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeldableObject, nullptr, "SetAsMainParent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeldableObject_SetAsMainParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeldableObject_SetAsMainParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meep" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeldableObject, nullptr, "Weld_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeldableObject_Weld_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeldableObject_Weld_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeldableObject_NoRegister()
	{
		return AWeldableObject::StaticClass();
	}
	struct Z_Construct_UClass_AWeldableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeldChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeldChildren_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanMove_MetaData[];
#endif
		static void NewProp_CanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedWeldables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TouchedWeldables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedWeldables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeldParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conglomerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conglomerate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conglomerate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levitating_MetaData[];
#endif
		static void NewProp_Levitating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Levitating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConglomerateObjTouching_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConglomerateObjTouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeldableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PortArtTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeldableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeldableObject_ReverseChain, "ReverseChain" }, // 216756374
		{ &Z_Construct_UFunction_AWeldableObject_SetAsMainParent, "SetAsMainParent" }, // 813977155
		{ &Z_Construct_UFunction_AWeldableObject_Weld_Implementation, "Weld_Implementation" }, // 3149221308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeldableObject.h" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren = { "WeldChildren", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, WeldChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren_Inner = { "WeldChildren", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeldableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	void Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((AWeldableObject*)Obj)->CanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeldableObject), &Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables = { "TouchedWeldables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, TouchedWeldables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables_Inner = { "TouchedWeldables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeldableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldParent_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldParent = { "WeldParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, WeldParent), Z_Construct_UClass_AWeldableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate = { "Conglomerate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, Conglomerate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate_Inner = { "Conglomerate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWeldableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	void Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating_SetBit(void* Obj)
	{
		((AWeldableObject*)Obj)->Levitating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating = { "Levitating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeldableObject), &Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_ConglomerateObjTouching_MetaData[] = {
		{ "Category", "Welding" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_ConglomerateObjTouching = { "ConglomerateObjTouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, ConglomerateObjTouching), Z_Construct_UClass_AWeldableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_ConglomerateObjTouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_ConglomerateObjTouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeldableObject_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeldableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeldableObject_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeldableObject, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeldableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldChildren_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_CanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_TouchedWeldables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_WeldParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_Conglomerate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_Levitating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_ConglomerateObjTouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeldableObject_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeldableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeldableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeldableObject_Statics::ClassParams = {
		&AWeldableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeldableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeldableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeldableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeldableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeldableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeldableObject, 2716897348);
	template<> PORTARTTEST_API UClass* StaticClass<AWeldableObject>()
	{
		return AWeldableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeldableObject(Z_Construct_UClass_AWeldableObject, &AWeldableObject::StaticClass, TEXT("/Script/PortArtTest"), TEXT("AWeldableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeldableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

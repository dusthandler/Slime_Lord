// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFMODEventInstance;
struct FTransform;
class UFMODVCA;
class UFMODBus;
class UObject;
class UFMODEvent;
class UFMODBank;
class UFMODAsset;
class USceneComponent;
struct FVector;
class UFMODAudioComponent;
#ifdef FMODSTUDIO_FMODBlueprintStatics_generated_h
#error "FMODBlueprintStatics.generated.h already included, missing '#pragma once' in FMODBlueprintStatics.h"
#endif
#define FMODSTUDIO_FMODBlueprintStatics_generated_h

#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODEventInstance_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODEventInstance>();

#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_SPARSE_DATA
#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Locale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetLocale(Z_Param_Locale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMixerResume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::MixerResume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMixerSuspend) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::MixerSuspend(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputDriverByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewDriverIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetOutputDriverByIndex(Z_Param_NewDriverIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputDriverByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewDriverName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetOutputDriverByName(Z_Param_NewDriverName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputDrivers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFMODBlueprintStatics::GetOutputDrivers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetTransform) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetTransform(Z_Param_EventInstance,Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceTriggerCue) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceTriggerCue(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceRelease) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceRelease(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceStop) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_UBOOL(Z_Param_Release); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceStop(Z_Param_EventInstance,Z_Param_Release); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstancePlay) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstancePlay(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetProperty) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetProperty(Z_Param_EventInstance,EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UserValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FinalValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceGetParameterValue(Z_Param_EventInstance,Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceGetParameter) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceGetParameter(Z_Param_EventInstance,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetParameter) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetParameter(Z_Param_EventInstance,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetPaused) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_UBOOL(Z_Param_Paused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetPaused(Z_Param_EventInstance,Z_Param_Paused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetPitch) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetPitch(Z_Param_EventInstance,Z_Param_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetVolume) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetVolume(Z_Param_EventInstance,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceIsValid) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceIsValid(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UserValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FinalValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::GetGlobalParameterValueByName(Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalParameterByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFMODBlueprintStatics::GetGlobalParameterByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalParameterByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetGlobalParameterByName(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVCASetVolume) \
	{ \
		P_GET_OBJECT(UFMODVCA,Z_Param_Vca); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::VCASetVolume(Z_Param_Vca,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusStopAllEvents) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_PROPERTY(UByteProperty,Z_Param_stopMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusStopAllEvents(Z_Param_Bus,EFMOD_STUDIO_STOP_MODE(Z_Param_stopMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetMute) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_UBOOL(Z_Param_bMute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetMute(Z_Param_Bus,Z_Param_bMute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetPaused) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_UBOOL(Z_Param_bPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetPaused(Z_Param_Bus,Z_Param_bPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetVolume) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetVolume(Z_Param_Bus,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEventInstances) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFMODEventInstance>*)Z_Param__Result=UFMODBlueprintStatics::FindEventInstances(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadEventSampleData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadEventSampleData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBankSampleData) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadBankSampleData(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBankSampleData) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadBankSampleData(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBankLoaded) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFMODBlueprintStatics::IsBankLoaded(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBank) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadBank(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBank) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_GET_UBOOL(Z_Param_bBlocking); \
		P_GET_UBOOL(Z_Param_bLoadSampleData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadBank(Z_Param_Bank,Z_Param_bBlocking,Z_Param_bLoadSampleData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODEvent**)Z_Param__Result=UFMODBlueprintStatics::FindEventByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAssetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODAsset**)Z_Param__Result=UFMODBlueprintStatics::FindAssetByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEventAttached) \
	{ \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODAudioComponent**)Z_Param__Result=UFMODBlueprintStatics::PlayEventAttached(Z_Param_Event,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoPlay,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEventAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEventAtLocation(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_Out_Location,Z_Param_bAutoPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEvent2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEvent2D(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_bAutoPlay); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Locale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetLocale(Z_Param_Locale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMixerResume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::MixerResume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMixerSuspend) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::MixerSuspend(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputDriverByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewDriverIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetOutputDriverByIndex(Z_Param_NewDriverIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputDriverByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewDriverName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetOutputDriverByName(Z_Param_NewDriverName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputDrivers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFMODBlueprintStatics::GetOutputDrivers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetTransform) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetTransform(Z_Param_EventInstance,Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceTriggerCue) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceTriggerCue(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceRelease) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceRelease(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceStop) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_UBOOL(Z_Param_Release); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceStop(Z_Param_EventInstance,Z_Param_Release); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstancePlay) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstancePlay(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetProperty) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetProperty(Z_Param_EventInstance,EFMODEventProperty::Type(Z_Param_Property),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UserValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FinalValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceGetParameterValue(Z_Param_EventInstance,Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceGetParameter) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceGetParameter(Z_Param_EventInstance,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetParameter) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetParameter(Z_Param_EventInstance,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetPaused) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_UBOOL(Z_Param_Paused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetPaused(Z_Param_EventInstance,Z_Param_Paused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetPitch) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetPitch(Z_Param_EventInstance,Z_Param_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceSetVolume) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::EventInstanceSetVolume(Z_Param_EventInstance,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEventInstanceIsValid) \
	{ \
		P_GET_STRUCT(FFMODEventInstance,Z_Param_EventInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFMODBlueprintStatics::EventInstanceIsValid(Z_Param_EventInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UserValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FinalValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::GetGlobalParameterValueByName(Z_Param_Name,Z_Param_Out_UserValue,Z_Param_Out_FinalValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalParameterByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFMODBlueprintStatics::GetGlobalParameterByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalParameterByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::SetGlobalParameterByName(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVCASetVolume) \
	{ \
		P_GET_OBJECT(UFMODVCA,Z_Param_Vca); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::VCASetVolume(Z_Param_Vca,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusStopAllEvents) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_PROPERTY(UByteProperty,Z_Param_stopMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusStopAllEvents(Z_Param_Bus,EFMOD_STUDIO_STOP_MODE(Z_Param_stopMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetMute) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_UBOOL(Z_Param_bMute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetMute(Z_Param_Bus,Z_Param_bMute); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetPaused) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_UBOOL(Z_Param_bPaused); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetPaused(Z_Param_Bus,Z_Param_bPaused); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBusSetVolume) \
	{ \
		P_GET_OBJECT(UFMODBus,Z_Param_Bus); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::BusSetVolume(Z_Param_Bus,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEventInstances) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFMODEventInstance>*)Z_Param__Result=UFMODBlueprintStatics::FindEventInstances(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadEventSampleData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadEventSampleData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadEventSampleData(Z_Param_WorldContextObject,Z_Param_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBankSampleData) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadBankSampleData(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBankSampleData) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadBankSampleData(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBankLoaded) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFMODBlueprintStatics::IsBankLoaded(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadBank) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::UnloadBank(Z_Param_Bank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadBank) \
	{ \
		P_GET_OBJECT(UFMODBank,Z_Param_Bank); \
		P_GET_UBOOL(Z_Param_bBlocking); \
		P_GET_UBOOL(Z_Param_bLoadSampleData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFMODBlueprintStatics::LoadBank(Z_Param_Bank,Z_Param_bBlocking,Z_Param_bLoadSampleData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODEvent**)Z_Param__Result=UFMODBlueprintStatics::FindEventByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindAssetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODAsset**)Z_Param__Result=UFMODBlueprintStatics::FindAssetByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEventAttached) \
	{ \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AttachPointName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocationType); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_GET_UBOOL(Z_Param_bAutoDestroy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFMODAudioComponent**)Z_Param__Result=UFMODBlueprintStatics::PlayEventAttached(Z_Param_Event,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoPlay,Z_Param_bAutoDestroy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEventAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Location); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEventAtLocation(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_Out_Location,Z_Param_bAutoPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayEvent2D) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UFMODEvent,Z_Param_Event); \
		P_GET_UBOOL(Z_Param_bAutoPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFMODEventInstance*)Z_Param__Result=UFMODBlueprintStatics::PlayEvent2D(Z_Param_WorldContextObject,Z_Param_Event,Z_Param_bAutoPlay); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
public: \
	DECLARE_CLASS(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
public: \
	DECLARE_CLASS(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODBlueprintStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODBlueprintStatics(UFMODBlueprintStatics&&); \
	NO_API UFMODBlueprintStatics(const UFMODBlueprintStatics&); \
public:


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODBlueprintStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODBlueprintStatics(UFMODBlueprintStatics&&); \
	NO_API UFMODBlueprintStatics(const UFMODBlueprintStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODBlueprintStatics)


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_41_PROLOG
#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_SPARSE_DATA \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_RPC_WRAPPERS \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_INCLASS \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_SPARSE_DATA \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h_44_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FMODBlueprintStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODBlueprintStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBlueprintStatics_h


#define FOREACH_ENUM_EFMOD_STUDIO_STOP_MODE(op) \
	op(ALLOWFADEOUT) \
	op(IMMEDIATE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

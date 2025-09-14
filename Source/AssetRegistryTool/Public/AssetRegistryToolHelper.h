#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetRegistryState.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Json.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "AssetRegistryToolCommandlet.h"

class FAssetRegistryToolHelper
{
public:
    // ����ָ��·����AssetRegistry
    static bool LoadRegistry(const FString& Path, FAssetRegistryState& OutState);

    // �г������ʲ�
    static int32 RunList(const TMap<FString, FString>& Params, const TArray<FString>& Switches);

    // �ϲ�AssetRegistry
    static int32 RunMerge(const TMap<FString, FString>& Params, const TArray<FString>& Switches);
};

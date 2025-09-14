#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"
#include "Commandlets/Commandlet.h"
#include "AssetRegistryToolCommandlet.generated.h"

// ��־�������
DECLARE_LOG_CATEGORY_EXTERN(LogAssetRegistryTool, Log, All);

/**
 * Commandlet ���
 * �÷�:
 *   AssetRegistryTool List -AssetRegistry=Path/To/AssetRegistry.bin [-OutFile=Export.csv] [-Verbose]
 *   AssetRegistryTool Merge -HostAssetRegistry=Host.bin -AssetRegistry=Donor.bin -OutputAssetRegistry=Out.bin [-OverwriteExistingAssets]
 *   ��ѡ���˲���:
 *     -FilterClass=Blueprint[,Material,...]
 *     -FilterPaths=/Game/Path1[,/Game/Path2]
 *     -NoRecursivePaths
 */
UCLASS()
class UAssetRegistryToolCommandlet : public UCommandlet
{
    GENERATED_BODY()

public:
    virtual int32 Main(const FString& Params) override;
};

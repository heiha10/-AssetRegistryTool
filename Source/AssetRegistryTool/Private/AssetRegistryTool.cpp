#include "AssetRegistryTool.h"
#include "Modules/ModuleManager.h"

// 模块类定义
class FAssetRegistryToolModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        // 模块加载时调用
        UE_LOG(LogTemp, Log, TEXT("AssetRegistryTool module has started."));
    }

    virtual void ShutdownModule() override
    {
        // 模块卸载时调用
        UE_LOG(LogTemp, Log, TEXT("AssetRegistryTool module has shut down."));
    }
};

// 注册模块
IMPLEMENT_MODULE(FAssetRegistryToolModule, AssetRegistryTool)

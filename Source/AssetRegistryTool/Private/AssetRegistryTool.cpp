#include "AssetRegistryTool.h"
#include "Modules/ModuleManager.h"

// ģ���ඨ��
class FAssetRegistryToolModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        // ģ�����ʱ����
        UE_LOG(LogTemp, Log, TEXT("AssetRegistryTool module has started."));
    }

    virtual void ShutdownModule() override
    {
        // ģ��ж��ʱ����
        UE_LOG(LogTemp, Log, TEXT("AssetRegistryTool module has shut down."));
    }
};

// ע��ģ��
IMPLEMENT_MODULE(FAssetRegistryToolModule, AssetRegistryTool)

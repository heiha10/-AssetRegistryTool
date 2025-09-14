# AssetRegistryTool
UE 5.4.4 AssetRegistry.bin 合并工具（merge）

合并两个 AssetRegistry.bin 的插件，需要新建一个c++的UE5.4.4的工程，将插件源码放到Plugins 右击工程文件，生成VS工程，使用VS2022 编译生成插件

代码使用Chatgpt生成，不懂代码，完全有AI生成测试的，可能会有BUG。已测试游戏 IntoTheRadius2 目前可用，至于其他的 UE5 的游戏是否可用自行测试。本人不懂代码，有问题自行解决。

使用方法 
进入你的引擎目录下的xxx\Engine\Binaries\Win64 目录下 用cmd或者powershell运行下方的命令 具体目录自行修改


导出json

.\UnrealEditor-Cmd.exe  "xxxxx/xxxx.uproject" -run=AssetRegistryTool List -AssetRegistry="xxxx/AssetRegistry.bin"  -OutFile="xxx/AssetRegistryout.json" 



合并  （-FilterPaths="/Game/L10N" 为合并指定目录下的资产） 不添加此设置 host没有的资产默认全部合并进去

.\UnrealEditor-Cmd.exe  "xxxxx/xxxx.uproject.uproject" -run=AssetRegistryTool Merge  -HostAssetRegistry="xxxxx/AssetRegistry.bin" -AssetRegistry="xxxxx/AssetRegistry.bin"   -OutputAssetRegistry="xxxxx/AssetRegistryout.bin"  -FilterPaths="/Game/L10N" 




-OverwriteExistingAssets 此设置会强制覆盖host的原有的同名同路径的资产。

其他的功能未测试。

勉强可用。

如遇到问题自行丢给AI或者懂代码的人去解决~

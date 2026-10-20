#ifndef __AK_PLATFORM_CONTEXT_LINUX_H__
#define __AK_PLATFORM_CONTEXT_LINUX_H__

#include <AK/SoundEngine/Common/IAkPlatformContext.h>
#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    class IAkLinuxContext : public IAkPlatformContext
    {
    public:
        virtual bool UsePulseAudioServerInfo() = 0;
        virtual const char* GetStreamName(AkDeviceID deviceID = 0) = 0;
        virtual AkUInt32 GetChannelCount(AkDeviceID deviceID = 0) = 0;
        virtual void SetSinkInitialized(bool isInitialized) = 0;

        virtual bool IsPluginSupported(AkPluginID pluginID) = 0;
        virtual bool IsStreamReady(AkPluginID pluginID) = 0;
        virtual const char* GetStreamName(AkPluginID pluginID, AkDeviceID deviceID) = 0;
        virtual AkUInt32 GetChannelCount(AkPluginID pluginID, AkDeviceID deviceID) = 0;
        virtual void SetSinkInitialized(AkPluginID pluginID, bool isInitialized) = 0;
    };
}

#endif //__AK_PLATFORM_CONTEXT_LINUX_H__

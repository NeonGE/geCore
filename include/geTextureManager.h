/*****************************************************************************/
/**
 * @file    geTextureManager.h
 * @author  Samuel Prince (samuel.prince.quezada@gmail.com)
 * @date    2025/07/15
 * @brief   Texture Manager System.
 *
 * Texture Manager System that handles the loading, unloading, and management
 * of textures in the rendering system.
 *
 * @bug	    No known bugs.
 */
/*****************************************************************************/
#pragma once

/*****************************************************************************/
/**
 * Includes
 */
/*****************************************************************************/
#include "gePrerequisitesCore.h"

#include <geModule.h>
#include <geDebug.h>

namespace geEngineSDK {

  class Texture;

  class GE_CORE_EXPORT TextureManager : public Module<TextureManager>
  {
   public:
    TextureManager() = default;
    ~TextureManager() = default;

    SPtr<Texture>
    load(const Path& filePath,
         bool* pbTestForAlpha = nullptr,
         bool useCacheIfAvailable = false);

    void
    reload(const Path& filePath);

    bool
    isLoaded(const Path& filePath);

    void
    garbageCollector();

    SIZE_T
    getMemoryUsage();

    bool
    isDefaultTexture(const WeakSPtr<Texture>& pTexture);

   protected:
    void
    onStartUp() override;

    void
    onShutDown() override;

    UnorderedMap<uint32, SPtr<Texture>> m_loadedTextures;
    Mutex m_mutex;

   public:
    //Textures created by the manager, we have this so they are not unloaded
    //by the garbage collector
    static SPtr<Texture> DEFAULT_ERROR;
    static SPtr<Texture> DEFAULT_TRANSPARENT;
    static SPtr<Texture> DEFAULT_BLACK;
    static SPtr<Texture> DEFAULT_WHITE;
    static SPtr<Texture> DEFAULT_NORMAL;
    static SPtr<Texture> DEFAULT_CHESS;
  };

  GE_LOG_CATEGORY(TextureManager, 200);
}

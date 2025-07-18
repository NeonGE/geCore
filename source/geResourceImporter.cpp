/*****************************************************************************/
/**
 * @file    geResourceImporter.cpp
 * @author  Samuel Prince (samuel.prince.quezada@gmail.com)
 * @date    2025/07/17
 * @brief   Resource Importer System.
 *
 * Resource Importer System. This system is responsible for importing resources
 * from various formats into the engine's resource format. It provides a way to
 * use register codecs to import resources and handle their conversion.
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
#include "geResourceImporter.h"
#include "geICodec.h"

#include <geDynLibManager.h>
#include <geFileSystem.h>

namespace geEngineSDK {
  
  GE_LOG_CATEGORY_IMPL(ResourceImporter);

  void
  ResourceImporter::onStartUp() {
    _loadCodecs();
  }

  void
  ResourceImporter::onShutDown() {

  }

  void
  ResourceImporter::_loadCodecs() {
    GE_ASSERT(g_dynLibManager().isStarted());

    //Load codecs from the plugins directory
    Path pluginsDir = FileSystem::getWorkingDirectoryPath() + "Plugins";
    
    if (pluginsDir.isDirectory()) {
      Vector<Path> files;
      Vector<Path> dirs;
      FileSystem::getChildren(pluginsDir, files, dirs);

      for (const auto& codecFile : files) {
        if(!StringUtil::match(codecFile.getExtension(), "DLL", false)) {
          continue; // Skip non-dll files
        }

        ICodec tmpCodec;
        tmpCodec.initFromFile(codecFile);

        //Register the codec and it's extensions
        //TODO
      }
    }
    else {
      GE_LOG(kWarning,
             ResourceImporter,
             "Plugins directory not found: {0}", pluginsDir.toString());
    }
  }
}

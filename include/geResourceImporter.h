/*****************************************************************************/
/**
 * @file    geResourceImporter.h
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
#include "gePrerequisitesCore.h"

#include <geModule.h>
#include <geDebug.h>

namespace geEngineSDK {

  class ICodec;

  class ResourceImporter : public Module<ResourceImporter>
  {
   public:
    ResourceImporter() = default;
    ~ResourceImporter() = default;
  
   protected:
    void
    onStartUp() override;
    
    void
    onShutDown() override;

   private:
    void
    _loadCodecs();

    Vector<SPtr<ICodec>> m_codecs; // List of codecs loaded by the importer
  };

  GE_LOG_CATEGORY(ResourceImporter, 600);

}

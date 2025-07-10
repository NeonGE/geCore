/*****************************************************************************/
/**
 * @file    geGraphicsInterfaces.h
 * @author  Samuel Prince (samuel.prince.quezada@gmail.com)
 * @date    2025/06/26
 * @brief   Graphics Interface to handle class herency and .
 *
 * Graphics Resource Interface. A graphics resource is a specific type of 
 * resource that is used in the rendering pipeline, such as textures, shaders,
 * or buffers.
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
#include "geResource.h"

namespace geEngineSDK {

  class GE_CORE_EXPORT GraphicsResource : public virtual Resource
  {
   public:
    virtual ~GraphicsResource() = default;

    virtual void*
    _getGraphicsResource() const = 0;
  };

  class GE_CORE_EXPORT GraphicsBuffer : public virtual GraphicsResource
  {
   public:
    virtual ~GraphicsBuffer() = default;

    virtual void*
    _getGraphicsBuffer() const = 0;
  };

}; // namespace geEngineSDK

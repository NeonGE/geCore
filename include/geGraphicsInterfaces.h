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
#include "geVertexDeclaration.h"

namespace geEngineSDK {

  class GE_CORE_EXPORT GraphicsResource : public Resource
  {
   public:
    virtual ~GraphicsResource() = default;

    virtual void*
    _getGraphicsResource() const = 0;
  };

  class GE_CORE_EXPORT GraphicsBuffer : public GraphicsResource
  {
   public:
    virtual ~GraphicsBuffer() = default;

    virtual void*
    _getGraphicsBuffer() const = 0;
  };

  class GE_CORE_EXPORT VertexBuffer : public GraphicsBuffer
  {
   public:
    virtual ~VertexBuffer() = default;

    virtual WeakSPtr<VertexDeclaration>
    getVertexDeclaration() const {
      return m_pVertexDeclaration;
    }

   protected:
    SPtr<VertexDeclaration> m_pVertexDeclaration;
  };

  class GE_CORE_EXPORT IndexBuffer : public GraphicsBuffer
  {
   public:
    virtual ~IndexBuffer() = default;

   protected:
    uint32 m_indexSize = 0; // Size of index in bytes
  };

}; // namespace geEngineSDK

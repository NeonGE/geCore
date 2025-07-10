/*****************************************************************************/
/**
 * @file    geGraphicsTypes.h
 * @author  Samuel Prince (samuel.prince.quezada@gmail.com)
 * @date    2025/06/26
 * @brief   Graphics objects types.
 *
 * Graphics objects types.
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

namespace geEngineSDK {

  //Forward declarations
  class Texture;

  //Structure for the description of the graphics device
  struct ADAPTER_DESC
  {
    WCHAR description[128];
    uint32 vendorId;
    uint32 deviceId;
    uint32 subSysId;
    uint32 revision;
    SIZE_T dedicatedVideoMemory;
    SIZE_T dedicatedSystemMemory;
    SIZE_T dharedSystemMemory;
    struct _LUID {
      uint32 LowPart;
      int32 HighPart;
    }AdapterLuid;
  };

  //Texture format types
  namespace TEXTURE_FORMAT {
    enum E {
      kUNKNOWN = 0,
      kR32G32B32A32_TYPELESS = 1,
      kR32G32B32A32_FLOAT = 2,
      kR32G32B32A32_UINT = 3,
      kR32G32B32A32_SINT = 4,
      kR32G32B32_TYPELESS = 5,
      kR32G32B32_FLOAT = 6,
      kR32G32B32_UINT = 7,
      kR32G32B32_SINT = 8,
      kR16G16B16A16_TYPELESS = 9,
      kR16G16B16A16_FLOAT = 10,
      kR16G16B16A16_UNORM = 11,
      kR16G16B16A16_UINT = 12,
      kR16G16B16A16_SNORM = 13,
      kR16G16B16A16_SINT = 14,
      kR32G32_TYPELESS = 15,
      kR32G32_FLOAT = 16,
      kR32G32_UINT = 17,
      kR32G32_SINT = 18,
      kR32G8X24_TYPELESS = 19,
      kD32_FLOAT_S8X24_UINT = 20,
      kR32_FLOAT_X8X24_TYPELESS = 21,
      kX32_TYPELESS_G8X24_UINT = 22,
      kR10G10B10A2_TYPELESS = 23,
      kR10G10B10A2_UNORM = 24,
      kR10G10B10A2_UINT = 25,
      kR11G11B10_FLOAT = 26,
      kR8G8B8A8_TYPELESS = 27,
      kR8G8B8A8_UNORM = 28,
      kR8G8B8A8_UNORM_SRGB = 29,
      kR8G8B8A8_UINT = 30,
      kR8G8B8A8_SNORM = 31,
      kR8G8B8A8_SINT = 32,
      kR16G16_TYPELESS = 33,
      kR16G16_FLOAT = 34,
      kR16G16_UNORM = 35,
      kR16G16_UINT = 36,
      kR16G16_SNORM = 37,
      kR16G16_SINT = 38,
      kR32_TYPELESS = 39,
      kD32_FLOAT = 40,
      kR32_FLOAT = 41,
      kR32_UINT = 42,
      kR32_SINT = 43,
      kR24G8_TYPELESS = 44,
      kD24_UNORM_S8_UINT = 45,
      kR24_UNORM_X8_TYPELESS = 46,
      kX24_TYPELESS_G8_UINT = 47,
      kR8G8_TYPELESS = 48,
      kR8G8_UNORM = 49,
      kR8G8_UINT = 50,
      kR8G8_SNORM = 51,
      kR8G8_SINT = 52,
      kR16_TYPELESS = 53,
      kR16_FLOAT = 54,
      kD16_UNORM = 55,
      kR16_UNORM = 56,
      kR16_UINT = 57,
      kR16_SNORM = 58,
      kR16_SINT = 59,
      kR8_TYPELESS = 60,
      kR8_UNORM = 61,
      kR8_UINT = 62,
      kR8_SNORM = 63,
      kR8_SINT = 64,
      kA8_UNORM = 65,
      kR1_UNORM = 66,
      kR9G9B9E5_SHAREDEXP = 67,
      kR8G8_B8G8_UNORM = 68,
      kG8R8_G8B8_UNORM = 69,
      kBC1_TYPELESS = 70,
      kBC1_UNORM = 71,
      kBC1_UNORM_SRGB = 72,
      kBC2_TYPELESS = 73,
      kBC2_UNORM = 74,
      kBC2_UNORM_SRGB = 75,
      kBC3_TYPELESS = 76,
      kBC3_UNORM = 77,
      kBC3_UNORM_SRGB = 78,
      kBC4_TYPELESS = 79,
      kBC4_UNORM = 80,
      kBC4_SNORM = 81,
      kBC5_TYPELESS = 82,
      kBC5_UNORM = 83,
      kBC5_SNORM = 84,
      kB5G6R5_UNORM = 85,
      kB5G5R5A1_UNORM = 86,
      kB8G8R8A8_UNORM = 87,
      kB8G8R8X8_UNORM = 88,
      kR10G10B10_XR_BIAS_A2_UNORM = 89,
      kB8G8R8A8_TYPELESS = 90,
      kB8G8R8A8_UNORM_SRGB = 91,
      kB8G8R8X8_TYPELESS = 92,
      kB8G8R8X8_UNORM_SRGB = 93,
      kBC6H_TYPELESS = 94,
      kBC6H_UF16 = 95,
      kBC6H_SF16 = 96,
      kBC7_TYPELESS = 97,
      kBC7_UNORM = 98,
      kBC7_UNORM_SRGB = 99,
      kAYUV = 100,
      kY410 = 101,
      kY416 = 102,
      kNV12 = 103,
      kP010 = 104,
      kP016 = 105,
      k420_OPAQUE = 106,
      kYUY2 = 107,
      kY210 = 108,
      kY216 = 109,
      kNV11 = 110,
      kAI44 = 111,
      kIA44 = 112,
      kP8 = 113,
      kA8P8 = 114,
      kB4G4R4A4_UNORM = 115,

      kP208 = 130,
      kV208 = 131,
      kV408 = 132,

      kSAMPLER_FEEDBACK_MIN_MIP_OPAQUE = 189,
      kSAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE = 190,
    };
  }

  namespace RESOURCE_USAGE {
    enum E {
      DEFAULT = 0,
      IMMUTABLE = 1,
      DYNAMIC = 2,
      STAGING = 3
    };
  }

  namespace BIND_FLAG {
    enum E {
      VERTEX_BUFFER = 0x1L,
      INDEX_BUFFER = 0x2L,
      CONSTANT_BUFFER = 0x4L,
      SHADER_RESOURCE = 0x8L,
      STREAM_OUTPUT = 0x10L,
      RENDER_TARGET = 0x20L,
      DEPTH_STENCIL = 0x40L,
      UNORDERED_ACCESS = 0x80L,
      DECODER = 0x200L,
      VIDEO_ENCODER = 0x400L
    };
  }

  namespace CLEAR_FLAG {
    enum E {
      DEPTH = 0x1L,
      STENCIL = 0x2L
    };
  }

  struct GRAPHICS_BOX
  {
    uint32 left;
    uint32 top;
    uint32 front;
    uint32 right;
    uint32 bottom;
    uint32 back;
  };

  struct GRAPHICS_VIEWPORT
  {
    float x;
    float y;
    float width;
    float height;
    float zNear;
    float zFar;
  };

  struct TEXTURE2D_DESC
  {
    uint32 width = 0;
    uint32 height = 0;
    uint32 mipLevels = 0;
    uint32 arraySize = 0;
    TEXTURE_FORMAT::E format = TEXTURE_FORMAT::kUNKNOWN;
    struct SAMPLE_DESC
    {
      uint32 count = 0;
      uint32 quality = 0;
    }sampleDesc;
    uint32 usage = RESOURCE_USAGE::DEFAULT;
    uint32 bindFlags = 0;
    uint32 cpuAccessFlags = 0;
    uint32 miscFlags = 0;
  };

  struct RenderTarget
  {
    RenderTarget(WeakSPtr<Texture> pRT, int32 mipLevel = 0)
      : pRenderTarget(pRT),
        mipLevel(mipLevel)
    {}

    WeakSPtr<Texture> pRenderTarget;
    int32 mipLevel;
  };

  struct MappedSubresource
  {
    void* pData;
    uint32 rowPitch;
    uint32 depthPitch;
  };

  namespace VERTEX_ELEMENT_SEMANTIC {
    enum E {
      POSITION = 0,     // Position in 3D space
      NORMAL = 1,       // Normal vector for lighting calculations
      TANGENT = 2,      // Tangent vector for normal mapping
      BITANGENT = 3,    // Bitangent vector for normal mapping
      COLOR = 4,        // Vertex color
      TEXCOORD = 5,     // Texture coordinates (UV mapping)
      BLENDINDICES = 6, // Indices for skinning (bone indices)
      BLENDWEIGHT = 7,  // Weights for skinning (bone weights)
      POSITIONT = 8,    // For tessellation
      PSIZE = 9,        // For point sprites
      CUSTOM = 10,      // Custom semantic for user-defined data
    };
  }

  namespace VERTEX_ELEMENT_TYPE {
    enum E {
      FLOAT1 = 0,       // 1D floating point value
      FLOAT2 = 1,       // 2D floating point value
      FLOAT3 = 2,       // 3D floating point value
      FLOAT4 = 3,       // 4D floating point value
      COLOR = 4,        // Color encoded in 32-bits (8-bits per channel).
      SHORT1 = 5,       // 1D 16-bit signed integer value
      SHORT2 = 6,       // 2D 16-bit signed integer value
      SHORT4 = 8,       // 4D 16-bit signed integer value
      UBYTE4 = 9,       // 4D 8-bit unsigned integer value
      COLOR_ARGB = 10,  // 32-bits Color (8-bits per channel) in ARGB order)
      COLOR_ABGR = 11,  // 32-bits Color (8-bits per channel) in ABGR order)
      UINT4 = 12,       // 4D 32-bit unsigned integer value
      INT4 = 13,        // 4D 32-bit signed integer value
      USHORT1 = 14,     // 1D 16-bit unsigned integer value
      USHORT2 = 15,     // 2D 16-bit unsigned integer value
      USHORT4 = 17,     // 4D 16-bit unsigned integer value
      INT1 = 18,        // 1D 32-bit signed integer value
      INT2 = 19,        // 2D 32-bit signed integer value
      INT3 = 20,        // 3D 32-bit signed integer value
      UINT1 = 21,       // 1D 32-bit signed integer value
      UINT2 = 22,       // 2D 32-bit signed integer value
      UINT3 = 23,       // 3D 32-bit signed integer value
      UBYTE4_NORM = 24, // 4D 8-bit uint value normalized to [0, 1] range
      COUNT,            // Keep at end before UNKNOWN
      UNKNOWN = 0xffff
    };
  }

  struct ShaderMacro
  {
    String name;
    String definition;
  };

}

#ifndef _WINDOWS_H
#define _WINDOWS_H

#ifndef WINAPI
    #define WINAPI
#endif

#ifndef VOID
    #define VOID void
#endif

#ifndef DECLARE_HANDLE
    #define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#endif

typedef unsigned char BYTE;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef DWORD COLORREF;
typedef void *PVOID;
typedef void *LPVOID;
typedef PVOID PROC;
typedef PVOID HANDLE;
typedef HANDLE HDC;
typedef unsigned short USHORT;
typedef short SHORT;
typedef unsigned int UINT;
typedef int INT;
typedef unsigned long ULONG;
typedef long LONG;
typedef char CHAR;
typedef const char *LPCSTR;
typedef float FLOAT;

typedef int32_t INT32;
typedef int64_t INT64;

typedef enum { TRUE, FALSE } BOOL;

typedef struct _POINTFLOAT {
    FLOAT x;
    FLOAT y;
} POINTFLOAT, *PPOINTFLOAT;

typedef struct _GLYPHMETRICSFLOAT {
    FLOAT       gmfBlackBoxX;
    FLOAT       gmfBlackBoxY;
    POINTFLOAT  gmfptGlyphOrigin;
    FLOAT       gmfCellIncX;
    FLOAT       gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT, *LPGLYPHMETRICSFLOAT;

typedef struct tagLAYERPLANEDESCRIPTOR {
  WORD     nSize;
  WORD     nVersion;
  DWORD    dwFlags;
  BYTE     iPixelType;
  BYTE     cColorBits;
  BYTE     cRedBits;
  BYTE     cRedShift;
  BYTE     cGreenBits;
  BYTE     cGreenShift;
  BYTE     cBlueBits;
  BYTE     cBlueShift;
  BYTE     cAlphaBits;
  BYTE     cAlphaShift;
  BYTE     cAccumBits;
  BYTE     cAccumRedBits;
  BYTE     cAccumGreenBits;
  BYTE     cAccumBlueBits;
  BYTE     cAccumAlphaBits;
  BYTE     cDepthBits;
  BYTE     cStencilBits;
  BYTE     cAuxBuffers;
  BYTE     iLayerPlane;
  BYTE     bReserved;
  COLORREF crTransparent;
} LAYERPLANEDESCRIPTOR, *PLAYERPLANEDESCRIPTOR, *LPLAYERPLANEDESCRIPTOR;

typedef struct tagRECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT, *PRECT, *NPRECT, *LPRECT;

DECLARE_HANDLE(HGLRC);

#endif

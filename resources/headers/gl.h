
/**
 * Please note that this file was created manually and is
 * not managed by the Khronos Group Community.
 *
 * Reference OpenGL header files:
 *  - @link https://github.com/KhronosGroup/OpenGL-Registry/tree/main/api/GL
 *
 * Reference Khronos platform files:
 *  - @link https://github.com/KhronosGroup/EGL-Registry/tree/main/api/KHR
 */

#include <GL/glcorearb.h>

#include "prototypes/gl10.h"
#include "prototypes/gl11.h"

#if !GL_CORE_PROFILE
    #include <GL/glext.h>
#endif

#ifdef GL_INCLUDE_GLX
    #include "prototypes/glx.h"

    #if !GL_CORE_PROFILE
        #include <GL/glxext.h>
    #endif
#endif

#ifdef GL_INCLUDE_WGL
    #include <windows.h>
    #include <GL/wgl.h>

    #if !GL_CORE_PROFILE
        #include <GL/wglext.h>
    #endif

    #include "prototypes/wgl10.h"
#endif

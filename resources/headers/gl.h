
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

#ifdef GL_INCLUDE_GLX
    #include <glx.h>
    #include <GL/glxext.h>

    __GLXextFuncPtr glXGetProcAddress (const GLubyte *procName);
#endif

#ifdef GL_INCLUDE_WGL
    #include <wgl.h>
    #include <GL/wglext.h>
#endif

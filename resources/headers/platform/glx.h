#ifndef GLX_H
#define GLX_H

/**
 * -----------------------------------------------------------------------------
 *  X11
 * -----------------------------------------------------------------------------
 */

typedef unsigned long XID;                  // X11/X.h
typedef XID Window;                         // X11/X.h
typedef XID Pixmap;                         // X11/X.h
typedef XID Colormap;                       // X11/X.h

typedef struct _XDisplay Display;           // X11/Xlib.h

typedef struct _XVisualInfo XVisualInfo;    // X11/Xutil.h

typedef int Bool;                           // X11/Xdefs.h

typedef int Status;                         // X11/extensions/XKBsrv.h

/**
 * -----------------------------------------------------------------------------
 *  GLX
 * -----------------------------------------------------------------------------
 */

typedef struct __GLXcontextRec *GLXContext;
typedef XID GLXPixmap;
typedef XID GLXDrawable;
/* GLX 1.3 and later */
typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef XID GLXFBConfigID;
typedef XID GLXContextID;
typedef XID GLXWindow;
typedef XID GLXPbuffer;

#endif

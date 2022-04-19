#ifndef X_H
#define X_H

typedef unsigned long XID;

typedef XID Window;
typedef XID Drawable;
#ifndef _XTYPEDEF_FONT
#  define _XTYPEDEF_FONT
typedef XID Font;
#endif
typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;

typedef int Status; // Inlined from X11/extensions/XKBsrv.h
typedef int Bool;   // Inlined from X11/Xdefs.h

#endif

int WINAPI wglChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR *pPfd);
int WINAPI wglDescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR *ppfd);
int WINAPI wglGetPixelFormat (HDC hdc);
BOOL WINAPI wglSetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR *ppfd);
BOOL WINAPI wglSwapBuffers (HDC hdc);
BOOL WINAPI wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
HGLRC WINAPI wglCreateContext (HDC hDc);
HGLRC WINAPI wglCreateLayerContext (HDC hDc, int level);
BOOL WINAPI wglDeleteContext (HGLRC oldContext);
BOOL WINAPI wglDescribeLayerPlane (HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR *plpd);
HGLRC WINAPI wglGetCurrentContext (void);
HDC WINAPI wglGetCurrentDC (void);
int WINAPI wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
PROC WINAPI wglGetProcAddress (LPCSTR lpszProc);
BOOL WINAPI wglMakeCurrent (HDC hDc, HGLRC newContext);
BOOL WINAPI wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL bRealize);
int WINAPI wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
BOOL WINAPI wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
BOOL WINAPI wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
BOOL WINAPI wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD listBase);
BOOL WINAPI wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD listBase);
BOOL WINAPI wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL WINAPI wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

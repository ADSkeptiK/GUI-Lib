#include "K_OpenGL_Context.h"
//Shouldn't give error

K_OpenGL_Context::K_OpenGL_Context(K_WindowPtr windowAddress) :K_Renderer_Context(windowAddress)
{
	contextsetting();
}

void K_OpenGL_Context::contextsetting(void)
{
    PIXELFORMATDESCRIPTOR temppixelFormatStructure = {
    sizeof(PIXELFORMATDESCRIPTOR),   // size of this pfd  
    1,                     // version number  
    PFD_DRAW_TO_WINDOW |   // support window  
    PFD_SUPPORT_OPENGL |   // support OpenGL  
    PFD_DOUBLEBUFFER,      // double buffered  
    PFD_TYPE_RGBA,         // RGBA type  
    24,                    // 24-bit color depth  
    0, 0, 0, 0, 0, 0,      // color bits ignored  
    0,                     // no alpha buffer  
    0,                     // shift bit ignored  
    0,                     // no accumulation buffer  
    0, 0, 0, 0,            // accum bits ignored  
    32,                    // 32-bit z-buffer  
    0,                     // no stencil buffer  
    0,                     // no auxiliary buffer  
    PFD_MAIN_PLANE,        // main layer  
    0,                     // reserved  
    0, 0, 0                // layer masks ignored  
    };
    pixelFormatStructure = temppixelFormatStructure;
	int iPixelFormat = ChoosePixelFormat(deviceContextHandle, &pixelFormatStructure);
	SetPixelFormat(deviceContextHandle, iPixelFormat, &pixelFormatStructure);
	renderingContext = wglCreateContext(deviceContextHandle);
	wglMakeCurrent(deviceContextHandle, renderingContext);
    
}



/*



*/

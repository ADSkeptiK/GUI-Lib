#include "../K_Renderer.h"

#ifndef K_OPENGLCONTEXT_H
#define K_OPENGLCONTEXT_H

class K_OpenGLRenderer  : public K_Renderer
{
public:
    //using K_Renderer::K_Renderer;
    K_OpenGLRenderer(K_WindowPtr windowAddress);
    void   contextsetting(void) override;

	//void setFormat(PPIXELFORMATDESCRIPTOR pixelFormatStructure);
private:
	//A pixel format descriptor
	PIXELFORMATDESCRIPTOR pixelFormatStructure = {
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

};
#endif // !




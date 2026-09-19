#include "../K_Renderer_Context.h"
#include <gl/GL.h>
#ifndef K_OPENGLCONTEXT_H
#define K_OPENGLCONTEXT_H
//Shouldn't give error

//The OpenGL Renderer Abstraction
//The Constructor DOES invoke contextsetting in it
//
class K_OpenGL_Context  : public K_Renderer_Context
{
public:
    //implements
    //using K_Renderer_Context::K_Renderer_Context;
    K_OpenGL_Context(K_WindowPtr windowAddress);
    //Sets classic OpenGL context, choosing a default preferred version
    void   contextsetting(void)override;
    //virtual void chooseGLversion();
	//void setFormat(PPIXELFORMATDESCRIPTOR pixelFormatStructure);
protected:
	//A pixel format descriptor
};
#endif // !




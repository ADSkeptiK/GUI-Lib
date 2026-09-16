#include "K_OpenGLRenderer.h"

K_OpenGLRenderer::K_OpenGLRenderer(K_WindowPtr windowAddress) :K_Renderer(windowAddress)
{
	contextsetting();
	renderingLoop();
}

void K_OpenGLRenderer::contextsetting(void)
{
	int iPixelFormat = ChoosePixelFormat(deviceContextHandle, &pixelFormatStructure);
	SetPixelFormat(deviceContextHandle, iPixelFormat, &pixelFormatStructure);
	renderingContext = wglCreateContext(deviceContextHandle);
	wglMakeCurrent(deviceContextHandle, renderingContext);
}

void K_OpenGLRenderer::renderingLoop(void)
{
	openGLinvoker->renderingProcedure();
}

/*



*/

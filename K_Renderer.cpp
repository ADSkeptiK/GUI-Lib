#include "K_Renderer.h"
#include "K_Window.h"
K_Renderer::K_Renderer(K_WindowPtr windowAddress): rendererWindow{windowAddress}
{	//Obtain an HDC for the window using it's handle
	deviceContextHandle= GetDC(windowAddress->getWindowHandle());
}

/*
void K_Renderer::renderingLoop(void)
{
	//Just set the context
	rendererPtr->contextsetting();
	
}
*/

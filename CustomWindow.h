#pragma once
#include "K_Window.h"
class CustomOGLContext;
class K_Renderer;
typedef class K_Renderer* K_rendererPtr;

//Implements a 
class CustomWindow :
	public K_Window
{
public:
	//Create Window
	using K_Window::K_Window;
	//Main Loop for window
	LPARAM enterLoop(void) override;
	//Create OpenGL
	virtual void userFunc(void)=0;

	CustomWindow* abstractcall = this;

};


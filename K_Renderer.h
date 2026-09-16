#include <Windows.h>
#ifndef K_RENDERER_H
#define K_RENDERER_H
enum class rendererAPIs{OpenGL,DirectX,Vulkan};
class K_Window;
#ifndef K_WINDOWPTR
#define K_WINDOWPTR
typedef K_Window* K_WindowPtr;
#endif
//Renderer Abstraction
//Constructor only sets things and doesn't invoke member functions
class K_Renderer 
{
	/*
	K_Window(int iCmdShow, HINSTANCE hInstance, PCTSTR TemplateName,
		PCTSTR windowTitle, WNDPROC MessagePump, DWORD type = WS_OVERLAPPEDWINDOW, const int style = 3,
		int x = CW_USEDEFAULT, int y = CW_USEDEFAULT, int size_x = CW_USEDEFAULT,
		int size_y = CW_USEDEFAULT, HWND parentHandleP = NULL, HMENU menuHandle = NULL, LPVOID param = NULL);
	*/
public:
	//Give the initialized window structure
	K_Renderer(K_WindowPtr windowAddress);

//VIRTUALS
	virtual void contextsetting(void)=0;
	//virtual void draw() = 0;
	virtual void renderingLoop(void)=0;
	//Handle to device context
	HDC deviceContextHandle;
	//Handle to rendering context
	HGLRC renderingContext;
private:
	//Get a window
	K_WindowPtr rendererWindow;
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
	K_Renderer* rendererPtr = this;
};













#endif

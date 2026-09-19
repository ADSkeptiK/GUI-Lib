#include <Windows.h>
#ifndef K_RENDERER_H
#define K_RENDERER_H
//Shouldn't give error

enum class GraphicsAPIs{OpenGL,DirectX,Vulkan};
//Forward Declaration
class K_Window;
#ifndef K_WINDOWPTR
#define K_WINDOWPTR
typedef K_Window* K_WindowPtr;
#endif
//Renderer Abstraction
//Constructor only sets things and doesn't invoke member functions
class K_Renderer_Context 
{
	/*
	K_Window(int iCmdShow, HINSTANCE hInstance, PCTSTR TemplateName,
		PCTSTR windowTitle, WNDPROC MessagePump, DWORD type = WS_OVERLAPPEDWINDOW, const int style = 3,
		int x = CW_USEDEFAULT, int y = CW_USEDEFAULT, int size_x = CW_USEDEFAULT,
		int size_y = CW_USEDEFAULT, HWND parentHandleP = NULL, HMENU menuHandle = NULL, LPVOID param = NULL);
	*/
public:
	//Give the initialized window structure
	K_Renderer_Context(K_WindowPtr windowAddress);
//VIRTUALS
	virtual void contextsetting(void)=0;
	//The General function for rendering
	virtual void renderW(void)=0;
	//Handle to device context
	HDC deviceContextHandle;
	//Handle to rendering context
	HGLRC renderingContext;

	PIXELFORMATDESCRIPTOR pixelFormatStructure;
private:
	//Get a window
	
	
	//K_Renderer_Context* rendererPtr = this;
};

#endif

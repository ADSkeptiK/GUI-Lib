#include "CustomWindow.h"
LPARAM CustomWindow::enterLoop(void)
{
	while (GetMessage(getterMessage(), NULL, 0, 0))
	{
      
		TranslateMessage(&message);
		DispatchMessage(&message);
       abstractcall->userFunc();
	}
	return message.lParam;
}



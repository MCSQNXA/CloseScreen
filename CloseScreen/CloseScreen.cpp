#include <windows.h>

void start()
{
	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
}
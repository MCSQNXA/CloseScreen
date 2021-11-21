#include <windows.h>

int main()
{
	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
}

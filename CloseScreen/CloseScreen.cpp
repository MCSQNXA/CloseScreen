#include <windows.h>

#pragma comment(linker,"/align:128")//编译对齐
#pragma comment(linker,"/ENTRY:start")//exe主入口
#pragma comment(linker,"/subsystem:windows")//子系统


void start()
{
	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
}
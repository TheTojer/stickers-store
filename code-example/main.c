#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>

int main(void)
{
    WNDCLASSA wcl;
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpfnWndProc = DefWindowProcA;
    wcl.lpszClassName = "My own class window";
    return 0;
}

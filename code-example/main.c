#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>

int main(void)
{
    WSADATA wsaData;
    int res = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (res != 0)
    {
        fprintf(stderr, "Failed init sockets.\n");
        return 1;
    }
    WNDCLASSA wcl;
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpfnWndProc = DefWindowProcA;
    wcl.lpszClassName = "My own class window";
    return 0;
}

#include <windows.h>

int WINAPI WinMain (HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
MessageBoxA(
        NULL,
        (LPCSTR)"Resource not available\nDo you want to try again?",
        (LPCSTR)"Account Details",
        MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
    );
    return 0;
}
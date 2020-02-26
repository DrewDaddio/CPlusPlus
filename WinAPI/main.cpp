#include <windows.h> //This will include the Windows APIs.
#include <iostream>

int main() {
    std::cout << "Windows API:" << std::endl;
    std::cout << "DLL: Dynamic Link Library" << std::endl;
    std::cout << "AdvApi32.dll = Advanced API" << std::endl;

    std::cout << "SW_SHOW: Activates the window and displays it in its current size and position.. " << std::endl;
    std::cout << "We've got a 'SW_SHOW' constant: " << SW_SHOW << std::endl;

    DWORD ms = GetTickCount();
    std::cout << "Milliseconds passed after computer started: " << ms << std::endl;

    unsigned int hours = ms / 3600000;
    unsigned int minutes = (ms / 60000) % 60;
    unsigned int seconds = (ms / 1000) % 60;

    std::cout << "And that is " << hours << "h, " << minutes
                << "m and " << seconds << "s" << std::endl;

    char com_name[MAX_COMPUTERNAME_LENGTH + 1]; //Max_computer name length is predetermined by Windows:
    unsigned long int arr_len = sizeof(com_name) / sizeof(char);
    //bool success - GetComputerName(com_name, &arr_len);
    bool success = false;

    if(success)
        std::cout << "NetBIOS computer name: " << com_name << std::endl;
    else {
        DWORD err = GetLastError();
        std::cout << "Function call failed! Error: " << err << std::endl;
    }


    return 0;
}

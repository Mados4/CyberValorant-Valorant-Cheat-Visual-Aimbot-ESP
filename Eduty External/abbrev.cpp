#include <iostream>
#include <windows.h>

bool isValorantOpen() {
    HWND hwnd = FindWindow(NULL, L"Valorant");
    return hwnd != NULL;
}

int main() {
    if (!isValorantOpen()) {
        std::cout << "Open the Game I'm Waiting for Valorant..." << std::endl;
        while (!isValorantOpen()) {
            Sleep(5000);
        }
        std::cout << "Valorant is open!" << std::endl;
    }
    else {
        std::cout << "An unknown error occurred. Try again." << std::endl;
    }

    getchar();

    return 0;
}

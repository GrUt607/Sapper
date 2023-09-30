#include "Sapper.h"
#include "map.h"
#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void Game::showLogo() {
    gotoxy(60, 10);
    std::cout << "Saper" << std::endl;
    Sleep(2000);
    system("cls");
}

void Game::run() {
    showLogo();
    Map map;
    map.show();
}

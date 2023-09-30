#include "Sapper.h"
#include "map.h"
#include <iostream>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD p = { x,y };  // Установка позиции курсора в консоли по координатам (x, y)
    SetConsoleCursorPosition(GetStdHandle(STD_INPUT_HANDLE), p);  // Функция установки позиции курсора
}

void Game::showLogo() {
    gotoxy(60, 10);  // Установка позиции вывода логотипа
    std::cout << "Saper" << std::endl; // Вывод логотипа
    Sleep(2000); // Задержка 2 секунды
    system("cls");
}

void Game::run() {
    showLogo();  // Показать логотип
    Map map;  // Создание объекта карты
    map.show();  // Отображение карты
}

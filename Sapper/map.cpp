#include "map.h"
#include <iostream>

Map::Map() {
    size = 15;  // Инициализация размера карты
}

void Map::show() {
    for (int i = 0; i < size; i++) {  // Перебор строк карты
        for (int j = 0; j < size; j++) { // Перебор столбцов карты
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
                std::cout << "$"; // Вывод символа "$" для границ карты
            else
                std::cout << " ";  // Вывод пробела для внутренних клеток карты
        }
        std::cout << std::endl; // Переход на новую строку после отображения строки карты
    }
}
#include "map.h"
#include <iostream>

Map::Map() {
    size = 15;  // Инициализация размера карты
}

void Map::show() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
                std::cout << "$";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
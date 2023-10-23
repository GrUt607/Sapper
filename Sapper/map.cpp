#include "map.h"
#include <iostream>

const int BORDER = 100;
const int EMPTY_CELL = 0;
const int MINE = 10;

Map::Map() {
    size = 5;
    // Выделяем память для вектора map
    map = std::vector<std::vector<int>>(size, std::vector<int>(size, EMPTY_CELL));
}


void Map::initMap() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
                map[i][j] = BORDER;
        }
    }
}

void Map::show() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (map[i][j] == BORDER)
                std::cout << "$";
            else if (map[i][j] == EMPTY_CELL)
                std::cout << " ";
            else if (map[i][j] == MINE)
                std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void Map::setRandMines(int numMines) {
    if (numMines >= (size - 2) * (size - 2))
        return;

    for (int i = 0; i < numMines; i++) {
        int x = 0;
        int y = 0;
        do {
            x = rand() % (size - 2) + 1;
            y = rand() % (size - 2) + 1;
        } while (map[x][y] == MINE);
        map[x][y] = MINE;
    }
}

#pragma once
#include <vector> // Добавили заголовок для std::vector

class Map {
private:
    int size;
    std::vector<std::vector<int>> map; 

public:
    Map();
    void initMap(); // Добавили объявление метода initMap
    void setRandMines(int numMines); // Добавили параметр для указания количества мин
    void show();
};

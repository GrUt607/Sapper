#pragma once
#include <vector> // �������� ��������� ��� std::vector

class Map {
private:
    int size;
    std::vector<std::vector<int>> map; 

public:
    Map();
    void initMap(); // �������� ���������� ������ initMap
    void setRandMines(int numMines); // �������� �������� ��� �������� ���������� ���
    void show();
};

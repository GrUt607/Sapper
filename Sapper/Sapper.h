//#pragma once
//
//class Game {
//private:
//    void showLogo();
//
//public:
//    void run();
//};
#pragma once

#include <iostream>

class Game {
private:
    void showLogo();

    // ��������� ��������� ���� ��� ��������
    std::string logo;

public:
    Game(); // ����������� �� ���������
    Game(const Game& other); // ����������� �����������
    Game(const std::string& logo); // ����������� � �����������
    Game& operator=(const Game& other); // �������� �����������
    bool operator==(const Game& other) const; // �������� ���������
    friend std::istream& operator>>(std::istream& in, Game& game); // �������� �����
    friend std::ostream& operator<<(std::ostream& out, const Game& game); // �������� ������

    void run();
};

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

    // Добавляем приватное поле для логотипа
    std::string logo;

public:
    Game(); // Конструктор по умолчанию
    Game(const Game& other); // Конструктор копирования
    Game(const std::string& logo); // Конструктор с параметрами
    Game& operator=(const Game& other); // Оператор копирования
    bool operator==(const Game& other) const; // Оператор сравнения
    friend std::istream& operator>>(std::istream& in, Game& game); // Оператор ввода
    friend std::ostream& operator<<(std::ostream& out, const Game& game); // Оператор вывода

    void run();
};

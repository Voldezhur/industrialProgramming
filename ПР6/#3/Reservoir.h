#pragma once

#include <string>
#include <iostream>

class Reservoir
{
protected:
    // Параметры водоема
    std::string name;
    int depth, size;
public:
    // Конструкторы
    Reservoir();
    Reservoir(std::string _name);
    Reservoir(std::string _name, int _depth, int _size);

    // Функция вывода
    void Print();

    // Перегрузка оператора ввода
    friend std::istream &operator>>(std::istream &stream, Reservoir& obj);
};
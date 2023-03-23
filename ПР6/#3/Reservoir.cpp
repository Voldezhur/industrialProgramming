#include "Reservoir.h"
#include <string>
#include <iostream>

// Конструкторы
Reservoir::Reservoir()
{
    name = "*placeholdername*";
    depth = size = 0;
}

Reservoir::Reservoir(std::string _name)
{
    name = _name;
    depth = size = 0;
}

Reservoir::Reservoir(std::string _name, int _depth, int _size)
{
    name = _name;
    depth = _depth;
    size = _size;
}

// Функция вывода
void Reservoir::Print()
{
    std::cout << "Название водоема: " << name << '\n';
    std::cout << "Глубина водоема: " << depth << '\n';
    std::cout << "Размер водоема: " << size << '\n';
}

// Перегрузка оператора ввода
std::istream &operator>>(std::istream &stream, Reservoir& obj)
{
    std::cout << "Введите название водоема:\n";
    stream >> obj.name;

    std::cout << "Введите глубину водоема:\n";
    stream >> obj.depth;

    std::cout << "Введите размер водоема:\n";
    stream >> obj.size;

    return stream;
}
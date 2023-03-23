#pragma once

#include "Reservoir.h"
#include "Ocean.h"
#include <string>
#include <iostream>

class Sea : public Reservoir
{
protected:
    // Указатель на водоем, в котором находится
    Ocean* parent;
public:
    // Конструкторы
    Sea();
    Sea(std::string _name);
    Sea(std::string _name, Ocean* parent);
    Sea(std::string _name, int _depth, int _size);
    Sea(std::string _name, int _depth, int _size, Ocean* parent);

    // Перегрузка оператора ввода
    friend std::ostream &operator<<(std::ostream &stream, Sea& obj);

    // Функции ввода параметров
    void Set_parent(Ocean _parent);

    // Функции получения параметров
    Ocean* Get_parent();
};
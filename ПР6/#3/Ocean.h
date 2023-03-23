#pragma once

#include "Reservoir.h"
#include <string>
#include <iostream>

class Ocean : public Reservoir
{
public:
    // Конструкторы
    Ocean();
    Ocean(std::string _name);
    Ocean(std::string _name, int _depth, int _size);

    // Перегрузка оператора вывода
    friend std::ostream &operator<<(std::ostream &stream, Ocean& obj);

    // Функции получения параметров
    std::string Get_name();
};
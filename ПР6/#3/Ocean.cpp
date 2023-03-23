#include "Ocean.h"
#include <string>
#include <iostream>

// Конструкторы
Ocean::Ocean()
{
    Reservoir();
}

Ocean::Ocean(std::string _name)
{
    name = _name;
    depth = size = 0;
}

Ocean::Ocean(std::string _name, int _depth, int _size)
{
    name = _name;
    depth = _depth;
    size = _size;   
}

// Перегрузка оператора вывода
std::ostream &operator<<(std::ostream &stream, Ocean& obj)
{
    stream << "Вид водоема - океан\n";
    obj.Print();

    return stream;
}

// Функции получения параметров
std::string Ocean::Get_name()
{
    return name;
}
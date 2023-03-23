#include "Sea.h"
#include <string>
#include <iostream>

// Конструкторы
Sea::Sea()
{
    Reservoir();

    parent = nullptr;
}

Sea::Sea(std::string _name)
{
    name = _name;
    depth = size = 0;

    parent = nullptr;
}

Sea::Sea(std::string _name, Ocean* _parent)
{
    name = _name;
    depth = size = 0;

    parent = _parent;
}

Sea::Sea(std::string _name, int _depth, int _size)
{
    name = _name;
    depth = _depth;
    size = _size;

    parent = nullptr;
}

Sea::Sea(std::string _name, int _depth, int _size, Ocean* _parent)
{
    name = _name;
    depth = _depth;
    size = _size;

    parent = _parent;
}

// Перегрузка оператора вывода
std::ostream &operator<<(std::ostream &stream, Sea& obj)
{
    stream << "Вид водоема - море\n";

    std::string parentName;

    if(obj.parent)
    {
        parentName = obj.parent->Get_name();
    }
    else
    {
        parentName = "Внутреннее море";
    }

    std::cout << "В каком океане находится - " << parentName << '\n';

    obj.Print();

    return stream;
}

// Функции ввода параметров
void Sea::Set_parent(Ocean _parent)
{
    parent = &_parent;
}

// Функции получения параметров
Ocean* Sea::Get_parent()
{
    return parent;
}
#include "Ocean.h"
#include <iostream>
#include <string>

Ocean::Ocean()
{
    name = "*placeholder*";
    depth = size = 0;
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
    size =  _size;
}


std::ostream &operator<<(std::ostream &stream, Ocean obj)
{
    stream << "Тип водоема - " << obj.getType() << '\n';
    stream << "Название - " << obj.name << '\n';
    stream << "Глубина - " << obj.depth << " м\n";
    stream << "Размер - " << obj.size << " кв км\n";

    return stream;
}


std::string Ocean::getName()
{
    return name;
}

int Ocean::getDepth()
{
    return depth;
}

int Ocean::getSize()
{
    return size;
}

std::string Ocean::getType()
{
    return "Ocean";
}
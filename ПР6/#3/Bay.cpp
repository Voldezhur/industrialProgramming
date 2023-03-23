#include "Bay.h"
#include <string>
#include <iostream>

// Конструкторы
Bay::Bay()
{
    Reservoir();

    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string _name)
{
    name = _name;
    depth = size = 0;

    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string _name, Ocean* _parent)
{
    name = _name;
    depth = size = 0;

    oceanParent = _parent;
    seaParent = nullptr;
}

Bay::Bay(std::string _name, Sea* _parent)
{
    name = _name;
    depth = size = 0;

    seaParent = _parent;
    oceanParent = _parent->Get_parent();
}

Bay::Bay(std::string _name, int _depth, int _size)
{
    name = _name;
    depth = _depth;
    size = _size;

    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string _name, int _depth, int _size, Ocean* _parent)
{
    name = _name;
    depth = _depth;
    size = _size;

    oceanParent = _parent;
    seaParent = nullptr;
}

Bay::Bay(std::string _name, int _depth, int _size, Sea* _parent)
{
    name = _name;
    depth = _depth;
    size = _size;

    seaParent = _parent;
    oceanParent = _parent->Get_parent();
}

// Перегрузка оператора ввода
std::ostream &operator<<(std::ostream &stream, Bay& obj)
{
    stream << "Вид водоема - залив\n";

    // Вывод моря, в котором находится
    std::string parentName;

    if(obj.seaParent)
    {
        parentName = obj.seaParent->Get_name();
    }
    else
    {
        parentName = "ни в каком";
    }

    std::cout << "В каком море находится - " << parentName << '\n';

    // Вывод океана, в котором находится
    if(obj.oceanParent)
    {
        parentName = obj.oceanParent->Get_name();
    }
    else
    {
        parentName = "ни в каком";
    }

    std::cout << "В каком океане находится - " << parentName << '\n';

    obj.Print();

    return stream;
}
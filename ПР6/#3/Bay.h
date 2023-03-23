#include "Reservoir.h"
#include "Ocean.h"
#include "Sea.h"
#include <string>
#include <iostream>

class Bay : public Reservoir
{
protected:
    // Указатель на водоем, в котором находится
    Ocean* oceanParent;
    Sea* seaParent;

public:
    // Конструкторы
    Bay();
    Bay(std::string _name);
    Bay(std::string _name, Sea* _seaParent);
    Bay(std::string _name, Ocean* _oceanParent);
    Bay(std::string _name, int _depth, int _size);
    Bay(std::string _name, int _depth, int _size, Ocean* parent);
    Bay(std::string _name, int _depth, int _size, Sea* parent);

    // Перегрузка оператора ввода
    friend std::ostream &operator<<(std::ostream &stream, Bay& obj);

    // Функции ввода параметров
    void Set_parent(Ocean _parent);
    void Set_parent(Sea _parent);
};
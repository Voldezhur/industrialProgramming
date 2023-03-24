#pragma once

#include "Ocean.h"
#include <iostream>
#include <string>

class Sea : public Ocean
{
protected:
    Ocean* oceanParent;

public:
    Sea();
    Sea(std::string _name);
    Sea(std::string _name, Ocean* _oceanParent);
    Sea(std::string _name, int _depth, int _size);
    Sea(std::string _name, int _depth, int _size, Ocean* _oceanParent);

    friend std::ostream &operator<<(std::ostream &stream, Sea obj);

    void setParent(Ocean* _oceanParent);

    Ocean* getParent();
    std::string getType();
};
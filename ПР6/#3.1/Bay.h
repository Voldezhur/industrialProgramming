#include "Sea.h"
#include <iostream>
#include <string>

class Bay : public Sea
{
protected:
    Sea* seaParent;

public:
    Bay();
    Bay(std::string _name);
    Bay(std::string _name, Sea* _seaParent);
    Bay(std::string _name, int _depth, int _size);
    Bay(std::string _name, int _depth, int _size, Sea* _seaParent);

    friend std::ostream &operator<<(std::ostream &stream, Bay obj);

    void setParent(Sea* _seaParent);

    Sea* getParent();
    std::string getType();
};
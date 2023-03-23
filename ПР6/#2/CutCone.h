#include "Cone.h"
#include <iostream>

class CutCone : public Cone
{
protected:
    double radius2;

public:
    CutCone();

    // Конструктор конуса с центром в начале координат
    CutCone(double _radius, double _radius2, double _height);

    // Конструктор произвольного конуса
    CutCone(double _x, double _y, double _z, double _radius, double _radius2, double _height);

    // Ввод конуса
    void Set(double _x, double _y, double _z, double _radius, double _radius2, double _height);

    // Вывод конуса
    void Print();

    // Площадь поверхности
    double Area();

    // Объем
    double Volume();

    // Перегрузка операторов ввода/вывода
    friend std::ostream &operator<<(std::ostream &stream, CutCone obj);
    friend std::istream &operator>>(std::istream &stream, CutCone& obj);

    // Перегрузка операторов сравнения
    bool operator >(CutCone cone);
    bool operator <(CutCone cone);
    bool operator <=(CutCone cone);
    bool operator >=(CutCone cone);
    bool operator ==(CutCone cone);
};
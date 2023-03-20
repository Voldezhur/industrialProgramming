#include "Cone.h"

class CutCone: public Cone
{
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

    // Перегрузка оператора вывода
    friend std::ostream &operator<<(std::ostream &stream, CutCone obj);

    // Перегрузка оператора ввода
    friend std::istream &operator>>(std::istream &stream, CutCone obj);
};
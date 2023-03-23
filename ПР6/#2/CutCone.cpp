#include "CutCone.h"
#include <iostream>
#include <math.h>

// Конструктор усеченного конуса по умолчанию
CutCone::CutCone()
{
    x = y = z = radius =  radius2 = height = 1;
}

// Конструктор усеченного конуса с центром в начале координат
CutCone::CutCone(double _radius, double _radius2, double _height)
{
    x = y = z = 0;

    radius = _radius;
    radius2 = _radius2;
    height =_height;
}

// Конструктор произвольного усеченного конуса
CutCone::CutCone(double _x, double _y, double _z, double _radius, double _radius2, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    radius2 = _radius2;
    height = _height;
}

// Методы
// Ввод конуса
void CutCone::Set(double _x, double _y, double _z, double _radius, double _radius2, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    radius2 = _radius2;
    height = _height;    
}

// Вывод конуса
void CutCone::Print()
{
    std::cout << "\nКоординаты центра основания: " << x << ", " << y << ", " << z << '\n';
    std::cout << "Радиус основания: " << radius << '\n';
    std::cout << "Радиус верхнего основания: " << radius2 << '\n';
    std::cout << "Высота конуса: " << height << '\n';
}

// Площадь поверхности
double CutCone::Area()
{
    double L = sqrt(height*height + pow(radius - radius2, 2));

    return M_PI * (radius2 + radius) * L + M_PI * radius2*radius2 + M_PI * radius*radius;
}

// Объем
double CutCone::Volume()
{
    return 1.0/3.0 * M_PI * height * (radius2*radius2 + radius2 * radius + radius*radius);
}

// Перегрузка вывода
std::ostream &operator<<(std::ostream &stream, CutCone obj)
{
    stream << "\nКоординаты центра основания: " << obj.x << ", " << obj.y << ", " << obj.z << '\n';
    stream << "Радиус основания: " << obj.radius << '\n';
    stream << "Радиус верхнего основания: " << obj.radius2 << '\n';
    stream << "Высота конуса: " << obj.height << '\n';
    stream << "Площадь поверхности конуса: " << obj.Area() << '\n';
    stream << "Объем конуса: " << obj.Volume() << '\n';

    return stream;
}

// Перегрузка ввода
std::istream &operator>>(std::istream &stream, CutCone& obj)
{
    std::cout << "Введите координаты центра основания конуса:\n";
    stream >> obj.x >> obj.y >> obj.z;

    std::cout << "Введите радиус нижнего и верхнего оснований\n";
    stream >> obj.radius >> obj.radius2;

    std::cout << "Введите высоту\n";
    stream >> obj.height;

    return stream;
}

// Перегрузка операторов сравнения
bool CutCone::operator<(CutCone cone)
{
    return (this->Volume() < cone.Volume() ? true : false);
}
bool CutCone::operator>(CutCone cone)
{
    return (this->Volume() > cone.Volume() ? true : false);
}
bool CutCone::operator<=(CutCone cone)
{
    return (this->Volume() <= cone.Volume() ? true : false);
}
bool CutCone::operator>=(CutCone cone)
{
    return (this->Volume() >= cone.Volume() ? true : false);
}
bool CutCone::operator==(CutCone cone)
{
    return (this->Volume() == cone.Volume() ? true : false);
}
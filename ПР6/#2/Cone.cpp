// Реализация класса конусов

#include "Cone.h"
#include <iostream>
#include <cmath>

// Конструкторы
// Конструктор по умолчанию
Cone::Cone()
{
    x = y = z = radius = height = 1;
}

// Конструктор конуса ц центром в начале координат
Cone::Cone(double _radius, double _height)
{
    x = y = z = 0;

    radius = _radius;
    height =_height;
}

// Конструктор произвольного конуса
Cone::Cone(double _x, double _y, double _z, double _radius, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    height = _height;
}

// Методы
// Ввод конуса
void Cone::Set(double _x, double _y, double _z, double _radius, double _height)
{
    x = _x;
    y = _y;
    z = _z;

    radius = _radius;
    height = _height;    
}

// Вывод конуса
void Cone::Print()
{
    std::cout << "\nКоординаты центра основания: " << x << ", " << y << ", " << z << '\n';
    std::cout << "Радиус основания: " << radius << '\n';
    std::cout << "Высота конуса: " << height << '\n';
}

// Площадь поверхности
double Cone::Area()
{
    double l = sqrt(radius*radius + height*height);

    return M_PI * radius * l + M_PI * radius*radius;
}

// Объем конуса
double Cone::Volume()
{
    return M_PI * radius*radius * height / 3;
}

// Функции получения параметров
double Cone::Get_x()
{
    return x;
}
double Cone::Get_y()
{
    return y;
}
double Cone::Get_z()
{
    return z;
}
double Cone::Get_rad()
{
    return radius;
}
double Cone::Get_h()
{
    return height;
}
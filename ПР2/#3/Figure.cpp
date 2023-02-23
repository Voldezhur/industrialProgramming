// Реализация класса Figure


#include "Figure.h"
#include <iostream>
#include <cmath>


// Конструктор
Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
    // Длины сторон
    s12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    s23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    s34 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    s41 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    // Диагонали
    float x_d13 = x3 - x1, y_d13 = y3 - y1;
    float x_d24 = x4 - x2, y_d24 = y4 - y2;

    d13 = sqrt(pow(x_d13, 2) + pow(y_d13, 2));
    d24 = sqrt(pow(x_d24, 2) + pow(y_d24, 2));

    // Угол между диагоналями
    float a = (x_d13*x_d24 + y_d13*y_d24);
    float b = sqrt(pow(x_d13, 2) + pow(y_d13, 2)) * sqrt(pow(x_d24, 2) + pow(y_d24 , 2));
    float cosa = a / b;
    alfa = acos(cosa);

    // Площадь
    S = d13 * d24 * sin(alfa);

    // Периметр
    P = s12 + s23 + s34 + s41;
}

// Выводит все аттрибуты на экран
void Figure::show()
{
    std::cout << "\nКоординаты вершин:\n";
    std::cout << "1: " << x1 << ' ' << y1 << '\n';
    std::cout << "2: " << x2 << ' ' << y2 << '\n';
    std::cout << "3: " << x3 << ' ' << y3 << '\n';
    std::cout << "4: " << x4 << ' ' << y4 << "\n\n";

    std::cout << "\nПлощадь: " << S << "\n\n";
    
    std::cout << "\nПериметр: " << P << '\n';
}

// Прямоугольник?
bool Figure::is_prug()
{

}

// Квадрат?
bool Figure::is_square()
{

}

// Ромб?
bool Figure::is_romb()
{

}

// Можно вписать в треугольник?
bool Figure::is_in_circle()
{

}

// Можно вписать окружность?
bool Figure::is_out_circle()
{

}
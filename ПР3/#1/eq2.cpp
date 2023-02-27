// Реализация класса eq2


#include <iostream>
#include <cmath>
#include "eq2.h"


// Конструктор
eq2::eq2(double a1, double b1, double c1)
{
    a = a1;
    b = b1;
    c = c1;

    D = b*b - 4*a*c;
}
    
// Занесение значений
void eq2::set(double a1, double b1, double c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// Возвращает наибольший корень, или 0 с информацией, что корней нет
double eq2::find_X()
{
    // Дискриминант < 0 => корней нет
    if(D < 0)
    {
        std::cout << "\nКорней нет\n";

        return 0;
    }

    // Дискриминант >= 0 => ищем корни
    double x1, x2;

    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);

    return (x1 > x2 ? x1 : x2);
}

// Возвращает значение квадратого многочлена, если подставить x1 в X
double eq2::find_Y(double x1)
{
    return(x1*x1*a + x1*b + c);
}
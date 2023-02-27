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

// Получение параметров
double eq2::get_a()
{
    return a;
}

double eq2::get_b()
{
    return b;
}

double eq2::get_c()
{
    return c;
}

double eq2::get_D()
{
    return D;
}


/* 
    Перегрузка оператора + 
    
    Результат - многочлен, с параметрами, 
    являющимися суммами параметров введенных многочленов
*/ 
eq2 operator + (eq2 A, eq2 B)
{
    eq2 temp(A.get_a() + B.get_a(), A.get_b() + B.get_b(), A.get_c() + B.get_c());

    return temp;
}

// Вывод многочлена в виде квадратного уравнения
void eq2::print()
{
    std::cout << a << "x^2 ";
    
    if(b > 0) std::cout << '+'; 
    std::cout << b << "x ";

    if(c > 0) std::cout << '+';
    std::cout << c << '\n';
}
// Задача с классом треугольника
// Чтобы связать с классом:
// g++ -o main main.cpp Triangle.cpp && ./main


#include "Triangle.h"
#include <iostream>

int main()
{
    Triangle A[3];

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Введите стороны треугольника №" << i + 1 << " через пробел:\n";

        double a, b, c;
        std::cin >> a >> b >> c;

        A[i].set(a, b, c);

        while(!A[i].exst_tr())
        {
            std::cout << "Треугольник не существует, введите новые значения сторон:\n";
            std::cin >> a >> b >> c;
            A[i].set(a, b, c);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Треугольник №" << i + 1 << '\n';

        A[i].show();
        std::cout << '\n';

        std::cout << "Периметр: " << A[i].perimeter() << '\n';
        std::cout << "Площадь: " << A[i].area() << "\n\n"; 
    }
}
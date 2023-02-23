// Задача с классом окружности
// Чтобы связать с классом:
// g++ -o main main.cpp Triangle.cpp && ./main


#include <iostream>
#include "Circle.h"
#include "Triangle.h"

int main()
{
    // Создание окружностей
    float r1, x1, y1;

    std::cout << "Первая окружность\n";
    std::cout << "Введите радиус, координаты центра:\n";

    std::cin >> r1 >> x1 >> y1;
    Circle circle1(r1, x1, y1);

    float r2, x2, y2;

    std::cout << "\nВторая окружность\n";
    std::cout << "Введите радиус, координаты центра:\n";

    std::cin >> r2 >> x2 >> y2;
    Circle circle2(r2, x2, y2);

    float r3, x3, y3;

    std::cout << "\nТретья окружность\n";
    std::cout << "Введите радиус, координаты центра:\n";

    std::cin >> r3 >> x3 >> y3;
    Circle circle3(r3, x3, y3);


    // Создание треугольника
    std::cout << "Введите стороны треугольника через пробел";

    double a, b, c;
    
    std::cin >> a >> b >> c;
    Triangle A(a, b, c);

    while(!A.exst_tr())
    {
        std::cout << "Треугольник не существует, введите новые значения сторон:\n";
        std::cin >> a >> b >> c;
        A.set(a, b, c);
    }


    // Демонстрация работы методов

    // Первая окружность
    std::cout << "\n\nДля первой окружности:\n\n";
    
    std::cout << "Площадь: " << circle1.area() << '\n';
    std::cout << "Треугольник можно вписать: " << circle1.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << circle1.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nСо второй: " << circle1.check_circle(r2, x2, y2);
    std::cout << "\nС третьей: " << circle1.check_circle(r3, x3, y3);

    // Вторая окружность
    std::cout << "\n\nДля второй окружности:\n\n";
    
    std::cout << "Площадь: " << circle2.area() << '\n';
    std::cout << "Треугольник можно вписать: " << circle2.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << circle2.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nС первой: " << circle2.check_circle(r1, x1, y1);
    std::cout << "\nС третьей: " << circle2.check_circle(r3, x3, y3);

    // Третья окружность
    std::cout << "\n\nДля третьей окружности:\n\n";
    
    std::cout << "Площадь: " << circle3.area() << '\n';
    std::cout << "Треугольник можно вписать: " << circle3.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << circle3.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nС первой: " << circle3.check_circle(r1, x1, y1);
    std::cout << "\nСо второй: " << circle3.check_circle(r2, x2, y2);
}
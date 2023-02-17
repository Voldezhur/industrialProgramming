// Задача с классом треугольника


#include <iostream>
#include <math.h>

// Класс треугольника
class Triangle
{
private:
    double a, b, c;

public:
    // Объявить значения сторон
    void set(double _a, double _b, double _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }   

    // Вывести значения сторон
    void show()
    {
        std::cout << "a:" << a << "; b:" << b << "; c:" << c;
    }

    // Существует ли треугольник
    bool exst_tr()
    {
        return (a + b > c && a + c > b && b + c > a);
    }

    // Периметр
    double perimeter()
    {
        return(a + b + c);
    }

    // Площадь
    double area()
    {
        double p = this->perimeter() / 2;

        return(sqrt(p * (p - a) * (p - b) * (p - c)));
    }
};


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
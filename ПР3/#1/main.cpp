// Главный файл задачи 1
// Для запуска: g++ -o main main.cpp eq2.cpp && ./main


#include <iostream>
#include "eq2.h"


int main()
{
    // Ввод коэффициентов
    double _a, _b, _c;

    std::cout << "Занесите значения коэффициентов через пробел:\n";
    std::cin >> _a >> _b >> _c;

    eq2 quadratic1(_a, _b, _c);

    // Ввод x1 для подстановки
    double x1;
    
    std::cout << "\nВведите x1 для подстановки\n";
    std::cin >> x1;


    // Вывод корней
    double X = quadratic1.find_X();

    std::cout << "Наибольший корень уравнения: \n" << X << '\n';

    
    // Вывод значения многочлена
    std::cout << "Значение многочлена при X = x1: " << quadratic1.find_Y(x1);
}
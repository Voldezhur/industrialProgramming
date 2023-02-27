// Главный файл задачи 1
// Для запуска: g++ -o main main.cpp eq2.cpp && ./main


#include <iostream>
#include "eq2.h"


// Перегрузка оператора + для работы с многочленами
eq2 operator + (eq2 A, eq2 B)
{
    eq2 temp(A.get_a() + B.get_a(), A.get_b() + B.get_b(), A.get_c() + B.get_c());

    return temp;
}


int main()
{
    // Ввод коэффициентов первого уравнения
    double _a, _b, _c;

    std::cout << "Занесите значения коэффициентов первого уравнения через пробел:\n";
    std::cin >> _a >> _b >> _c;

    eq2 quadratic1(_a, _b, _c);


    // Ввод коэффициентов второго уравнения
    std::cout << "Занесите значения коэффициентов второго уравнения через пробел:\n";
    std::cin >> _a >> _b >> _c;

    eq2 quadratic2(_a, _b, _c);


    // Ввод x1 для подстановки
    double x1;
    
    std::cout << "\nВведите x1 для подстановки\n";
    std::cin >> x1;


    // Для первого уравнения

    // Вывод корней
    double X = quadratic1.find_X();

    std::cout << "Наибольший корень первого уравнения: " << X << '\n';

    
    // Вывод значения многочлена
    std::cout << "Значение первого многочлена при X = x1: " << quadratic1.find_Y(x1);
    std::cout << "\n\n";


    // Для второго уравнения
    
    // Вывод корней
    X = quadratic2.find_X();

    std::cout << "Наибольший корень второго уравнения: " << X << '\n';

    
    // Вывод значения многочлена
    std::cout << "Значение второго многочлена при X = x1: " << quadratic2.find_Y(x1);
    std::cout << "\n\n";

    // Сложение многочленов
    eq2 quadratic3 = quadratic1 + quadratic2;
    
    std::cout << "Результат сложения многочленов:\n";
    quadratic3.print();
}
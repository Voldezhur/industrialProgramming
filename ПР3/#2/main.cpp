// Главный файл задачи с классом дробей
// g++ -o main main.cpp rational.cpp && ./main


#include <iostream>
#include "rational.h"


int main()
{
    int _a, _b;
    
    std::cout << "Введите числитель и знаменатель дроби через пробел:\n";
    std::cin >> _a >> _b;

    rational rat1(_a, _b);

    rat1.show();

    std:: cout << '\n';
}
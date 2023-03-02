// Главный файл задачи с классом дробей
// g++ -o main main.cpp rational.cpp && ./main


#include <iostream>
#include "rational.h"


int main()
{
    
    // Создание динамического массива
    int n;

    std::cout << "Введите размер массива: ";
    std::cin >> n;

    rational* A = new rational;
    
    
    // Занесение элементов в массив
    for(int i = 0; i < n; i++)
    {
        int _a, _b;

        std::cout << "\nВведите числитель и знаменатель дроби через пробел:\n";
        std::cin >> _a >> _b;

        A[i].set(_a, _b);
    }

    // Вывод элементов массива
    std::cout << "Введенные дроби:'\n";

    for(int i = 0; i < n; i++)
    {
        A[i].show();
        std::cout << '\n';
    }

    delete[] A;
}
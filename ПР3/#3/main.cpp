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

    // Проверка работы методов
    int selection1, selection2;

    if (n > 1)
    {
        // Сложение
        
        std::cout << "Какие дроби сложить? (отсчет начинается с нуля)\n";
        std::cin >> selection1 >> selection2;

        rational sum = A[selection1] +  A[selection2];
        
        sum.show();

        // Вычитание
        std::cout << "\n\nКакие дроби вычесть? (отсчет начинается с нуля)\n";
        std::cin >> selection1 >> selection2;

        rational diff = A[selection1] - A[selection2];
        
        diff.show();

        // Сравнение ==
        std::cout << "\n\nКакие дроби проверить на равность? (отсчет начинается с нуля)\n";
        std::cin >> selection1 >> selection2;

        bool areEqual = A[selection1] == A[selection2];
        
        std::cout << (areEqual ? "Дроби равны" : "Дроби не равны");

        // Сравнение >
        std::cout << "\n\nКакие дроби сравнить? (отсчет начинается с нуля)\n";
        std::cin >> selection1 >> selection2;

        rational max = A[selection1] > A[selection2];

        std::cout << "Наибольшая дробь: ";
        max.show();        
    }

    // Инкремент
    std::cout << "\n\nКакую дробь инкрементировать? (отсчет начинается с нуля)\n";
    std::cin >> selection1;

    A[selection1]++;
    A[selection1].show();

    std::cout << '\n';


    // Освобождение памяти
    delete[] A;
}
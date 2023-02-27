// Файл реалищации класса rational


#include <iostream>
#include "rational.h"


// Конструктор
rational::rational(int a1, int b1)
{
    a = a1;
    b = b1;
    canExist = true;

    // Проверка, чтобы знаменатель != 0
    if(b == 0)
    {
        a = 0;
        canExist = false;
    }

    // Проверка, чтобы числитель был не больше знаменателя
    while(a > b)
    {
        a -= b;
    }

    // Проверка на кратность числителя и знаменателя
    if(b % a == 0)
    {
        b /= a;
        a /= a;
    }
}

// Запись параметров в объект
void rational::set(int a1, int b1)
{
    a = a1;
    b = b1;
    canExist = true;

    // Проверка, чтобы знаменатель != 0
    if(b == 0)
    {
        a = 0;
        canExist = false;
    }

    // Проверка, чтобы числитель был не больше знаменателя
    if(a > b)
    {
        a -= b;
    }

    // Проверка на кратность числителя и знаменателя
    if(a % b == 0)
    {
        b /= a;
        a /= a;
    }
}

// Вывод дроби через черту
void rational::show()
{
    if(canExist) std::cout << a << '/' << b;

    else std::cout << "Не существует (знаменатель == 0)";
}
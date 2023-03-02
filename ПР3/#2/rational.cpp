// Файл реалищации класса rational


#include <iostream>
#include "rational.h"


// Конструктор по умолчанию
rational::rational()
{
    a = 0;
    b = 0;
    canExist = true;
}

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

    if(a == 0)
    {
        b = 0;
    }

    // Дальнейшие действия только если числитель или знаменатель не равен 0
    if(canExist && a != 0)
    {
        // Проверка на кратность числителя и знаменателя
        if(a % b == 0)
        {
            a /= b;
            b /= b;
        }

        // Проверка, чтобы числитель был не больше знаменателя
        while(a > b && b != 1)
        {
            a %= b;
        }

        if(b % a == 0)
        {
            b /= a;
            a /= a;
        }
    }
}

// Запись параметров в объект (Идентично с конструктором)
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

    if(a == 0)
    {
        b = 0;
    }

    // Дальнейшие действия только если числитель или знаменатель не равен 0
    if(canExist && a != 0)
    {
        // Проверка на кратность числителя и знаменателя
        if(a % b == 0)
        {
            a /= b;
            b /= b;
        }

        // Проверка, чтобы числитель был не больше знаменателя
        while(a > b && b != 1)
        {
            a %= b;
        }

        if(b % a == 0)
        {
            b /= a;
            a /= a;
        }
    }
}

// Вывод дроби через черту
void rational::show()
{
    if(canExist) std::cout << a << '/' << b;

    else std::cout << "Не существует (знаменатель == 0)";
}
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

        // Проверка на кратность знаменателя и числителя
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

// Получение переменных
int rational::get_a()
{
    return a;
}
int rational::get_b()
{
    return b;
}


// Перегрузки

// Перегрузка оператора +
rational operator + (rational A, rational B)
{
    // Приведение к общему знаменателю
    rational sum(A.get_a() * B.get_b() + B.get_a() * A.get_b(), A.get_b() * B.get_b());
    return sum;
}

// перегрузка оператора -
rational operator - (rational A, rational B)
{
    rational diff(A.a * B.b - B.a * A.b, A.b * B.b);
    return diff;
}

// Перегрузка оператора ++
rational rational::operator++ (int)
{
    a++;
    return *this;
}

// Перегрузка оператора =
rational rational::operator= (rational A)
{
    a = A.get_a();
    b = A.get_b();
    return *this;
}

// Перегрузка оператора ==
bool operator== (rational A, rational B)
{
    return(A.get_a() == B.get_a() && A.get_b() == B.get_b());
}

// Перегрузка оператора >
rational operator> (rational A, rational B)
{
    bool A_isBigger = A.get_a() * B.get_b() > B.get_a() * A.get_b();

    return (A_isBigger ? A : B);
}
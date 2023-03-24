// g++ -o main main.cpp Bay.cpp Sea.cpp Ocean.cpp && ./main

#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"
#include <iostream>
#include <string>


int main()
{
    // Создание Тихого океана
    Ocean ocean1("Pacific", 11022, 165200000);
    std::cout << ocean1 << '\n';

    // Создание Охотского моря
    Sea sea1("Okhotskoe", 3372, 1583000, &ocean1);
    std::cout << sea1 << '\n';

    // Создание залива Шелихова
    Bay bay1("Shelikhov", 350, 130000, &sea1);
    std::cout << bay1 << '\n';

    // Создание внутреннего моря
    Sea sea2("Caspian", 1025, 371000);
    std::cout << sea2 << '\n';
}
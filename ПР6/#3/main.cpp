// g++ -o main main.cpp Sea.cpp Ocean.cpp Reservoir.cpp && ./main

#include "Ocean.h"
#include "Sea.h"
#include <iostream>
#include <string>


int main()
{
    Ocean ocean1("Pacific");
    std::cout << ocean1;

    std::cout << '\n';

    Sea sea1;
    std::cout << sea1;

    std::cout << "\nПосле введения моря в океан\n\n";

    sea1.Set_parent(ocean1);
    std::cout << sea1;
}
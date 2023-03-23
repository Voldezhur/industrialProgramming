// g++ -o main main.cpp CutCone.cpp Cone.cpp && ./main

#include "CutCone.h"
#include <iostream>


int main()
{
    // Ввод произвольного количества усеченных конусов
    int n;
    std::cout << "Сколько усеченных конусов ввести?\n";
    std::cin >> n;

    CutCone* A = new CutCone[n];

    for(int i = 0; i < n; i++)
    {
        std::cout << "\n\nВведите усеченный конус " << i+1 << '\n';
        std::cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << A[i];
    }

    // Сравнение произвольных конусов если их больше 1
    if(n > 1)
    {
        int a, b;
        std::cout << "Какие конусы сравнить? (По индексам начиная от 0)\n";
        std::cin >> a >> b;

        std::cout << "1 < 2 \t-\t " << (A[a] < A[b]) << '\n';
        std::cout << "1 > 2 \t-\t " << (A[a] > A[b]) << '\n';
        std::cout << "1 <= 2 \t-\t " << (A[a] <= A[b]) << '\n';
        std::cout << "1 >= 2 \t-\t " << (A[a] >= A[b]) << '\n';
        std::cout << "1 == 2 \t-\t " << (A[a] == A[b]) << '\n';
    }

    // Удаление динамического массива, очистка памяти
    delete[] A;

    // Создание трех усеченных конусов, наследующих от одного конуса
    Cone cone1;
    
    std::cout << "\n\nВведите конус\n";
    
    int x, y, z;
    std::cout << "Введите координаты центра основания:\n";
    std::cin >> x >> y >> z;

    int r;
    std::cout << "Введите радиус онования конуса:\n";
    std::cin >> r;

    int h;
    std::cout << "Введите высоту конуса:\n";
    std::cin >> h;

    cone1.Set(x, y, z, r, h);
    std::cout << "Конус:\n";
    cone1.Print();

    std::cout << "\n\nТри усеченных конуса, наследующих от одного конуса:\n";

    CutCone cCone1(x, y, z, r, 1, h);
    CutCone cCone2(x, y, z, r, 2, h);
    CutCone cCone3(x, y, z, r, 3, h);

    std::cout << cCone1 << cCone2 << cCone3;
}
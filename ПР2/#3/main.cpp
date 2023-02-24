// Задача с классом четырехугольниика
// Чтобы связать с классом:
// g++ -o main main.cpp Figure.cpp Circle.cpp && ./main


#include <iostream>
#include "Figure.h"
#include "Circle.h"

int main()
{
    // Создание четырехугольников
    std::cout << "Первый четырехугольник\n";
    std::cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    float x1, x2, x3, x4, y1, y2, y3, y4;

    std::cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig1(x1, x2, x3, x4, y1, y2, y3, y4);


    std::cout << "Второй четырехугольник\n";
    std::cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    std::cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig2(x1, x2, x3, x4, y1, y2, y3, y4);


    std::cout << "Третий четырехугольник\n";
    std::cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    std::cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig3(x1, x2, x3, x4, y1, y2, y3, y4);


    // Создание окружности
    std::cout << "Задайте радиус и координаты центра окружности\n";

    float r, x_center, y_center;

    Circle circle1(r, x_center, y_center);


    // Демонстрация методов
    // Первый четырехугольник
    std::cout << "\n\nДля первого четырехугольника:\n\n";

    std::cout << "Параметры:";
    fig1.show();

    std::cout << "Ромб?: " << fig1.is_romb();
    std::cout << "Прямоугольник?: " << fig1.is_prug();
    std::cout << "Квадрат?: " << fig1.is_square();


    // Второй четырехугольник
    std::cout << "\n\nДля Второго четырехугольника:\n\n";

    std::cout << "Параметры:";
    fig2.show();

    std::cout << "Ромб?: " << fig2.is_romb() << '\n';
    std::cout << "Прямоугольник?: " << fig2.is_prug() << '\n';
    std::cout << "Квадрат?: " << fig2.is_square() << '\n';


    // Третий четырехугольник
    std::cout << "\n\nДля первого четырехугольника:\n\n";

    std::cout << "Параметры:";
    fig3.show();

    std::cout << "Ромб?: " << fig3.is_romb() << '\n';
    std::cout << "Прямоугольник?: " << fig3.is_prug() << '\n';
    std::cout << "Квадрат?: " << fig3.is_square() << '\n';
}
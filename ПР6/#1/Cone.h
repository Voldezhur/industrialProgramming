// Класс конусов

class Cone
{
    double x, y, z;

    double radius;
    double height;

public:
    // Конструкторы
    // Конструктор по умолчанию
    Cone();

    // Конструктор конуса с центром в начале координат
    Cone(double _radius, double _height);

    // Конструктор произвольного конуса
    Cone(double _x, double _y, double _z, double _radius, double _height);

    // Методы
    // Ввод конуса
    void Set(double _x, double _y, double _z, double _radius, double _height);

    // Вывод конуса
    void Print();

    // Площадь поверхности
    double Area();

    // Объем конуса
    double Volume();
};
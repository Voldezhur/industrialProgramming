// Заголовочный файл класса Circle


class Circle
{
private:
    float radius, x_center, y_center;

public:
    // Конструктор
    Circle(float r, float x, float y);
    
    // Задать значения
    void set_circle(float r, float x, float y);

    // Площадь
    float area();

    /* 
    Можно ли описать окружность вокруг треугольника
    со сторонами a, b, c
    */
    bool triangle_around(float a, float b, float c);

    /*
    Можно ли вписать в окружность треугольник
    со сторонами a, b, c
    */   
    bool triangle_in(float a, float b, float c);

    /*
    Пересекается ли с данной окружностью 
    окружность с заданными аргументами
    */
    bool check_circle(float r, float x_cntr, float y_cntr);
};
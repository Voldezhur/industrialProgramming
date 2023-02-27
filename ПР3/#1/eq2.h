// Описание класса eq2


class eq2
{
    double a, b, c;
    double D;
    
public:
    // Конструктор
    eq2(double a1, double b1, double c1);
    
    // Занесение значений
    void set(double a1, double b1, double c1);

    // Возвращает наибольший корень, или 0 с информацией, что корней нет
    double find_X();

    // Возвращает значение квадратого многочлена, если подставить x1 в X
    double find_Y(double x1);
};
#include "Cone.h"

class CutCone: public Cone
{
    double radius2;

public:
    CutCone();

    // Конструктор конуса с центром в начале координат
    CutCone(double _radius, double _raduis2, double _height);

    // Конструктор произвольного конуса
    CutCone(double _x, double _y, double _z, double _radius, double _radius2, double _height);
};
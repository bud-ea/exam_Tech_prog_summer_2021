#include "circle.h"

circle::circle() /// конструктор по умолчанию
{

}

circle::circle(double x, double y,double rad) ///конструктор с параметром
{
    x0=x;
    y0=y;
    r=rad;
}

double circle::space(double rad) ///написанный мной метод вычисления площади окружности
{

    double pi = 3.14;

    double S = pi * rad * rad;

    return S;

}

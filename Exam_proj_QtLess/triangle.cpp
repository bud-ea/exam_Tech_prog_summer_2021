#include "triangle.h"
#include <cmath>

triangle::triangle()
{

}

triangle::triangle(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}

int triangle::calculation()
{
    cout << abs((b_x - a_x) * (c_y - a_y) - (c_x - a_x) * (b_y - a_y)) / 2 << endl; //вычисляем площадь треугольника по формуле

}
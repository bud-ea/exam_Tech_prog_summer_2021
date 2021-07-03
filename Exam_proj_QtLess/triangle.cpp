/*!
    \brief Методы класса треугольника

    Задаёт координаты треугольника и вычисляет его периметр
*/
#include "math.h"
#include "triangle.h"
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

double triangle::pirimetr()
{
   int P = sqrt(pow(b_x - a_x, 2) + pow(b_y - a_y, 2)) + sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y, 2)) + sqrt(pow(a_x - c_x, 2) + pow(a_y - c_y, 2));
   return P;
}

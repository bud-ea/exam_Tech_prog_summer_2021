#include "triangle.h"
#include "math.h"

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
//!
//! \brief triangle::Perimeter данная функция предназначена для полученя периметра треугольника
//! \return возращает периметр треугольника
//!
double triangle::Perimeter ()
{
   int side_1 = sqrt(pow(b_x - a_x, 2) + pow(b_y - a_y, 2));
    int side_2 = sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y, 2));
   int side_3 = sqrt(pow(a_x - c_x, 2) + pow(a_y - c_y, 2));
   return side_1+side_2+side_3;
}

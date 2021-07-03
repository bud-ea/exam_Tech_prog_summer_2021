#include "triangle.h"
#include <math.h>
#include <iostream>
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

/*! double perimetr(int x1, int y1, int x2, int y2, int x3, int y3)
 * \brief Данная функция предназанчена для вычисления периметра треугольника
 * \param a, b, c - стороны треугольника
 * \param функция возвращает периметр - сумму всех сторон
 * Код функции:
 * \code
{
   double a,b,c,p;
   a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   b=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
   c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
   return a+b+c;
}
* \endcode
*/

#include "square.h"
#include <math.h>

square::square()
{

}

square::square(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];
}
//*!
//*  \brief Данная функция предназначена для  вычисления периметра квадрата
//*  \param a - сторона квадрата
//*  Код функции:
//*  \code
double perimetr(int x1, int y1, int x2, int y2)
{
    double a;
    a = sqrt((x2 * x2 - x1 * x1) + (y2 * y2 - y1 * y1));
    return a;
}
//\endcode
// */

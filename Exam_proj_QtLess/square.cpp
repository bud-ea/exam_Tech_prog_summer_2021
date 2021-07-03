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
square::perimetr()
{
    double a;
    a = sqrt((b_x * b_x - a_x * a_x) + (b_y * b_y - a_y * a_y));
    return a;
}
//\endcode
// */

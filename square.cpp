#include "square.h"

square::square() ///конструктор по умолчанию
{

}

square::square(double ver[]) ///конструктор с параметрами
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

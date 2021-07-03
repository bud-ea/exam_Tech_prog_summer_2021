#include "square.h"

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
double square::sqArea ()
{
 s=(a_x*b_y-b_x*a_y)*(b_x*c_y-c_x*b_y)*(c_x*d_y-d_x*c_y)*(d_x*a_y-a_x*d_y)/2;
 return s;
}

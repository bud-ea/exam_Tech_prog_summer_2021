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

double square::figure_square()
{
    ay=b_y - a_y;
    ax=b_x - a_x;
    a = sqrt(ax*ax+ay*ay);
    bx=c_x - b_x;
    by=c_y - b_y;
    b = sqrt(bx*bx+by*by);

    if (a==b, a_x==b_x==c_x==d_x)
        return true;
    else
        return false;
}

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

double square::p_square()
{
    ax=b_x - a_x;
    ay=b_y - a_y;
    a = sqrt(ax*ax+ay*ay);
    bx=c_x - b_x;
    by=c_y - b_y;
    b = sqrt(bx*bx+by*by);
    cx=d_x - c_x;
    cy=d_y - c_y;
    c=sqrt(cx*cx+cy*cy);
    dx=a_x - d_x;
    dy=a_y - d_y;
    d=sqrt(dx*dx+dy*dy);
    summ= a+b+c+d;
    return summ;

}

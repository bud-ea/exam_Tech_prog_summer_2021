#include <math.h>
#include "triangle.h"

triangle::triangle()
{
    a= sqrt(pow(a_x-b_x,2)+pow(a_y-b_y,2));
    b=sqrt(pow(b_x-c_x,2)+pow(b_y-c_y,2));
    c=sqrt(pow(c_x-a_x,2)+pow(c_y-a_y,2));
    p=a+b+c;
    p=char(p);
    otvet->write("Answer is ",p);
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

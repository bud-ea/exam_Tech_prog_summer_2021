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

double triangle::perimetr()
{
   double P = sqrt((b_x - a_x) * (b_x - a_x) + (b_y - a_y) * (b_y - a_y)) + sqrt((c_x - b_x) * (c_x - b_x)+ (c_y - b_y) * (c_y - b_y)) + sqrt((a_x - c_x) * (a_x - c_x) + (a_y - c_y) * (a_y - c_y));
   return P;
}

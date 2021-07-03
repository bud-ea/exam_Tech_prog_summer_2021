#include "circle.h"

circle::circle()
{

}

circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

double circle::circumference()
{
    return 2 * r * 3.14;
}

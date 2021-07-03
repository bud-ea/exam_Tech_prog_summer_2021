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
double circle::areaofacircle()
{
    return r*r*3.14;
}


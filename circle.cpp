#include "circle.h"
#include <math.h>

circle::circle()
{

}

circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

double circle::space(double rad)
{
    double pi = 3.14;
    double S = pi * rad * rad;
    return S;
}
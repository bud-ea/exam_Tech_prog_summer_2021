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
double circle::S(double rad){
    double p = 3.14;
    double S = p * rad * rad;
    return S;

}

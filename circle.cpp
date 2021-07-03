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
double circle::getPer(){
return 3,14*2*r;
}

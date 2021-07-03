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

	/**
	@brief метод вычисления периметра круга. Для вычисления используется формула P=2πR
	*/
double circle::get_P()
{
	return 2*r*3.141592653589793238463;
}

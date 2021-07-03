#include "circle.h"
#include <cmath>


/*! \brief Методы класса circle
    Задаёт координаты круга и вычисляет его периметр
*/
circle::circle()
{

}


circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

/// Метод вычисления периметра круга через формулу
///Нулевые координаты в формуле равны 0

double circle::perim(){
    x0 = 2;
    x0 = 3;
    float p = 2*(3.14)*(pow((pow(x0,2) + pow(y0,2)),(1/2)));
    return p;
}


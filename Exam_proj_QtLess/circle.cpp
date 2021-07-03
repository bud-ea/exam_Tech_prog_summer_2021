/**
* \file
* \brief файл реализации методов класса Circle.
*/
#include "circle.h"
#include <iostream>
/**
* @brief circle::circle Конструктор класса
*/
circle::circle()
{

}
/**
 * @brief circle::circle конструктор класса
 * @param x - абсцисса центра
 * @param y - ордината центра
 * @param rad - радиус круга
 */
circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

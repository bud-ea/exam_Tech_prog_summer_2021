#include "circle.h"

/*!
 * \brief circle::circle - конструктор класса circle без параметров
 */
circle::circle()
{

}
/*!
 * \brief circle::circle - конструктор класса circle с параметрами
 * \param x - координата x центра окружности
 * \param y - координата y центра окружности
 * \param rad - радиус окружности
 *
 * Задает своим полям значения параметров
 */

circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

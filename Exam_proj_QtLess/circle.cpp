#include "circle.h"
/**
 * @brief circle::circle Конструктор по умолчанию
 */
circle::circle()
{

}
/**
 * @brief circle::circle Конструктор с параметрами
 * @param x Х-координата
 * @param y Y-координата
 * @param rad Радиус
 */
circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

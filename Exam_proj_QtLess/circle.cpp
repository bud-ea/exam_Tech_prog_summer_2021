/**
* \file
* \brief Данный файл отвечает за реализацию класса circle
*
* В данном классе представлена реализация конструкторов и методов класса circle
*
*/
#include "circle.h"

/**
 * @brief circle::circle
 *
 * Конструктор класса circle
 *
 */
circle::circle()
{

}
/**
 * @brief circle::circle
 * @param x - кооридната Ox
 * @param y - коорданата Oy
 * @param rad - радиус
 *
 * Перегрузка конструктора класса circle со входными параметарми
 */
circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

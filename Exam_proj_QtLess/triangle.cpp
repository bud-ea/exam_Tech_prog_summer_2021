/**
* \file
* \brief файл реализации методов класса Triangle.
*/
#include "triangle.h"
/**
 * @brief triangle::triangle конструктор класса
 */
#include <iostream>

triangle::triangle()
{

}
/**
 * @brief triangle::triangle конструктор класса через массив координат
 * @param ver - массив, содержащий double значения координат вершин
 */
triangle::triangle(double a_x, double a_y, double b_x, double b_y, double c_x, double c_y)
{
    x1 = a_x;
    y1 = a_y;
    x2 = b_x;
    y2 = b_y;
    x3 = c_x;
    y3 = c_y;
}
/**
 * @brief функция класса, отвечающая за вычисление площади треугольника
 * @return возвращает площадь треугольника
 */
double triangle::area_calc()
{
    double area = fabs( 0.5 * ( ( x1 * y2 + x2 * y3 + x3 * y1 ) -
                ( y1 * x2 + y2 * x3 + y3 * x1 ) ) );
    return area;
}


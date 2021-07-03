#include "triangle.h"

/*!
 * \brief triangle::triangle Создание объекта треугольник
 * \param ver массив с координатами точек треугольника
 */

triangle::triangle(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}

/*!
 * \brief triangle::perimeter Математическая модель вычисления площади треугольника
 * \return Вывод в double площади треугольника
 */

double triangle::perimeter()
{
    return sqrt(pow((a_x - a_y),2)*pow((b_x - b_y),2)*pow((c_x  - c_y),2));
}

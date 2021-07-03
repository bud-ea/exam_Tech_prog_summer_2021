#include "triangle.h"
/*!
 * \brief triangle::triangle - конструктор функции треугольника
 */
triangle::triangle()
{

}
/*!
 * \brief triangle::triangle функция нахождения треугольника
 * \param ver - массив значений
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

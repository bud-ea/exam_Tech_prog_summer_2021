#include "triangle.h"

/*!
 * \brief triangle::triangle - конструктор класса triangle без параметров
 */
triangle::triangle()
{

}

/*!
 * \brief triangle::triangle - конструктор класса trinagle с параметрами
 * \param ver - массив типа double, внутри которого находятся координаты точек
 *
 * Задает своим полям значения параметров
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

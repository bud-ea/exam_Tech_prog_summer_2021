/**
* \file
* \brief файл реализации методов класса Triangle.
*/
#include "triangle.h"
/**
 * @brief triangle::triangle конструктор класса
 */
triangle::triangle()
{

}
/**
 * @brief triangle::triangle конструктор класса через массив координат
 * @param ver - массив, содержащий double значения координат вершин
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

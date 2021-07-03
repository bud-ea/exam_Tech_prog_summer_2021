/**
* \file
* \brief Данный файл отвечает за реализацию класса triangle
*
* В данном классе представлена реализация конструкторов и методов класса triangle
*
*/
#include "triangle.h"
/**
 * @brief square::square
 *
 * Конструктор класса triangle
 *
 */
triangle::triangle()
{

}
/**
 * @brief triangle::triangle
 * @param ver - массив координат вершин
 *
 * Перегрузка класса square со входным параметром
 *
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

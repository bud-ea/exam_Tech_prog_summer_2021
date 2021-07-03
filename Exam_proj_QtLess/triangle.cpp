/**
* \file
* \brief Данный файл отвечает за реализацию класса triangle
*
* В данном классе представлена реализация конструкторов и методов класса triangle
*
*/
#include "triangle.h"
#include <math.h>
#include <iostream>

/**
 * @brief square::square
 *
 * Конструктор класса square
 *
 */
triangle::triangle()
{

}

triangle::triangle(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}
/**
 * @brief triangle::triangle
 * @param ver - массив координат вершин
 *
 * Перегрузка класса triangle со входным параметром
 *
 */
 double triangle::perimetr()

{
   double a,b,c,p;
   a=sqrt(pow(b_x-a_x,2)+pow(b_y-a_y,2));
   b=sqrt(pow(c_x-a_x,2)+pow(c_y-a_y,2));
   c=sqrt(pow(c_x-b_x,2)+pow(c_y-b_y,2));
   return a+b+c;
}


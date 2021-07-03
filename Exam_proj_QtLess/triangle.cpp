#include "triangle.h"
/**
 * @brief triangle::triangle Конструктор по умолчанию
 */
triangle::triangle()
{

}
/**
 * @brief triangle::triangle Конструктор с параметрами
 * @param ver Масссив вершин
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
/**
 * @brief triangle::area
 * @return double res - результат вычисления площади
 */
double triangle::area()
{
    double res = 0.5 * ((a_x-c_x)*(b_y-c_y)-(b_x-c_x)*(a_y-c_y));
    if (res < 0)
        res *= -1;
    return res;
}

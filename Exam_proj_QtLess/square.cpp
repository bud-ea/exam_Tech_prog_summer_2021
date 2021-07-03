#include "square.h"
/**
 * @brief square::square Конструктор по умолчанию
 */
square::square()
{

}
/**
 * @brief square::square Конструктор с параметрами
 * @param ver Масссив вершин
 */
square::square(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];
}

#include "square.h"
#include "math.h"

square::square()
{

}
/** @brief Вычисление отрезка
 */
float otrezok(float x1, float y1, float x2, float y2)
{
float result;
result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
return result;
}

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

/** @brief Проверка является ли заданная фигура квадратом
 */
/** @return Верно ли, что фигура является квадратом
 */
bool square::figure_square()
{
    if (otrezok(a_x, a_y, b_x, b_y) * otrezok(a_x, a_y, d_x, d_y) == otrezok(a_x, a_y, b_x, b_y) * otrezok(a_x, a_y, b_x, b_y))
    {
        return true;
    }
}

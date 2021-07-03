#include "square.h"
/*!
 * \brief square::square - функция перехода к нахождению периметра
 * \param ver - наследует переданный массив
 */
square::square(double ver[])
{
    square_p(ver);
}
/*!
 * \brief square::square_p - проводит рассчет
 * \details
 * - Сначала находятся стороны, причем без разницы отрицательные координаты или нет
 * - Затем по этим сторонам находит периметр
 * \param ver массив значений
 * \return  для тестов
 */
bool square::square_p(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];
    ab=sqrt((b_x-a_x)*(b_x-a_x)+(b_y-a_y)*(b_y-a_y));
    ac=sqrt((c_x-a_x)*(c_x-a_x)+(c_y-a_y)*(c_y-a_y));
    cd=sqrt((d_x-c_x)*(d_x-c_x)+(d_y-c_y)*(d_y-c_y));
    db=sqrt((b_x-d_x)*(b_x-d_x)+(b_y-d_y)*(b_y-d_y));
    std::cout<<ab+ac+cd+db<<"   ";
    return true;
};

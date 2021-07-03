/*!
    \brief методы класса квадрата

    Задаёт координаты квадрата
*/
#include "square.h"

/*!
Задаёт координаты квадрата
\param Конструктор
\return Значения координат
*/

square::square()
{

}

/*!
Задаёт координаты квадрата
\param Массив из 8 значений х,y углов
\return Значения координат
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

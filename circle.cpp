/*!
    \brief Методы класса окружности

    Задаёт параметры окружности
*/
#include "circle.h"

/*!
Задаёт координаты окружности
\param Конструктор
\return Параметры окружности
*/

circle::circle()
{

}

/*!
Задаёт координаты окружности
\param  x,y и радиус
\return Параметры окружности
*/

circle::circle(double x, double y,double rad)
{
    x0=x;
    y0=y;
    r=rad;
}

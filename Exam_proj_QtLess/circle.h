/*!
    \brief Класс окружности

    Задаёт параметры окружности
*/
#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    /*!
    Задаёт координаты окружности
    \param Конструктор
    \return Параметры окружности
    */
    circle();
    /*!
    Задаёт координаты окружности
    \param  x,y и радиус
    \return Параметры окружности
    */
    circle(double x, double y,double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

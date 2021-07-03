#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief Класс круга, реализует создание круга и вычисление его длинны окружности.
 */
class circle
{
public:
    /*!
        * \brief Конструктор по умолчанию.
        */
    circle();
    /*!
         * \brief Конструктор, принимающий координаты центра и радиус.
         * \param Координата центра по x
         * \param Координата центра по y
         * \param Радиус
         */

    circle(double x, double y,double rad);
    /*!
        * \brief Метод вычисляет длинну окружности.
        * \return Возвращает длинну окружности.
        */
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

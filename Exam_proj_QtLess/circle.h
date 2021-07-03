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
    circle(double x, double y,double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

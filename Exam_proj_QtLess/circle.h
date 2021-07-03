#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief Класс круга
 */

class circle
{
public:
    circle();
    /*!
    * \brief Конструктор по умолчанию.
    */
    circle(double x, double y,double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

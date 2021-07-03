#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief The circle class - класс круга
 */
class circle
{
public:
    circle();
    circle(double x, double y,double rad);
private:
    double x0, y0, r;///< \brief Переменные для круга
};

#endif // CIRCLE_H

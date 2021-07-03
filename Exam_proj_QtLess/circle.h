#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief circle - создает кружочек
 */
class circle
{
public:
    circle();
    circle(double x, double y, double rad);

private:
    double x0; ///< \brief Координата x центра окружности
    double y0; ///< \brief Координата y центра окружности
    double r;  ///< \brief Радиус окружности
};

#endif // CIRCLE_H

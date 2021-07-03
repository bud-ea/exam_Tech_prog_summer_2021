#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 *  \brief Класс треугольников
 *
 *   Данный класс определет треугольник.
*/
class triangle
{
public:
    triangle();
    /*!
     *   Нахождение координат точек треугольника.
    */
    triangle(double ver[]);
private:
    double a_x;///< координата х точки А
    double a_y;///< координата у точки А
    double b_x;///< координата х точки В
    double b_y;///< координата у точки В
    double c_x;///< координата х точки С
    double c_y;///< координата у точки С
};

#endif // TRIANGLE_H

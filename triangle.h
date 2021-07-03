#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 * \brief The triangle class - класс треугольника
 */
class triangle
{
public:
    triangle();
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y; ///<\brief Переменные для треугольника
} ;
#endif // TRIANGLE_H

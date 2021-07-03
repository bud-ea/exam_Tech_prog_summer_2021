#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 * \brief Класс описывающий треугольник.
 */
class triangle
{
public:
    /*!
     * \brief Конструктор по умолчанию.
     */
    triangle();
    /*!
     * \brief Конструктор принимающий массив из координат точек.
     * \param a_x, a_y, b_x, b_y, c_x, c_y
     */
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

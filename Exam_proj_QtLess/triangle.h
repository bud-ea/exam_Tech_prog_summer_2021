#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 * \brief Класс треугольника
 */
class triangle
{
public:
    triangle();
    /*!
         * \brief Конструктор, принимающий координаты вершин.
         * \param Массив координат
         */
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

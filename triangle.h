
/*!
    \brief Класс треугольника

    Задаёт координаты треугольника и вычисляет его периметр
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle
{
public:
    triangle();
    triangle(double ver[]);
    /*!
    Находит периметр треугольника
    \param a_x, a_y, b_x, b_y, c_x, c_y Координаты углов треугольника
    \return Периметр
    */
    double Perimeter ();

private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

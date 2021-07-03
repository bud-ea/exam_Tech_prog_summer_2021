/*!
    \brief Класс треугольника

    Задаёт координаты треугольника и вычисляет его периметр
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle
{
public:
    /*!
    Задаёт координаты треугольника
    \param Конструктор
    \return Значения координат
    */
    triangle();
    /*!
    Задаёт координаты треугольника
    \param Массив из 6 значений х,y углов
    \return Значения координат
    */
    triangle(double ver[]);
    /*!
    Находит периметр треугольника
    \param a_x, a_y, b_x, b_y, c_x, c_y Координаты углов треугольника
    \return Периметр
    */
    double perimetr();

private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

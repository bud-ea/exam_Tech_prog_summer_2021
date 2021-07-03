/**
* \file
* \brief заголовочный файл с описанием класса Triangle.
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H

/**
 * @brief The triangle class
 *
 * Данный класс имеет два конструктора и поля координат вершин треугольника.
 */
class triangle
{
public:
    triangle();
    triangle(double a_x, double a_y, double b_x, double b_y, double c_x, double c_y);

    double area_calc();
private:
    double x1, y1, x2, y2, x3, y3;
};

#endif // TRIANGLE_H

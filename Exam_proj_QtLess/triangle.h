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
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

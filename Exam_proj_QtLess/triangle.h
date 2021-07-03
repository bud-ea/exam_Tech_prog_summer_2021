/**
 * @file
 * @brief Заголовочный файл с описанием класса triangle
 */
#ifndef TRIANGLE_H
#define TRIANGLE_H

/**
 * @brief класс triangle
 *
 * Класс "треугольник" с конструктором и его перегрузкой, а также
 * полями координат
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

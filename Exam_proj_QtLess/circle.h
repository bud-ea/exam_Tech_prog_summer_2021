/**
 * @file
 * @brief Заголовочный файл с описанием класса circle
 */
#ifndef CIRCLE_H
#define CIRCLE_H


/**
 * @brief класс circle
 *
 * Класс "круг" с конструктором и его перегрузкой, а также
 * полями координат и радиуса
 */
class circle
{
public:
    circle();
    circle(double x, double y,double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

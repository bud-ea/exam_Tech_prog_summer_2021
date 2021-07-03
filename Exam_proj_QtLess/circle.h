/**
* \file
* \brief заголовочный файл с описанием класса Circle.
*/

#ifndef CIRCLE_H
#define CIRCLE_H

/**
 * @brief The circle class
 *
 * Данный класс имеет два деструктора, имеет приватные поля координат центра и радиуса круга.
 *
 * Кроме этого, был добавлен метод circleArea, считающий площадь круга.
 */
class circle
{
public:
    circle();
    circle(double x, double y,double rad);

    double circleArea();
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

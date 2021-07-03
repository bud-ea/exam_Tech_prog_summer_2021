#ifndef CIRCLE_H
#define CIRCLE_H

/*!  \brief Класс circle, который задает координаты и радиус*/
class circle
{
public:
    circle();
    circle(double x, double y,double rad);
    ///Находит периметр треугольника
    double perim();
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

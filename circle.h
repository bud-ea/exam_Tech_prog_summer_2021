#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    circle();
    circle(double x, double y,double rad);
private:
    double x0; /// Координата x центра окружности
    double y0;/// Координата y центра окружности
    double r;/// Радиус окружности
};

#endif // CIRCLE_H

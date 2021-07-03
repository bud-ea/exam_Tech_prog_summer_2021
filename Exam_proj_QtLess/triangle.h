#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle /// Класс описывает треугольник
{
public:
    triangle();
    triangle(double ver[]);
    double triangleper(double a, double b, double c); /// функция с входными данными
    double triangle::triangleper(); /// функция без входных данных
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

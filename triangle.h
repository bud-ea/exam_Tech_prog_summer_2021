#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle ///объявление класса
{
public:
    triangle(); ///конструктор по умолчанию
    triangle(double ver[]); ///конструктор с параметром
private:
    double a_x, a_y, b_x, b_y, c_x, c_y; ///поля класса
};

#endif // TRIANGLE_H

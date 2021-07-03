#ifndef SQUARE_H
#define SQUARE_H


class square ///объявление класса квадрат
{
public:
    square(); ///конструктор по умолчанию
    square(double ver[]); ///конструктор с параметром
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y; /// поля класса
};

#endif // SQUARE_H

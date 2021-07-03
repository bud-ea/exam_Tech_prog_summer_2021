/**
 * @file
 * @brief Заголовочный файл с описанием класса square
 */
#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

/**
 * @brief класс square
 *
 * Класс "квадрат" с конструктором и его перегрузкой, а также
 * полями координат
 */
class square
{
public:
    square();
    square(double ver[]);

    double* get_coords();
    void show();
    bool check_square();
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

double dist(double a_x, double a_y,double  b_x,double  b_y);

#endif // SQUARE_H

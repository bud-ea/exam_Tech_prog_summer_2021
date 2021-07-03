#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>

/*!
 * \brief The square class - класс, в котором проходит подсчет периметра
 */

class square
{
public:
    square(double ver[8]);
    bool square_p(double ver[8]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y,ab,ac,cd,db;///< \brief Переменные для нахождения периметра квадрата
};
#endif // SQUARE_H

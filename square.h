#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

/*!
 * \brief square - создает многоугольник (прямоугольник или квадрат)
 */
class square
{
public:
    square();
    square(double ver[]);
    double square_of_square(double array[8]);

private:
    double arr[8]; ///< \brief Массив с координатами

};

#endif // SQUARE_H

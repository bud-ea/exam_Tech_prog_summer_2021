#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

/*!
 * \brief square - создает прямоугольничек (или квадратик)
 */
class square
{
public:
    square();
    square(double ver[]);
    double square_of_square(double array[8]);

private:
    double arr[8]; ///< \brief Массив координат

};

#endif // SQUARE_H

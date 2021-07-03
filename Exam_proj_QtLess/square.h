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

private:
    double a_x; ///< \brief Координата x точки a
    double a_y; ///< \brief Координата y точки a
    double b_x; ///< \brief Координата x точки b
    double b_y; ///< \brief Координата y точки b
    double c_x; ///< \brief Координата x точки c
    double c_y; ///< \brief Координата y точки c
    double d_x; ///< \brief Координата x точки d
    double d_y; ///< \brief Координата y точки d

    double square_of_square();
};

#endif // SQUARE_H

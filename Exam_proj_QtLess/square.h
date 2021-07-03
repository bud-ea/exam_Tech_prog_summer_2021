/**
* \file
* \brief заголовочный файл с описанием класса Square.
*/
#ifndef SQUARE_H
#define SQUARE_H

/**
 * @brief The square class
 *
 * Данный класс имеет два конструктора и поля координат вершин квадрата
 */
class square
{
public:
    square();
    square(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

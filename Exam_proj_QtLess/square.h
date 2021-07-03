#ifndef SQUARE_H
#define SQUARE_H
/*!
 * \brief Класс квадрата
 */

class square
{
public:
    /*!
     * \brief Конструктор по умолчанию.
     */
    square();
    square(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

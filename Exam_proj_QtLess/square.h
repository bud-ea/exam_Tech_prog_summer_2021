#ifndef SQUARE_H
#define SQUARE_H

/*!
 * \brief Класс описывающий квадрат.
 */
class square
{
public:
    /*!
     * \brief Конструктор по умолчанию.
     */
    square();
    /*!
     * \brief Конструктор принимающий массив из координат точек.
     * \param a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y
     */
    square(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

#ifndef SQUARE_H
#define SQUARE_H

/*!
 * \brief The square class
 */
class square
{
public:
/*!
* \brief square
*/
    square();
/*!
* \brief square
* \param ver - Массив координат точек квадрата
*/
    square(double ver[]);
/*!
* \brief area_square
* Функция подсчета площади квдрата
* \code
* void Area_square()
{
    double a;

        cout << "Введите сторону квадрата: ";

        cin >> a;
        cout << a*a;
}

*
* \endcode
*/
    void area_square();
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

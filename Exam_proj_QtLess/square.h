#ifndef SQUARE_H
#define SQUARE_H

/*!
 *  \brief Класс квадрат
 *
 *   Данный класс определет квадраты и находит их площадь.
*/
class square
{
public:
    square();
    /*!
     *   Нахождение координат точек квадрата.
    */
    square(double ver[]);
    /*!
     *   Нахождение площади квадрата.
    */
    double sqArea ();
private:
    double a_x;///< координата х точки А
    double a_y;///< координата у точки А
    double b_x;///< координата х точки В
    double b_y;///< координата у точки В
    double c_x;///< координата х точки С
    double c_y;///< координата у точки С
    double d_x;///< координата х точки D
    double d_y;///< координата у точки D
    double s;///< площадь квалрата
};

#endif // SQUARE_H

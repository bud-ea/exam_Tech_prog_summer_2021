/*!
    \brief Класс квадрата

    Задаёт координаты квадрата
*/
#ifndef SQUARE_H
#define SQUARE_H


class square
{
public:
    /*!
    Задаёт координаты квадрата
    \param Конструктор
    \return Значения координат
    */
    square();
    /*!
    Задаёт координаты квадрата
    \param Массив из 8 значений х,y углов
    \return Значения координат
    */
    square(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

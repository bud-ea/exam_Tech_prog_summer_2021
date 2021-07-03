#ifndef SQUARE_H
#define SQUARE_H
#include <cmath>

/*!
 * \brief Класс квадрата, реализует создания квадрата, проверяет фигуру на то что она квадрат, задаёт кординаты
 */
class square
{
public:
    square();
    /*!
            * \brief Конструктор, принимающий координаты вершин.
            * \param Массив координат
            */
    square(double ver[]);
    /*!
             * \brief Метод вычисляет яфляется ли фигура квадратом .
             * \return Возвращает истинну если фигура квадрат.
             */
    double per_square();
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y, ax, ay, a, bx, by, b,cx,cy,c,dx,dy,d,summ;

};

#endif // SQUARE_H

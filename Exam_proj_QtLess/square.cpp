/**
* \file
* \brief Данный файл отвечает за реализацию класса square
*
* В данном классе представлена реализация конструкторов и методов класса square
*
*/
#include "square.h"

/**
 * @brief square::square
 *
 * Конструктор класса square
 *
 */
square::square()
{

}

/**
 * @brief square::square
 * @param ver - массив координат вершин
 *
 * Перегрузка класса square со входным параметром
 *
 */
square::square(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];
}

double *square::get_coords()
{
    double *arr = new double[8];

    arr[0] = a_x;
    arr[1] = a_y;
    arr[2] = b_x;
    arr[3] = b_y;
    arr[4] = c_x;
    arr[5] = c_y;
    arr[6] = d_x;
    arr[7] = d_y;

    return arr;
}

void square::show()
{
    double *arr = new double[8];

    arr = this->get_coords();

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 2; j++)
            std::cout << arr[i + j] << " ";
        std::cout << std::endl;
        i += 1;
    }

}

bool square::check_square()
{

    double *arr = new double[8];
    arr = this->get_coords();

    double d2 = dist(arr[0], arr[1], arr[2], arr[3]); // от p1 до p2
    double d3 = dist(arr[0], arr[1], arr[4], arr[5]); // от p1 до p3
    double d4 = dist(arr[0], arr[1], arr[6], arr[7]); // от p1 до p4

    if (d2 == d3 && 2 * d2 == d4 && 2 * dist(arr[2], arr[3], arr[6], arr[7]) == dist(arr[2], arr[3], arr[4], arr[5]))
        return true;

    if (d3 == d4 && 2 * d3 == d2 && 2 * dist(arr[4], arr[5], arr[2], arr[3]) == dist(arr[4], arr[5], arr[6], arr[7]))
        return true;

    if (d2 == d4 && 2 * d2 == d3 && 2 * dist(arr[2], arr[3], arr[4], arr[5]) == dist(arr[2], arr[3], arr[6], arr[7]))
        return true;

    return false;
}

double dist(double a_x, double a_y, double b_x, double b_y)
{
    return (a_x - b_x) * (a_x - b_x) + (a_y - b_y) * (a_y - b_y);
}

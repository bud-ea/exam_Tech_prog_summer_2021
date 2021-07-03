#include "square.h"

/*!
 * \brief square::square - конструктор класса square без параметров
 */
square::square() {

}

/*!
 * \brief square::square - конструктор класса square с параметрами
 * \param ver - хранит в себе координаты вершин квадрата
 *
 * - Задает своим полям значения параметров
 * - Выводит площадь созданной фигуры
 */
square::square(double ver[]) {
    cout << "\nSquare created" << endl;

    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
    d_x = ver[6];
    d_y = ver[7];

    cout << "Square of the figure:" << square_of_square() << endl;
}

/*!
 * \brief square::square_of_square - высчитывает площадь фигуры
 * \return result - площадь фигуры типа **double**
 *
 * - Если фигура не наклонена, считает ее стороны и перемножает их
 * - Если фигура наклонена, считает ***диагонали*** (типа), перемножает их и делит пополам
 */
double square::square_of_square() {
    double result = 0.0;

    if (a_x == d_x && a_y == b_y) {
        double x = b_x - a_x;
        double y = a_y - d_y;

        result = x * y;
    } else {
        double x1 = b_x - d_x;
        double y1 = a_y - c_y;

        result = (x1 * y1) / 2;
    }

    return result;
}

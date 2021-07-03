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

    for (int i = 0; i < 8; i++) {
        arr[i] = ver[i];
    }
}

/*!
 * \brief square::square_of_square - высчитывает площадь фигуры
 * \return result - площадь фигуры типа **double**
 * \param array - массив с координатами вершин
 *
 * - Если фигура не наклонена, считает ее стороны и перемножает их
 * - Если фигура наклонена, считает ***диагонали*** (типа), перемножает их и делит пополам
 */
double square::square_of_square(double array[8]) {
    double result = 0.0;

    if (array[0] == array[6] && array[1] == array[3]) {
        double x = array[2] - array[0];
        double y = array[1] - array[7];

        result = x * y;
    } else {
        double x1 = array[2] - array[6];
        double y1 = array[1] - array[5];

        result = (x1 * y1) / 2;
    }

    return result;
}

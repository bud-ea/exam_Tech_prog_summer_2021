#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
///добавляем необходимые подключения
using namespace std;

/*!
 * \brief main - основная функция, запускаемая изначально
 * \param argc
 * \param argv
 * \return 0 - завершение программы
 */
int main() {
    cout << "Hello, " << endl;

    cout << "Do you want to " <<  "\"Write method for calculating area of square\"" << endl;

    double array1[8] = {0, 3, 3, 0, 0, -3, -3, 0};
    double array2[8] = {-3, 3, 3, 3, 3, -3, -3, -3};

    cout << "Enter coordinates of 8 dots:" << endl;

    square q1(array1);
    cout << "Square of the figure:" << q1.square_of_square(array1) << endl;
    square q2(array2);
    cout << "Square of the figure:" << q2.square_of_square(array2) << endl;

    return 0;
}

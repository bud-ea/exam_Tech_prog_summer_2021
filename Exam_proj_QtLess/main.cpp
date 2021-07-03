#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"

using namespace std;

/*!
 * \brief main - основная функция, запускаемая изначально
 * \param argc
 * \param argv
 * \return 0 - завершение программы
 */
int main(int argc, char *argv[]) {
    cout << "Hello, " << argv[1] << endl;

    cout << "Do you want to " <<  "\"Write a method for calculating the area of a square\"" << endl;

    double array1[8] = {0, 3, 3, 0, 0, -3, -3, 0};
    double array2[8] = {-3, 3, 3, 3, 3, -3, -3, -3};

    cout << "Enter coordinates of 8 dots:" << endl;

    /*for(int i = 0; i < 8; ++i) {
        cin >> array[i];
    }*/

    square q1(array1);
    cout << "Square of the figure:" << q1.square_of_square(array1) << endl;
    square q2(array2);
    cout << "Square of the figure:" << q2.square_of_square(array2) << endl;

    return 0;
}

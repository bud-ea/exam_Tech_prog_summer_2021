#include <iostream>
#include <cmath> ///подключаем библиотеку для вычисления модуля
#include "triangle.h"
#include "circle.h"
#include "square.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "Hello" << endl;
    cout << "Enter the coordinates of the vertices of the triangle" << endl;
    // cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y; ///вводим координаты всех точек треугольника
    double cor[6] = {8,3,6,1,7,4};
    triangle(cor);
    return 0;
}
#include <iostream>
#include <cmath> ///подключаем библиотеку для вычисления модуля
#include "triangle.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "Hello" << endl;
    cout << "Do you want to " << "your task" << endl;
    cout << "Enter the coordinates of the vertices of the triangle" << endl;
    cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y; ///вводим координаты всех точек треугольника

    cout << abs((b_x - a_x) * (c_y - a_y) - (c_x - a_x) * (b_y - a_y)) / 2 << endl; ///вычисляем площадь треугольника по формуле

    return 0;
}

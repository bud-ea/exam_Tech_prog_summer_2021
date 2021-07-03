/**
* \file
* \brief main файл проекта.
*/
#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

/**
 * @brief функция, отвечающая за вычисление площади треугольника
 * @return возвращает площадь треугольника
 */

int main(int argc, char*argv[])
{
    cout<<"Hello, "<< argv[1] << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    /* your code here*/
    triangle a(1, 1, 5, 1, 5, 4);
    double res = a.area_calc();
    cout << "triangle area = " << res;
    return 0;
}

/*!
    \brief Основная программа

    Выводит приветствие и вычисляет периметр треугольника
*/
#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
cout << "Hello, " << argv[1] << endl;

cout <<  "Do you want to " << "your task" << endl;

double tre[6]={1,2,3,4,5,6};
triangle n = triangle(tre);
n.perimetr();
double P = sqrt((tre[2] - tre[0]) * (tre[2] - tre[0]) + (tre[3] - tre[1]) * (tre[3] - tre[1])) + sqrt((tre[4] - tre[2]) * (tre[4] - tre[2])+ (tre[5] - tre[3]) * (tre[5] - tre[3])) + sqrt((tre[0] - tre[4]) * (tre[0] - tre[4]) + (tre[1] - tre[5]) * (tre[1] - tre[5]));
return 0;

}

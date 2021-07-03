#include "square.h"
#include <iostream>


using std::cin;
using std::cout;
using std::endl;

square::square()
{

}

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
void Area_square()
{
    double a;

        cout << "Введите сторону квадрата: ";

        cin >> a;
        cout << a*a;
}

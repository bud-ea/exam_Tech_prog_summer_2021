#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "math.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
    cout<<"Hello, " << endl;
    cout <<"Do you want to " <<  "know - is that square?" << endl;
//*  \brief Вычисление сторон и диагоналей квадрата
//*   \param x1
//*   \param y1
//*   \param x2
//*   \param y2
//*   \param x3
//*   \param y3
//*   \param x4
//*   \param y4
//*   \code
        int a_x=-5; int a_y=-5; int b_x=-5; int b_y=-2; int c_x=-2; int c_y=-2; int d_x=-2; int d_y=-5;
        double a,b,c,d,d1,d2;
        a=abs(b_y-a_y);
        b=abs(c_x-b_x);
        c=abs(c_y-d_y);
        d=abs(d_x-a_x);
        d1= a*sqrt(2);
        d2= a*sqrt(2);
        if (a==b and a==c and a==d and d1==d2)
                cout << "It's square" << endl;
                else cout << "It's not square" << endl;
    return 0;
}
//*   \endcode

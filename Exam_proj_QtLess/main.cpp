#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include <math.h>


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])

{

    cout <<"Hello, " << argv[1] << endl;

    cout <<"Do you want to " <<  "know perimetr of square?" << endl;

    //формула стороны квадрата = sqrt((b_x * b_x - a_x * a_x) + (b_y * b_y - a_y * a_y))

    int b_x = 1;
    int a_x = 3;
    int b_y = 2;
    int a_y = 4;

    int a = sqrt((b_x * b_x - a_x * a_x) + (b_y * b_y - a_y * a_y));

    int P;

    P = 4 * a;

    cout << "perimetr of square = " << P << std::endl;
    return 0;

}



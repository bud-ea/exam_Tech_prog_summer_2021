#include <iostream>
#include <string>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
    cout<<"Hello, Vasilii" << endl;

    double qwe[8]={0,0,3,0,3,3,0,3};
    square p = square(qwe);
    if (p.figure_square())
        cout <<"Square" << endl;

    return 0;
}

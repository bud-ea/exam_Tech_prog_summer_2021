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
    cout<<"Hello, Valeriya" << endl;

    double qwe[8]={0,0,10,0,10,10,0,10};
    square p = square(qwe);
    if (p.figure_square())
        cout <<"square" << endl;

    return 0;
}

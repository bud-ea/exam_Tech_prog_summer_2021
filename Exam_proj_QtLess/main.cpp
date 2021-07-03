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
    cout<<"Hello, !!!" << endl;

    double qwe[8]={0,0,1,0,1,1,0,1};
    square p = square(qwe);
    if (p.per_square())
        cout <<"eeee, its square" << endl;

    return 0;
}

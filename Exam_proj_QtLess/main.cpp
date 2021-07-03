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

    double qwe[8]={0,0,4,0,4,4,0,4};
    square p = square(qwe);
    if (p.p_square())
        cout <<"Square per: " <<p.p_square()<< endl;

    return 0;
}

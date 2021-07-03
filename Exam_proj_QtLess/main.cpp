#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
    cout<<"Hello, "<< argv[1] << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    double q[8]={0,0,1,0,3,3,0,1};
    square p = square(q);
    cout<< p.sqArea();

    return 0;
}

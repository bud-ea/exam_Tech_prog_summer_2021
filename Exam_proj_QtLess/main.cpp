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

    triangle a;
    a.triangleper();

    return 0;
}

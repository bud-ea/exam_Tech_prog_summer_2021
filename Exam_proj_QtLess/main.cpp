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
    double squ[8]={0,1,1,0,0,1,1,0};
    square p = square (squ);
    if (p.figure_square())
        cout << "it's square" << endl;
    /* your code here*/

    return 0;
}

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

    cout <<"Do you want to " <<  "find triangle area?" << endl;
    cout <<"Vert {2, -3, 1, 1, -6, 5}" << endl;
    double a[] = {2, -3, 1, 1, -6, 5};
    triangle tr(a);
    cout << "Triangle area is " << tr.area() << endl;
    /* your code here*/

    return 0;
}

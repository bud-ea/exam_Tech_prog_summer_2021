/**
* \file
* \brief main файл проекта.
*/
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

    cout <<"Do you want to " <<  "solve Circle Area?" << endl;

    //double rad = 5;

    circle a(0, 0, 10);
    double res = a.circleArea();
    cout << "Circle Area = " << res;
    /* your code here*/

    return 0;
}

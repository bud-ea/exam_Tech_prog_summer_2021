#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hello, Khoroshev Yura" << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    /* your code here*/

    triangle trian;
    double per = trian.perimetr(1, 5, 6, 7, 10, 3);
    cout << per << endl;
    return 0;
}

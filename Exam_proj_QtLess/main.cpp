#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
    cout<<"Hello, Khoroshev Yura" << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    /* your code here*/


    double par[6] = {1, 5, 6, 7, 10, 3};
    triangle trian(par);
    double per = trian.perimetr();
    cout << per << endl;
    return 0;
}

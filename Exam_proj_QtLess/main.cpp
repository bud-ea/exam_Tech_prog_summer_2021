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

    double qwe[8]={0,0,2,0,2,2,0,2};//создали массив с координатами
    square p = square(qwe);//определили square p
    if (p.figure_square()) //запускаем метод figure_square
        cout <<"It's square" << endl;

    return 0;
}

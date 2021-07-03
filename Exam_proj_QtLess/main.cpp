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

    circle a(0, 0, 5);

    cout << a.get_P();

    return 0;
}

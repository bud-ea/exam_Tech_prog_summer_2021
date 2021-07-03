#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << "Площадь ";
    circle crcl;
    crcl.S(5);
    cout << crcl.S(5)<< endl;
    getchar();
    return 0;
}

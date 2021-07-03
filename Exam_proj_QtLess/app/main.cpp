#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "You will now proceed to task 12" << endl;

    double radius = atof(argv[1]);
    circle c(0, 0, radius);

    cout << "Circle radius: " << radius << endl;
    cout << "Circle surface area is " << c.getSurface() << endl;

    getchar();
    return 0;
}

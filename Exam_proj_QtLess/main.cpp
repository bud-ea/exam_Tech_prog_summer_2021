#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

/*! Метод вычисления периметра круга через формулу
 Предположительно, нулевые координаты в формуле равны 0*/
void perim_circle(){
    int p = 2*(3,14)*((x**2) + (y**2))**(1/2));
    std::cout << "Perim of circle = " << p << std::endl;
}

int main(int argc,char*argv[])
{
    cout<<"Hello, "<< argv[1] << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    perim_circle();
    return 0;
}

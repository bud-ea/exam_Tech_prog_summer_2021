#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
{
    //cout<<"Hello, "<< argv[1] << endl;

    cout <<"Do you want to " <<  "check square?" << endl;

    cout << "enter coords: ";
    double arr[8] = {};
    for (int i = 0; i < 8; i++)
            cin >> arr[i];
    //double arr[8] = {0,0,0,1,1,1,1,0};

    square sq(arr);

    sq.show();

    sq.check_square() ? cout << "yes": cout << "no";

    getchar();
    return 0;
}

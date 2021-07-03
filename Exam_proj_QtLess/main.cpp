#include <iostream>
#include <math.h>
#include <stdio.h>
#include "triangle.h"
#include "square.h"
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

/*!
 * \brief main Основная функция запускающая при старте программы
 * \param argc
 * \param argv
 * \return
 */

int main(int argc,char*argv[])
{
    cout<<"Hello, "<< argv[1] << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    /* your code here*/
    bool flag = true;
    double mas[6] = {0,0,0,0,0,0};

    for (int i = 0; i < 6 ; i++) {
        if(flag)
        {
            cout << "Введите координату x:=";
            cin >> mas[i];
            flag = false;
        }else
        {
            cout << "Введите координату y:=";
            cin >> mas[i];
            flag = true;
        }
        cout << endl;
    }    

    triangle *tri = new triangle(mas);

    cout << "Площадь треугольника: " << tri->perimeter();

    return 0;
}

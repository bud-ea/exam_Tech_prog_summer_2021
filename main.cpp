#include <iostream>  ///библиотека ввода\вывода
#include "triangle.h" ///подключение заголовочных файлов поимённо
#include "square.h"
#include "circle.h"


using std::cin; ///использование ввода с помощью cin
using std::cout; ///использование вывода с помощью cout
using std::endl; ///использование переноса на новую строку с помощью endl

int main()
{
    cout<<"Hello, " << endl;

    cout <<"Do you want to " <<  "your task" << endl;

    circle A; ///создание объекта класса circle

    A.space(3); ///вызов метода вычисления площади к объекту

    cout<<A.space(3); ///вывод на печать

    return 0;
}

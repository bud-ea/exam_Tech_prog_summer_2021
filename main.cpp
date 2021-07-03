#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"

using std::cin;
using std::cout;
using std::endl;
/*!
 * \brief main - запуск программы
 * \details
 * - Инцилизирует массивы и передает их в функцию квадрат
 * \return -возвращает 0
 */

int main()
{
    double ver1[8]={0,0,5,0,0,5,5,5};
    square ver (ver1);
    double ver2[8]={0,0,5,5,-5,5,0,10};
    square ver3 (ver2);
    return 0;

}

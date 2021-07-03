#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include <math.h>


using std::cin;
using std::cout;
using std::endl;

int main(int argc,char*argv[])
// *  \brief Данная функция предназначена для  вычисления периметра квадрата
// *  \param a - сторона квадрата
// *  \param P - периметр квадрата
// *  Код функции:
// *  \code
{

    cout <<"Hello, " << endl;

    cout <<"Do you want to " <<  "know perimetr of square?" << endl;

    //формула стороны квадрата = sqrt((b_x * b_x - a_x * a_x) + (b_y * b_y - a_y * a_y))

    square sq;
    double per = sq.perimetr(1, 2, 3, 4);

    cout << "Perimetr of square = " << per << std::endl;

    return 0;

}
//* \endcode
//*/


/*!
\brief методы класса,cpp файл

Для треугольника

Находим периметр
*/
#include "triangle.h"
#include "math.h"
triangle::triangle()
{

}

triangle::triangle(double ver[])
{
    //prisvaivaem coordinates
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];

}
double triangle::perimetr()
{
    //float P = sqrt((b_x - a_x) * (b_x - a_x) + (b_y - a_y) * (b_y - a_y)) + sqrt((c_x - b_x) * (c_x - b_x)+ (c_y - b_y) * (c_y - b_y)) + sqrt((a_x - c_x) * (a_x - c_x) + (a_y - c_y) * (a_y - c_y));
    //return P;
    double tre[6]={1,2,3,4,5,6};
    double P = sqrt((tre[2] - tre[0]) * (tre[2] - tre[0]) + (tre[3] - tre[1]) * (tre[3] - tre[1])) + sqrt((tre[4] - tre[2]) * (tre[4] - tre[2])+ (tre[5] - tre[3]) * (tre[5] - tre[3])) + sqrt((tre[0] - tre[4]) * (tre[0] - tre[4]) + (tre[1] - tre[5]) * (tre[1] - tre[5]));
    return P;

}

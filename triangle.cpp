#include "triangle.h"

triangle::triangle() ///конструктор по умолчанию
{

}

triangle::triangle(double ver[]) ///конструктор с параметрами
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}

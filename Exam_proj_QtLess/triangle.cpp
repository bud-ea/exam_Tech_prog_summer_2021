#include "triangle.h"

triangle::triangle()
{

}

triangle::triangle(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}

double triangle::triangleper(double a,double b,double c) {
    double P;

    P = a+b+c; /// вычисляем периметр

    return P;
}

double triangle::triangleper() {
    double a,b,c, P;
    a = (b_x - a_x)*(a_x - b_x) + (b_y - a_y)*(b_y - a_y); /// вычисляем первую сторону
    b = (c_x - b_x)*(c_x - b_x) + (c_y - b_y)*(c_y - b_y);/// вычисляем вторую сторону
    c = (c_x - a_x)*(c_x - a_x) + (c_y - a_y)*(c_y - a_y);/// вычисляем третью сторону

    P = a+b+c; /// вычисляем периметр

    return P;
}

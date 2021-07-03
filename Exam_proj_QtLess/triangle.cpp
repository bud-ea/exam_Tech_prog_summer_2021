#include "triangle.h"

triangle::triangle() // constructor
{

}

triangle::triangle(double ver[]) // constructor s ispolzovaniem massiva
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}

triangle::area() // nahozhdenie ploshadi
{
    double storona_ab = sqrt(pow(b_x - a_x, 2) + pow(b_y - a_y, 2));

    double storona_bc = sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y, 2));

    double storona_ac = sqrt(pow(c_x - a_x, 2) + pow(c_y - a_y, 2));

    double halfperim = (storona_ab + storona_bc + storona_ac) / 2;

    double area = sqrt(halfperim * (halfperim - storona_ab) * (halfperim - storona_bc) * (halfperim - storona_ac));
    
    return area;
}

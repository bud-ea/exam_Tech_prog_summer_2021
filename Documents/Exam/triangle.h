#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include <iostream>

class triangle
{
public:
    triangle();
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
    double a,b,c,p;
    std::string otvet;
};

#endif // TRIANGLE_H

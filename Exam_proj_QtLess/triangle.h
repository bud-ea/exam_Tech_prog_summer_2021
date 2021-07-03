#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle
{
public:
    triangle();
    triangle(double ver[]);
    int calculation();
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, s;
};

#endif // TRIANGLE_H

#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle
{
public:
    triangle();
    triangle(double ver[]);
    double perimetr(int x1, int y1, int x2, int y2, int x3, int y3);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;

};

#endif // TRIANGLE_H

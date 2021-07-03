#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    circle();
    circle(double x, double y, double rad);
    double getSurface();
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

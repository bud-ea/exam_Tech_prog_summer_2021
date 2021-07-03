#ifndef TRIANGLE_H
#define TRIANGLE_H

/**
 * @brief The triangle class
 */
class triangle
{
public:
    triangle();
    triangle(double ver[]);
    double area();
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

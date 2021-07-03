#ifndef TRIANGLE_H
#define TRIANGLE_H


class triangle
{
public:
    triangle(); // constructor
    triangle(double ver[]); // constructor s ispolzovaniem massiva
    area(); // nahozhedenie ploshadi
private:
    double a_x, a_y, b_x, b_y, c_x, c_y; // x and y dlya kashdoi storoni
};

#endif // TRIANGLE_H

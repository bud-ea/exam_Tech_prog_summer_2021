#ifndef SQUARE_H
#define SQUARE_H


class square
{
public:
    square();
    square(double ver[]);
    kvadrat_check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

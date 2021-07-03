#ifndef SQUARE_H
#define SQUARE_H


class square
{
public:
    square();
    square(double ver[]);
    double perimetr(int x1, int y1, int x2, int y2);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

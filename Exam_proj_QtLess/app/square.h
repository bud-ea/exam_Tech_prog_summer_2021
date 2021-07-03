#ifndef SQUARE_H
#define SQUARE_H

/**
 * @brief Square figure
 * 
 */
class square
{
public:
    /**
     * @brief Construct a new square object
     * 
     */
    square();

    /**
     * @brief Construct a new square object
     * 
     * @param ver Array of corner coordinates;
     * ver[0] - X coordinate of corner A;
     * ver[1] - Y coordinate of corner A;
     * 
     * ver[2] - X coordinate of corner B;
     * ver[3] - X coordinate of corner B;
     * 
     * ver[4] - X coordinate of corner C;
     * ver[5] - X coordinate of corner C;
     * 
     * ver[6] - X coordinate of corner D;
     * ver[7] - X coordinate of corner D;
     */
    square(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y, d_x, d_y;
};

#endif // SQUARE_H

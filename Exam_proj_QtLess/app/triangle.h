#ifndef TRIANGLE_H
#define TRIANGLE_H

/**
 * @brief Triangle figure
 * 
 */
class triangle
{
public:
    /**
     * @brief Construct a new triangle object
     * 
     */
    triangle();

    /**
     * @brief Construct a new triangle object
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
     */
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

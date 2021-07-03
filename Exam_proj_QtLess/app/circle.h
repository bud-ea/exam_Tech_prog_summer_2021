#ifndef CIRCLE_H
#define CIRCLE_H

/**
 * @brief Circle figure
 * 
 */
class circle
{
public:
    /**
     * @brief Construct a new circle object
     * 
     */
    circle();

    /**
     * @brief Construct a new circle object
     * 
     * @param x X coordinate of circle center
     * @param y Y coordinate of circle center
     * @param rad Radius of circle
     */
    circle(double x, double y, double rad);

    /**
     * @brief Get the Surface Area of circle
     * 
     * @return Surface area of circle
     */
    double getSurface();
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

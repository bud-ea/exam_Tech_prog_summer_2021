#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief The circle class
 */

class circle
{
public:
    /*!
     * \brief construct a new circle
     */
    circle();
    /*!
     * \brief construct a new circle
     * \param x coordinate
     * \param y coordinate
     * \param rad coordinate
     */
    circle(double x, double y,double rad);
    /*!
     * \brief get space area of ciecle
     * \param rad
     * \return
     */
    double space(double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

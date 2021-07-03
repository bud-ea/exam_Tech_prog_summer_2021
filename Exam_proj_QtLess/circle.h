#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 * \brief The circle class
 */
class circle
{
public:
/*!
* \brief circle
*/
    circle();
/*!
* \brief circle
* \param x - координата
* \param y - координата
* \param rad - радиус
*/
    circle(double x, double y,double rad);
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

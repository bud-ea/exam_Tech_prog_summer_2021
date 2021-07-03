#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 * \brief The triangle class
 */
class triangle
{
public:
    /*!
     * \brief triangle
     */
    triangle();
/*!
* \brief triangle
* \param ver - Массив координат точек треугольника
* \code
* triangle::triangle(double ver[])
{
    a_x = ver[0];
    a_y = ver[1];
    b_x = ver[2];
    b_y = ver[3];
    c_x = ver[4];
    c_y = ver[5];
}
* \endcode
*/
    triangle(double ver[]);
private:
    double a_x, a_y, b_x, b_y, c_x, c_y;
};

#endif // TRIANGLE_H

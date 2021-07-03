#ifndef TRIANGLE_H
#define TRIANGLE_H

/*!
 * \brief triangle - создает треугольник
 */
class triangle
{
public:
    triangle();
    triangle(double ver[]);
private:
    double a_x; ///< \brief Координата x точки a
        double a_y; ///< \brief Координата y точки a
        double b_x; ///< \brief Координата x точки b
        double b_y; ///< \brief Координата y точки b
        double c_x; ///< \brief Координата x точки c
        double c_y; ///< \brief Координата y точки c
};

#endif // TRIANGLE_H

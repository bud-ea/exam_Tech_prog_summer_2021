#ifndef CIRCLE_H
#define CIRCLE_H

/*!
 *  \brief Класс крга
 *
 *   Данный класс определет круг.
*/
class circle
{
public:
    circle();
    /*!
     *   Нахождение координат центра и длинны радиуса из введённой стрки.
    */
    circle(double x, double y,double rad);
private:
    double x0;///< координата у центра
    double y0;///< координата х центра
    double r;///< длинна радиуса
};

#endif // CIRCLE_H

#ifndef CIRCLE_H
#define CIRCLE_H
/*!
 * \brief Класс круга, создаёт круги вычисляет его площадь
 */

class circle
{
public:
    /*!
     * \brief Конструктор по умолчанию.
     */
    circle();
    /*!
     * \brief Конструктор, принимающий координаты центра и радиус.
     * \param Координата x
     * \param Координата y
     * \param Радиус
     */
    circle(double x, double y,double rad);
    /*!
     * \brief Метод вычисляет площадь окружности.
     * \return Возвращает площадь окружности
     */
    double areaofacircle();
private:
    double x0, y0, r;

};

#endif // CIRCLE_H

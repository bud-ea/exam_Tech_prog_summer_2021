#ifndef CIRCLE_H
#define CIRCLE_H


class circle ///объявление класса круг
{
public: ///публичные методы
    circle(); ///конструктор по умолчанию
    circle(double x, double y,double rad); ///конструктор с параметрами
    double space(double rad); ///написанный мной метод вычисления площади круга
private: ///приватные методы
    double x0, y0, r; ///поля класса
};

#endif // CIRCLE_H

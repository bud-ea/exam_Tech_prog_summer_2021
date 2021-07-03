#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    circle();
    circle(double x, double y,double rad);
	/**
	@brief метод вычисления периметра круга
	@return Возвращаемое значение Периметра круга (тип данных: double)
	*/
	double get_P();
private:
    double x0, y0, r;
};

#endif // CIRCLE_H

#include "triangle.h"

triangle::triangle() //конструктор
{

}
//функция для треугольника с параметрами a (по оси x), a (по оси y), b (по оси x), b (по оси y), c (по оси x), c (по оси y)
triangle::triangle(double ver[])
{
    a_x = ver[0]; //вершина a (ось x)
    a_y = ver[1]; //вершина a (ось y)
    b_x = ver[2]; //вершина b (ось x)
    b_y = ver[3]; //вершина b (ось y)
    c_x = ver[4]; //вершина c (ось x)
    c_y = ver[5]; //вершина c (ось y)
}

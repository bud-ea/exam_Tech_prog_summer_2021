#include <QtTest>
#include "..\Exam_proj_QtLess\triangle.cpp"

// add necessary includes here

class Tests_Triangle : public QObject
{
    Q_OBJECT

public:
    Tests_Triangle();
    ~Tests_Triangle();

private slots:
    void test_triangle_perimetr(double answer, double* par);
    void test_data();

};

Tests_Triangle::Tests_Triangle()
{

}

Tests_Triangle::~Tests_Triangle()
{

}
void Tests_Triangle::test_data()
{
    double  answer = 12.837;
    double par[6] = {3,5,6,7,8,9};
    test_triangle_perimetr(answer, par);

    answer = 19.908;
    par[0] = 7;
    par[1] = 9;
    par[2] = 3;
    par[3] = 4;
    par[4] = 10;
    par[5] = 11;
    test_triangle_perimetr(answer, par);
}
void Tests_Triangle::test_triangle_perimetr(double answer, double* par)
{

    triangle tri(par);
    QVERIFY(answer == tri.perimetr()/1000);
}

QTEST_APPLESS_MAIN(Tests_Triangle)

#include "tst_tests_triangle.moc"

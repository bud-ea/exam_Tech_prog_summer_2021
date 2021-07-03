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
    void test_triangle_perimetr(double answer, int* par);
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
    int par[6] = {3,5,6,7,8,9};
    test_triangle_perimetr(answer, par);

    answer = 14;
    par[0] = 7;
    par[1] = 9;
    par[2] = 3;
    par[3] = 4;
    par[4] = 10;
    par[5] = 11;
    test_triangle_perimetr(answer, par);
}
void Tests_Triangle::test_triangle_perimetr(double answer, int* par)
{

    triangle tri;
    QVERIFY(answer == tri.perimetr(par[0], par[1], par[2], par[3], par[4], par[5])/1000);
}

QTEST_APPLESS_MAIN(Tests_Triangle)

#include "tst_tests_triangle.moc"

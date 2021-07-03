#include <QtTest>
#include "D:\Code\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.h"
// add necessary includes here

class TriangleAreaTest : public QObject
{
    Q_OBJECT

public:
    TriangleAreaTest();
    ~TriangleAreaTest();

private slots:
    void test_triangle_area_2_minus3_1_1_minus6_5_return12();
    void test_triangle_area_0_0_0_0_0_0_return0();
    void test_triangle_area_0_0_0_5_5_0_return12point5();
};

TriangleAreaTest::TriangleAreaTest()
{

}

TriangleAreaTest::~TriangleAreaTest()
{

}

void TriangleAreaTest::test_triangle_area_2_minus3_1_1_minus6_5_return12()
{
    //add
    double a[] = {2, -3, 1, 1, -6, 5};
    triangle tr(a);

    //assert
    QVERIFY(tr.area()==12);
}

void TriangleAreaTest::test_triangle_area_0_0_0_0_0_0_return0()
{
    //add
    double a[] = {0, 0, 0, 0, 0, 0};
    triangle tr(a);

    //assert
    QVERIFY(tr.area()==0);
}

void TriangleAreaTest::test_triangle_area_0_0_0_5_5_0_return12point5()
{
    //add
    double a[] = {0, 0, 0, 5, 5, 0};
    triangle tr(a);

    //assert
    QVERIFY(tr.area()==12.5);
}


QTEST_APPLESS_MAIN(TriangleAreaTest)

#include "tst_triangleareatest.moc"

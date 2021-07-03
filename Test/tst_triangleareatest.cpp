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
//    void test_triangle_area_data();
//    void test_triangle_area();
    void test_triangle_area_0_0_0_5_5_0_return12dot5();
    void test_triangle_area_2_minus3_1_1_minus6_5_return12();
    void test_triangle_area_0_0_0_0_0_0_return0();
};

TriangleAreaTest::TriangleAreaTest()
{

}

TriangleAreaTest::~TriangleAreaTest()
{

}

void TriangleAreaTest::test_triangle_area_0_0_0_5_5_0_return12dot5()
{
    //add
    double a[] = {0, 0, 0, 5, 5, 0};
    triangle tr(a);

    //assert
    QVERIFY2(tr.area() == 12.5, "0, 0, 0, 5, 5, 0 failed");
}

void TriangleAreaTest::test_triangle_area_2_minus3_1_1_minus6_5_return12()
{
    //add
    double a[] = {2, -3, 1, 1, -6, 5};
    triangle tr(a);

    //assert
    QVERIFY2(tr.area(), "2, -3, 1, 1, -6, 5 failed");
}

void TriangleAreaTest::test_triangle_area_0_0_0_0_0_0_return0()
{
    //add
    double a[] = {0, 0, 0, 0, 0, 0};
    triangle tr(a);

    //assert
    QVERIFY2(tr.area() == 0, "0, 0, 0, 0, 0, 0 failed");
}


//void TriangleAreaTest::test_triangle_area_data()
//{
//    QTest::addColumn<triangle(double[6])>("ver");
//    QTest::addColumn<double>("result");

//    QTest::newRow("0, 0, 0, 5, 5, 0") << triangle(double [6] = {0, 0, 0, 5, 5, 0}) << 12.5;
//    QTest::newRow("2, -3, 1, 1, -6, 5") << "Hello" << 12;

//}

//void TriangleAreaTest::test_triangle_area()
//{
//    QFETCH(QString, ver);
//    QFETCH(QString, result);

//    QCOMPARE(ver, result);
//}

QTEST_APPLESS_MAIN(TriangleAreaTest)

#include "tst_triangleareatest.moc"

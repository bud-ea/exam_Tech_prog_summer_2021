#include <QtTest>
#include <iostream>
#include "../Exam_proj_QtLess/circle.h"
#include "../Exam_proj_QtLess/square.h"
#include "../Exam_proj_QtLess/triangle.h"

using namespace std;

class SquareUnitTest : public QObject
{
    Q_OBJECT

public:
    SquareUnitTest();
    ~SquareUnitTest();

private slots:
    void test_case1();

};

SquareUnitTest::SquareUnitTest()
{

}

SquareUnitTest::~SquareUnitTest()
{

}

void SquareUnitTest::test_case1()
{
    square q;
    double array1[8] = {0, 3, 3, 0, 0, -3, -3, 0};
    QVERIFY2(q.square_of_square(array1), "Number of coordinates is wrong");
    QCOMPARE(q.square_of_square(array1), 18);

    double array2[8] = {-3, 3, 3, 3, 3, -3, -3, -3};
    QVERIFY2(q.square_of_square(array2), "Number of coordinates is wrong");
    QCOMPARE(q.square_of_square(array2), 36);

    double array3[7] = {1, 2, 3, 4, 5, 6, 7};
    QVERIFY2(q.square_of_square(array3), "Number of coordinates is wrong");
    QCOMPARE(q.square_of_square(array3), 20);
}

QTEST_APPLESS_MAIN(SquareUnitTest)

#include "tst_squareunittest.moc"

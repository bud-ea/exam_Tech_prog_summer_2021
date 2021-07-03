#include <QtTest>
#include "../Exam_proj_QtLess/circle.h"
#include "../Exam_proj_QtLess/square.h"
#include "../Exam_proj_QtLess/triangle.h"

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

}

QTEST_APPLESS_MAIN(SquareUnitTest)

#include "tst_squareunittest.moc"

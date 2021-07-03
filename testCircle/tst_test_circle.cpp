#include <QtTest>
#include "C:\Users\vlad1\OneDrive\Desktop\Summer_Exam\exam_Tech_prog_summer_2021\Exam_proj_QtLess\circle.h"
// add necessary includes here

class test_circle : public QObject
{
    Q_OBJECT

public:
    test_circle();
    ~test_circle();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
};

test_circle::test_circle()
{

}

test_circle::~test_circle()
{

}

void test_circle::test_case1()
{
    circle a(0, 0, 5);
    QVERIFY2(a.circleArea() == 78.5, "WRONG!");
}

void test_circle::test_case2()
{
    circle a(5, 5, 10);
    QVERIFY2(a.circleArea() == 314, "WRONG!");
}
void test_circle::test_case3()
{
    circle a(49, 48, 100);
    QVERIFY2(a.circleArea() == 31400, "WRONG!");
}
QTEST_APPLESS_MAIN(test_circle)

#include "tst_test_circle.moc"

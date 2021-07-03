#include <QtTest>
#include "C:\Users\dns\Documents\GitHub\exam_Tech_prog_summer_2021\Exam_proj_QtLess\circle.cpp"
#include "C:\Users\dns\Documents\GitHub\exam_Tech_prog_summer_2021\Exam_proj_QtLess\circle.h"
// add necessary includes here

class p_Check : public QObject
{
    Q_OBJECT

public:
    p_Check();
    ~p_Check();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

p_Check::p_Check()
{

}

p_Check::~p_Check()
{

}

void p_Check::test_case1()
{
    circle a(0, 0, 5);
        QVERIFY2(a.circleArea() == 78.5, "WRONG!");
}

void p_Check::test_case2()
{
    circle a(5, 5, 10);
    QVERIFY2(a.circleArea() == 314, "WRONG!");
}

void p_Check::test_case3()
{
    circle a(49, 48, 100);
    QVERIFY2(a.circleArea() == 31400, "WRONG!");
}

QTEST_APPLESS_MAIN(p_Check)

#include "tst_p_check.moc"

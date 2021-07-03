#include <QtTest>
#include "../Exam_proj_QtLess/circle.cpp"

// add necessary includes here

class circle_test : public QObject
{
    Q_OBJECT

public:
    circle_test();
    ~circle_test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

circle_test::circle_test()
{

}

circle_test::~circle_test()
{

}

void circle_test::test_case1()
{
    circle c1 = circle(1, 5, 16);
    QVERIFY(c1.circumference() == 100.48);
}
void circle_test::test_case2()
{
    circle c1 = circle(5, 10, 14);
    QVERIFY(c1.circumference() == 87.92);
}
void circle_test::test_case3()
{
    circle c1 = circle(-8, 59, 228);
    QVERIFY(c1.circumference() == 15.96);
}

QTEST_APPLESS_MAIN(circle_test)

#include "tst_circle_test.moc"

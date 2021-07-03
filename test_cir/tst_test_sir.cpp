#include <QtTest>
#include "circle.cpp"

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
    circle c1 = circle(3, 8, 13);
    QVERIFY(c1.areaofacircle() == 530.66);
}
void circle_test::test_case2()
{
    circle c1 = circle(3, 5, 28);
    QVERIFY(c1.areaofacircle() == 2461.76 );
}
void circle_test::test_case3()
{
    circle c1 = circle(7, 69, 666);
    if (c1.areaofacircle() != 0){
        QFAIL("special error");
    }
}

QTEST_APPLESS_MAIN(circle_test)

#include "tst_test_sir.moc"

#include <QtTest>
#include <triangle.h>

// add necessary includes here

class my_tests : public QObject
{
    Q_OBJECT

public:
    my_tests();
    ~my_tests();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

my_tests::my_tests()
{

}

my_tests::~my_tests()
{

}

void my_tests::test_case1()
{
    double t[6]={0,0,0,4,3,0};
    triangle n = triangle(t);
    QVERIFY2(n.Perimeter()==12,"incorrect");
}
void my_tests::test_case2()
{
    double t[6]={1,2,3,4,5,6};
    triangle n = triangle(t);
QVERIFY2(n.Perimeter()==5,"incorrect");
}
void my_tests::test_case3()
{
    double t[6]={1,2,3,4,5,6};
    triangle n = triangle(t);
    QVERIFY2(n.Perimeter()==43,"incorrect");
}
QTEST_APPLESS_MAIN(my_tests)

#include "tst_my_tests.moc"
